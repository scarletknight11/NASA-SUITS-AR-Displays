using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.InteropServices;

using UnityEngine;

namespace Microsoft.Azure.RemoteRendering.Unity
{

    /// <summary>
    /// Base class for all ARR Components that have been wrapped in a MonoBehaviour.
    /// </summary>
    public abstract class ARRComponentBase : MonoBehaviour
    {
        private ObjectType _objectType;

        [Browsable(false)]
        public ComponentBase ComponentBase
        {
            get;
            private set;
        }

        public bool IsComponentValid
        {
            get { return ComponentBase != null && ComponentBase.Valid; }
        }

        protected ARRComponentBase(ObjectType type)
        {
            _objectType = type;
        }

        public virtual bool Bind(ComponentBase component)
        {
            if (component == null || !component.Valid)
            {
                Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Invalid component passed to {nameof(ARRComponentBase)}.{nameof(Bind)}!");
                return false;
            }

            if (component.Type != _objectType)
            {
                Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "{0}", $"Invalid type passed to {nameof(ARRComponentBase)}.{nameof(Bind)}!");
                return false;
            }

            if (IsComponentValid && !ComponentBase.Equals(component))
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Initializing component twice!");
                return false;
            }

            ComponentBase = component;
            this.enabled = ComponentBase.Enabled;
            return true;
        }

        /// <summary>
        /// Unbind Unity from remote component.
        /// This enables destruction of Unity component without destroying the remote component.
        /// </summary>
        public virtual void Unbind()
        {
            ComponentBase = null;
        }

        private void OnDestroy()
        {
            if (IsComponentValid)
            {
                ComponentBase.Destroy();
            }
        }

        public virtual bool Create(RenderingSession session)
        {
            if (IsComponentValid)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", "Initializing component twice!");
                return false;
            }

            if( session.ConnectionStatus != ConnectionStatus.Connected)
            {
                return false;
            }

            bool locallyCreatedSync = false;
            var rrSync = gameObject.GetComponent<RemoteEntitySyncObject>();
            if (rrSync == null)
            {
                locallyCreatedSync = true;
                rrSync = gameObject.AddComponent<RemoteEntitySyncObject>();
            }

            if (!rrSync.IsEntityValid)
            {
                rrSync.CreateRemoteEntity(session);
            }

            if (!rrSync.IsEntityValid && locallyCreatedSync)
            {
                UnityEngine.Component.Destroy(rrSync);
                rrSync = null;
                return false;
            }

            ComponentBase = session.Connection.CreateComponent(_objectType, rrSync.Entity);
            ComponentBase.Enabled = this.enabled;
            return IsComponentValid;
        }

        private void OnEnable()
        {
            if (IsComponentValid)
            {
                ComponentBase.Enabled = true;
            }
        }

        private void OnDisable()
        {
            if (IsComponentValid)
            {
                ComponentBase.Enabled = false;
            }
        }
    }

    /// <summary>
    /// Base class for all ARR Components that have been wrapped in a MonoBehaviour.
    /// </summary>
    public abstract class ARRTypedComponentBase<TRemoteComponent> : ARRComponentBase
    where TRemoteComponent : ComponentBase
    {
        public TRemoteComponent RemoteComponent
        {
            get { return ComponentBase as TRemoteComponent; }
            private set { }
        }

        protected ARRTypedComponentBase(ObjectType type) : base(type)
        {
        }
    }

    /// <summary>
    /// Wraps a CutPlaneComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Cut Plane")]
    public class ARRCutPlaneComponent : ARRTypedComponentBase<CutPlaneComponent>
    {
        public ARRCutPlaneComponent() : base(ObjectType.CutPlaneComponent)
        { }
    }

    /// <summary>
    ///  Wraps a DirectionalLightComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Lights/Directional Light")]
    public class ARRDirectionalLightComponent : ARRTypedComponentBase<DirectionalLightComponent>
    {
        public ARRDirectionalLightComponent() : base(ObjectType.DirectionalLightComponent) { }
    }

    /// <summary>
    ///  Wraps a HierarchicalStateOverrideComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Hierarchical State Override")]
    public class ARRHierarchicalStateOverrideComponent : ARRTypedComponentBase<HierarchicalStateOverrideComponent>
    {
        public ARRHierarchicalStateOverrideComponent() : base(ObjectType.HierarchicalStateOverrideComponent)
        { }
    }

    /// <summary>
    ///  Wraps a MeshComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Mesh")]
    public class ARRMeshComponent : ARRTypedComponentBase<MeshComponent>
    {
        public ARRMeshComponent() : base(ObjectType.MeshComponent)
        { }
    }

    /// <summary>
    ///  Wraps a PointLightComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Lights/Point Light")]
    public class ARRPointLightComponent : ARRTypedComponentBase<PointLightComponent>
    {
        public ARRPointLightComponent() : base(ObjectType.PointLightComponent)
        { }
    }

    /// <summary>
    ///  Wraps a SpotLightComponent in a MonoBehaviour for interoperability.
    /// </summary>
    [AddComponentMenu("ARR/Lights/Spot Light")]
    public class ARRSpotLightComponent : ARRTypedComponentBase<SpotLightComponent>
    {
        public ARRSpotLightComponent() : base(ObjectType.SpotLightComponent)
        { }
    }


}

