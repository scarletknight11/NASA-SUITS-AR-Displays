using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    public class JointOrientationView : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc. -1 means the sensor doesn't matter")]
        public int sensorIndex = -1;

        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("The Kinect joint we want to track.")]
        public KinectInterop.JointType trackedJoint = KinectInterop.JointType.Pelvis;

        [Tooltip("Whether the joint view is mirrored or not.")]
        public bool mirroredView = false;

        [Tooltip("Smooth factor used for the joint orientation smoothing.")]
        public float smoothFactor = 0f;

        [Tooltip("UI-Text to display the current joint rotation.")]
        public UnityEngine.UI.Text debugText;

        private Quaternion initialRotation = Quaternion.identity;
        private Quaternion qRotJoint = Quaternion.identity;

        void Start()
        {
            initialRotation = transform.rotation;
            //transform.rotation = Quaternion.identity;
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
                        if(sensorIndex < 0)
                            qRotJoint = kinectManager.GetJointOrientation(userId, trackedJoint, !mirroredView);
                        else
                            qRotJoint = kinectManager.GetSensorJointOrientation(sensorIndex, (int)userId, trackedJoint, !mirroredView);

                        qRotJoint = initialRotation * qRotJoint;

                        if (debugText)
                        {
                            Vector3 vRotAngles = qRotJoint.eulerAngles;
                            debugText.text = string.Format("{0} - R({1:000}, {2:000}, {3:000})", trackedJoint,
                                                                   vRotAngles.x, vRotAngles.y, vRotAngles.z);
                        }

                        if (smoothFactor != 0f)
                            transform.rotation = Quaternion.Slerp(transform.rotation, qRotJoint, smoothFactor * Time.deltaTime);
                        else
                            transform.rotation = qRotJoint;
                    }

                }

            }
        }

    }
}
