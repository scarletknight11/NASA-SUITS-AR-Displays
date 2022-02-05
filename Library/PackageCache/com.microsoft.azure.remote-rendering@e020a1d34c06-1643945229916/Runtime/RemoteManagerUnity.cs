//#define USE_PROXY_CAMERA

using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR;

#if XR_MANAGEMENT_PLUGIN_AVAILABLE
using UnityEngine.XR.Management;
#endif

#if MR_OPENXR_PLUGIN_AVAILABLE
using UnityEngine.XR.OpenXR;
#endif

#if URP_AVAILABLE
using UnityEngine.Rendering.Universal;
#endif

using ObjectId = System.UInt32;

namespace Microsoft.Azure.RemoteRendering.Unity
{
#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_1_OR_NEWER
    public class AppSpaceAccessor : UnityEngine.XR.OpenXR.Features.OpenXRFeature
    {
        public static ulong GetCurrentAppSpaceHandle()
        {
            return GetCurrentAppSpace();
        }
    }
#endif

    /// \cond INTERNAL
    public class RRInterface2
    {
        // Workaround for MSFT:24019581
#if ENABLE_IL2CPP
        [DllImport("Microsoft.Holographic.HybridRemoting.dll", CallingConvention = CallingConvention.Cdecl)]
#else
        [DllImport("Microsoft.Holographic.HybridRemoting", CallingConvention = CallingConvention.Cdecl)]
#endif
        public static extern IntPtr GetUnityRenderingEventCallback();
    }
    /// \endcond

    public struct RemoteUnityClientInit
    {
        public Camera mainCamera;
        public GraphicsApiType graphicsApi;

        public RemoteUnityClientInit(Camera _mainCamera)
        {
            mainCamera = _mainCamera;
            graphicsApi = GetDefaultGraphicsApi();
        }

        public static GraphicsApiType GetDefaultGraphicsApi()
        {
            if (Application.isEditor)
            {
                return GraphicsApiType.SimD3D11;
            }
            else
            {
#if UNITY_WSA
#if XR_MANAGEMENT_PLUGIN_AVAILABLE
                var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
                SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
                bool isHoloLens = xrDisplaySubsystems.Any(xrDisplay => !xrDisplay.displayOpaque);

                if (isHoloLens)
                {
                    var xrLoader = XRGeneralSettings.Instance?.Manager?.activeLoader;
// OpenXR check is only required for UNITY_2020_2_OR_NEWER because the plugin has been introduced in version 2020.2
#if MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
                    bool openXrActive = xrLoader is UnityEngine.XR.OpenXR.OpenXRLoaderBase;
                    if (openXrActive)
                    {
                        return GraphicsApiType.OpenXrD3D11;
                    }
#endif

#if XR_PLUGIN_AVAILABLE
#if UNITY_2020_1_OR_NEWER
                    bool wmrActive = xrLoader is UnityEngine.XR.WindowsMR.WindowsMRLoader;
#else
                    // on earlier versions UnityEngine.XR.WindowsMR.WindowsMRLoader is internal so we need to check the type by name
                    bool wmrActive = xrLoader?.GetType().FullName == "UnityEngine.XR.WindowsMR.WindowsMRLoader";
#endif
                    if (wmrActive)
                    {
                        return GraphicsApiType.WmrD3D11;
                    }
#endif
                }
#elif !UNITY_2020_1_OR_NEWER
                bool isHoloLens = !UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque;
                if (isHoloLens)
                {
                    return GraphicsApiType.WmrD3D11;
                }
#endif
#endif
                return GraphicsApiType.SimD3D11;
            }
        }
    }

    /// <summary>
    /// Microsoft.Azure.RemoteRendering entry point for a Unity application. 
    /// <para>
    /// The RemoteManager instance for Unity applications must be created through RemoteManagerUnity.InitializeManager. Once initialized, all other RemoteRendering functionality
    /// can be directly accessed through Microsoft.Azure.RemoteRendering.RemoteManager excluding GameObject manipulation.
    ///
    /// Game objects are lazily created based on access for Unity through either RemoteEntitySyncObject.CreateGameObject or through adding a RemoteEntitySyncObject component directly.
    /// Remotely rendered models tend to be large and complex and each GameObject instantiated has an affect on overall application performance.
    /// It's advisable to only create Unity GameObjects for the entities the application needs and only during the duration where access is required.
    /// </para>
    /// </summary>
    public class RemoteManagerUnity
    {
        private static RemoteManagerUnity _instance = null;

