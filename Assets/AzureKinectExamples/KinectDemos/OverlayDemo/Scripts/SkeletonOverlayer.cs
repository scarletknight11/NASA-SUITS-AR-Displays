using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// SkeletonOverlayer overlays the the user's body joints and bones with spheres and lines.
    /// </summary>
    public class SkeletonOverlayer : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Game object used to overlay the joints.")]
        public GameObject jointPrefab;

        [Tooltip("Line object used to overlay the bones.")]
        public LineRenderer linePrefab;
        //public float smoothFactor = 10f;

        [Tooltip("Depth sensor index used for color frame overlay - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Camera that will be used to overlay the 3D-objects over the background.")]
        public Camera foregroundCamera;

        [Tooltip("Scene object that will be used to represent the sensor's position and rotation in the scene.")]
        public Transform sensorTransform;

        //public UnityEngine.UI.Text debugText;

        private GameObject[] joints = null;
        private LineRenderer[] lines = null;

        // initial body rotation
        private Quaternion initialRotation = Quaternion.identity;

        // reference to KM
        private KinectManager kinectManager = null;

        // background rectangle
        private Rect backgroundRect = Rect.zero;


        void Start()
        {
            kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized())
            {
                int jointsCount = kinectManager.GetJointCount();

                if (jointPrefab)
                {
                    // array holding the skeleton joints
                    joints = new GameObject[jointsCount];

                    for (int i = 0; i < joints.Length; i++)
                    {
                        joints[i] = Instantiate(jointPrefab) as GameObject;
                        joints[i].transform.parent = transform;
                        joints[i].name = ((KinectInterop.JointType)i).ToString();
                        joints[i].SetActive(false);
                    }
                }

                // array holding the skeleton lines
                lines = new LineRenderer[jointsCount];
            }

            // always mirrored
            initialRotation = Quaternion.Euler(new Vector3(0f, 180f, 0f));

            //if (!foregroundCamera)
            //{
            //    // by default - the main camera
            //    foregroundCamera = Camera.main;
            //}
        }

        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                if(foregroundCamera)
                {
                    // get the background rectangle (use the portrait background, if available)
                    backgroundRect = foregroundCamera.pixelRect;
                    PortraitBackground portraitBack = PortraitBackground.Instance;

                    if (portraitBack && portraitBack.enabled)
                    {
                        backgroundRect = portraitBack.GetBackgroundRect();
                    }
                }

                // overlay all joints in the skeleton
                if (kinectManager.IsUserDetected(playerIndex))
                {
                    ulong userId = kinectManager.GetUserIdByIndex(playerIndex);
                    int jointsCount = kinectManager.GetJointCount();

                    //Debug.Log("Displaying user " + playerIndex + ", ID: " + userId + 
                    //    ", body: " + kinectManager.GetBodyIndexByUserId(userId) + ", pos: " + kinectManager.GetJointKinectPosition(userId, 0));

                    for (int i = 0; i < jointsCount; i++)
                    {
                        int joint = i;

                        if (kinectManager.IsJointTracked(userId, joint))
                        {
                            Vector3 posJoint = GetJointPosition(userId, joint);
                            //Debug.Log("U " + userId + " " + (KinectInterop.JointType)joint + " - pos: " + posJoint);

                            if (sensorTransform)
                            {
                                posJoint = sensorTransform.TransformPoint(posJoint);
                            }

                            if (joints != null)
                            {
                                // overlay the joint
                                if (posJoint != Vector3.zero)
                                {
                                    joints[i].SetActive(true);
                                    joints[i].transform.position = posJoint;

                                    Quaternion rotJoint = kinectManager.GetJointOrientation(userId, joint, false);
                                    rotJoint = initialRotation * rotJoint;
                                    joints[i].transform.rotation = rotJoint;

                                    //if(i == (int)KinectInterop.JointType.WristLeft)
                                    //{
                                    //    Debug.Log(string.Format("USO {0:F3} {1} user: {2}, state: {3}\npos: {4}, rot: {5}", Time.time, (KinectInterop.JointType)i,
                                    //        userId, kinectManager.GetJointTrackingState(userId, joint),
                                    //        kinectManager.GetJointPosition(userId, joint), kinectManager.GetJointOrientation(userId, joint, false).eulerAngles));
                                    //}
                                }
                                else
                                {
                                    joints[i].SetActive(false);
                                }
                            }

                            if (lines[i] == null && linePrefab != null)
                            {
                                lines[i] = Instantiate(linePrefab) as LineRenderer;
                                lines[i].transform.parent = transform;
                                lines[i].gameObject.SetActive(false);
                            }

                            if (lines[i] != null)
                            {
                                // overlay the line to the parent joint
                                int jointParent = (int)kinectManager.GetParentJoint((KinectInterop.JointType)joint);
                                Vector3 posParent = GetJointPosition(userId, jointParent);

                                if (sensorTransform)
                                {
                                    posParent = sensorTransform.TransformPoint(posParent);
                                }

                                if (posJoint != Vector3.zero && posParent != Vector3.zero)
                                {
                                    lines[i].gameObject.SetActive(true);

                                    //lines[i].SetVertexCount(2);
                                    lines[i].SetPosition(0, posParent);
                                    lines[i].SetPosition(1, posJoint);
                                }
                                else
                                {
                                    lines[i].gameObject.SetActive(false);
                                }
                            }
                        }
                        else
                        {
                            if (joints[i] != null)
                            {
                                joints[i].SetActive(false);
                            }

                            if (lines[i] != null)
                            {
                                lines[i].gameObject.SetActive(false);
                            }
                        }
                    }

                }
                else
                {
                    // disable the skeleton
                    int jointsCount = kinectManager.GetJointCount();

                    for (int i = 0; i < jointsCount; i++)
                    {
                        if (joints[i] != null)
                        {
                            joints[i].SetActive(false);
                        }

                        if (lines[i] != null)
                        {
                            lines[i].gameObject.SetActive(false);
                        }
                    }
                }
            }
        }

        // returns body joint position
        private Vector3 GetJointPosition(ulong userId, int joint)
        {
            Vector3 posJoint = Vector3.zero;

            if (foregroundCamera)
            {
                posJoint = kinectManager.GetJointPosColorOverlay(userId, joint, sensorIndex, foregroundCamera, backgroundRect);
            }
            else if (sensorTransform)
            {
                posJoint = kinectManager.GetJointKinectPosition(userId, joint, true);
            }
            else
            {
                posJoint = kinectManager.GetJointPosition(userId, joint);
            }

            return posJoint;
        }

    }
}
