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
using UnityEngine;

#if WINDOWS_UWP
using global::Windows.Perception.Spatial;
using global::Windows.Perception.Spatial.Preview;
#elif DOTNETWINRT_PRESENT
using Microsoft.Windows.Perception.Spatial;
using Microsoft.Windows.Perception.Spatial.Preview;
#endif

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public struct ObjectAnchorsFieldOfView
    {
        public Vector3 Position;
        public Quaternion Orientation;
        public float FarDistance;
        public float HorizontalFieldOfViewInDegrees;
        public float AspectRatio;
    }

    public struct ObjectAnchorsBoundingBox
    {
        public Vector3 Center;
        public Vector3 Extents;
        public Quaternion Orientation;

        public float Area()
        {
            return Extents.x * Extents.y * Extents.z;
        }
    }

    public struct ObjectAnchorsSphere
    {
        public Vector3 Center;
        public float Radius;
    }

    public struct ObjectAnchorsLocation
    {
        public Vector3 Position;
        public Quaternion Orientation;
    }

    public static class SpatialGraphExtension
    {
#if SPATIALCOORDINATESYSTEM_API_PRESENT
        public static SpatialCoordinateSystem ToSpatialCoordinateSystem(this SpatialGraph.SpatialGraphLocation location)
        {
            return SpatialGraphInteropPreview.CreateCoordinateSystemForNode(location.NodeId, location.Position, location.Orientation);
        }

        public static SpatialCoordinateSystem ToSpatialCoordinateSystem(this SpatialGraph.SpatialGraphCoordinateSystem spatialGraphCoordinateSystem)
        {
            System.Numerics.Vector3 position;
            System.Numerics.Vector3 scale;
            System.Numerics.Quaternion orientation;

            if (!System.Numerics.Matrix4x4.Decompose(spatialGraphCoordinateSystem.CoordinateSystemToNodeTransform, out scale, out orientation, out position))
            {
                throw new ArgumentException($"spatialGraphCoordinateSystem.CoordinateSystemToNodeTransform is not decomposable: {spatialGraphCoordinateSystem.CoordinateSystemToNodeTransform}");
            }

            return SpatialGraphInteropPreview.CreateCoordinateSystemForNode(spatialGraphCoordinateSystem.NodeId, position, orientation);
        }

        public static SpatialGraph.SpatialGraphCoordinateSystem? TryToSpatialGraph(this SpatialCoordinateSystem coordinateSystem)
        {
            SpatialCoordinateSystem spatialGraphCoordinateSystem;
            return coordinateSystem.TryToSpatialGraph(out spatialGraphCoordinateSystem);
        }

        public static SpatialGraph.SpatialGraphCoordinateSystem? TryToSpatialGraph(this SpatialCoordinateSystem coordinateSystem, out SpatialCoordinateSystem spatialGraphCoordinateSystem)
        {
            spatialGraphCoordinateSystem = null;
            if (coordinateSystem == null)
            { 
                return null;
            }

            var frameOfReference = SpatialGraphInteropPreview.TryCreateFrameOfReference(coordinateSystem);
            if (frameOfReference == null)
            {
                return null;
            }

            spatialGraphCoordinateSystem = frameOfReference.CoordinateSystem;
            return new SpatialGraph.SpatialGraphCoordinateSystem
            {
                NodeId = frameOfReference.NodeId,
                CoordinateSystemToNodeTransform = frameOfReference.CoordinateSystemToNodeTransform,
            };
        }
#endif

        /// <summary>
        /// Convert a pose in right-handed coordinate system to location in left-handed coordinate system.
        /// </summary>
        public static ObjectAnchorsLocation ToUnityLocation(this System.Numerics.Matrix4x4 transform)
        {
            System.Numerics.Vector3 position;
            System.Numerics.Vector3 scale;
            System.Numerics.Quaternion orientation;
            System.Numerics.Matrix4x4.Decompose(transform, out scale, out orientation, out position);

            return new ObjectAnchorsLocation
            {
                Position = position.ToUnity(),
                Orientation = orientation.ToUnity(),
            };
        }

        public static Pose ToUnityPose(this System.Numerics.Matrix4x4 transform)
        {
            System.Numerics.Vector3 position;
            System.Numerics.Vector3 scale;
            System.Numerics.Quaternion orientation;
            System.Numerics.Matrix4x4.Decompose(transform, out scale, out orientation, out position);

            return new Pose(position.ToUnity(), orientation.ToUnity());
        }

        public static Pose ToUnity(this SpatialGraph.SpatialPose pose)
        {
            return new Pose(pose.Position.ToUnity(), pose.Orientation.ToUnity());
        }

        public static SpatialGraph.SpatialPose ToSpatialGraph(this Pose pose)
        {
            return new SpatialGraph.SpatialPose()
            {
                Position = pose.position.ToSystem(),
                Orientation = pose.rotation.ToSystem()
            };
        }

        public static ObjectAnchorsFieldOfView ToUnity(this SpatialGraph.SpatialFieldOfView fov)
        {
            return new ObjectAnchorsFieldOfView
            {
                Position = fov.Position.ToUnity(),
                Orientation = fov.Orientation.ToUnity(),
                FarDistance = fov.FarDistance,
                HorizontalFieldOfViewInDegrees = fov.HorizontalFieldOfViewInDegrees,
                AspectRatio = fov.AspectRatio,
            };
        }

        public static SpatialGraph.SpatialFieldOfView ToSpatialGraph(this ObjectAnchorsFieldOfView fov)
        {
            return new SpatialGraph.SpatialFieldOfView
            {
                Position = fov.Position.ToSystem(),
                Orientation = fov.Orientation.ToSystem(),
                FarDistance = fov.FarDistance,
                HorizontalFieldOfViewInDegrees = fov.HorizontalFieldOfViewInDegrees,
                AspectRatio = fov.AspectRatio,
            };
        }

        public static ObjectAnchorsBoundingBox ToUnity(this SpatialGraph.SpatialOrientedBox box)
        {
            return new ObjectAnchorsBoundingBox
            {
                Center = box.Center.ToUnity(),
                Orientation = box.Orientation.ToUnity(),
                Extents = new Vector3(box.Extents.X, box.Extents.Y, box.Extents.Z),
            };
        }

        public static SpatialGraph.SpatialOrientedBox ToSpatialGraph(this ObjectAnchorsBoundingBox box)
        {
            return new SpatialGraph.SpatialOrientedBox
            {
                Center = box.Center.ToSystem(),
                Orientation = box.Orientation.ToSystem(),
                Extents = new System.Numerics.Vector3(box.Extents.x, box.Extents.y, box.Extents.z),
            };
        }

        public static ObjectAnchorsSphere ToUnity(this SpatialGraph.SpatialSphere sphere)
        {
            return new ObjectAnchorsSphere
            {
                Center = sphere.Center.ToUnity(),
                Radius = sphere.Radius
            };
        }

        public static SpatialGraph.SpatialSphere ToSpatialGraph(this ObjectAnchorsSphere sphere)
        {
            return new SpatialGraph.SpatialSphere
            {
                Center = sphere.Center.ToSystem(),
                Radius = sphere.Radius
            };
        }
    }
}
#endif // UNITY_WSA
