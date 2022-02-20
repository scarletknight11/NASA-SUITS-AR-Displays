using Microsoft.Azure.RemoteRendering;
using Microsoft.Azure.RemoteRendering.Unity;
using UnityEngine;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    /// <summary>
    /// EXPERIMENTAL: Changing the origin of the stage space will break local/remote content alignment for a brief moment.
    /// Thus, it is currently only intended to be used in combination with 'World Locking Tools' which exhibit only very small changes over time.
    /// To make World Locking Tools (https://microsoft.github.io/MixedReality-WorldLockingTools-Unity/README.html) work within ARR,
    /// this component needs to be attached to the camera's parent GameObject.
    /// </summary>
    public class StageSpace : MonoBehaviour
    {
        void LateUpdate()
        {
            if (RemoteManagerUnity.IsConnected && RemoteManagerUnity.CurrentSession != null)
            {
                if (RemoteManagerUnity.CurrentSession.GraphicsBinding.Api != GraphicsApiType.SimD3D11)
                {
                    RemoteManagerUnity.CurrentSession.Connection.StageSpaceSettings.Position = gameObject.transform.position.toRemotePos();
                    RemoteManagerUnity.CurrentSession.Connection.StageSpaceSettings.Rotation = gameObject.transform.rotation.toRemote();
                }
            }
        }
    }
}
