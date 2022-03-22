using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// HandOverlayer overlays the user's hand (right or left) with the given cursor textures, as well as captures the hand events (grips & releases).
    /// </summary>
    public class HandOverlayer : MonoBehaviour
    {
        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Whether the player's left hand should be tracked, or the right hand.")]
        public bool isLeftHanded = false;

        [Tooltip("Depth sensor index used for color camera overlay - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Interaction manager instance, used to detect hand interactions. If left empty, it will be the first interaction manager found in the scene.")]
        private InteractionManager interactionManager;

        //	[Tooltip("GUI-texture used to display the color camera feed on the scene background.")]
        //	public GUITexture backgroundImage;

        [Tooltip("Hand-cursor texture for the hand-grip state.")]
        public Texture gripHandTexture;
        [Tooltip("Hand-cursor texture for the hand-release state.")]
        public Texture releaseHandTexture;
        [Tooltip("Hand-cursor texture for the non-tracked state.")]
        public Texture normalHandTexture;

        [Tooltip("Smooth factor for cursor movement.")]
        public float smoothFactor = 10f;

        // current cursor position
        private Vector2 cursorPos = Vector2.zero;

        // last hand event (grip or release)
        private InteractionManager.HandEventType lastHandEvent = InteractionManager.HandEventType.None;


        /// <summary>
        /// Gets the cursor position.
        /// </summary>
        /// <returns>The cursor position.</returns>
        public Vector2 GetCursorPos()
        {
            return cursorPos;
        }


        /// <summary>
        /// Gets the last hand event of the active hand (right or left).
        /// </summary>
        /// <returns>The last hand event.</returns>
        public InteractionManager.HandEventType GetLastHandEvent()
        {
            return lastHandEvent;
        }


        // ----- end of public functions -----


        void Update()
        {
            KinectManager kinectManager = KinectManager.Instance;
            if (kinectManager && kinectManager.IsInitialized())
            {
                ////backgroundImage.renderer.material.mainTexture = kinectManager.GetUsersClrTex();
                //if (backgroundImage && (backgroundImage.texture == null))
                //{
                //    backgroundImage.texture = kinectManager.GetUsersClrTex();
                //}

                // overlay the joint
                int iJointIndex = !isLeftHanded ? (int)KinectInterop.JointType.HandRight : (int)KinectInterop.JointType.HandLeft;

                if (kinectManager.IsUserDetected(playerIndex))
                {
                    ulong userId = kinectManager.GetUserIdByIndex(playerIndex);

                    if (kinectManager.IsJointTracked(userId, iJointIndex))
                    {
                        Vector3 posJointRaw = kinectManager.GetJointKinectPosition(userId, iJointIndex, false);
                        //Vector3 posJoint = manager.GetJointPosColorOverlay(userId, iJointIndex, Camera.main, Camera.main.pixelRect);

                        if (posJointRaw != Vector3.zero)
                        {
                            Vector2 posDepth = kinectManager.MapSpacePointToDepthCoords(sensorIndex, posJointRaw);
                            ushort depthValue = kinectManager.GetDepthForPixel(sensorIndex, (int)posDepth.x, (int)posDepth.y);

                            Vector2 posColor = Vector2.zero;
                            if (posDepth != Vector2.zero && depthValue > 0)
                            {
                                // depth pos to color pos
                                posColor = kinectManager.MapDepthPointToColorCoords(sensorIndex, posDepth, depthValue);
                            }
                            else
                            {
                                // workaround - try to use the color camera space, if depth is not available
                                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(sensorIndex);
                                if (sensorData != null && sensorData.depthCamIntr == null && sensorData.colorCamIntr != null)
                                {
                                    posColor = kinectManager.MapSpacePointToColorCoords(sensorIndex, posJointRaw);
                                }
                            }

                            if (posColor.x != 0f && !float.IsInfinity(posColor.x))
                            {
                                KinectInterop.SensorData sensorData = kinectManager.GetSensorData(sensorIndex);

                                // get the color image x-offset and width (use the portrait background, if available)
                                float colorWidth = sensorData.colorImageWidth;
                                float colorOfsX = 0f;

                                PortraitBackground portraitBack = PortraitBackground.Instance;
                                if (portraitBack && portraitBack.enabled)
                                {
                                    colorWidth = portraitBack.GetColorScaledScreenWidth();
                                    colorOfsX = (sensorData.colorImageWidth - colorWidth) / 2f;
                                }

                                float xScaled = (posColor.x - colorOfsX) / colorWidth;
                                float yScaled = posColor.y / sensorData.colorImageHeight;

                                float xScreen = (sensorData.colorImageScale.x > 0f ? xScaled : 1f - xScaled);
                                float yScreen = (sensorData.colorImageScale.y > 0f ? yScaled : 1f - yScaled);

                                cursorPos = Vector2.Lerp(cursorPos, new Vector2(xScreen, yScreen), smoothFactor * Time.deltaTime);
                                //Debug.Log("CursorPos: " + new Vector2(xScreen, yScreen));
                            }
                        }
                    }

                }

            }
        }

        void OnGUI()
        {
            // get the interaction manager instance
            //interactionManager = InteractionManager.Instance;
            if (interactionManager == null)
            {
                interactionManager = InteractionManager.GetInstance(playerIndex, isLeftHanded, !isLeftHanded);
            }

            Texture texture = null;

            if (interactionManager && interactionManager.IsInteractionInited())
            {
                if (isLeftHanded)
                {
                    lastHandEvent = interactionManager.GetLastLeftHandEvent();

                    if (lastHandEvent == InteractionManager.HandEventType.Grip)
                        texture = gripHandTexture;
                    else if (lastHandEvent == InteractionManager.HandEventType.Release)
                        texture = releaseHandTexture;
                }
                else
                {
                    lastHandEvent = interactionManager.GetLastRightHandEvent();

                    if (lastHandEvent == InteractionManager.HandEventType.Grip)
                        texture = gripHandTexture;
                    else if (lastHandEvent == InteractionManager.HandEventType.Release)
                        texture = releaseHandTexture;
                }
            }

            if (texture == null)
            {
                texture = normalHandTexture;
            }

            if ((cursorPos != Vector2.zero) && (texture != null))
            {
                Rect rectTexture = new Rect(cursorPos.x * Screen.width - texture.width / 2, (1 - cursorPos.y) * Screen.height - texture.height / 2, texture.width, texture.height);
                GUI.DrawTexture(rectTexture, texture);
            }
        }

    }
}
