// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
#if WINDOWS_UWP || DOTNETWINRT_PRESENT
#define SPATIALCOORDINATESYSTEM_API_PRESENT
#endif

#if UNITY_WSA
using System;
using System.Collections.Generic;
using System.Collections.Concurrent;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Threading.Tasks;

using UnityEngine;

#if WINDOWS_UWP
using global::Windows.Perception.Spatial;
using global::Windows.Perception.Spatial.Preview;
#elif DOTNETWINRT_PRESENT
using Microsoft.Windows.Perception.Spatial;
using Microsoft.Windows.Perception.Spatial.Preview;
using Microsoft.Azure.ObjectAnchors.SpatialGraph;
#endif

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public class ObjectAnchorsService : DisposeModel, IObjectAnchorsService
    {
#region Fields, static methods

        private static Lazy<ObjectAnchorsService> _service = new Lazy<ObjectAnchorsService>(() => new ObjectAnchorsService(), true);

        private ObjectAnchorsConfig _config = ObjectAnchorsConfig.GetConfig();
        private ObjectAnchorsServiceStatus _status = ObjectAnchorsServiceStatus.Paused;

        private ObjectAnchorsSession _objectAnchorsSesion;
        private ObjectObserver _observer;
        private Diagnostics.ObjectDiagnosticsSession _diagnosticsSession;
        private string _diagnosticsPackageFilePath;

        private Dictionary<Guid, ObjectModel> _modelsById = new Dictionary<Guid, ObjectModel>();
        private ConcurrentDictionary<Guid, ExtendedObjectInstance> _instancesById = new ConcurrentDictionary<Guid, ExtendedObjectInstance>();

        private ObjectAnchorsService()
        {}

        public static IObjectAnchorsService GetService() => _service.Value;

#endregion

#region Public properties

        public ObjectAnchorsServiceStatus Status
        {
            get { return _status; }
            set
            {
                if (_status != value)
                {
                    _status = value;
                    RunningChanged?.Invoke(this, value);
                }
            }
        }

        public event EventHandler<ObjectAnchorsServiceStatus> RunningChanged;
        public event EventHandler<IObjectAnchorsServiceEventArgs> ObjectAdded;
        public event EventHandler<IObjectAnchorsServiceEventArgs> ObjectUpdated;
        public event EventHandler<IObjectAnchorsServiceEventArgs> ObjectRemoved;

#endregion

#region Interface implementations

        public List<Guid> ModelIds
        {
            get { return _modelsById.Keys.ToList(); }
        }

        public List<IObjectAnchorsTrackingResult> TrackingResults
        {
            get { return _instancesById.Select(kv => kv.Value as IObjectAnchorsTrackingResult).ToList(); }
        }

        public async Task InitializeAsync()
        {
#if XR_MANAGEMENT_ENABLED
            // Wait for XR initialization before evaluating IsSupported() to ensure that any pending Remoting connection has been established first.
            while (UnityEngine.XR.Management.XRGeneralSettings.Instance == null ||
                   UnityEngine.XR.Management.XRGeneralSettings.Instance.Manager == null ||
                   UnityEngine.XR.Management.XRGeneralSettings.Instance.Manager.activeLoader == null)
            {
                await Task.Yield();
            }
#endif

            if (!ObjectObserver.IsSupported())
            {
                Debug.LogError("Object Anchors is not supported. Please check OS version and application capabilities.");
                return;
            }

            var accessStatus = await ObjectObserver.RequestAccessAsync();
            if (accessStatus != ObjectObserverAccessStatus.Allowed)
            {
                Debug.LogError("Access not granted for Object Anchors.");
                return;
            }

            _objectAnchorsSesion = new ObjectAnchorsSession(_config.AccountInformation);
            _observer = _objectAnchorsSesion.CreateObjectObserver();

            Status = ObjectAnchorsServiceStatus.Running;
        }

        public void Pause()
        {
            foreach (var value in _instancesById.Values)
            {
                value.Pause();
            }

            Status = ObjectAnchorsServiceStatus.Paused;
        }

        public void Resume()
        {
            foreach (var value in _instancesById.Values)
            {
                value.Resume();
            }

            Status = ObjectAnchorsServiceStatus.Running;
        }

        public void StartDiagnosticsSession()
        {
            // Close previous session. Note that if CloseAsync is not called on the previous session, the captured data will be discarded.
            _diagnosticsSession = null;

            _diagnosticsSession = new Diagnostics.ObjectDiagnosticsSession(_observer, _config.MaxDiagnosticsSessionSizeInMegaBytes);
        }

        public async Task<string> StopDiagnosticsSessionAsync()
        {
            if (_diagnosticsSession != null)
            {
                string _diagnosticsPackageFilePath = Path.Combine(_config.DiagnosticsFolderPath, DateTime.Now.ToString("yyyyMMdd-HHmmss") + ".zip");

                await _diagnosticsSession.CloseAsync(_diagnosticsPackageFilePath);
            }

            return _diagnosticsPackageFilePath;
        }

        public async Task<bool> UploadDiagnosticsAsync(string diagnosticsFilePath)
        {
            bool success = false;

            try
            {
                var status = await Diagnostics.ObjectDiagnosticsSession.UploadDiagnosticsAsync(diagnosticsFilePath, _objectAnchorsSesion);

                Debug.Log($"Diagnostics file upload status: {status.ToString()}.");

                success = status == Diagnostics.ObjectDiagnosticsUploadStatus.Succeeded;
            }
            catch(Exception ex)
            {
                Debug.LogError($"Fail to upload diagnostics file. Exception message: {ex.ToString()}.");
            }

            return success;
        }

        public async Task<Guid> AddObjectModelAsync(string modelFilePath)
        {
            if (String.IsNullOrEmpty(modelFilePath))
            {
                Debug.LogWarning($"Attempted to add an empty model file path.");
                return Guid.Empty;
            }

            Guid modelId = Guid.Empty;
            try
            {
                modelId = await AddObjectModelAsync(UnityEngine.Windows.File.ReadAllBytes(modelFilePath));
            }
            catch (Exception ex)
            {
                Debug.LogError($"Failed to open file '{modelFilePath}'. Exception message: {ex.ToString()}.");
            }

            return modelId;
        }

        public async Task<Guid> AddObjectModelAsync(byte[] modelBuffer)
        {
            if (_observer == null)
            {
                Debug.LogWarning($"Attempted to add model to a non-existent observer.");
                return Guid.Empty;
            }

            ObjectModel model = null;
            try
            {
                if (modelBuffer != null && modelBuffer.Length > 0)
                {
                    model = await _observer.LoadObjectModelAsync(modelBuffer);
                    Debug.Assert(model != null && model.Id != Guid.Empty, $"Failed to add object instance from model.");
                }
                else
                {
                    Debug.LogError("Failed to add object model, file data is empty.");
                }
            }
            catch (Exception ex)
            {
                Debug.LogError($"Failed to add object model data from model. Exception message: {ex.ToString()}");
            }

            if (model != null)
            {
                _modelsById[model.Id] = model;
            }

            return model?.Id ?? Guid.Empty;
        }

        public System.Numerics.Vector3[] GetModelVertexPositions(Guid modelId)
        {
            System.Numerics.Vector3[] vertexPositions = null;

            ObjectModel model = GetObjectModel(modelId);

            if (model != null)
            {
                vertexPositions = new System.Numerics.Vector3[model.VertexCount];

                model?.GetVertexPositions(vertexPositions);
            }

            return vertexPositions;
        }

        public System.Numerics.Vector3[] GetModelVertexNormals(Guid modelId)
        {
            System.Numerics.Vector3[] vertexNormals = null;

            ObjectModel model = GetObjectModel(modelId);

            if (model != null)
            {
                vertexNormals = new System.Numerics.Vector3[model.VertexCount];

                model?.GetVertexNormals(vertexNormals);
            }

            return vertexNormals;
        }

        public uint[] GetModelTriangleIndices(Guid modelId)
        {
            uint[] indices = null;

            ObjectModel model = GetObjectModel(modelId);

            if (model != null)
            {
                indices = new uint[model.TriangleIndexCount];

                model?.GetTriangleIndices(indices);
            }

            return indices;
        }

        public ObjectAnchorsBoundingBox? GetModelBoundingBox(Guid modelId)
        {
            return GetObjectModel(modelId)?.BoundingBox.ToUnity();
        }

        public Matrix4x4? GetModelOriginToCenterTransform(Guid modelId)
        {
            return GetObjectModel(modelId)?.OriginToCenterTransform.ToUnity();
        }

        public ObjectQuery CreateObjectQuery(Guid modelId)
        {
            return new ObjectQuery(GetObjectModel(modelId));
        }

        public ObjectQuery CreateObjectQuery(Guid modelId, ObjectObservationMode observationMode)
        {
            return new ObjectQuery(GetObjectModel(modelId), observationMode);
        }

        public async Task<List<IObjectAnchorsTrackingResult>> DetectObjectAsync(ObjectQuery[] queries)
        {
            var results = new List<IObjectAnchorsTrackingResult>();

            if (queries.Count() > 0)
            {
                // DetectAsync returns newly found object instances.
                var detectedObjects = await _observer.DetectAsync(queries);

                foreach (var instance in detectedObjects)
                {
                    var value = new ExtendedObjectInstance(instance, Guid.NewGuid());

                    if (value.IsTrackable)
                    {
                        if (_instancesById.TryAdd(value.InstanceId, value))
                        {
                            results.Add(value);

                            instance.Changed += OnObjectInstanceStateChanged;

                            ObjectAdded?.Invoke(this, value);
                        }
                    }
                    else
                    {
                        instance.Dispose();
                    }
                }
            }

            return results;
        }

        public void SetObjectInstanceTrackingMode(Guid instanceId, ObjectInstanceTrackingMode mode)
        {
            ExtendedObjectInstance value;

            if (_instancesById.TryGetValue(instanceId, out value))
            {
                value.TrackingMode = mode;
            }
        }

        public void RemoveObjectInstance(Guid instanceId)
        {
            ExtendedObjectInstance value;

            if (_instancesById.TryRemove(instanceId, out value))
            {
                value.Instance.Changed -= OnObjectInstanceStateChanged;
                value.Instance.Dispose();

                ObjectRemoved?.Invoke(this, value);
            }
        }

#endregion

#region Internal, private methods

        private class ExtendedObjectInstance : IObjectAnchorsServiceEventArgs
        {
            private object _syncObject = new object();

            /// <summary>
            /// Last non-paused tracking mode. internally used to restore from `Paused` mode.
            /// </summary>
            private ObjectInstanceTrackingMode _lastNonPausedTrackingMode;

#if SPATIALCOORDINATESYSTEM_API_PRESENT
            readonly ObjectInstancePlacement _placement;
            readonly SpatialCoordinateSystem _referenceCoordinateSystem;
#endif

            public ExtendedObjectInstance(ObjectInstance instance, Guid instanceId)
            {
                this.ModelId = instance.ModelId;
                this.InstanceId = instanceId;
                this.Instance = instance;

#if SPATIALCOORDINATESYSTEM_API_PRESENT
                var referenceCoordinateSystem = ObjectAnchorsWorldManager.WorldOrigin.TryToSpatialGraph(out this._referenceCoordinateSystem);
                if (referenceCoordinateSystem != null)
                {
                    this._placement = instance.TryGetCurrentPlacement(referenceCoordinateSystem.Value);
                }

                if (this._placement != null)
                {
                    var state = this._placement.State;
                    this.IsTrackable = true;
                    this.LastUpdatedTime = state.LastUpdatedTime.LocalDateTime;
                    this.SurfaceCoverage = state.SurfaceCoverage;
                    this.ScaleChange = new Vector3(state.ScaleChange.X, state.ScaleChange.Y, state.ScaleChange.Z);
                    this.Center = state.Center.ToSpatialCoordinateSystem();

                    // A newly created instance's mode cannot be `Paused`.
                    if (instance.Mode == ObjectInstanceTrackingMode.Paused)
                    {
                        Debug.Log($"New object tracking mode paused? mid: {ModelId} iid: {InstanceId}");
                    }
                    Debug.Assert(instance.Mode != ObjectInstanceTrackingMode.Paused);
                    this._lastNonPausedTrackingMode = instance.Mode;
                }
                else
#endif
                {
                    this.IsTrackable = false;
                    this.LastUpdatedTime = DateTime.Now;
                    this.SurfaceCoverage = 0.0f;
#if SPATIALCOORDINATESYSTEM_API_PRESENT
                    this.Center = null;
#endif
                    this.ScaleChange = new Vector3(1.0f, 1.0f, 1.0f);
                }
            }


            /// <summary>
            /// Computes the pose of the model in the world coordinate system, optimized for the given view. Returns null if the pose cannot be determined.
            /// </summary>
            public Pose? TryComputeModelPoseForView(Pose viewInWorld)
            {
#if SPATIALCOORDINATESYSTEM_API_PRESENT
                var worldToReference = ObjectAnchorsWorldManager.WorldOrigin?.TryGetTransformTo(this._referenceCoordinateSystem);
                if (worldToReference.HasValue)
                {
                    return this._placement.ComputeModelPoseForView(viewInWorld.ToSpatialGraph(), worldToReference.Value).ToUnity();
                }
#endif
                return null;
            }

            public void Pause()
            {
                if (IsTrackable)
                {
                    this.Instance.Mode = ObjectInstanceTrackingMode.Paused;
                }
            }

            public void Resume()
            {
                if (IsTrackable)
                {
                    if (this._lastNonPausedTrackingMode == ObjectInstanceTrackingMode.Paused)
                    {
                        Debug.LogWarning($"Resuming object _lastNonPausedTrackingMode is paused? mid: {ModelId} iid: {InstanceId}");
                    }
                    Debug.Assert(this._lastNonPausedTrackingMode != ObjectInstanceTrackingMode.Paused);
                    this.Instance.Mode = this._lastNonPausedTrackingMode;
                }
            }

            public ObjectAnchorsLocation? Location
            {
                get
                {
#if SPATIALCOORDINATESYSTEM_API_PRESENT
                    var worldOrigin = ObjectAnchorsWorldManager.WorldOrigin;
                    return (worldOrigin == null) ? null : this.Center?.TryGetTransformTo(worldOrigin)?.ToUnityLocation();
#else
                    return null;
#endif
                }
            }

            /// <summary>
            /// Scale changes applied to the object model in centered coordinate system.
            /// </summary>
            public Vector3 ScaleChange { get; }

            /// <summary>
            /// Unique id for the object model that represents an object instance.
            /// </summary>
            public Guid ModelId { get; }

            /// <summary>
            /// Unique id for an object instance.
            /// </summary>
            public Guid InstanceId { get; }

            /// <summary>
            /// Percentage of surface on object model that matches to real object at current pose, from 0 to 1.
            /// </summary>
            public float SurfaceCoverage { get; }

            /// <summary>
            /// The most recent time when an instance is updated in UTC.
            /// </summary>
            public DateTime LastUpdatedTime { get; }

            /// <summary>
            /// An instance's tracking mode.
            /// </summary>
            public ObjectInstanceTrackingMode TrackingMode
            {
                get
                {
                    return this.Instance.Mode;
                }
                internal set
                {
                    if(value != ObjectInstanceTrackingMode.Paused)
                    {
                        this._lastNonPausedTrackingMode = value;
                    }

                    this.Instance.Mode = value;
                }
            }

            /// <summary>
            /// Returns true if this instance is being tracked by the observer.
            /// </summary>
            internal bool IsTrackable { get; }

            /// <summary>
            /// Actual instance object.
            /// </summary>
            internal ObjectInstance Instance { get; }

#if SPATIALCOORDINATESYSTEM_API_PRESENT
            /// <summary>
            /// Center of object instance in the spatial graph.
            /// </summary>
            internal SpatialCoordinateSystem Center { get; }
#endif
        }

        protected override void DisposeManagedResource()
        {
            // If diagnostics is captured, all the data will be discard because CloseAsync is not called.
            _diagnosticsSession = null;

            // Disposing observer won't affect the loaded object model or instances being tracked.
            _observer?.Dispose();
            _observer = null;

            // Dispose object instances.
            foreach (var value in _instancesById.Values)
            {
                value.Instance.Changed -= OnObjectInstanceStateChanged;
                value.Instance.Dispose();
            }

            _instancesById.Clear();

            // Dispose loaded object models.
            foreach (var model in _modelsById.Values)
            {
                model.Dispose();
            }

            _modelsById.Clear();

            // Observer stopped.
            Status = ObjectAnchorsServiceStatus.Paused;

            // Release singleton.
            _service = null;

            base.DisposeManagedResource();
        }

        private ObjectModel GetObjectModel(Guid modelId)
        {
            ObjectModel model;
            _modelsById.TryGetValue(modelId, out model);

            return model;
        }

        private void OnObjectInstanceStateChanged(object sender, ObjectInstanceChangedEventArgs args)
        {
            // Retrieve the instance from dictionary to get its id.
            // Note that the sender may be no longer in the dictionary if it is removed explictly by the caller in another thread.
            var instanceId = _instancesById.FirstOrDefault(kv => kv.Value.Instance == sender).Key;

            // This instance may have been disposed. An exception will be thrown on a disposed instance.
            ExtendedObjectInstance newValue = null;
            try
            {
                lock (sender)
                {
                    var instance = sender as ObjectInstance;

                    if (instanceId != Guid.Empty)
                    {
                        newValue = new ExtendedObjectInstance(instance, instanceId);
                    }

                    if (newValue == null)
                    {
                        // Instance has been removed from the dictionary in anther thread, dispose it only without firing 'removed' event.
                        instance.Changed -= OnObjectInstanceStateChanged;
                        instance.Dispose();
                    }
                    else if(!newValue.IsTrackable)
                    {
                        // Instance still in the dictionary but just lost tracking, remove it and fire 'removed' event.
                        RemoveObjectInstance(instanceId);
                    }
                }
            }
            catch (Exception)
            {
                // An exception will thrown if sender is already disposed in another thread.
                return;
            }

            if(newValue != null && newValue.IsTrackable)
            {
                // Update object status.
                _instancesById[instanceId] = newValue;

                ObjectUpdated?.Invoke(this, newValue);
            }
        }

#endregion
    }
}
#endif // UNITY_WSA
