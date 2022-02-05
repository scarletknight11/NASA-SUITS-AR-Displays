using Microsoft.Azure.RemoteRendering;
using Microsoft.Azure.RemoteRendering.Unity;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

namespace Microsoft.Azure.RemoteRendering.Unity
{

    /// <summary>
    /// ARRServiceUnity is a utility class for simple session management use cases in Unity. 
    ///
    /// ARRServiceUnity has a concept of the current active session. There can only be a single active session at a time. The session
    /// can be auto-renewed when it's close to the end of its lifecycle and auto-stopped when the application shuts down/the MonoBehavior has been closed.
    /// </summary>
    [AddComponentMenu("ARR/Service")]
    public class ARRServiceUnity : MonoBehaviour
    {
        static private void PolledWait(Task task, int timeoutInMs = 3000)
        {
            if (task == null)
            {
                return;
            }

            int elapsedTime = 0;
            while (true)
            {
                if (task.IsCompleted || task.IsFaulted)
                {
                    break;
                }

                if (elapsedTime > timeoutInMs)
                {
                    throw new Exception("PolledWait failed.");
                }

                // Assume latency of ~16ms
                task.Wait(16);

                elapsedTime += 16;
            }
        }


        // Queue of actions for the update thread
        private Queue<Action> _dispatchQueue = new Queue<Action>();

        private bool _destroyed = false;

        private DateTime _refreshSessionStatusTime = DateTime.MinValue;

        private DateTime _retryRenewTime = DateTime.MinValue;

        private bool _forcePropertyUpdate = false;

        private DateTime _startTime = DateTime.MinValue;

        private RenderingSessionStatus _previousStatus = RenderingSessionStatus.Unknown;

        /// <summary>
        /// Point in time at which the remote rendering session expires.
        /// </summary>
        public DateTime ExpirationTime { get; private set; }

        public RenderingSessionProperties LastProperties { get; private set; }

        /// <summary>
        /// Current active session for this service.
        /// </summary>
        public RenderingSession CurrentActiveSession
        {
            get
            {
                return _currentActiveSession;
            }
            private set
            {
                _currentActiveSession = value;
                RemoteManagerUnity.CurrentSession = value;
            }
        }

        private RenderingSession _currentActiveSession = null;

        /// <summary>
        ///  Task source for user calls to Open/Start session, returning the properties when the session status is something other than starting
        /// </summary>
        private TaskCompletionSource<RenderingSessionProperties> _sessionResolvedTask = null;

        /// <summary>
        ///  Task source for user calls to stop session, this call will finish when it is safe to open/start a new session on the ARRServiceUnity.
        /// </summary>
        private TaskCompletionSource<RenderingSessionProperties> _sessionStoppedTask = null;

        /// <summary>
        /// Current task for querying the session properties. Null if no task is running.
        /// </summary>
        private Task<RenderingSessionPropertiesResult> PropertiesTask { get; set; } = null;


        /// <summary>
        /// Current task for creating a new session in Azure. Null if no task is running.
        /// </summary>
        public Task<CreateRenderingSessionResult> CurrentSessionTask { get; private set; } = null;

        /// <summary>
        /// Current task for getting the arrInspector webpage. Null if no task is running.
        /// </summary>
        public Task<string> CurrentArrInspectorTask { get; private set; } = null;

        /// <summary>
        /// Current task for stopping the session in Azure. Null if no task is running.
        /// </summary>
        public Task<SessionContextResult> StopTask { get; private set; } = null;


        /// <summary>
        /// Current task for renewing the session in Azure. Null if no task is running.
        /// </summary>
        public Task<SessionContextResult> RenewTask { get; private set; } = null;

        /// <summary>
        /// The client instance associated with this service. Clients are used for authentication and must be created through Initialize(accountInfo).
        /// </summary>
        public RemoteRenderingClient Client { get; private set; } = null;

        static private class RenewConstants
        {
            public const int MIN_THRESHOLD_MINUTES = 5;
            public const int MIN_AMOUNT_MINUTES = 10;
        }

        [Tooltip("Automatically renew the VM lease when the session is close to expiring.")]
        public bool AutoRenewLease = true;

