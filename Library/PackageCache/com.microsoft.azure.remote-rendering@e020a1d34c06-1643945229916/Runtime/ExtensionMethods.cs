using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using WorldPosition = Microsoft.Azure.RemoteRendering.Double3;

#if XR_MANAGEMENT_PLUGIN_AVAILABLE
using UnityEngine.XR.Management;
#endif

#if MR_OPENXR_PLUGIN_AVAILABLE
using UnityEngine.XR.OpenXR;
#endif

namespace Microsoft.Azure.RemoteRendering.Unity
{
    /// <summary>
    /// When calling GetOrCreateGameObject, creations of the MonoBehaviors for ARR Components (ARRMeshComponent, ARRSpotLightComponent, etc.) can be toggled through the UnityCreationMode enum.
    /// Creating the components will create additional performance overhead and, if the components will not be accessed, is not recommended.
    /// </summary>
    public enum UnityCreationMode
    {
        /// <summary>
        /// Create ARR Components associated with the remote object.
        /// </summary>
        CreateUnityComponents = 0,

        /// <summary>
        /// Do not create ARR Components associated with the remote object.
        /// </summary>
        DoNotCreateUnityComponents = 1
    }

    public static class CommonExtensions
    {
        public static UnityEngine.Vector2 toUnity(this Float2 vec)
        {
            return new Vector2(vec.X, vec.Y);
        }

        public static UnityEngine.Vector3 toUnity(this Float3 vec)
        {
            return new Vector3(vec.X, vec.Y, vec.Z);
        }
        public static UnityEngine.Vector3 toUnityPos(this Double3 vec)
        {
            return new Vector3((float)vec.X, (float)vec.Y, (float)vec.Z);
        }
        public static UnityEngine.Vector3 toUnityDir(this Double3 vec)
        {
            return new Vector3((float)vec.X, (float)vec.Y, (float)vec.Z);
        }

        public static UnityEngine.Vector4 toUnity(this Float4 vec)
        {
            return new Vector4(vec.X, vec.Y, vec.Z, vec.W);
        }

        public static UnityEngine.Matrix4x4 toUnity(this Matrix4x4 mat)
        {
            return new UnityEngine.Matrix4x4(
                mat.Column0.toUnity(),
                mat.Column1.toUnity(),
                mat.Column2.toUnity(),
                mat.Column3.toUnity());
        }

        public static UnityEngine.Quaternion toUnity(this Quaternion quat)
        {
            return new UnityEngine.Quaternion(quat.X, quat.Y, quat.Z, quat.W);
        }

        public static UnityEngine.Bounds toUnity(this Bounds bounds)
        {
            UnityEngine.Vector3 minB = bounds.Min.toUnityPos();
            UnityEngine.Vector3 maxB = bounds.Max.toUnityPos();
            return new UnityEngine.Bounds((minB + maxB) * 0.5f, maxB - minB);
        }

        public static UnityEngine.Color toUnity(this Color4 color)
        {
            return new UnityEngine.Color(color.R, color.G, color.B, color.A);
        }

        public static Float2 toRemote(this Vector2 vec)
        {
            return new Float2(vec.x, vec.y);
        }

        public static Float3 toRemote(this Vector3 vec)
        {
            return new Float3(vec.x, vec.y, vec.z);
        }

        public static Double3 toRemotePos(this Vector3 vec)
        {
            return new Double3(vec.x, vec.y, vec.z);
        }

        public static WorldPosition toRemoteDir(this Vector3 vec)
        {
            return new WorldPosition(vec.x, vec.y, vec.z);
        }

        public static Float4 toRemote(this Vector4 vec)
        {
            return new Float4(vec.x, vec.y, vec.z, vec.w);
        }

        public static Matrix4x4 toRemote(this UnityEngine.Matrix4x4 mat)
        {
            var res = new Matrix4x4(
                mat.GetColumn(0).toRemote(),
                mat.GetColumn(1).toRemote(),
                mat.GetColumn(2).toRemote(),
                mat.GetColumn(3).toRemote());
            return res;
        }

        public static Quaternion toRemote(this UnityEngine.Quaternion quat)
        {
            return new Quaternion(quat.x, quat.y, quat.z, quat.w);
        }

        public static Bounds toRemote(this UnityEngine.Bounds bounds)
        {
            return new Bounds(bounds.min.toRemotePos(), bounds.max.toRemotePos());
        }

