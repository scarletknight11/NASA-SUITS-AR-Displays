using UnityEngine;
using Microsoft.Azure.RemoteRendering.Unity;
using Microsoft.Azure.RemoteRendering;

/// <summary>
/// This script can be used to change the settings for server side outline rendering for selected objects.
/// </summary>
public class OutlineSettingsComponent : MonoBehaviour
{
    [EnableInSimulation]
    public Color4Ub OutlineColor
    {
        get
        {
            if (RemoteManagerUnity.IsConnected)
            {
                return RemoteManagerUnity.CurrentSession.Connection.OutlineSettings.Color;
            }
            return new Color4Ub();
        }
        set
        {
            if (RemoteManagerUnity.IsConnected)
            {
                var outlineSettings = RemoteManagerUnity.CurrentSession.Connection.OutlineSettings;
                outlineSettings.Color = value;
            }
        }
    }

    [EnableInSimulation]
    public float PulseRate
    {
        get
        {
            if (RemoteManagerUnity.IsConnected)
            {
                return RemoteManagerUnity.CurrentSession.Connection.OutlineSettings.PulseRateHz;
            }
            return 0;
        }
        set
        {
            if (RemoteManagerUnity.IsConnected)
            {
                var outlineSettings = RemoteManagerUnity.CurrentSession.Connection.OutlineSettings;
                outlineSettings.PulseRateHz = value;
            }
        }
    }

    [EnableInSimulation]
    public float PulseIntensity
    {
        get
        {
            if (RemoteManagerUnity.IsConnected)
            {
                return RemoteManagerUnity.CurrentSession.Connection.OutlineSettings.PulseIntensity;
            }
            return 0;
        }
        set
        {
            if (RemoteManagerUnity.IsConnected)
            {
                var outlineSettings = RemoteManagerUnity.CurrentSession.Connection.OutlineSettings;
                outlineSettings.PulseIntensity = value;
            }
        }
    }
}
