using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    public class JointPositionView : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc. -1 means the sensor doesn't matter")]
        public int sensorIndex = -1;

        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("The Kinect joint we want to track.")]
        public KinectInterop.JointType trackedJoint = KinectInterop.JointType.Pelvis;

        [Tooltip("Whether the movement is relative to transform's initial position, or is in absolute coordinates.")]
        public bool relToInitialPos = false;

        [Tooltip("Whether the z-movement is inverted or not.")]
        public bool invertedZMovement = false;

        [Tooltip("Scene object that will be used to represent the sensor's position and rotation in the scene.")]
        public Transform sensorTransform;

        //public bool moveTransform = true;

        [Tooltip("Smooth factor used for the joint position smoothing.")]
        public float smoothFactor = 0f;

        [Tooltip("UI-Text to display the current joint position.")]
        public UnityEngine.UI.Text debugText;


        private Vector3 initialPosition = Vector3.zero;
        private ulong currentUserId = 0;
        private Vector3 initialUserOffset = Vector3.zero;

        private Vector3 vPosJoint = Vector3.zero;


        void Start()
        {
            initialPosition = transform.position;
        }

        void Update()
        {
            KinectManager kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized())
            {
                if (sensorIndex >= 0 || kinectManager.IsUserDetected(playerIndex))
                {
                    ulong userId = sensorIndex < 0 ? kinectManager.GetUserIdByIndex(playerIndex) : (ulong)playerIndex;

                    if (sensorIndex >= 0 || kinectManager.IsJointTracked(userId, trackedJoint))
                    {
                        if (sensorTransform != null)
                        {
                            if(sensorIndex < 0)
                                vPosJoint = kinectManager.GetJointKinectPosition(userId, trackedJoint, true);
                            else
                                vPosJoint = kinectManager.GetSensorJointKinectPosition(sensorIndex, (int)userId, trackedJoint, true);
                        }
                        else
                        {
                            if (sensorIndex < 0)
                                vPosJoint = kinectManager.GetJointPosition(userId, trackedJoint);
                            else
                                vPosJoint = kinectManager.GetSensorJointPosition(sensorIndex, (int)userId, trackedJoint);
                        }

                        vPosJoint.z = invertedZMovement ? -vPosJoint.z : vPosJoint.z;


                        if (sensorTransform)
                        {
                            vPosJoint = sensorTransform.TransformPoint(vPosJoint);
                        }

                        if (userId != currentUserId)
                        {
                            currentUserId = userId;
                            initialUserOffset = vPosJoint;
                        }

                        Vector3 vPosObject = relToInitialPos ? initialPosition + (vPosJoint - initialUserOffset) : vPosJoint;

                        if (debugText)
                        {
                            debugText.text = string.Format("{0} - ({1:F2}, {2:F2}, {3:F2})", trackedJoint,
                                                                                   vPosObject.x, vPosObject.y, vPosObject.z);
                        }

                        //if(moveTransform)
                        {
                            if (smoothFactor != 0f)
                                transform.position = Vector3.Lerp(transform.position, vPosObject, smoothFactor * Time.deltaTime);
                            else
                                transform.position = vPosObject;
                        }
                    }

                }

            }
        }

    }
}