        public static Color4 toRemoteColor4(this UnityEngine.Color color)
        {
            return new Color4(color.r, color.g, color.b, color.a);
        }

        public static UnityEngine.Color32 toUnity(this Color4Ub color)
        {
            return new UnityEngine.Color32(color.Channels.R, color.Channels.G, color.Channels.B, color.Channels.A);
        }

        public static Color4Ub toRemote(this UnityEngine.Color32 color)
        {
            return new Color4Ub(color.r, color.g, color.b, color.a);
        }

        public static Color4Ub toRemote(this UnityEngine.Color color)
        {
            Color32 color32 = color;
            return new Color4Ub(color32.r, color32.g, color32.b, color32.a);
        }
    }

    /// <summary>
    /// Unity specific extensions to Entity and GameObject classes.
    /// </summary>
    public static class EntityExtensions
    {
        /// <summary>
        /// Get GameObject for an Entity. Create a new GameObject if one does not exist. See RemoteEntitySyncObject.CreateGameObject for more information.
        /// <para>
        /// This function can optionally create all the ARRComponents associated with the remote entity. See UnityCreationMode.
        /// </para>
        /// </summary>
        public static GameObject GetOrCreateGameObject(this Entity ent, UnityCreationMode mode)
        {
            var go = ent.GetExistingGameObject();
            if (go == null)
            {
                go = RemoteEntitySyncObject.CreateGameObject(ent);
            }

            if (mode == UnityCreationMode.CreateUnityComponents)
            {
                RemoteManagerUnity.CreateUnityComponents(ent, go);
            }

            return go;
        }

        [Flags]
        public enum DestroyGameObjectFlags
        {
            None = 0,
            /// <summary>
            /// Destroys all game objects up the hierarchy that would be left without children.
            /// </summary>
            DestroyEmptyParents = 1,
            /// <summary>
            /// Keeps the last parent with bound remote entity.
            /// </summary>
            KeepRemoteRoot = 2
        }

        /// <summary>
        /// Destroys the Unity Game Object bound to this remote Entity without destroying the remote Entity.
        /// <para>
        /// This function won't try to destroy any parent Game Objects that could have been created by GetOrCreateGameObject call.
        /// </para>
        /// </summary>
        public static void DestroyGameObject(this Entity ent, DestroyGameObjectFlags destroyFlags)
        {
            var go = ent.GetExistingGameObject();
            if(go == null)
            {
                return;
            }

            RemoteEntitySyncObject sync;
            GameObject previous = null;
            if (destroyFlags.HasFlag(DestroyGameObjectFlags.DestroyEmptyParents))
            {
                sync = go.GetComponent<RemoteEntitySyncObject>();
                while (go.transform.parent != null && go.transform.parent.childCount == 1)
                {
                    previous = go;
                    go = go.transform.parent.gameObject;

                    //Unbind on our way up the hierarchy for performance, keep the last sync bound in case keepRemoteRoot is true.
                    var syncNext = go.GetComponent<RemoteEntitySyncObject>();
                    if(syncNext == null)
                    {
                        break;
                    }
                    //unbind first entity recursively since it doesn't need to be leaf
                    sync.Unbind(sync.Entity == ent); 
                    sync = syncNext;
                }
            }

            if (destroyFlags.HasFlag(DestroyGameObjectFlags.KeepRemoteRoot))
            {
                go = previous;
            }
            else
            {
                go?.GetComponent<RemoteEntitySyncObject>().Unbind(true);
            }

            if (go != null)
            {
                GameObject.Destroy(go);
            }
        }

        /// <summary>
        /// Get an existing GameObject for an Entity. If no game object has been mapped to this entity then null.
        /// </summary>
        public static GameObject GetExistingGameObject(this Entity ent)
        {
            RemoteEntitySyncObject outObj = null;
            if (RemoteEntitySyncObject.TryGetSyncObject(ent, out outObj))
            {
                return outObj.gameObject;
            }
            return null;
        }

        /// <summary>
        /// Create new or return existing ARR Component and Unity binding.
        /// </summary>
        public static TRemoteComponent EnsureArrComponent<TRemoteComponent>(this GameObject go, RenderingSession session) where TRemoteComponent : ARRComponentBase
        {
            var cmp = go.GetComponent<TRemoteComponent>();
            if (cmp != null)
            {
                if (cmp.ComponentBase.Valid)
                {
                    return cmp;
                }
            }
            else
            {
                cmp = go.AddComponent<TRemoteComponent>();
            }

            if (!cmp.Create(session))
            {
                Component.Destroy(cmp);
                return null;
            }
            return cmp;
        }