        private const int CULLING_MASK_ALL_BITS = ~0;
        private const int CULLING_MASK_NO_BITS = 0;
        private Camera _camera;
#if USE_PROXY_CAMERA
        private Camera _proxyCamera;
#endif
        private RenderTextureDescriptor _proxyTextureDesc;
        private static bool _useSimulation;
        private IntPtr _userCoordinateSystem;
        private ulong _appSpaceHandle;
        private IntPtr _renderRemoteFrameCallback;
        private CommandBuffer[] _cbRenderRemoteImage;
        private CommandBuffer _cbPresentRemoteFrame;

        [StructLayout(LayoutKind.Sequential)]
        private struct UserDataStream
        {
            public float near;
            public float far;
        };

        private const int _numUserDataBuffers = 3;
        private int _userDataBufferIndex = 0;
        private UserDataStream[] _userData = new UserDataStream[_numUserDataBuffers];
        private IntPtr[] _userDataWrapper = new IntPtr[_numUserDataBuffers];

        /// Used for application pause/resume
        private bool _wasConnected = false;

        /// Used for application pause/resume
        private RendererInitOptions _params;

        private bool _lastSimulationUpdateSuccessful = false;

        static public void InitializeManager(RemoteUnityClientInit clientInit)
        {
            if (IsInitialized)
            {
                throw new Exception("Redundant Unity Client init");
            }

            if (RemoteManagerStatic.IsInitialized)
            {
                throw new Exception("Redundant Unity Client init");
            }

            RemoteManagerStatic.ExceptionLogged += RemoteManagerUnity_exceptionLoggedEvent;

            Result r = NativeLibraryExtensions.RemoteRendering_SetConnectionGameEngine(0x7974696e75);

            if (r != Result.Success)
            {
                throw new RRException(r, "Unity engine is not supported by this version of remote rendering.");
            }

            RemoteManagerStatic.StartupRemoteRendering(new RemoteRenderingInitialization()
            {
                ConnectionType = ConnectionType.Engine,
                GraphicsApi = clientInit.graphicsApi,
                Right = Axis.X,
                Up = Axis.Y,
                Forward = Axis.Z,
                UnitsPerMeter = 1.0f,
                ToolId = "Unity (" + Application.unityVersion + ")",
            });

            RemoteManagerStatic.OnShutdown += ShutdownManager;

            _useSimulation = clientInit.graphicsApi == GraphicsApiType.SimD3D11;
            _instance = new RemoteManagerUnity(clientInit.mainCamera);
        }

        static private void ShutdownManager()
        {
            RemoteManagerStatic.ExceptionLogged -= RemoteManagerUnity_exceptionLoggedEvent;
            RemoteManagerStatic.OnShutdown -= ShutdownManager;

            if (_instance != null)
            {
                _instance.Dispose(true);
                _instance = null;
            }
        }

        public enum SessionUpdate
        {
            SessionSet,
            SessionRemoved,
            SessionConnected,
            SessionDisconnected
        };

        public delegate void SessionUpdateDelegate(SessionUpdate update);

        static public event SessionUpdateDelegate OnSessionUpdate;

        static public RenderingSession CurrentSession
        {
            get
            {
                return _instance?.Session;
            }
            set
            {
                if (IsInitialized)
                {
                    _instance.Session = value;
                }
            }
        }

        static public bool IsInitialized
        {
            get
            {
                return _instance != null;
            }
        }

        static public bool IsConnected
        {
            get
            {
                return CurrentSession != null && _instance.Session.IsConnected;
            }
        }

        static public bool LastSimulationUpdateSuccessful
        {
            get
            {
                return _instance == null ? false : _instance._lastSimulationUpdateSuccessful;
            }
        }

