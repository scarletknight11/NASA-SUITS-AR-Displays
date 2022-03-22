using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;
using System;

namespace com.rfilkov.components
{
    /// <summary>
    /// BackgroundColorCamInfraredImage is component that displays the color camera aligned infrared image on RawImage texture, usually the scene background.
    /// </summary>
    public class BackgroundColorCamInfraredImage : MonoBehaviour
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

        // reference to the kinectManager
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;
        private Vector2 initialAnchorPos = Vector2.zero;

        // color-camera aligned frames
        private ulong lastColorCamInfraredFrameTime = 0;

        // color-camera aligned texture and buffers
        private RenderTexture infraredImageTexture = null;
        private Material infraredImageMaterial = null;
        private ComputeBuffer infraredImageBuffer = null;


        void Start()
        {
            if (backgroundImage == null)
            {
                backgroundImage = GetComponent<UnityEngine.UI.RawImage>();
            }

            kinectManager = KinectManager.Instance;
            sensorData = kinectManager != null ? kinectManager.GetSensorData(sensorIndex) : null;

            if(sensorData != null)
            {
                // enable the color camera aligned depth frames 
                sensorData.sensorInterface.EnableColorCameraInfraredFrame(sensorData, true, false);

                // create the output texture and needed buffers
                infraredImageTexture = KinectInterop.CreateRenderTexture(infraredImageTexture, sensorData.colorImageWidth, sensorData.colorImageHeight);
                infraredImageMaterial = new Material(Shader.Find("Kinect/InfraredImageShader"));

                //int infraredBufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
                //infraredImageBuffer = KinectInterop.CreateComputeBuffer(infraredImageBuffer, infraredBufferLength, sizeof(uint));
            }
        }


        void OnDestroy()
        {
            if (infraredImageTexture)
            {
                infraredImageTexture.Release();
                infraredImageTexture = null;
            }

            if (infraredImageBuffer != null)
            {
                infraredImageBuffer.Dispose();
                infraredImageBuffer = null;
            }

            if (sensorData != null)
            {
                // disable the color camera aligned depth frames 
                sensorData.sensorInterface.EnableColorCameraInfraredFrame(sensorData, false, false);
            }
        }


        void Update()
        {
            if (kinectManager && kinectManager.IsInitialized() && sensorData != null)
            {
                float cameraWidth = backgroundCamera ? backgroundCamera.pixelRect.width : 0f;
                float cameraHeight = backgroundCamera ? backgroundCamera.pixelRect.height : 0f;

                // check for new color camera aligned frames
                UpdateTextureWithNewFrame();

                if (backgroundImage && infraredImageTexture != null && (backgroundImage.texture == null || 
                    backgroundImage.texture.width != infraredImageTexture.width || backgroundImage.texture.height != infraredImageTexture.height ||
                    lastCamRectW != cameraWidth || lastCamRectH != cameraHeight))
                {
                    lastCamRectW = cameraWidth;
                    lastCamRectH = cameraHeight;

                    backgroundImage.texture = infraredImageTexture;
                    backgroundImage.rectTransform.localScale = sensorData.colorImageScale;  // kinectManager.GetColorImageScale(sensorIndex);
                    backgroundImage.color = Color.white;

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

                //if (backgroundImage)
                //{
                //    // update the anchor position, if needed
                //    if (sensorData != null && sensorData.sensorInterface != null)
                //    {
                //        Vector2 updatedAnchorPos = initialAnchorPos + sensorData.sensorInterface.GetBackgroundImageAnchorPos(sensorData);
                //        if (backgroundImage.rectTransform.anchoredPosition != updatedAnchorPos)
                //        {
                //            backgroundImage.rectTransform.anchoredPosition = updatedAnchorPos;
                //        }
                //    }
                //}
            }

            //RectTransform rectTransform = backgroundImage.rectTransform;
            //Debug.Log("pivot: " + rectTransform.pivot + ", anchorPos: " + rectTransform.anchoredPosition + ", \nanchorMin: " + rectTransform.anchorMin + ", anchorMax: " + rectTransform.anchorMax);
        }


        // checks for new color-camera aligned frames, and composes an updated body-index texture, if needed
        private void UpdateTextureWithNewFrame()
        {
            if (sensorData == null || sensorData.sensorInterface == null || sensorData.colorCamInfraredImage == null)
                return;

            // get the updated infrared
            if (lastColorCamInfraredFrameTime != sensorData.lastColorCamInfraredFrameTime)
            {
                lastColorCamInfraredFrameTime = sensorData.lastColorCamInfraredFrameTime;

                if (infraredImageTexture.width != sensorData.colorImageWidth || infraredImageTexture.height != sensorData.colorImageHeight)
                {
                    infraredImageTexture = KinectInterop.CreateRenderTexture(infraredImageTexture, sensorData.colorImageWidth, sensorData.colorImageHeight);
                }

                int infraredBufferLength = sensorData.colorCamInfraredImage.Length >> 1;
                if (infraredImageBuffer == null || infraredImageBuffer.count != infraredBufferLength)
                {
                    infraredImageBuffer = KinectInterop.CreateComputeBuffer(infraredImageBuffer, infraredBufferLength, sizeof(uint));
                }

                KinectInterop.SetComputeBufferData(infraredImageBuffer, sensorData.colorCamInfraredImage, infraredBufferLength, sizeof(uint));

                float minInfraredValue = ((DepthSensorBase)sensorData.sensorInterface).GetMinInfraredValue();
                float maxInfraredValue = ((DepthSensorBase)sensorData.sensorInterface).GetMaxInfraredValue();

                infraredImageMaterial.SetInt("_TexResX", sensorData.colorImageWidth);
                infraredImageMaterial.SetInt("_TexResY", sensorData.colorImageHeight);
                infraredImageMaterial.SetFloat("_MinValue", minInfraredValue);
                infraredImageMaterial.SetFloat("_MaxValue", maxInfraredValue);
                infraredImageMaterial.SetBuffer("_InfraredMap", infraredImageBuffer);

                Graphics.Blit(null, infraredImageTexture, infraredImageMaterial);
            }


        }

    }
}