        [Tooltip("How many minutes before expiration the session should be renewed.")]
        [SerializeField]
        [Min(RenewConstants.MIN_THRESHOLD_MINUTES)]
        private int _autoRenewLeaseThresholdMinutes = RenewConstants.MIN_THRESHOLD_MINUTES;
        public int AutoRenewLeaseThresholdMinutes
        {
            get => _autoRenewLeaseThresholdMinutes;
            set
            {
                _autoRenewLeaseThresholdMinutes = Math.Max(RenewConstants.MIN_THRESHOLD_MINUTES, value);
            }
        }

        [Tooltip("For how many additional minutes the session should be extended on renewal.")]
        [SerializeField]
        [Min(RenewConstants.MIN_AMOUNT_MINUTES)]
        private int _autoRenewLeaseAmountMinutes = 15;
        public int AutoRenewLeaseAmountMinutes
        {
            get => _autoRenewLeaseAmountMinutes;
            set
            {
                _autoRenewLeaseAmountMinutes = Math.Max(RenewConstants.MIN_AMOUNT_MINUTES, value);
            }
        }

        [Tooltip("Automatically stop the session when ARRServiceUnity is being town down.")]
        public bool AutoStopSession = true;

        private int RefreshSessionTimeInSeconds = 20;

        public delegate void SessionEvent(ARRServiceUnity caller, RenderingSession session);

        public delegate void SessionError(ARRServiceUnity caller, SessionGeneralContext context);

        /// <summary>
        /// Event for when a session status change has been detected.
        /// </summary>
        public event SessionEvent OnSessionStatusChanged;

        /// <summary>
        /// Event for when an operation encounters an error.
        /// </summary>
        public event SessionError OnSessionErrorEncountered;

        protected void Awake()
        {
            _destroyed = false;

            InitializeEditor();
            ResetData();

            Application.quitting += Application_quitting;
            RemoteManagerStatic.OnShutdown += Application_quitting;
        }

        /// <summary>
        /// Create a new active session running in Azure. This operation is asynchronous.
        /// Listen to OnSessionStarted to get the session when it is available.
        ///
        /// If a session is already starting new session is not created.
        ///
        /// If there is already a session running, the current session will be disposed of.
        /// </summary>
        public Task<RenderingSessionProperties> StartSession(RenderingSessionCreationOptions profile)
        {
            if (_destroyed)
            {
                throw new RRException(Result.ApiUnavailable, "Trying to start a session on destroyed service.");
            }

            if (CurrentSessionTask != null && !CurrentSessionTask.IsCompleted)
            {
                throw new RRException(Result.AlreadyExists, "Trying to start a session while previous session creation has not yet finished.");
            }

            if (CurrentActiveSession != null)
            {
                // Unknown should be handled by the current session task. This is essentially saying that we're stopped, expired, or in error.
                if (LastProperties.Status == RenderingSessionStatus.Ready || LastProperties.Status == RenderingSessionStatus.Starting)
                {
                    throw new RRException(Result.AlreadyExists, "Trying to start a session while a session already exists is not supported in ARRUnityService.");
                }

                CurrentActiveSession = null;
            }

            if (_sessionResolvedTask != null)
            {
                throw new RRException(Result.AlreadyExists, "Trying to start a session while a waiting for the current session to resolve to a Ready/Stopped/Expired status is not supported in ARRUnityService.");
            }

            ResetData();

            _sessionResolvedTask = new TaskCompletionSource<RenderingSessionProperties>();

            CurrentSessionTask = Client.CreateNewRenderingSessionAsync(profile);
            CurrentSessionTask.ContinueWith(sessionTask =>
            {
                if (sessionTask.IsCompleted)
                {
                    var ctx = sessionTask.Result.Context;
                    if (ctx.Result == Result.Success)
                    {
                        UpdateAndInvoke(sessionTask.Result.Session);
                    }
                    else
                    {
                        InvokeOnAppThreadAsync(() =>
                        {
                            string errorMsg = ctx.ErrorMessage;
                            string errorCode = ctx.Result.ToString();
                            Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Could not create session. Error: {errorCode}; Message: {errorMsg}");

                            CurrentActiveSession = null;

                            OnSessionErrorEncountered?.Invoke(this, ctx);

                            _sessionResolvedTask.TrySetException(new RRSessionException(ctx));

                            _sessionResolvedTask = null;
                        });
                    }
                }
            });

            return _sessionResolvedTask.Task;
        }

