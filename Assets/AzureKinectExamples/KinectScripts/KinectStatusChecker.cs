using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// Checks the status of the connected sensors and restarts the sensors, if needed
    /// </summary>
    public class KinectStatusChecker : MonoBehaviour
    {
        [Tooltip("Time between sensor-status checks, in seconds.")]
        public float timeBetweenChecks = 1f;

        [Tooltip("Max wait time before restart (in seconds), when the check is not successful.")]
        public float maxWaitTime = 5f;

        [Tooltip("Whether to restart the sensors or not, after the max wait time after unsuccessful checks is reached.")]
        public bool restartAfterMaxWait = true;

        [Tooltip("Whether all sensors are currently alive or not.")]
        [HideInInspector]
        public bool areSensorsAlive = false;


        // references
        private IEnumerator checkRoutine = null;
        private KinectManager kinectManager = null;

        private int numSensors = 0;
        private float lastCheckTime = 0f;
        private ulong[] lastColorFrameTimestamps = null;
        private ulong[] lastDepthFrameTimestamps = null;


        void OnEnable()
        {
            //Debug.Log("Starting check-sensors routine...");
            checkRoutine = CheckSensorStatus();
            StartCoroutine(checkRoutine);
        }


        void OnDisable()
        {
            if(checkRoutine != null)
            {
                //Debug.Log("Stopping check-sensors routine...");
                StopCoroutine(checkRoutine);
                checkRoutine = null;
            }
        }


        // co-routine to check the sensor status periodically
        private IEnumerator CheckSensorStatus()
        {
            while(true)
            {
                if (kinectManager == null)
                {
                    kinectManager = KinectManager.Instance;
                    //Debug.Log("Got kinect manager: " + kinectManager);

                    if (kinectManager != null)
                    {
                        numSensors = kinectManager.GetSensorCount();
                        lastColorFrameTimestamps = new ulong[numSensors];
                        lastDepthFrameTimestamps = new ulong[numSensors];
                    }
                }

                if (kinectManager != null)
                {
                    if(CheckAllSensors() || lastCheckTime == 0f)
                    {
                        // all sensor have new frames
                        areSensorsAlive = true;
                        lastCheckTime = Time.time;
                        //Debug.Log("Success checking sensor states at " + lastCheckTime);
                    }
                    else
                    {
                        // no frames from at least one sensor
                        areSensorsAlive = false;
                        float waitTime = Time.time - lastCheckTime;
                        Debug.LogWarning(string.Format("Failed checking sensor states. Wait time: {0:F1} s.", waitTime));

                        if (waitTime >= maxWaitTime)
                        {
                            if(restartAfterMaxWait)
                            {
                                Debug.LogWarning("Trying to restart sensors...");
                                kinectManager.StopDepthSensors();
                                kinectManager.StartDepthSensors();
                                Debug.LogWarning("Depth sensors successfully restarted!");
                            }

                            kinectManager = null;
                            lastCheckTime = 0f;
                        }
                    }
                }

                yield return new WaitForSeconds(timeBetweenChecks);
            }
        }


        // checks if all sensors have produced frames in the meantime
        private bool CheckAllSensors()
        {
            for(int s = 0; s < numSensors; s++)
            {
                ulong curColorFrameTimestamp = kinectManager.GetColorFrameTime(s);
                ulong curDepthFrameTimestamp = kinectManager.GetDepthFrameTime(s);

                if(lastColorFrameTimestamps[s] != curColorFrameTimestamp || lastDepthFrameTimestamps[s] != curDepthFrameTimestamp)
                {
                    // color or depth frame has been updated in the meantime
                    lastColorFrameTimestamps[s] = curColorFrameTimestamp;
                    lastDepthFrameTimestamps[s] = curDepthFrameTimestamp;
                }
                else
                {
                    // no frames have been received in the meantime
                    return false;
                }
            }

            return true;
        }

    }
}