        static public bool IsUsingSimulation
        {
            get
            {
                return _useSimulation;
            }
        }

        static public Camera ProxyCamera
        {
            get
            {
#if USE_PROXY_CAMERA
                return _instance?._proxyCamera;
#else
                return _instance?._camera;
#endif
            }
        }

        private RenderingSession _session = null;

        public RenderingSession Session
        {
            get
            {
                return _session;
            }

            set
            {
                if (_session != null)
                {
                    _session.Connection.MessageLogged -= RemoteManagerUnity_messageLoggedEvent;
                    _session.ConnectionStatusChanged -= OnConnectionStatusChanged;
                    _session.Connection.Updated -= UpdateLocal;
                    OnSessionUpdate?.Invoke(SessionUpdate.SessionRemoved);
                    if (_useSimulation)
                    {
                        (_session.GraphicsBinding as GraphicsBindingSimD3d11).DeinitSimulation();
#if USE_PROXY_CAMERA
                        if (_camera != null)
                        {
                            _camera.cullingMask = CULLING_MASK_ALL_BITS;
                        }
                        if (_proxyCamera != null)
                        {
                            _proxyCamera.cullingMask = CULLING_MASK_NO_BITS;
                        }
#endif
                    }
                }

                _session = value;

                if (_session != null)
                {
                    OnSessionUpdate?.Invoke(SessionUpdate.SessionSet);

                    _session.Connection.MessageLogged += RemoteManagerUnity_messageLoggedEvent;
                    _session.ConnectionStatusChanged += OnConnectionStatusChanged;
                    _session.Connection.Updated += UpdateLocal;

                    if (_useSimulation)
                    {
                        Microsoft.Azure.RemoteRendering.Result res = Result.Success;

                        if (GraphicsSettings.renderPipelineAsset == null)
                        {
                            // Legacy Render Pipeline
#if USE_PROXY_CAMERA
                            bool flipReproject = _proxyTextureDesc.msaaSamples == 1 && _camera.targetTexture == null;
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, _proxyCamera.targetTexture.GetNativeDepthBufferPtr(), _proxyCamera.targetTexture.GetNativeTexturePtr(), Screen.currentResolution.refreshRate, true, flipReproject, false);
#else
                            bool flipBlit = QualitySettings.antiAliasing > 1 || _camera.targetTexture != null;
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, Screen.width, Screen.height, Screen.currentResolution.refreshRate, flipBlit, false, false);
#endif
                        }
                        else
                        {
#if URP_AVAILABLE
                            // Universal Render Pipeline
#if USE_PROXY_CAMERA
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, _proxyCamera.targetTexture.GetNativeDepthBufferPtr(), _proxyCamera.targetTexture.GetNativeTexturePtr(), Screen.currentResolution.refreshRate, true, false, false);
#else
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, Screen.width, Screen.height, Screen.currentResolution.refreshRate, true, false, false);
#endif
#else
                            // Custom Lightweight Render Pipeline
#if USE_PROXY_CAMERA
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, _proxyCamera.targetTexture.GetNativeDepthBufferPtr(), _proxyCamera.targetTexture.GetNativeTexturePtr(), Screen.currentResolution.refreshRate, true, true, false);
#else
                            res = (_session.GraphicsBinding as GraphicsBindingSimD3d11).InitSimulation(IntPtr.Zero, Screen.width, Screen.height, Screen.currentResolution.refreshRate, true, true, false);
#endif
#endif
                        }
                        if (res != Result.Success)
                        {
                            Debug.LogError($"Failed to call GraphicsBindingSimD3d11.InitSimulation: {res}.");
                        }
                    }

                    if (_session.IsConnected)
                    {
                        OnConnectionStatusChanged(ConnectionStatus.Connected, Result.Success);
                    }
                }
            }
        }

        private RemoteManagerUnity(Camera camera)
        {
            Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", "Unity graphics device:");
            Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", $"ID: {SystemInfo.graphicsDeviceID} Name: {SystemInfo.graphicsDeviceName}");
            Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", $"Type: {SystemInfo.graphicsDeviceType} Version: {SystemInfo.graphicsDeviceVersion}");

            _camera = camera;
            if (_camera != null)
            {
                // If this is true, Unity will render in an off-screen render target using the legacy render pipeline.
                // In addition, the image will be flipped upside-down due to the way Unity handles off-screen render targets.
                _camera.forceIntoRenderTexture = false;
                _camera.allowHDR = false;

                if (_useSimulation)
                {
                    // If we are doing app remoting in the editor we create a proxy camera that renders on top of the remote image
                    // and uses the remote camera transform. 
                    _camera.stereoTargetEye = StereoTargetEyeMask.Left;
#if USE_PROXY_CAMERA
                    _camera.cullingMask = CULLING_MASK_ALL_BITS;

                    GameObject cameraOwner = new GameObject("ProxyCamera");
                    _proxyCamera = cameraOwner.AddComponent<Camera>();
                    _proxyCamera.CopyFrom(_camera);

                    // Ensure that proxy camera is rendered first
                    _proxyCamera.depth = _camera.depth - 1;
                    _proxyCamera.cullingMask = CULLING_MASK_NO_BITS;

                    _proxyTextureDesc = new RenderTextureDescriptor(Screen.width, Screen.height, RenderTextureFormat.Default, 24);
                    _proxyTextureDesc.vrUsage = VRTextureUsage.None;
                    _proxyTextureDesc.dimension = TextureDimension.Tex2D;
                    _proxyTextureDesc.volumeDepth = 1;
                    _proxyTextureDesc.autoGenerateMips = false;
                    _proxyTextureDesc.sRGB = QualitySettings.activeColorSpace == ColorSpace.Linear;

#if URP_AVAILABLE
                    if (GraphicsSettings.renderPipelineAsset is UniversalRenderPipelineAsset urp)
                    {
                        _proxyTextureDesc.msaaSamples = urp.msaaSampleCount;
                    }
#endif

                    // legacy pipeline
                    if (GraphicsSettings.renderPipelineAsset == null)
                    {
                        _proxyTextureDesc.msaaSamples = Math.Max(1, QualitySettings.antiAliasing);
                    }

                    RenderTexture texture = new RenderTexture(_proxyTextureDesc);
                    texture.name = "ProxyTexture";
                    texture.Create();
                    _proxyCamera.targetTexture = texture;
#endif

                    // UnityEditor namespace does not exist during builds
#if UNITY_EDITOR
                    UnityEditor.EditorApplication.update += OnEditorUpdate;
                    UnityEditor.Compilation.CompilationPipeline.compilationStarted += CompilationPipeline_compilationStarted;
                    UnityEditor.Compilation.CompilationPipeline.assemblyCompilationStarted += CompilationPipeline_assemblyCompilationStarted; ;
                    UnityEditor.AssemblyReloadEvents.beforeAssemblyReload += AssemblyReloadEvents_beforeAssemblyReload;
#endif
                }

                if (_useSimulation)
                {
                    _renderRemoteFrameCallback = RRInterface2.GetUnityRenderingEventCallback();
                    _cbRenderRemoteImage = new CommandBuffer[1];
                    _cbRenderRemoteImage[0] = new CommandBuffer();
                    _cbRenderRemoteImage[0].name = "Hybrid App Remoting - Render Remote Image";
                    _cbRenderRemoteImage[0].IssuePluginEventAndData(_renderRemoteFrameCallback, 1, IntPtr.Zero);
#if USE_PROXY_CAMERA
                    _proxyCamera.AddCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[0]);
#else
                    _camera.AddCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[0]);
#endif

                    _cbPresentRemoteFrame = new CommandBuffer();
                    _cbPresentRemoteFrame.name = "Hybrid App Remoting - Present Remote Frame";
                    _cbPresentRemoteFrame.IssuePluginEventAndData(_renderRemoteFrameCallback, 2, IntPtr.Zero);
                    camera.AddCommandBuffer(CameraEvent.AfterForwardOpaque, _cbPresentRemoteFrame);
                }
                else
                {
                    for (int i = 0; i < _numUserDataBuffers; ++i)
                    {
                        _userDataWrapper[i] = Marshal.AllocHGlobal(Marshal.SizeOf(_userData[i]));
                    }

                    _renderRemoteFrameCallback = RRInterface2.GetUnityRenderingEventCallback();
                    _cbRenderRemoteImage = new CommandBuffer[_numUserDataBuffers];
                    for (int i = 0; i < _numUserDataBuffers; ++i)
                    {
                        _cbRenderRemoteImage[i] = new CommandBuffer();
                        _cbRenderRemoteImage[i].name = "Hybrid App Remoting - Render Remote Image";
                        _cbRenderRemoteImage[i].IssuePluginEventAndData(_renderRemoteFrameCallback, 1, _userDataWrapper[_userDataBufferIndex]);
                    }
                }
            }
            else
            {
                Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", "No main camera provided, render streaming disabled.");
            }
        }

        ~RemoteManagerUnity()
        {
            for (int i = 0; i < _numUserDataBuffers; ++i)
            {
                if (_userDataWrapper[i] != IntPtr.Zero)
                {
                    Marshal.FreeHGlobal(_userDataWrapper[i]);
                }
            }
        }

        private void UpdateLocal()
        {
            FlushEntities();

            if (_session != null)
            {
                if (_session.IsConnected && _camera != null)
                {
                    // Unity is rendering with an inverse z depth buffer internally, which we have to tell
                    // Azure Remote Rendering via the camera settings:
                    var cameraSettings = _session.Connection.CameraSettings;
                    cameraSettings.SetNearAndFarPlane(_camera.nearClipPlane, _camera.farClipPlane);
                    cameraSettings.InverseDepth = true;
                }
            }

#if USE_PROXY_CAMERA
            var camera = _proxyCamera;
#else
            var camera = _camera;
#endif

            if (_useSimulation && camera)
            {
                SimulationUpdateParameters update = new SimulationUpdateParameters();

                // We can't use GL.GetGPUProjectionMatrix as the resulting matrix
                // is flipped which is not support by the server.
                update.FieldOfView.Left.FromProjectionMatrix(_camera.projectionMatrix.toRemote());
                update.ViewTransform.Left = _camera.transform.worldToLocalMatrix.toRemote();

                SimulationUpdateResult proxyUpdate = new SimulationUpdateResult();
                if (_session != null && _session.GraphicsBinding != null)
                {
                    var updateResult = (_session.GraphicsBinding as GraphicsBindingSimD3d11).Update(update, out proxyUpdate);
                    if (updateResult != Result.Success && updateResult != Result.NoConnection)
                    {
                        Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Simulation update failed: {updateResult}");
                    }
                }

                _lastSimulationUpdateSuccessful = proxyUpdate.FrameId != 0;

#if USE_PROXY_CAMERA
                // Is the frame data valid?
                if (proxyUpdate.FrameId != 0)
                {
                    _proxyCamera.cullingMask = CULLING_MASK_ALL_BITS;
                    _camera.cullingMask = CULLING_MASK_NO_BITS;

                    // If the main camera is using sky clearing, it renders over our proxy camera's image
                    // causing both local and remote content to visually disappear. We resolve this by setting
                    // the main camera clearing to solid color here. This is reverted later when disconnecting.
                    _camera.clearFlags = CameraClearFlags.SolidColor;
                    _camera.backgroundColor = new Color(0, 0, 0, 1);

                    // Unity expects the smaller of the plane values to be the near plane
                    // and the larger of the two to be the far plane.
                    _proxyCamera.nearClipPlane = Math.Min(proxyUpdate.NearPlaneDistance, proxyUpdate.FarPlaneDistance);
                    _proxyCamera.farClipPlane = Math.Max(proxyUpdate.NearPlaneDistance, proxyUpdate.FarPlaneDistance);

                    // Getting a projection matrix out of the proxyUpdate data. Note: Despite rendering with an inverse z depth buffer
                    // internally, Unity has a normal z range matrix on the cameras. Therefore, we need to request a matrix in a conventional
                    // [-1;1] OpenGL space.
                    if (proxyUpdate.FieldOfView.Left.ToProjectionMatrix(proxyUpdate.NearPlaneDistance, proxyUpdate.FarPlaneDistance, DepthConvention.MinusOneToOne, out Matrix4x4 projection) == Result.Success)
                    {
                        _proxyCamera.projectionMatrix = projection.toUnity();
                    }
                    UnityEngine.Matrix4x4 transformProxyI = proxyUpdate.ViewTransform.Left.toUnity().inverse;
                    _proxyCamera.transform.rotation = UnityEngine.Quaternion.LookRotation(transformProxyI.GetColumn(2), transformProxyI.GetColumn(1));
                    _proxyCamera.transform.position = transformProxyI.GetColumn(3);
                }
                else
                {
                    // If we don't have a remote frame (i.e. disconnected) we just render to the main camera instead of the proxy
                    // as there is not remote content to composite and we wouldn't be able to re-project the proxy texture without a remote frame.
                    _camera.cullingMask = CULLING_MASK_ALL_BITS;
                    _camera.clearFlags = _proxyCamera.clearFlags;
                    _camera.backgroundColor = _proxyCamera.backgroundColor;
                    _proxyCamera.cullingMask = CULLING_MASK_NO_BITS;
                    _proxyCamera.nearClipPlane = _camera.nearClipPlane;
                    _proxyCamera.farClipPlane = _camera.farClipPlane;
                    _proxyCamera.projectionMatrix = _camera.projectionMatrix;
                    _proxyCamera.transform.position = _camera.transform.position;
                    _proxyCamera.transform.rotation = _camera.transform.rotation;
                    _proxyCamera.transform.localScale = _camera.transform.localScale;
                }
#endif
            }
            else if (!_useSimulation)
            {
                // Note, Unity always renders inverse Z but does not communicate it to the user,
                // thus ensure larger value is always used as near and smaller one as far.
                _userData[_userDataBufferIndex].near = Math.Max(_camera.nearClipPlane, _camera.farClipPlane);
                _userData[_userDataBufferIndex].far = Math.Min(_camera.nearClipPlane, _camera.farClipPlane);
                Marshal.StructureToPtr(_userData[_userDataBufferIndex], _userDataWrapper[_userDataBufferIndex], false);

                for (int i = 0; i < _numUserDataBuffers; ++i)
                {
                    if (_cbRenderRemoteImage[i] != null)
                    {
                        _camera.RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[i]);
                    }
                }
                _camera.AddCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[_userDataBufferIndex]);

                // Switch user data buffer index so that we use a different one for the next frame.
                _userDataBufferIndex = (_userDataBufferIndex++) % _numUserDataBuffers;