        /// <summary>
        /// Set the current active session to point to an already existing session on Azure. This will
        /// fail if the system is currently trying to create a new session.
        ///
        /// This operation is asynchronous. Listen to OnSessionStarted to get the session when it is available.
        /// </summary>
        public Task<RenderingSessionProperties> OpenSession(string id)
        {
            if (_destroyed)
            {
                throw new RRException(Result.ApiUnavailable, "Trying to open a session on destroyed service.");
            }

            if (CurrentSessionTask != null && !CurrentSessionTask.IsCompleted)
            {
                throw new RRException(Result.AlreadyExists, "Trying to open a session while previous session creation has not yet finished.");
            }

            if (CurrentActiveSession != null)
            {
                // Unknown should be handled by the current session task. This is essentially saying that we're stopped, expired, or in error.
                if (LastProperties.Status == RenderingSessionStatus.Ready || LastProperties.Status == RenderingSessionStatus.Starting)
                {
                    throw new RRException(Result.AlreadyExists, "Trying to open a session while a session already exists is not supported in ARRUnityService.");
                }

                CurrentActiveSession = null;
            }

            if (_sessionResolvedTask != null)
            {
                throw new RRException(Result.AlreadyExists, "Trying to open a session while a waiting for the current session to resolve to a Ready/Stopped/Expired status is not supported in ARRUnityService.");
            }

            ResetData();

            _sessionResolvedTask = new TaskCompletionSource<RenderingSessionProperties>();

            CurrentSessionTask = Client.OpenRenderingSessionAsync(id);
            CurrentSessionTask.ContinueWith(sessionTask =>
           {
               if (sessionTask.IsCompleted)
               {
                   var ctx = sessionTask.Result.Context;
                   if (ctx.Result == Result.Success)
                   {
                       UpdateAndInvoke(sessionTask.Result.Session);
                   }
                   else
                   {

                       InvokeOnAppThreadAsync(() =>
                       {
                           string errorMsg = ctx.ErrorMessage;
                           string errorCode = ctx.Result.ToString();
                           Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Could not open session. Error: {errorCode}; Message: {errorMsg}");

                           CurrentActiveSession = null;

                           OnSessionErrorEncountered?.Invoke(this, ctx);

                           _sessionResolvedTask.TrySetException(new RRSessionException(ctx));

                           _sessionResolvedTask = null;
                       });
                   }
               }
           });

            return _sessionResolvedTask.Task;
        }

        /// <summary>
        /// Open the arrInspector website. The arrInspector is used for runtime introspection.
        /// </sumamry>
        public void OpenArrInspector()
        {
            if (CurrentActiveSession == null)
            {
                return;
            }

            if (CurrentArrInspectorTask != null)
            {
                return;
            }

            CurrentArrInspectorTask = CurrentActiveSession.ConnectToArrInspectorAsync();
            CurrentArrInspectorTask.ContinueWith(inspectorTask =>
            {
                InvokeOnAppThreadAsync(() =>
                {
                    if (inspectorTask.IsCompleted)
                    {
                        string url = inspectorTask.Result;
                        Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", $"Trying to open ARRInspector at: {url}");
#if WINDOWS_UWP
                                UnityEngine.WSA.Application.InvokeOnUIThread(async () =>
                                {
                                    var file = await global::Windows.Storage.StorageFile.GetFileFromPathAsync(url);
                                    await global::Windows.System.Launcher.LaunchFileAsync(file);
                                }, true);
#elif UNITY_EDITOR
                        UnityEngine.Application.OpenURL("file:///" + url);
#else
                    System.Diagnostics.Process.Start("file:///" + url);
#endif
                    }
                    else
                    {
                        Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Failed to open ARRInspector. Message: {inspectorTask.Status.ToString()}");
                    }

                    CurrentArrInspectorTask = null;
                });
            });
        }

        /// <summary>
        /// Detach service from current session without stopping it.
        /// This operation is asynchronous. Listen to OnSessionEnded to get notified when the session is detached.
        /// </summary>
        public void ForgetSession()
        {
            StopSessionInternal(false);
        }

        /// <summary>
        /// Stop current session.
        /// This operation is asynchronous. Listen to OnSessionEnded to get notified when the session is stopped.
        /// </summary>
        public Task<RenderingSessionProperties> StopSession()
        {
            return StopSessionInternal(true);
        }

