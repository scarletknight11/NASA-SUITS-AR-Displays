using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// This component makes the game object follow the position and rotation of the sensor.
    /// </summary>
    public class FollowSensorTransform : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Smooth factor used for the game object movement and rotation.")]
        public float smoothFactor = 0f;

        [Tooltip("Whether to follow the sensor's depth or color camera pose.")]
        public ReferencePose referencePose = ReferencePose.DepthCameraPose;
        public enum ReferencePose : int { DepthCameraPose = 0, ColorCameraPose = 1 }; 


        // reference to the KinectManager
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        // sensor position and rotation
        Vector3 sensorWorldPos = Vector3.zero;
        Quaternion sensorWorldRot = Quaternion.identity;


        void Start()
        {
            // get reference to KinectManager
            kinectManager = KinectManager.Instance;
            sensorData = kinectManager ? kinectManager.GetSensorData(sensorIndex) : null;
        }

        void Update()
        {
            if(kinectManager && kinectManager.IsInitialized())
            {
                Transform sensorTrans = kinectManager.GetSensorTransform(sensorIndex);

                if(sensorTrans != null)
                {
                    sensorWorldPos = sensorTrans.position;
                    sensorWorldRot = sensorTrans.rotation;

                    if (referencePose != ReferencePose.DepthCameraPose && sensorData != null && sensorData.sensorInterface != null)
                    {
                        Matrix4x4 sensorTransMat = Matrix4x4.identity;
                        sensorTransMat.SetTRS(sensorTrans.position, sensorTrans.rotation, Vector3.one);

                        Matrix4x4 sensorToRefMat = sensorData.sensorInterface.GetDepthToColorCameraMatrix();

                        sensorTransMat = sensorTransMat * sensorToRefMat;
                        sensorWorldPos = sensorTransMat.GetColumn(3);
                        sensorWorldRot = sensorTransMat.rotation;
                    }

                }

                if (smoothFactor != 0f)
                {
                    transform.position = Vector3.Lerp(transform.position, sensorWorldPos, smoothFactor * Time.deltaTime);
                    transform.rotation = Quaternion.Slerp(transform.rotation, sensorWorldRot, smoothFactor * Time.deltaTime);
                }
                else
                {
                    transform.position = sensorWorldPos;
                    transform.rotation = sensorWorldRot;
                }
            }
        }

    }
}
