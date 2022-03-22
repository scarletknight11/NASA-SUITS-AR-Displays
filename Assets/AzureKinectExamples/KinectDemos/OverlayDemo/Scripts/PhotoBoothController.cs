using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// PhotoBoothController detects the user gestures (swipes) and updates the overlay sprites accordingly. It also checks for right hand grip, to make a photo of the scene. 
    /// </summary>
    public class PhotoBoothController : MonoBehaviour, GestureListenerInterface, InteractionListenerInterface
    {
        //	[Tooltip("GUI-texture used to display the color camera feed on the scene background.")]
        //	public GUITexture backgroundImage;

        //	[Tooltip("Camera used to render the background.")]
        //	public Camera backroundCamera;
        //
        //	[Tooltip("Camera used to overlay the 3D-objects over the background.")]
        //	public Camera foreroundCamera;

        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Reference to the head joint-overlayer component.")]
        public JointOverlayer headOverlayer;

        [Tooltip("Reference to the left hand joint-overlayer component.")]
        public JointOverlayer leftHandOverlayer;

        [Tooltip("Reference to the chest joint-overlayer component.")]
        public JointOverlayer chestOverlayer;

        [Tooltip("Array of sprite transforms that will be used for head overlays on each step.")]
        public Transform[] headMasks;

        [Tooltip("Array of sprite transforms that will be used for left hand overlays on each step.")]
        public Transform[] leftHandMasks;

        [Tooltip("Array of sprite transforms that will be used for chest overlays on each step.")]
        public Transform[] chestMasks;

        [Tooltip("UI-Text used to display information messages.")]
        public UnityEngine.UI.Text infoText;


        private KinectManager kinectManager = null;
        private int maskCount = 0;
        private int currentIndex = -1;
        private int prevIndex = -1;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            maskCount = 0;

            if (headMasks != null && headMasks.Length > maskCount)
                maskCount = headMasks.Length;

            if (leftHandMasks != null && leftHandMasks.Length > maskCount)
                maskCount = leftHandMasks.Length;

            if (chestMasks != null && chestMasks.Length > maskCount)
                maskCount = chestMasks.Length;

            //Debug.Log("maskCount: " + maskCount);
        }

        void Update()
        {
            if (currentIndex != prevIndex)
            {
                prevIndex = currentIndex;

                if (headOverlayer && headMasks != null)
                {
                    if (headOverlayer.overlayObject)
                    {
                        headOverlayer.overlayObject.rotation = headOverlayer.initialRotation;
                        headOverlayer.overlayObject.gameObject.SetActive(false);
                    }

                    headOverlayer.overlayObject = currentIndex >= 0 && currentIndex < headMasks.Length ? headMasks[currentIndex] : null;
                    headOverlayer.playerIndex = playerIndex;

                    if (headOverlayer.overlayObject)
                    {
                        headOverlayer.overlayObject.gameObject.SetActive(true);
                        headOverlayer.gameObject.SetActive(true);
                    }

                    headOverlayer.Start();
                }

                if (leftHandOverlayer && leftHandMasks != null)
                {
                    if (leftHandOverlayer.overlayObject)
                    {
                        leftHandOverlayer.overlayObject.rotation = leftHandOverlayer.initialRotation;
                        leftHandOverlayer.overlayObject.gameObject.SetActive(false);
                    }

                    leftHandOverlayer.overlayObject = currentIndex >= 0 && currentIndex < leftHandMasks.Length ? leftHandMasks[currentIndex] : null;
                    leftHandOverlayer.playerIndex = playerIndex;

                    if (leftHandOverlayer.overlayObject)
                    {
                        leftHandOverlayer.overlayObject.gameObject.SetActive(true);
                        leftHandOverlayer.gameObject.SetActive(true);
                    }

                    leftHandOverlayer.Start();
                }

                if (chestOverlayer && chestMasks != null)
                {
                    if (chestOverlayer.overlayObject)
                    {
                        chestOverlayer.overlayObject.rotation = chestOverlayer.initialRotation;
                        chestOverlayer.overlayObject.gameObject.SetActive(false);
                    }

                    chestOverlayer.overlayObject = currentIndex >= 0 && currentIndex < chestMasks.Length ? chestMasks[currentIndex] : null;
                    chestOverlayer.playerIndex = playerIndex;

                    if (chestOverlayer.overlayObject)
                    {
                        chestOverlayer.overlayObject.gameObject.SetActive(true);
                        chestOverlayer.gameObject.SetActive(true);
                    }

                    chestOverlayer.Start();
                }
            }
        }


        // GestureListenerInterface

        public void UserDetected(ulong userId, int userIndex)
        {
            if (!kinectManager || (userIndex != playerIndex))
                return;

            kinectManager.gestureManager.DetectGesture(userId, GestureType.SwipeLeft);
            kinectManager.gestureManager.DetectGesture(userId, GestureType.SwipeRight);

            currentIndex = 0;

            if (infoText)
            {
                infoText.text = "Swipe left or right to change props. Make hand grip to take photo.";
            }
        }

        public void UserLost(ulong userId, int userIndex)
        {
            if (userIndex != playerIndex)
                return;

            currentIndex = -1;
        }

        public void GestureInProgress(ulong userId, int userIndex, GestureType gesture, float progress, KinectInterop.JointType joint, Vector3 screenPos)
        {
            // nothing to do here
        }

        public bool GestureCompleted(ulong userId, int userIndex, GestureType gesture, KinectInterop.JointType joint, Vector3 screenPos)
        {
            if (userIndex != playerIndex)
                return false;

            switch (gesture)
            {
                case GestureType.SwipeLeft:
                    currentIndex++;
                    if (currentIndex >= maskCount)
                        currentIndex = 0;
                    break;

                case GestureType.SwipeRight:
                    currentIndex--;
                    if (currentIndex < 0)
                        currentIndex = maskCount - 1;
                    break;
            }

            return true;
        }

        public bool GestureCancelled(ulong userId, int userIndex, GestureType gesture, KinectInterop.JointType joint)
        {
            if (userIndex != playerIndex)
                return false;

            return true;
        }


        // InteractionListenerInterface

        public void HandGripDetected(ulong userId, int userIndex, bool isRightHand, bool isHandInteracting, Vector3 handScreenPos)
        {
            if (userIndex != playerIndex)
                return;

            if (isRightHand && handScreenPos.y >= 0.5f)
            {
                if (infoText)
                {
                    Debug.Log("Hand grip detected.");
                    infoText.text = "Hand grip detected.";
                }

                //StartCoroutine(CountdownAndTakePicture());
                PhotoShooter photoShooter = gameObject.GetComponent<PhotoShooter>();
                if (photoShooter && photoShooter.enabled)
                {
                    photoShooter.CountdownAndMakePhoto();
                }
            }
        }

        public void HandReleaseDetected(ulong userId, int userIndex, bool isRightHand, bool isHandInteracting, Vector3 handScreenPos)
        {
            if (userIndex != playerIndex)
                return;

            // nothing to do here
        }

        public bool HandClickDetected(ulong userId, int userIndex, bool isRightHand, Vector3 handScreenPos)
        {
            if (userIndex != playerIndex)
                return false;

            return true;
        }

    }
}