        private Task<RenderingSessionProperties> StopSessionInternal(bool stop)
        {
            if (_destroyed)
            {
                throw new RRException(Result.ApiUnavailable, "Trying to stop a session on destroyed service.");
            }

            if (StopTask != null || _sessionStoppedTask != null)
            {
                throw new RRException(Result.AlreadyExists, "Trying to stop a session while previous stop call has not yet finished.");
            }

            if (stop)
            {
                StopTask = CurrentActiveSession?.StopAsync();

                if (StopTask != null)
                {
                    _sessionStoppedTask = new TaskCompletionSource<RenderingSessionProperties>();

                    StopTask.ContinueWith(stopTask =>
                    {
                        InvokeOnAppThreadAsync(() =>
                        {
                            _forcePropertyUpdate = true;
                            StopTask = null;
                        });
                    });

                    return _sessionStoppedTask.Task;
                }
            }
            else
            {
                ResetData();
                CurrentActiveSession = null;
            }

            return null;
        }

        protected void OnDestroy()
        {
            Destroy();
        }

        protected void Update()
        {
            if (CurrentActiveSession != null)
            {
                // Refresh status as needed
                if (_forcePropertyUpdate || _refreshSessionStatusTime < DateTime.UtcNow && PropertiesTask == null)
                {
                    _forcePropertyUpdate = false;
                    _refreshSessionStatusTime = DateTime.UtcNow + TimeSpan.FromSeconds(RefreshSessionTimeInSeconds);
                    PropertiesTask = CurrentActiveSession.GetPropertiesAsync();
                    var asyncId = CurrentActiveSession.SessionUuid;
                    PropertiesTask.ContinueWith(propertiesTask =>
                    {
                        InvokeOnAppThreadAsync(() =>
                        {
                            if (propertiesTask.IsCompleted)
                            {
                                var ctx = propertiesTask.Result.Context;
                                if (ctx.Result == Result.Success)
                                {
                                    RefreshSessionTimeInSeconds = propertiesTask.Result.MinimumRetryDelay;

                                    if (CurrentActiveSession != null && CurrentActiveSession.SessionUuid == asyncId)
                                    {
                                        UpdateProperties(propertiesTask.Result.SessionProperties);
                                    }
                                }
                                else
                                {
                                    RefreshSessionTimeInSeconds = 20;

                                    string errorMsg = ctx.ErrorMessage;
                                    string errorCode = ctx.Result.ToString();
                                    Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Could not get session properties. Error: {errorCode}; Message: {errorMsg}");
                                    OnSessionErrorEncountered?.Invoke(this, ctx);
                                }
                            }
                            PropertiesTask = null;
                        });
                    });
                }

                // Extend session as needed
                if (AutoRenewLease && LastProperties.Status == RenderingSessionStatus.Ready &&
                    ExpirationTime < DateTime.UtcNow + TimeSpan.FromMinutes(AutoRenewLeaseThresholdMinutes) &&
                    _retryRenewTime <= DateTime.UtcNow &&
                    RenewTask == null)
                {
                    _retryRenewTime = DateTime.UtcNow + TimeSpan.FromMinutes(1);

                    int newMinutes = LastProperties.MaxLeaseInMinutes + AutoRenewLeaseAmountMinutes;

                    RenewTask = CurrentActiveSession.RenewAsync(new RenderingSessionUpdateOptions(0, newMinutes));
                    RenewTask.ContinueWith(renewTask =>
                    {
                        InvokeOnAppThreadAsync(() =>
                        {
                            if (renewTask.IsCompleted)
                            {
                                var ctx = renewTask.Result.Context;
                                if (ctx.Result == Result.Success)
                                {

                                }
                                else
                                {
                                    OnSessionErrorEncountered?.Invoke(this, ctx);

                                    string errorMsg = ctx.ErrorMessage;
                                    string errorCode = ctx.Result.ToString();
                                    Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Could not renew session. Error: {errorCode}; Message: {errorMsg}");
                                }
                            }
                            RenewTask = null;
                            _forcePropertyUpdate = true;
                        });
                    });
                }

            }

            lock (_dispatchQueue)
            {
                while (_dispatchQueue.Count > 0)
                {
                    _dispatchQueue.Dequeue()();
                }
            }

        }