        /// <summary>
        /// Create a new ARR Component and Unity binding.  This call will fail if a component of that type already exists in the ARR layer.
        /// </summary>
        public static TRemoteComponent CreateArrComponent<TRemoteComponent>(this GameObject go, RenderingSession session) where TRemoteComponent : ARRComponentBase
        {
            var cmp = go.GetComponent<TRemoteComponent>();
            if (cmp != null)
            {
                return null;
            }

            cmp = go.AddComponent<TRemoteComponent>();
            if (!cmp.Create(session))
            {
                Component.Destroy(cmp);
                return null;
            }
            return cmp;
        }

        /// <summary>
        /// Initialize an ARR Unity binding with an already existing ARR Component.
        /// </summary>
        public static bool BindArrComponent<TRemoteComponent>(this GameObject go, ComponentBase arrCmp) where TRemoteComponent : ARRComponentBase
        {
            var component = go.GetComponent<TRemoteComponent>();
            if (component == null)
            {
                component = go.AddComponent<TRemoteComponent>();
            }
            return component.Bind(arrCmp);
        }

        /// <summary>
        /// Bind an already existing Unity game object to an ARR.Entity. See RemoteRenderingSyncObject.Bind for more info.
        /// </summary>
        /// <param name="ent"></param>
        /// <param name="go"></param>
        public static void BindToUnityGameObject(this Entity ent, GameObject go)
        {
            RemoteEntitySyncObject sync = go.GetComponent<RemoteEntitySyncObject>();
            if (sync == null)
            {
                sync = go.AddComponent<RemoteEntitySyncObject>();
            }

            sync.Bind(ent, false);
            sync.SyncToRemote();
        }
    }

    public static class GraphicsBindingExtensions
    {
#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
        public class AppSpaceAccessor : UnityEngine.XR.OpenXR.Features.OpenXRFeature
        {
            public static ulong GetCurrentAppSpaceHandle()
            {
                return GetCurrentAppSpace();
            }
        }
#endif

        public static Microsoft.Azure.RemoteRendering.FocusPointResult GetRemoteFocusPoint(this GraphicsBinding binding, out Microsoft.Azure.RemoteRendering.Float3 position, out Microsoft.Azure.RemoteRendering.Float3 normal, out Microsoft.Azure.RemoteRendering.Float3 velocity)
        {
            position = new Float3(0, 0, 0);
            normal = new Float3(0, 0, 0);
            velocity = new Float3(0, 0, 0);

            Microsoft.Azure.RemoteRendering.FocusPointResult _validResult = FocusPointResult.Invalid;

#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
            var xrLoader = XRGeneralSettings.Instance?.Manager?.activeLoader;
            if (xrLoader is UnityEngine.XR.OpenXR.OpenXRLoaderBase)
            {
                ulong appSpaceHandle = AppSpaceAccessor.GetCurrentAppSpaceHandle();

                var _binding = (binding as GraphicsBindingOpenXrD3d11);
                if (_binding != null)
                {
                    _validResult = _binding.GetRemoteFocusPoint(appSpaceHandle, out position, out normal, out velocity);
                }
            }
            else
#endif
            {
                // Obtain the focus point using the same coordinate system that is used as user coordinate system.
#if WINDOWS_UWP
            if (binding is GraphicsBindingWmrD3d11)
            {
                IntPtr ptr = IntPtr.Zero;
#if XR_PLUGIN_AVAILABLE
                ptr = UnityEngine.XR.WindowsMR.WindowsMREnvironment.OriginSpatialCoordinateSystem;
#elif !UNITY_2020_1_OR_NEWER
                ptr = UnityEngine.XR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr();
#endif
                var _binding = (binding as GraphicsBindingWmrD3d11);
                if (_binding != null)
                {
                    _validResult = _binding.GetRemoteFocusPoint(ptr, out position, out normal, out velocity);
                }
            }
            else
#endif
                {
                    var _binding = (binding as GraphicsBindingSimD3d11);
                    if (_binding != null)
                    {
                        _validResult = _binding.GetRemoteFocusPoint(out position, out normal, out velocity);
                    }
                }
            }

            return _validResult;
        }
    }
}

