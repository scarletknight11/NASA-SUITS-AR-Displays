using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    public class JointAngleCalculator : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("First end joint.")]
        public KinectInterop.JointType endJoint1 = KinectInterop.JointType.KneeRight;

        [Tooltip("Middle joint.")]
        public KinectInterop.JointType middleJoint = KinectInterop.JointType.AnkleRight;

        [Tooltip("Second end joint.")]
        public KinectInterop.JointType endJoint2 = KinectInterop.JointType.FootRight;

        [Tooltip("UI Text to display the information messages.")]
        public UnityEngine.UI.Text infoText;


        // reference to the KinectManager
        private KinectManager kinectManager;


        void Start()
        {
            kinectManager = KinectManager.Instance;
        }

        // Update is called once per frame
        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                ulong userId = kinectManager.GetUserIdByIndex(playerIndex);

                if (userId != 0 &&
                    kinectManager.IsJointTracked(userId, endJoint1) &&
                    kinectManager.IsJointTracked(userId, middleJoint) &&
                    kinectManager.IsJointTracked(userId, endJoint2))
                {
                    Vector3 posEndJoint1 = kinectManager.GetJointPosition(userId, endJoint1);
                    Vector3 posMiddleJoint = kinectManager.GetJointPosition(userId, middleJoint);
                    Vector3 posEndJoint2 = kinectManager.GetJointPosition(userId, endJoint2);

                    Vector3 dirMidEnd1 = (posEndJoint1 - posMiddleJoint).normalized;
                    Vector3 dirMidEnd2 = (posEndJoint2 - posMiddleJoint).normalized;
                    float angleMidJoint = Vector3.Angle(dirMidEnd1, dirMidEnd2);

                    if (infoText != null)
                    {
                        infoText.text = string.Format("{0} angle: {1:F0} deg.", middleJoint, angleMidJoint);
                    }
                }
            }
        }

    }
}