#if UNITY_WSA

#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_1_OR_NEWER
                var xrLoader = XRGeneralSettings.Instance?.Manager?.activeLoader;
                if (xrLoader is UnityEngine.XR.OpenXR.OpenXRLoaderBase)
                {
                    if (_session?.GraphicsBinding != null)
					{
                        ulong appSpaceHandle = AppSpaceAccessor.GetCurrentAppSpaceHandle();

                        var binding = (_session.GraphicsBinding as GraphicsBindingOpenXrD3d11);
						if (binding != null && binding.UpdateAppSpace(appSpaceHandle) == Result.Success)
						{
                            _appSpaceHandle = 0;
						}
					}
                }
				else
#endif
                {
					IntPtr ptr = IntPtr.Zero;
#if XR_PLUGIN_AVAILABLE
					ptr = UnityEngine.XR.WindowsMR.WindowsMREnvironment.OriginSpatialCoordinateSystem;
#elif !UNITY_2020_1_OR_NEWER
					ptr = UnityEngine.XR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr();
#endif

					if (ptr != IntPtr.Zero && ptr != _userCoordinateSystem && _session?.GraphicsBinding != null)
					{
						var binding = (_session.GraphicsBinding as GraphicsBindingWmrD3d11);
						if (binding != null && binding.UpdateUserCoordinateSystem(ptr) == Result.Success)
						{
							_userCoordinateSystem = ptr;
						}
					}
                }
