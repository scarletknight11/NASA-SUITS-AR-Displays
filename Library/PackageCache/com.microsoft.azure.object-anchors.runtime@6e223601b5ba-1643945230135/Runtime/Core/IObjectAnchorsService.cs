// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
#if UNITY_WSA
using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public enum ObjectAnchorsServiceStatus
    {
        /// <summary>
        /// Service is paused.
        /// </summary>
        Paused = 0,

        /// <summary>
        /// Service is running.
        /// </summary>
        Running,
    }

    public interface IObjectAnchorsService : IDisposable
    {
        /// <summary>
        /// Returns service status.
        /// </summary>
        ObjectAnchorsServiceStatus Status { get; }

        /// <summary>
        /// Returns ids of loaded models.
        /// </summary>
        List<Guid> ModelIds { get; }

        /// <summary>
        /// Returns all the object instances being tracked.
        /// </summary>
        List<IObjectAnchorsTrackingResult> TrackingResults { get; }

        /// <summary>
        /// Invoked when Status changes.
        /// </summary>
        event EventHandler<ObjectAnchorsServiceStatus> RunningChanged;

        /// <summary>
        /// Fired when new object instance was found.
        /// </summary>
        event EventHandler<IObjectAnchorsServiceEventArgs> ObjectAdded;

        /// <summary>
        /// Fired when an object instance was updated.
        /// </summary>
        event EventHandler<IObjectAnchorsServiceEventArgs> ObjectUpdated;

        /// <summary>
        /// Fired when an object was lost.
        /// </summary>
        event EventHandler<IObjectAnchorsServiceEventArgs> ObjectRemoved;

        /// <summary>
        /// Initialize the service.
        /// </summary>
        Task InitializeAsync();

        /// <summary>
        /// Pauses tracking
        /// </summary>
        void Pause();

        /// <summary>
        /// Resumes tracking
        /// </summary>
        void Resume();

        /// <summary>
        /// Starts a new diagnostics session.
        /// </summary>
        void StartDiagnosticsSession();

        /// <summary>
        /// Stops current diagnostics session and writes data to a diagnostics package.
        /// </summary>
        /// <returns>Diagnostics file path, empty or null if no diagnostics is generated.</returns>
        Task<string> StopDiagnosticsSessionAsync();

        /// <summary>
        /// Upload a diagnostics archive to Azure's blob storage.
        /// </summary>
        /// <returns>Returns true if upload succeeded, false otherwise.</returns>
        Task<bool> UploadDiagnosticsAsync(string diagnosticsFilePath);

        /// <summary>
        /// Adds a new object model to be searched for.
        /// </summary>
        Task<Guid> AddObjectModelAsync(string modelFilePath);

        /// <summary>
        /// Adds a new object model to be searched for.
        /// </summary>
        Task<Guid> AddObjectModelAsync(byte[] modelBuffer);

        /// <summary>
        /// Returns vertex positions of an object model in centered coordinate system.
        /// </summary>
        System.Numerics.Vector3[] GetModelVertexPositions(Guid modelId);

        /// <summary>
        /// Returns vertex normals of an object model in centered coordinate system.
        /// </summary>
        System.Numerics.Vector3[] GetModelVertexNormals(Guid modelId);

        /// <summary>
        /// Returns triangle indices if an object model has triangles, null otherwise.
        /// </summary>
        uint[] GetModelTriangleIndices(Guid modelId);

        /// <summary>
        /// Returns bounding box of an object model in centered coordinate system.
        /// </summary>
        ObjectAnchorsBoundingBox? GetModelBoundingBox(Guid modelId);

        /// <summary>
        /// Returns a rigid transform from model origin to the centered coordinate system.
        /// </summary>
        UnityEngine.Matrix4x4? GetModelOriginToCenterTransform(Guid modelId);

        /// <summary>
        /// Returns a query that can be used to detect instance(s) of an object model using ambient observation.
        /// </summary>
        ObjectQuery CreateObjectQuery(Guid modelId);

        /// <summary>
        /// Returns a query that can be used to detect instance(s) of an object model using the specified mode of observation.
        /// </summary>
        ObjectQuery CreateObjectQuery(Guid modelId, ObjectObservationMode observationMode);

        /// <summary>
        /// Detects object instance(s) based on queries.
        /// </summary>
        Task<List<IObjectAnchorsTrackingResult>> DetectObjectAsync(ObjectQuery[] queries);

        /// <summary>
        /// Set object instance's tracking mode.
        /// </summary>
        void SetObjectInstanceTrackingMode(Guid instanceId, ObjectInstanceTrackingMode mode);

        /// <summary>
        /// Removes an object instance from tracking.
        /// </summary>
        void RemoveObjectInstance(Guid instanceId);
    }
}
#endif // UNITY_WSA