        private void Destroy()
        {
            if (_destroyed)
            {
                return;
            }

            _destroyed = true;
            DestroyEditor();
            Application.quitting -= Application_quitting;
            RemoteManagerStatic.OnShutdown -= Application_quitting;

            if (AutoStopSession && CurrentActiveSession != null)
            {
                Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", $"Auto-stopping session: {CurrentActiveSession.SessionUuid}");
                PolledWait(CurrentActiveSession.StopAsync());
            }

            PolledWait(CurrentSessionTask);
            PolledWait(CurrentArrInspectorTask);
            PolledWait(RenewTask);
            PolledWait(StopTask);
            PolledWait(PropertiesTask);

            lock (_dispatchQueue)
            {
                _dispatchQueue.Clear();
            }

            if (_sessionResolvedTask != null)
            {
                _sessionResolvedTask.TrySetException(new RRException(Result.ApiUnavailable, "Shutting down system"));
            }

            if (_sessionStoppedTask != null)
            {
                _sessionStoppedTask.TrySetException(new RRException(Result.ApiUnavailable, "Shutting down system"));
            }

            _sessionStoppedTask = null;
            _sessionResolvedTask = null;
            PropertiesTask = null;
            CurrentActiveSession = null;
            Client = null;
            StopTask = null;
            CurrentSessionTask = null;
        }

        private void InitializeEditor()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.update += OnEditorUpdate;
            UnityEditor.EditorApplication.playModeStateChanged += EditorApplication_playModeStateChanged;
            UnityEditor.EditorApplication.projectChanged += EditorApplication_projectChanged;
            UnityEditor.EditorApplication.quitting += EditorApplication_quitting;
            UnityEditor.SceneManagement.EditorSceneManager.sceneOpened += EditorSceneManager_sceneOpened;
            UnityEditor.Compilation.CompilationPipeline.compilationStarted += CompilationPipeline_compilationStarted;
#endif
        }

        private void DestroyEditor()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.update -= OnEditorUpdate;
            UnityEditor.EditorApplication.playModeStateChanged -= EditorApplication_playModeStateChanged;
            UnityEditor.EditorApplication.quitting -= EditorApplication_quitting;
            UnityEditor.EditorApplication.projectChanged -= EditorApplication_projectChanged;
            UnityEditor.SceneManagement.EditorSceneManager.sceneOpened -= EditorSceneManager_sceneOpened;
            UnityEditor.Compilation.CompilationPipeline.compilationStarted -= CompilationPipeline_compilationStarted;
#endif
        }

#if UNITY_EDITOR
        private void EditorApplication_quitting()
        {
            if (!Application.isPlaying)
            {
                Destroy();
            }
        }

        private void CompilationPipeline_compilationStarted(object obj)
        {
            if (!Application.isPlaying)
            {
                Destroy();
            }
        }

        private void EditorApplication_projectChanged()
        {
            if (!Application.isPlaying)
            {
                Destroy();
            }
        }

        private void EditorSceneManager_sceneOpened(UnityEngine.SceneManagement.Scene scene, UnityEditor.SceneManagement.OpenSceneMode mode)
        {
            if (!Application.isPlaying)
            {
                Destroy();
            }
        }

        private void EditorApplication_playModeStateChanged(UnityEditor.PlayModeStateChange obj)
        {
            if (obj == UnityEditor.PlayModeStateChange.ExitingEditMode ||
                obj == UnityEditor.PlayModeStateChange.ExitingPlayMode)
            {
                Destroy();
            }
        }

        private void OnEditorUpdate()
        {
            if (UnityEditor.EditorApplication.isCompiling && UnityEditor.EditorApplication.isPlaying)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Destroying current session and frontend.");
                Destroy();
            }
        }