#endif
            }
        }

        static private void RemoteManagerUnity_exceptionLoggedEvent(Exception ex)
        {
            Debug.LogException(ex);
        }

        static private void RemoteManagerUnity_messageLoggedEvent(LogLevel level, IntPtr msg)
        {
            var message = Marshal.PtrToStringAnsi(msg);
            try
            {
                switch (level)
                {
                    case LogLevel.Error:
                        Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", message);
                        break;
                    case LogLevel.Warning:
                        Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", message);
                        break;
                    case LogLevel.Information:
                    case LogLevel.Debug:
                        Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", message);
                        break;
                }
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }

        /// <summary>
        /// Create MonoBehaviors for the GameObject for all ARR Components on the Entity
        /// </summary>
        public static void CreateUnityComponents(Entity entity, GameObject go)
        {
            // Set the components on the game object based on the components of the ARR entity.
            foreach (var comp in entity.Components)
            {
                switch (comp.Type)
                {
                    case ObjectType.MeshComponent:
                        EntityExtensions.BindArrComponent<ARRMeshComponent>(go, comp);
                        break;
                    case ObjectType.CutPlaneComponent:
                        EntityExtensions.BindArrComponent<ARRCutPlaneComponent>(go, comp);
                        break;
                    case ObjectType.HierarchicalStateOverrideComponent:
                        EntityExtensions.BindArrComponent<ARRHierarchicalStateOverrideComponent>(go, comp);
                        break;
                    case ObjectType.PointLightComponent:
                        EntityExtensions.BindArrComponent<ARRPointLightComponent>(go, comp);
                        break;
                    case ObjectType.SpotLightComponent:
                        EntityExtensions.BindArrComponent<ARRSpotLightComponent>(go, comp);
                        break;
                    case ObjectType.DirectionalLightComponent:
                        EntityExtensions.BindArrComponent<ARRDirectionalLightComponent>(go, comp);
                        break;
                    default:
                        throw new Exception("Unrecognized component type in ARR to Unity translation.");
                }
            }
        }

        void OnApplicationPause(bool pauseStatus)
        {
            if (pauseStatus)
            {
                _wasConnected = _session.ConnectionStatus == ConnectionStatus.Connected;

                if (_wasConnected)
                {
                    _params = _session.RendererInitOptions;
                    _session.Disconnect();
                }
            }
            else
            {
                if (_wasConnected)
                {
                    _session.ConnectAsync(_params);
                }
            }
        }

        /// \cond INTERNAL
        // UnityEditor namespace does not exist when compiling
#if UNITY_EDITOR
        static private void OnEditorUpdate()
        {
            if (UnityEditor.EditorApplication.isCompiling && UnityEditor.EditorApplication.isPlaying)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Recompiling while in play mode is unsupported.  Disconnecting from server & destroying remote rendering instance.");
                RemoteManagerStatic.ShutdownRemoteRendering();
            }

            if (!UnityEditor.EditorApplication.isPlaying)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "RemoteManagerUnity only supported in play mode. Destroying instance.");
                RemoteManagerStatic.ShutdownRemoteRendering();
            }
        }

        private void CompilationPipeline_assemblyCompilationStarted(string obj)
        {
            Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Recompiling while in play mode is unsupported.  Disconnecting from server & destroying remote rendering instance.");
            RemoteManagerStatic.ShutdownRemoteRendering();
        }

        private void CompilationPipeline_compilationStarted(object obj)
        {
            Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Recompiling while in play mode is unsupported.  Disconnecting from server & destroying remote rendering instance.");
            RemoteManagerStatic.ShutdownRemoteRendering();
        }

        private void AssemblyReloadEvents_beforeAssemblyReload()
        {
            Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Recompiling while in play mode is unsupported.  Disconnecting from server & destroying remote rendering instance.");
            RemoteManagerStatic.ShutdownRemoteRendering();
        }


