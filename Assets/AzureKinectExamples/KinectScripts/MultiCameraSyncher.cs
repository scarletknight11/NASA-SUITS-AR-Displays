using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// MultiCameraSyncher enables synchronization of frames between the master and the subordinate sensors.
    /// </summary>
    public class MultiCameraSyncher : MonoBehaviour
    {

        void Start()
        {
            KinectManager kinectManager = KinectManager.Instance;
            int numSensors = kinectManager ? kinectManager.GetSensorCount() : 0;

            for (int i = 0; i < numSensors; i++)
            {
                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(i);

                if(sensorData != null && sensorData.sensorInterface != null)
                {
                    // enable master-sub frame sync
                    bool bSuccess = sensorData.sensorInterface.EnableSensorSync(sensorData, true);
                    if (bSuccess)
                        Debug.Log("Enabled frame sync for S" + i + " - " + sensorData.sensorIntPlatform.ToString() + ", Id:" + sensorData.sensorInterface.GetSensorDeviceId());
                }
            }

        }

    }
}