#endif

        private void Application_quitting()
        {
            Destroy();
        }

        public void Initialize(SessionConfiguration sessionConfiguration)
        {
            if (_destroyed)
            {
                return;
            }

            if (!sessionConfiguration.HasRequiredInfo())
            {
                var msg = "SessionConfiguration does not have required fields set:";
                if (string.IsNullOrEmpty(sessionConfiguration.AccountId)) { msg += "\nAccountId needs to be set."; }
                if (string.IsNullOrEmpty(sessionConfiguration.RemoteRenderingDomain)) { msg += "\nRemoteRenderingDomain needs to be set."; }
                if (string.IsNullOrEmpty(sessionConfiguration.AccountDomain)) { msg += "\nAccountDomain needs to be set."; }
                var authenticationCount = 0;
                if (!string.IsNullOrEmpty(sessionConfiguration.AccountKey)) { authenticationCount++; }
                if (!string.IsNullOrEmpty(sessionConfiguration.AccessToken)) { authenticationCount++; }
                if (!string.IsNullOrEmpty(sessionConfiguration.AuthenticationToken)) { authenticationCount++; }
                if (authenticationCount != 1) { msg += "\nExactly one of AccountKey, AccessToken or AuthenticationToken needs to be set."; }
                throw new ArgumentException(msg);
            }

            Client = new RemoteRenderingClient(sessionConfiguration);
        }


        private void ResetData()
        {
            LastProperties = new RenderingSessionProperties();
            _previousStatus = RenderingSessionStatus.Unknown;
            _refreshSessionStatusTime = DateTime.MinValue;
            _retryRenewTime = DateTime.MinValue;
            _startTime = DateTime.MinValue;
            ExpirationTime = DateTime.MinValue;
        }

        private void UpdateAndInvoke(RenderingSession session)
        {
            if (session == null)
            {
                Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", "Null session passed to ARRServiceUnity.");
                return;
            }

            PropertiesTask = session.GetPropertiesAsync();
            PropertiesTask.ContinueWith(propertiesTask =>
            {
                InvokeOnAppThreadAsync(() =>
                {
                    if (propertiesTask.IsCompleted)
                    {
                        var ctx = propertiesTask.Result.Context;
                        if (ctx.Result == Result.Success)
                        {
                            CurrentActiveSession = session;

                            CurrentSessionTask = null;
                            PropertiesTask = null;
                            UpdateProperties(propertiesTask.Result.SessionProperties);
                        }
                        else
                        {
                            string errorMsg = ctx.ErrorMessage;
                            string errorCode = ctx.Result.ToString();
                            Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Could not create session. Error: {errorCode}; Message: {errorMsg}");

                            CurrentActiveSession = null;

                            OnSessionErrorEncountered?.Invoke(this, ctx);

                            var tempSessionResolvedTask = _sessionResolvedTask;
                            CurrentSessionTask = null;
                            PropertiesTask = null;
                            _sessionResolvedTask = null;
                            tempSessionResolvedTask.TrySetException(new RRSessionException(ctx));
                        }
                    }
                });
            });
        }

        /// <summary>
        /// Schedule work that must be done on the update thread.
        /// We accomplish this by filling a queue on background threads and processing the
        /// queue when update function is called.
        /// </summary>
        /// <param name="item"></param>
        private void InvokeOnAppThreadAsync(Action item)
        {
            lock (_dispatchQueue)
            {
                _dispatchQueue.Enqueue(item);
            }
        }

        private void UpdateProperties(RenderingSessionProperties properties)
        {
            LastProperties = properties;

            if (LastProperties.Status != _previousStatus)
            {
                _previousStatus = LastProperties.Status;
                OnSessionStatusChanged?.Invoke(this, CurrentActiveSession);

                if (LastProperties.Status == RenderingSessionStatus.Ready)
                {
                    _startTime = DateTime.UtcNow - TimeSpan.FromMinutes(LastProperties.ElapsedTimeInMinutes);
                }

                if (LastProperties.Status != RenderingSessionStatus.Starting && LastProperties.Status != RenderingSessionStatus.Unknown)
                {
                    var tempSessionResolvedTask = _sessionResolvedTask;
                    _sessionResolvedTask = null;
                    tempSessionResolvedTask?.TrySetResult(properties);
                }

                if (LastProperties.Status == RenderingSessionStatus.Stopped)
                {
                    var tempSessionStoppedTask = _sessionStoppedTask;
                    _sessionStoppedTask = null;
                    tempSessionStoppedTask?.TrySetResult(LastProperties);
                }
            }

            if (LastProperties.Status == RenderingSessionStatus.Ready)
            {
                ExpirationTime = _startTime + new TimeSpan(LastProperties.MaxLeaseInMinutes / 60, LastProperties.MaxLeaseInMinutes % 60, 0);
            }
        }
    }
}