#endif

        bool _entityFlushPending = false;

        void FlushEntities()
        {
            if (_entityFlushPending)
            {
                RemoteRendering.Unity.RemoteEntitySyncObject.Flush();
                _entityFlushPending = false;
            }
        }

        void OnConnectionStatusChanged(ConnectionStatus status, Result error)
        {
            if (status == ConnectionStatus.Connected && _useSimulation)
            {
                if (_entityFlushPending)
                {
                    FlushEntities();
                }

                OnSessionUpdate?.Invoke(SessionUpdate.SessionConnected);
            }
            _userCoordinateSystem = IntPtr.Zero;
            _appSpaceHandle = 0;


            // This used to be in a PostDisconnect message. Do we want to add one to the API?
            if (status == ConnectionStatus.Disconnected)
            {
#if USE_PROXY_CAMERA
                if (_useSimulation && _proxyCamera)
                {
                    // Making sure main camera clearing is used again (Disabled in updateLocal
                    // when we actually receive remote frames).
                    _camera.clearFlags = _proxyCamera.clearFlags;
                    _camera.backgroundColor = _proxyCamera.backgroundColor;
                }
#endif
                _lastSimulationUpdateSuccessful = false;
                _entityFlushPending = true;
                OnSessionUpdate?.Invoke(SessionUpdate.SessionDisconnected);
            }
        }

        protected void Dispose(bool disposing)
        {
            if (_useSimulation)
            {
                // UnityEditor namespace does not exist when compiling
#if UNITY_EDITOR
                UnityEditor.EditorApplication.update -= OnEditorUpdate;
                UnityEditor.Compilation.CompilationPipeline.compilationStarted -= CompilationPipeline_compilationStarted;
                UnityEditor.Compilation.CompilationPipeline.assemblyCompilationStarted -= CompilationPipeline_assemblyCompilationStarted; ;
                UnityEditor.AssemblyReloadEvents.beforeAssemblyReload -= AssemblyReloadEvents_beforeAssemblyReload;
#endif

                Session = null;

                _lastSimulationUpdateSuccessful = false;

#if USE_PROXY_CAMERA
                if (_camera != null)
                {
                    _camera.cullingMask = CULLING_MASK_ALL_BITS;
                }
#endif
            }

            if (_useSimulation)
            {
                if (_cbRenderRemoteImage != null)
                {
#if USE_PROXY_CAMERA
                    var camera = _proxyCamera;
#else
                    var camera = _camera;
#endif
                    if (camera != null)
                    {
                        for (int i=0; i<_cbRenderRemoteImage.Length; ++i)
                        {
                            if (_cbRenderRemoteImage[i] != null)
                            {
                                camera.RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[i]);
                            }
                        }
                    }
                    for (int i = 0; i < _cbRenderRemoteImage.Length; ++i)
                    {
                        if (_cbRenderRemoteImage[i] != null)
                        {
                            _cbRenderRemoteImage[i].Release();
                            _cbRenderRemoteImage[i] = null;
                        }
                    }
                    _cbRenderRemoteImage = null;
                }
                if (_cbPresentRemoteFrame != null)
                {
                    if (_camera != null)
                    {
                        _camera.RemoveCommandBuffer(CameraEvent.AfterForwardOpaque, _cbPresentRemoteFrame);
                    }
                    _cbPresentRemoteFrame.Release();
                    _cbPresentRemoteFrame = null;
                }
            }
            else
            {
                if (_cbRenderRemoteImage != null)
                {
                    for (int i = 0; i < _cbRenderRemoteImage.Length; ++i)
                    {
                        if (_cbRenderRemoteImage[i] != null)
                        {
                            _camera.RemoveCommandBuffer(CameraEvent.BeforeForwardOpaque, _cbRenderRemoteImage[i]);
                        }
                    }
                    for (int i = 0; i < _cbRenderRemoteImage.Length; ++i)
                    {
                        _cbRenderRemoteImage[i].Release();
                        _cbRenderRemoteImage[i] = null;
                    }
                }
                _cbRenderRemoteImage = null;
            }
            _camera = null;

#if USE_PROXY_CAMERA
            if (_proxyCamera != null)
            {
                GameObject.Destroy(_proxyCamera.gameObject);
                _proxyCamera = null;
            }
#endif
        }
        /// \endcond
    }
}
