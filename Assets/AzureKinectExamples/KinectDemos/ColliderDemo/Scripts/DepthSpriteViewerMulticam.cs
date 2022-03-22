using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    public class DepthSpriteViewerMulticam : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Camera used to estimate the overlay positions of 3D-objects over the background. By default it is the main camera.")]
        public Camera foregroundCamera;

        [Tooltip("Depth image renderer.")]
        public SpriteRenderer depthImage;

        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex;

        // width of the created box colliders
        private const float colliderWidth = 0.3f;

        // the KinectManager instance
        private KinectManager kinectManager;
        private KinectInterop.SensorData sensorData = null;

        // texture-2d of the depth texture
        private Texture2D texDepth2D = null;

        // screen rectangle taken by the foreground image (in pixels)
        private Rect foregroundImgRect;

        // game objects to contain the joint colliders
        private GameObject[] jointColliders = null;
        private int numColliders = 0;

        // depth image resolution
        private int depthImageWidth;
        private int depthImageHeight;

        // depth sensor platform
        private KinectInterop.DepthSensorPlatform sensorPlatform = KinectInterop.DepthSensorPlatform.None;
        private Matrix4x4 matTransform = Matrix4x4.identity;

        // reference to the user-body merger
        private KinectUserBodyMerger kinectUserBodyMerger;


        void Start()
        {
            if (foregroundCamera == null)
            {
                // by default use the main camera
                foregroundCamera = Camera.main;
            }

            kinectManager = KinectManager.Instance;
            kinectUserBodyMerger = kinectManager.GetUserBodyMerger();
        }


        void Update()
        {
            // find the body index
            int bodyIndex = -1;
            if (kinectManager.GetSensorBodyCount(sensorIndex) > 0)
            {
                ulong userId = kinectManager.GetUserIdByIndex(playerIndex);
                ulong sensorUserId = userId != 0 && kinectUserBodyMerger != null ? kinectUserBodyMerger.GetSensorTrackingId(sensorIndex, userId) : userId;

                if(sensorUserId != 0)
                {
                    uint sensorBodyCount = kinectManager.GetSensorBodyCount(sensorIndex);
                    for(int i = 0; i < sensorBodyCount; i++)
                    {
                        if(kinectManager.GetSensorBodyId(sensorIndex, i) == sensorUserId)
                        {
                            bodyIndex = i;
                            //Debug.Log("UserId: " + userId + ", sensorUserId: " + sensorUserId + ", bodyIndex: " + bodyIndex);
                            break;
                        }
                    }
                }
            }

            // setup joint colliders, if needed
            if (jointColliders == null)
            {
                SetupJointColliders();
            }

            // get the users texture
            if (kinectManager && kinectManager.IsInitialized() && depthImage /**&& depthImage.sprite == null*/)
            {
                Texture texDepth = kinectManager.GetUsersImageTex(sensorIndex);

                if (texDepth != null)
                {
                    Rect rectDepth = new Rect(0, 0, texDepth.width, texDepth.height);
                    Vector2 pivotSprite = new Vector2(0.5f, 0.5f);

                    if (texDepth != null && sensorData != null &&
                        (texDepth2D == null || texDepth2D.width != texDepth.width || texDepth2D.height != texDepth.height))
                    {
                        texDepth2D = new Texture2D(texDepth.width, texDepth.height, TextureFormat.ARGB32, false);

                        depthImage.sprite = Sprite.Create(texDepth2D, rectDepth, pivotSprite);
                        depthImage.flipX = sensorData.depthImageScale.x < 0;
                        depthImage.flipY = sensorData.depthImageScale.y < 0;
                    }

                    if (texDepth2D != null)
                    {
                        Graphics.CopyTexture(texDepth, texDepth2D);
                    }

                    float worldScreenHeight = foregroundCamera.orthographicSize * 2f;
                    float spriteHeight = depthImage.sprite.bounds.size.y;

                    float scale = worldScreenHeight / spriteHeight;
                    depthImage.transform.localScale = new Vector3(scale, scale, 1f);
                }
            }

            // update joint colliders
            // Old function - kinectManager.IsUserDetected(playerIndex)
            if (kinectManager && bodyIndex >= 0 && kinectManager.IsSensorBodyDetected(sensorIndex, bodyIndex) && foregroundCamera)
            {
                //ulong userId = kinectManager.GetUserIdByIndex(playerIndex);  // manager.GetPrimaryUserID();

                matTransform.SetTRS(transform.position, transform.rotation, Vector3.one);

                for (int i = 0; i < numColliders; i++)
                {
                    bool bActive = false;

                    // Old - if (kinectManager.IsJointTracked(userId, i))
                    if (kinectManager.IsSensorJointTracked(sensorIndex, bodyIndex, i))
                    {
                        //Vector3 posJoint = matTransform.MultiplyPoint3x4(kinectManager.GetJointPosDepthOverlay(userId, i, sensorIndex, foregroundCamera, foregroundImgRect));
                        Vector3 posJointSensor = kinectManager.GetSensorJointKinectPosition(sensorIndex, bodyIndex, i, false);
                        Vector3 posJoint = kinectManager.GetJointPosDepthOverlay(posJointSensor, sensorIndex, foregroundCamera, foregroundImgRect);

                        posJoint = matTransform.MultiplyPoint3x4(posJoint);
                        posJoint.z = depthImage ? depthImage.transform.position.z : 0f;

                        if (i == 0)
                        {
                            // circle collider for body center
                            jointColliders[i].transform.position = posJoint;

                            //Quaternion rotCollider = transform.rotation * kinectManager.GetJointOrientation(userId, i, true);
                            Quaternion rotJointSensor = kinectManager.GetSensorJointOrientation(sensorIndex, bodyIndex, i, true);
                            Quaternion rotCollider = transform.rotation * rotJointSensor;
                            jointColliders[i].transform.rotation = rotCollider;

                            bActive = true;
                        }
                        else
                        {
                            int p = (int)kinectManager.GetParentJoint((KinectInterop.JointType)i);

                            //Old - kinectManager.IsJointTracked(userId, p)
                            if (kinectManager.IsSensorJointTracked(sensorIndex, bodyIndex, p))
                            {
                                // box colliders for bones
                                //Vector3 posParent = matTransform.MultiplyPoint3x4(kinectManager.GetJointPosDepthOverlay(userId, p, sensorIndex, foregroundCamera, foregroundImgRect));
                                Vector3 posParentSensor = kinectManager.GetSensorJointKinectPosition(sensorIndex, bodyIndex, p, false);
                                Vector3 posParent = kinectManager.GetJointPosDepthOverlay(posParentSensor, sensorIndex, foregroundCamera, foregroundImgRect);

                                posParent = matTransform.MultiplyPoint3x4(posParent);
                                posParent.z = depthImage ? depthImage.transform.position.z : 0f;

                                Vector3 posCollider = (posJoint + posParent) / 2f;
                                jointColliders[i].transform.position = posCollider;

                                Quaternion rotCollider = Quaternion.FromToRotation(Vector3.up, (posJoint - posParent).normalized);
                                jointColliders[i].transform.rotation = rotCollider;

                                BoxCollider2D collider = jointColliders[i].GetComponent<BoxCollider2D>();
                                collider.size = new Vector2(collider.size.x, (posJoint - posParent).magnitude);

                                bActive = true;
                            }
                        }
                    }

                    if (jointColliders[i].activeSelf != bActive)
                    {
                        // change collider activity
                        jointColliders[i].SetActive(bActive);
                    }
                }
            }

        }


        // sets up the image rectangle and body colliders
        private void SetupJointColliders()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                //sensorIndex = kinectManager.GetPrimaryBodySensorIndex();
                sensorData = kinectManager.GetSensorData(sensorIndex);

                if (sensorData != null && foregroundCamera != null)
                {
                    // sensor platform
                    sensorPlatform = sensorData.sensorIntPlatform;

                    // get depth image size
                    depthImageWidth = sensorData.depthImageWidth;
                    depthImageHeight = sensorData.depthImageHeight;

                    // calculate the foreground rectangles
                    //Rect cameraRect = foregroundCamera.pixelRect;
                    //float rectHeight = cameraRect.height;
                    //float rectWidth = cameraRect.width;

                    //if (rectWidth > rectHeight)
                    //    rectWidth = rectHeight * depthImageWidth / depthImageHeight;
                    //else
                    //    rectHeight = rectWidth * depthImageHeight / depthImageWidth;

                    //float foregroundOfsX = (cameraRect.width - rectWidth) / 2;
                    //float foregroundOfsY = (cameraRect.height - rectHeight) / 2;
                    //foregroundImgRect = new Rect(foregroundOfsX, foregroundOfsY, rectWidth, rectHeight);
                    foregroundImgRect = kinectManager.GetForegroundRectDepth(sensorIndex, foregroundCamera);

                    // create joint colliders
                    numColliders = kinectManager.GetJointCount();
                    jointColliders = new GameObject[numColliders];

                    for (int i = 0; i < numColliders; i++)
                    {
                        string sColObjectName = ((KinectInterop.JointType)i).ToString() + "Collider";
                        jointColliders[i] = new GameObject(sColObjectName);
                        jointColliders[i].transform.parent = transform;

                        if (i == 0)
                        {
                            // circle collider for body center
                            CircleCollider2D collider = jointColliders[i].AddComponent<CircleCollider2D>();
                            collider.radius = colliderWidth;
                        }
                        else
                        {
                            // box colliders for bones
                            BoxCollider2D collider = jointColliders[i].AddComponent<BoxCollider2D>();
                            collider.size = new Vector2(colliderWidth, colliderWidth);
                        }
                    }
                }
            }
        }

    }
}
