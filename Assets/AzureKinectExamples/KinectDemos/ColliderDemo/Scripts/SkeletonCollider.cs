using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    public class SkeletonCollider : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Game object used to represent the body joints.")]
        public GameObject jointPrefab;

        [Tooltip("Line object used to represent the bones between joints.")]
        //public LineRenderer linePrefab;
        public GameObject linePrefab;

        [Tooltip("Scene object that will be used to represent the sensor's position and rotation in the scene.")]
        public Transform sensorTransform;

        [Tooltip("Body scale factors in X,Y,Z directions.")]
        public Vector3 scaleFactors = Vector3.one;


        //public UnityEngine.UI.Text debugText;

        private GameObject[] joints = null;
        //private LineRenderer[] lines = null;
        private GameObject[] lines = null;

        //private Quaternion initialRotation = Quaternion.identity;


        void Start()
        {
            KinectManager kinectManager = KinectManager.Instance;

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
                //lines = new LineRenderer[jointsCount];
                lines = new GameObject[jointsCount];
            }

            // always mirrored
            //initialRotation = Quaternion.Euler(new Vector3(0f, 180f, 0f));
        }

        void Update()
        {
            KinectManager kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized() && joints != null && lines != null)
            {
                // overlay all joints in the skeleton
                if (kinectManager.IsUserDetected(playerIndex))
                {
                    ulong userId = kinectManager.GetUserIdByIndex(playerIndex);
                    int jointsCount = kinectManager.GetJointCount();

                    for (int i = 0; i < jointsCount; i++)
                    {
                        int joint = i;

                        if (kinectManager.IsJointTracked(userId, joint))
                        {
                            Vector3 posJoint = !sensorTransform ? kinectManager.GetJointPosition(userId, joint) : kinectManager.GetJointKinectPosition(userId, joint, true);
                            posJoint = new Vector3(posJoint.x * scaleFactors.x, posJoint.y * scaleFactors.y, posJoint.z * scaleFactors.z);

                            if (sensorTransform)
                            {
                                posJoint = sensorTransform.transform.TransformPoint(posJoint);
                            }

                            if (joints != null)
                            {
                                // overlay the joint
                                if (posJoint != Vector3.zero)
                                {
                                    joints[i].SetActive(true);
                                    joints[i].transform.position = posJoint;
                                }
                                else
                                {
                                    joints[i].SetActive(false);
                                }
                            }

                            if (lines[i] == null && linePrefab != null)
                            {
                                lines[i] = Instantiate(linePrefab);  // as LineRenderer;
                                lines[i].transform.parent = transform;
                                lines[i].name = ((KinectInterop.JointType)i).ToString() + "_Line";
                                lines[i].SetActive(false);
                            }

                            if (lines[i] != null)
                            {
                                // overlay the line to the parent joint
                                int jointParent = (int)kinectManager.GetParentJoint((KinectInterop.JointType)joint);
                                Vector3 posParent = Vector3.zero;

                                if (kinectManager.IsJointTracked(userId, jointParent))
                                {
                                    posParent = !sensorTransform ? kinectManager.GetJointPosition(userId, jointParent) : kinectManager.GetJointKinectPosition(userId, jointParent, true);
                                    posJoint = new Vector3(posJoint.x * scaleFactors.x, posJoint.y * scaleFactors.y, posJoint.z * scaleFactors.z);

                                    if (sensorTransform)
                                    {
                                        posParent = sensorTransform.transform.TransformPoint(posParent);
                                    }
                                }

                                if (posJoint != Vector3.zero && posParent != Vector3.zero)
                                {
                                    lines[i].SetActive(true);

                                    Vector3 dirFromParent = posJoint - posParent;

                                    lines[i].transform.position = posParent + dirFromParent / 2f;
                                    lines[i].transform.up = transform.rotation * dirFromParent.normalized;

                                    Vector3 lineScale = lines[i].transform.localScale;
                                    lines[i].transform.localScale = new Vector3(lineScale.x, dirFromParent.magnitude / 2f, lineScale.z);
                                }
                                else
                                {
                                    lines[i].SetActive(false);
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
                                lines[i].SetActive(false);
                            }
                        }
                    }

                }
                else
                {
                    // user not detected - hide joints and lines
                    int jointsCount = kinectManager.GetJointCount();

                    for (int i = 0; i < jointsCount; i++)
                    {
                        if (joints[i] != null && joints[i].activeSelf)
                        {
                            joints[i].SetActive(false);
                        }

                        if (lines[i] != null && lines[i].activeSelf)
                        {
                            lines[i].SetActive(false);
                        }
                    }
                }

            }
        }

    }
}

