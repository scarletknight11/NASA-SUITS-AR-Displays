using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// GrabRotateScript demonstrates how to use hand interactions (grips and releases) to rotate a virtual object on screen.
    /// </summary>
    public class GrabRotateScript : MonoBehaviour, InteractionListenerInterface
    {
        [Tooltip("Material used to outline the object when selected.")]
        public Material selectedObjectMaterial;

        [Tooltip("Smooth factor used for object rotation.")]
        public float smoothFactor = 3.0f;

        [Tooltip("Camera used for screen ray-casting. This is usually the main camera.")]
        public Camera screenCamera;

        [Tooltip("UI-Text used to display information messages.")]
        public UnityEngine.UI.Text infoGuiText;

        [Tooltip("Interaction manager instance, used to detect hand interactions. If left empty, the component will try to find a proper interaction manager in the scene.")]
        private InteractionManager interactionManager;

        [Tooltip("Index of the player, tracked by the respective InteractionManager. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Whether the left hand interaction is allowed by the respective InteractionManager.")]
        public bool leftHandInteraction = true;

        [Tooltip("Whether the right hand interaction is allowed by the respective InteractionManager.")]
        public bool rightHandInteraction = true;


        //private bool isLeftHandDrag = false;
        private InteractionManager.HandEventType lastHandEvent = InteractionManager.HandEventType.None;
        private Vector3 screenNormalPos = Vector3.zero;

        private GameObject selectedObject;
        private Material savedObjectMaterial;


        void Start()
        {
            // by default set the main-camera to be screen-camera
            if (screenCamera == null)
            {
                screenCamera = Camera.main;
            }

            // get the interaction manager instance
            if (interactionManager == null)
            {
                //interactionManager = InteractionManager.Instance;
                interactionManager = InteractionManager.GetInstance(playerIndex, leftHandInteraction, rightHandInteraction);
            }
        }


        void Update()
        {
            if (interactionManager != null && interactionManager.IsInteractionInited())
            {
                Vector3 screenPixelPos = Vector3.zero;

                if (selectedObject == null)
                {
                    // no object is currently selected or dragged.
                    bool bHandIntAllowed = (leftHandInteraction && interactionManager.IsLeftHandPrimary()) || (rightHandInteraction && interactionManager.IsRightHandPrimary());

                    // check if there is an underlying object to be selected
                    if (lastHandEvent == InteractionManager.HandEventType.Grip && bHandIntAllowed)
                    {
                        // convert the normalized screen pos to pixel pos
                        screenNormalPos = interactionManager.IsLeftHandPrimary() ? interactionManager.GetLeftHandScreenPos() : interactionManager.GetRightHandScreenPos();

                        screenPixelPos.x = (int)(screenNormalPos.x * (screenCamera ? screenCamera.pixelWidth : Screen.width));
                        screenPixelPos.y = (int)(screenNormalPos.y * (screenCamera ? screenCamera.pixelHeight : Screen.height));
                        Ray ray = screenCamera ? screenCamera.ScreenPointToRay(screenPixelPos) : new Ray();

                        // check for underlying objects
                        RaycastHit hit;
                        if (Physics.Raycast(ray, out hit))
                        {
                            if (hit.collider.gameObject == gameObject)
                            {
                                selectedObject = gameObject;

                                savedObjectMaterial = selectedObject.GetComponent<Renderer>().material;
                                selectedObject.GetComponent<Renderer>().material = selectedObjectMaterial;
                            }
                        }
                    }
                }
                else
                {
                    bool bHandIntAllowed = (leftHandInteraction && interactionManager.IsLeftHandPrimary()) || (rightHandInteraction && interactionManager.IsRightHandPrimary());

                    if (bHandIntAllowed)
                    {
                        // continue dragging the object
                        screenNormalPos = interactionManager.IsLeftHandPrimary() ? interactionManager.GetLeftHandScreenPos() : interactionManager.GetRightHandScreenPos();

                        float angleArounfY = screenNormalPos.x * 360f;  // horizontal rotation
                        float angleArounfX = screenNormalPos.y * 360f;  // vertical rotation

                        Vector3 vObjectRotation = new Vector3(-angleArounfX, -angleArounfY, 180f);
                        Quaternion qObjectRotation = screenCamera ? screenCamera.transform.rotation * Quaternion.Euler(vObjectRotation) : Quaternion.Euler(vObjectRotation);

                        selectedObject.transform.rotation = Quaternion.Slerp(selectedObject.transform.rotation, qObjectRotation, smoothFactor * Time.deltaTime);

                        // check if the object (hand grip) was released
                        bool isReleased = lastHandEvent == InteractionManager.HandEventType.Release;

                        if (isReleased)
                        {
                            // restore the object's material and stop dragging the object
                            selectedObject.GetComponent<Renderer>().material = savedObjectMaterial;
                            selectedObject = null;
                        }
                    }
                }

            }
        }


        void OnGUI()
        {
            if (infoGuiText != null && interactionManager != null && interactionManager.IsInteractionInited())
            {
                string sInfo = string.Empty;

                ulong userID = interactionManager.GetUserID();
                if (userID != 0)
                {
                    if (selectedObject != null)
                        sInfo = selectedObject.name + " grabbed.\nYou can turn it now in all directions.";
                    else
                        sInfo = "Grab the object to turn it.";
                }
                else
                {
                    KinectManager kinectManager = KinectManager.Instance;

                    if (kinectManager && kinectManager.IsInitialized())
                    {
                        sInfo = "Waiting for Users...";
                    }
                    else
                    {
                        sInfo = "KinectManager not initialized. Please check the console log.";
                    }
                }

                infoGuiText.text = sInfo;
            }
        }


        public void HandGripDetected(ulong userId, int userIndex, bool isRightHand, bool isHandInteracting, Vector3 handScreenPos)
        {
            if (!isHandInteracting || !interactionManager)
                return;
            if (userId != interactionManager.GetUserID())
                return;

            lastHandEvent = InteractionManager.HandEventType.Grip;
            //isLeftHandDrag = !isRightHand;
            screenNormalPos = handScreenPos;
        }

        public void HandReleaseDetected(ulong userId, int userIndex, bool isRightHand, bool isHandInteracting, Vector3 handScreenPos)
        {
            if (!isHandInteracting || !interactionManager)
                return;
            if (userId != interactionManager.GetUserID())
                return;

            lastHandEvent = InteractionManager.HandEventType.Release;
            //isLeftHandDrag = !isRightHand;
            screenNormalPos = handScreenPos;
        }

        public bool HandClickDetected(ulong userId, int userIndex, bool isRightHand, Vector3 handScreenPos)
        {
            return true;
        }

    }
}
