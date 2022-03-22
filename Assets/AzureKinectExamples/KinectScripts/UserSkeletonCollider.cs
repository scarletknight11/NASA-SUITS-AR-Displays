using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// UserSkeletonCollider creates colliders for the joints and bones of the given user, so they can interact with the physical objects in the scene.
    /// </summary>
    public class UserSkeletonCollider : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Radius of the sphere and capsule colliders, in meters.")]
        [Range(0f, 0.1f)]
        public float colliderRadius = 0.02f;

        [Tooltip("Scene object that will be used to represent the sensor's position and rotation in the scene.")]
        public Transform sensorTransform;

        [Tooltip("Depth sensor index, if this components uses sensor transform - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Whether to follow the sensor's depth or color camera pose, if this components uses sensor transform.")]
        public ReferencePose referencePose = ReferencePose.DepthCameraPose;
        public enum ReferencePose : int { DepthCameraPose = 0, ColorCameraPose = 1 };

        //[Tooltip("Body scale factors in X,Y,Z directions.")]
        //private Vector3 scaleFactors = Vector3.one;

        //public UnityEngine.UI.Text debugText;


        private GameObject[] joints = null;
        //private LineRenderer[] lines = null;
        private GameObject[] lines = null;
        private CapsuleCollider[] lineColliders = null;

        //private Quaternion initialRotation = Quaternion.identity;

        // reference to KM
        KinectManager kinectManager = null;


        void Start()
        {
            kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized())
            {
                int jointCount = kinectManager.GetJointCount();

                // array holding the skeleton joints
                joints = new GameObject[jointCount];

                for (int i = 0; i < joints.Length; i++)
                {
                    string sColObjectName = ((KinectInterop.JointType)i).ToString() + "JointCollider";
                    joints[i] = new GameObject(sColObjectName);
                    joints[i].transform.parent = transform;

                    SphereCollider collider = joints[i].AddComponent<SphereCollider>();
                    collider.radius = colliderRadius;

                    joints[i].SetActive(false);
                }

                // array holding the skeleton lines
                lines = new GameObject[jointCount];
                lineColliders = new CapsuleCollider[jointCount];
            }

            // always mirrored
            //initialRotation = Quaternion.Euler(new Vector3(0f, 180f, 0f));
        }

        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                int jointsCount = kinectManager.GetJointCount();

                // overlay all joints in the skeleton
                if (kinectManager.IsUserDetected(playerIndex))
                {
                    ulong userId = kinectManager.GetUserIdByIndex(playerIndex);

                    for (int i = 0; i < jointsCount; i++)
                    {
                        int joint = i;

                        if (kinectManager.IsJointTracked(userId, joint))
                        {
                            Vector3 posJoint = GetJointPosition(userId, joint);  // !sensorTransform ? kinectManager.GetJointPosition(userId, joint) : kinectManager.GetJointKinectPosition(userId, joint, true);
                            //posJoint = new Vector3(posJoint.x * scaleFactors.x, posJoint.y * scaleFactors.y, posJoint.z * scaleFactors.z);

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
                                }
                                else
                                {
                                    joints[i].SetActive(false);
                                }
                            }

                            if (lines[i] == null)
                            {
                                string sColObjectName = ((KinectInterop.JointType)i).ToString() + "BoneCollider";
                                lines[i] = new GameObject(sColObjectName);
                                lines[i].transform.parent = transform;

                                CapsuleCollider collider = lines[i].AddComponent<CapsuleCollider>();
                                collider.radius = colliderRadius;
                                lineColliders[i] = collider;

                                lines[i].gameObject.SetActive(false);
                            }

                            if (lines[i] != null)
                            {
                                // overlay the line to the parent joint
                                int jointParent = (int)kinectManager.GetParentJoint((KinectInterop.JointType)joint);
                                Vector3 posParent = Vector3.zero;

                                if (kinectManager.IsJointTracked(userId, jointParent))
                                {
                                    posParent = GetJointPosition(userId, jointParent);  // !sensorTransform ? kinectManager.GetJointPosition(userId, jointParent) : kinectManager.GetJointKinectPosition(userId, jointParent, true);
                                    //posJoint = new Vector3(posJoint.x * scaleFactors.x, posJoint.y * scaleFactors.y, posJoint.z * scaleFactors.z);

                                    if (sensorTransform)
                                    {
                                        posParent = sensorTransform.TransformPoint(posParent);
                                    }
                                }

                                if (posJoint != Vector3.zero && posParent != Vector3.zero)
                                {
                                    lines[i].gameObject.SetActive(true);

                                    Vector3 dirFromParent = posJoint - posParent;

                                    lines[i].transform.position = posParent + dirFromParent / 2f;
                                    lines[i].transform.up = /**transform.rotation * */ dirFromParent.normalized;

                                    if(lineColliders[i] != null)
                                    {
                                        lineColliders[i].height = dirFromParent.magnitude;
                                    }
                                }
                                else
                                {
                                    lines[i].gameObject.SetActive(false);
                                }
                            }

                        }
                        else
                        {
                            if (joints != null)
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
                    // user not found - hide all colliders
                    for (int i = 0; i < jointsCount; i++)
                    {
                        if (joints != null)
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

            if (sensorTransform)
            {
                int bodyIndex = kinectManager.GetBodyIndexByUserId(userId);
                posJoint = kinectManager.GetSensorJointKinectPosition(sensorIndex, bodyIndex, joint, true);

                if(referencePose == ReferencePose.ColorCameraPose)
                {
                    KinectInterop.SensorData sensorData = kinectManager.GetSensorData(sensorIndex);

                    if(sensorData != null)
                    {
                        Vector3 spaceScale = sensorData.sensorSpaceScale;
                        float u2mScale = sensorData.unitToMeterFactor;
                        float m2uScale = 1f / u2mScale;

                        posJoint = new Vector3(posJoint.x * spaceScale.x * m2uScale, posJoint.y * spaceScale.y * m2uScale, posJoint.z * spaceScale.z * m2uScale);
                        posJoint = kinectManager.SensorTransformPoint(sensorIndex, sensorData.depth2ColorExtr, posJoint);
                        posJoint = new Vector3(posJoint.x * spaceScale.x * u2mScale, posJoint.y * spaceScale.y * u2mScale, posJoint.z * spaceScale.z * u2mScale);
                    }
                }
            }
            else
            {
                posJoint = kinectManager.GetJointPosition(userId, joint);
            }

            return posJoint;
        }


    }
}

