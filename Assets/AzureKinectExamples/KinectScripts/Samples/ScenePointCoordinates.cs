using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// ScenePointCoordinates demonstrates how to get the scene point cloud coordinates as an array of Vector3
    /// </summary>
    public class ScenePointCoordinates : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Timestamp of the last update.")]
        public ulong lastUpdateTime = 0;

        // The point cloud coordinates
        [HideInInspector]
        public Vector3[] pointCloud = null;

        // reference to the KinectManager & sensor data
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        // space table
        private Vector3[] spaceTable = null;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            sensorData = kinectManager != null ? kinectManager.GetSensorData(sensorIndex) : null;
        }

        void Update()
        {
            if (sensorData == null || sensorData.sensorInterface == null)  // check if the sensor was initialized
                return;
            if (sensorData.depthImageWidth == 0 || sensorData.depthImageHeight == 0)  // check if the depth stream was started
                return;

            // init or reinit the output array and the space table, as needed
            int numPoints = sensorData.depthImageWidth * sensorData.depthImageHeight;
            if (pointCloud == null || pointCloud.Length != numPoints)
            {
                pointCloud = new Vector3[numPoints];
                spaceTable = sensorData.sensorInterface.GetDepthCameraSpaceTable(sensorData);
            }

            // calculate the point cloud coordinates. this block is slow, but easily readable (I think it can be further optimized, if needed)
            if(spaceTable != null && sensorData.depthImage != null && lastUpdateTime != sensorData.lastDepthFrameTime)
            {
                lastUpdateTime = sensorData.lastDepthFrameTime;

                for(int i = 0; i < numPoints; i++)
                {
                    float fDepth = (float)sensorData.depthImage[i] / 1000f;
                    pointCloud[i] = spaceTable[i] * fDepth;
                }

                // show a sample at the center of the image. feel free to comment it out
                int iC = (sensorData.depthImageHeight >> 1) * sensorData.depthImageWidth + (sensorData.depthImageWidth >> 1);
                Debug.Log(string.Format("center values: {0:F2} {1:F2} {2:F2}", pointCloud[iC - 1], pointCloud[iC], pointCloud[iC + 1]));
            }

        }

    }
}
