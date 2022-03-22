using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Portrait background is the component that sets the background image in the required screen resolution.
    /// </summary>
    public class PortraitBackground : MonoBehaviour
    {
        [Tooltip("Index of the sensor, whose color image will be used as background image.")]
        public int sensorIndex = 0;

        [Tooltip("Target aspect ratio. If left at 0:0, it will determine the aspect ratio from the current screen resolution.")]
        public Vector2 targetAspectRatio = Vector2.zero;  // new Vector2 (9f, 16f);

        private bool isInitialized = false;
        private Rect pixelInsetRect;
        private Rect backgroundRect;
        private Rect inScreenRect;
        private Rect shaderUvRect;

        private static PortraitBackground instance = null;

        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;
        private UnityEngine.UI.RawImage rawImage = null;
        private int staticImageW = 0, staticImageH = 0;

        private int screenW = 0;
        private int screenH = 0;
        private int imageW = 0;
        private int imageH = 0;


        /// <summary>
        /// Gets the singleton PortraitBackground instance.
        /// </summary>
        /// <value>The PortraitBackground instance.</value>
        public static PortraitBackground Instance
        {
            get
            {
                return instance;
            }
        }

        /// <summary>
        /// Determines whether the instance is initialized or not.
        /// </summary>
        /// <returns><c>true</c> if the instance is initialized; otherwise, <c>false</c>.</returns>
        public bool IsInitialized()
        {
            return isInitialized;
        }

        /// <summary>
        /// Gets the background rectangle in pixels. This rectangle can be provided as an argument to the GetJointPosColorOverlay()-KM function.
        /// </summary>
        /// <returns>The background rectangle, in pixels</returns>
        public Rect GetBackgroundRect()
        {
            return backgroundRect;
        }

        /// <summary>
        /// Gets the in-screen rectangle in pixels.
        /// </summary>
        /// <returns>The in-screen rectangle, in pixels.</returns>
        public Rect GetInScreenRect()
        {
            return inScreenRect;
        }

        /// <summary>
        /// Gets the shader uv rectangle. Can be used by custom shaders that need the portrait image uv-offsets and sizes.
        /// </summary>
        /// <returns>The shader uv rectangle.</returns>
        public Rect GetShaderUvRect()
        {
            return shaderUvRect;
        }

        /// <summary>
        /// Gets the color-image scaled screen width. The scaled screen height is equal to the color-image height.
        /// </summary>
        /// <returns>Color-image scaled screen width.</returns>
        public float GetColorScaledScreenWidth()
        {
            KinectManager kinectManager = KinectManager.Instance;
            float fScaledScreenW = kinectManager ? (float)Screen.width * (float)kinectManager.GetColorImageHeight(sensorIndex) / (float)Screen.height : 0f;

            return fScaledScreenW;
        }


        ////////////////////////////////////////////////////////////////////////


        void Awake()
        {
            instance = this;
        }

        void Start()
        {
            rawImage = GetComponent<UnityEngine.UI.RawImage>();
            if(rawImage != null && rawImage.texture != null)
            {
                //staticImageW = rawImage.texture.width;
                //staticImageH = rawImage.texture.height;
                //Debug.Log("staticImageW: " + staticImageW + ", staticImageH: " + staticImageH);
            }

            kinectManager = KinectManager.Instance;
            if(kinectManager && kinectManager.IsInitialized())
            {
                sensorData = kinectManager.GetSensorData(sensorIndex);

                int colorImageW = staticImageW > 0 ? staticImageW : sensorData.colorImageWidth;  // kinectManager.GetColorImageWidth(sensorIndex);
                int colorImageH = staticImageH > 0 ? staticImageH : sensorData.colorImageHeight;  // kinectManager.GetColorImageHeight(sensorIndex);
                UpdateBackgroundParams(colorImageW, colorImageH);
            }
        }

        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                int colorImageW = staticImageW > 0 ? staticImageW : sensorData.colorImageWidth;  // kinectManager.GetColorImageWidth(sensorIndex);
                int colorImageH = staticImageH > 0 ? staticImageH : sensorData.colorImageHeight;  // kinectManager.GetColorImageHeight(sensorIndex);

                if (screenW != Screen.width || screenH != Screen.height ||
                    imageW != colorImageW || imageH != colorImageH)
                {
                    isInitialized = false;
                    UpdateBackgroundParams(colorImageW, colorImageH);
                }

                if (rawImage != null && sensorData != null && sensorData.sensorInterface != null)
                {
                    Vector2 updatedAnchorPos = sensorData.sensorInterface.GetBackgroundImageAnchorPos(sensorData);
                    if (rawImage.rectTransform.anchoredPosition != updatedAnchorPos)
                    {
                        rawImage.rectTransform.anchoredPosition = updatedAnchorPos;
                        //Debug.Log("anchoredPosition: " + rawImage.rectTransform.anchoredPosition);
                    }
                }
            }
        }



        // updates the background parameters
        private void UpdateBackgroundParams(int colorImageW, int colorImageH)
        {
            if (colorImageW > 0 && colorImageH > 0)
            {
                screenW = Screen.width;
                screenH = Screen.height;
                imageW = colorImageW;
                imageH = colorImageH;
                //Debug.Log("UpdateBackgroundParams() - scrW: " + screenW + ", scrH: " + screenH + ", imgW: " + imageW + ", imgH: " + imageH);

                // determine the target screen aspect ratio
                float screenAspectRatio = targetAspectRatio != Vector2.zero ? (targetAspectRatio.x / targetAspectRatio.y) :
                    ((float)Screen.width / (float)Screen.height);

                float fFactorDW = (float)colorImageW / (float)colorImageH -
                    //(float)colorImageH / (float)colorImageW;
                    screenAspectRatio;

                float fDeltaWidth = (float)Screen.height * fFactorDW;
                float dOffsetX = -fDeltaWidth / 2f;

                float fFactorSW = (float)colorImageW / (float)colorImageH;

                float fScreenWidth = (float)Screen.height * fFactorSW;
                float fAbsOffsetX = fDeltaWidth / 2f;

                pixelInsetRect = new Rect(dOffsetX, 0, fDeltaWidth, 0);
                backgroundRect = new Rect(dOffsetX, 0, fScreenWidth, Screen.height);

                inScreenRect = new Rect(fAbsOffsetX, 0, fScreenWidth - fDeltaWidth, Screen.height);
                shaderUvRect = new Rect(fAbsOffsetX / fScreenWidth, 0, (fScreenWidth - fDeltaWidth) / fScreenWidth, 1);
                //Debug.Log("Background rect: " + backgroundRect + ", shaderRect: " + shaderUvRect + "\nScreenW: " + Screen.width + ", ScreenH: " + Screen.height);

                //GUITexture guiTexture = GetComponent<GUITexture>();
                //if(guiTexture)
                //{
                //	guiTexture.pixelInset = pixelInsetRect;
                //}

                if (rawImage)
                {
                    rawImage.uvRect = shaderUvRect;
                }

                isInitialized = true;
            }
        }

    }
}
