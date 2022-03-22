using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Background color image is component that displays the color camera feed on RawImage texture, usually the scene background.
    /// </summary>
    public class BackgroundColorImage : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("RawImage used to display the color camera feed.")]
        public UnityEngine.UI.RawImage backgroundImage;

        [Tooltip("Camera used to display the background image. Set it, if you'd like to allow background image to resize, to match the color image's aspect ratio.")]
        public Camera backgroundCamera;


        // last camera rect width & height
        private float lastCamRectW = 0;
        private float lastCamRectH = 0;

        // references
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;
        private Vector2 initialAnchorPos = Vector2.zero;


        void Start()
        {
            if (backgroundImage == null)
            {
                backgroundImage = GetComponent<UnityEngine.UI.RawImage>();
            }

            kinectManager = KinectManager.Instance;
            sensorData = kinectManager != null ? kinectManager.GetSensorData(sensorIndex) : null;
        }


        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized())
            {
                float cameraWidth = backgroundCamera ? backgroundCamera.pixelRect.width : 0f;
                float cameraHeight = backgroundCamera ? backgroundCamera.pixelRect.height : 0f;

                Texture imageTex = kinectManager.GetColorImageTex(sensorIndex);
                if (backgroundImage && imageTex != null && (backgroundImage.texture == null || 
                    backgroundImage.texture.width != imageTex.width || backgroundImage.texture.height != imageTex.height ||
                    lastCamRectW != cameraWidth || lastCamRectH != cameraHeight))
                {
                    lastCamRectW = cameraWidth;
                    lastCamRectH = cameraHeight;

                    backgroundImage.texture = imageTex;
                    backgroundImage.rectTransform.localScale = sensorData.colorImageScale;  // kinectManager.GetColorImageScale(sensorIndex);
                    backgroundImage.color = Color.white;

                    //Debug.Log("aPos: " + backgroundImage.rectTransform.anchoredPosition + ", aMin: " + backgroundImage.rectTransform.anchorMin +
                    //    ", aMax:" + backgroundImage.rectTransform.anchorMax + ", pivot: " + backgroundImage.rectTransform.pivot +
                    //    ", size: " + backgroundImage.rectTransform.sizeDelta);

                    if (backgroundCamera != null)
                    {
                        // adjust image's size and position to match the stream aspect ratio
                        int colorImageWidth = sensorData.colorImageWidth;  // kinectManager.GetColorImageWidth(sensorIndex);
                        int colorImageHeight = sensorData.colorImageHeight;  // kinectManager.GetColorImageHeight(sensorIndex);
                        if (colorImageWidth == 0 || colorImageHeight == 0)
                            return;

                        RectTransform rectImage = backgroundImage.rectTransform;
                        float rectWidth = (rectImage.anchorMin.x != rectImage.anchorMax.x) ? cameraWidth * (rectImage.anchorMax.x - rectImage.anchorMin.x) : rectImage.sizeDelta.x;
                        float rectHeight = (rectImage.anchorMin.y != rectImage.anchorMax.y) ? cameraHeight * (rectImage.anchorMax.y - rectImage.anchorMin.y) : rectImage.sizeDelta.y;

                        if (colorImageWidth > colorImageHeight)
                            rectWidth = rectHeight * colorImageWidth / colorImageHeight;
                        else
                            rectHeight = rectWidth * colorImageHeight / colorImageWidth;

                        Vector2 pivotOffset = (rectImage.pivot - new Vector2(0.5f, 0.5f)) * 2f;
                        Vector2 imageScale = sensorData.colorImageScale;  // (Vector2)kinectManager.GetColorImageScale(sensorIndex);
                        Vector2 anchorPos = rectImage.anchoredPosition + pivotOffset * imageScale * new Vector2(rectWidth, rectHeight);

                        if (rectImage.anchorMin.x != rectImage.anchorMax.x)
                        {
                            rectWidth = -(cameraWidth - rectWidth);
                        }

                        if (rectImage.anchorMin.y != rectImage.anchorMax.y)
                        {
                            rectHeight = -(cameraHeight - rectHeight);
                        }

                        rectImage.sizeDelta = new Vector2(rectWidth, rectHeight);
                        rectImage.anchoredPosition = initialAnchorPos = anchorPos;
                    }
                }

                //if(backgroundImage)
                //{
                //    // update the anchor position, if needed
                //    if(sensorData != null && sensorData.sensorInterface != null)
                //    {
                //        Vector2 updatedAnchorPos = initialAnchorPos + sensorData.sensorInterface.GetBackgroundImageAnchorPos(sensorData);
                //        if(backgroundImage.rectTransform.anchoredPosition != updatedAnchorPos)
                //        {
                //            backgroundImage.rectTransform.anchoredPosition = updatedAnchorPos;
                //        }
                //    }
                //}
            }

            //RectTransform rectTransform = backgroundImage.rectTransform;
            //Debug.Log("pivot: " + rectTransform.pivot + ", anchorPos: " + rectTransform.anchoredPosition + ", \nanchorMin: " + rectTransform.anchorMin + ", anchorMax: " + rectTransform.anchorMax);
        }

    }
}

