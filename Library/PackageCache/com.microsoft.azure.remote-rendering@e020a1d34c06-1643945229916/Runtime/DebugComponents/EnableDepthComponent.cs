using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Azure.RemoteRendering;
using Microsoft.Azure.RemoteRendering.Unity;

/// <summary>
/// This script can be used to enable or disable depth composition
/// </summary>
public class EnableDepthComponent : MonoBehaviour
{
    [EnableInSimulation]
    public bool EnableDepth {
        get 
        {
            if (RemoteManagerUnity.IsConnected)
            {
                return RemoteManagerUnity.CurrentSession.Connection.CameraSettings.EnableDepth;
            }
            return false;
        }
        set
        {
            if (RemoteManagerUnity.IsConnected)
            {
                var cameraSettings = RemoteManagerUnity.CurrentSession.Connection.CameraSettings;
                cameraSettings.EnableDepth = value;
            }
        }
    }
}
