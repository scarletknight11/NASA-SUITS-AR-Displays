using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;
using System;

namespace com.rfilkov.components
{
    /// <summary>
    /// BackgroundColorCamDepthImage is component that displays the color camera aligned depth image on RawImage texture, usually the scene background.
    /// </summary>
    public class BackgroundColorCamDepthImage : MonoBehaviour
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
        private ulong lastColorCamDepthFrameTime = 0;

        // color-camera aligned texture and buffers
        private RenderTexture depthImageTexture = null;
        private Material depthImageMaterial = null;

        private ComputeBuffer depthImageBuffer = null;
        private ComputeBuffer depthHistBuffer = null;

        // depth image hist data
        protected int[] depthHistBufferData = null;
        protected int[] equalHistBufferData = null;
        protected int depthHistTotalPoints = 0;


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
                sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, true);

                // create the output texture and needed buffers
                depthImageTexture = KinectInterop.CreateRenderTexture(depthImageTexture, sensorData.colorImageWidth, sensorData.colorImageHeight);
                depthImageMaterial = new Material(Shader.Find("Kinect/DepthHistImageShader"));

                //int depthBufferLength = sensorData.colorImageWidth * sensorData.colorImageHeight >> 1;
                //depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));

                depthHistBuffer = KinectInterop.CreateComputeBuffer(depthHistBuffer, DepthSensorBase.MAX_DEPTH_DISTANCE_MM + 1, sizeof(int));

                depthHistBufferData = new int[DepthSensorBase.MAX_DEPTH_DISTANCE_MM + 1];
                equalHistBufferData = new int[DepthSensorBase.MAX_DEPTH_DISTANCE_MM + 1];
            }
        }


        void OnDestroy()
        {
            if (depthImageTexture)
            {
                depthImageTexture.Release();
                depthImageTexture = null;
            }

            if (depthImageBuffer != null)
            {
                depthImageBuffer.Dispose();
                depthImageBuffer = null;
            }

            if (depthHistBuffer != null)
            {
                depthHistBuffer.Dispose();
                depthHistBuffer = null;
            }

            if (sensorData != null)
            {
                // disable the color camera aligned depth frames 
                sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, false);
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

                if (backgroundImage && depthImageTexture != null && (backgroundImage.texture == null ||
                    backgroundImage.texture.width != depthImageTexture.width || backgroundImage.texture.height != depthImageTexture.height ||
                    lastCamRectW != cameraWidth || lastCamRectH != cameraHeight))
                {
                    lastCamRectW = cameraWidth;
                    lastCamRectH = cameraHeight;

                    backgroundImage.texture = depthImageTexture;
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
            if (sensorData == null || sensorData.sensorInterface == null || sensorData.colorCamDepthImage == null)
                return;

            // get the updated depth frame
            if (lastColorCamDepthFrameTime != sensorData.lastColorCamDepthFrameTime)
            {
                lastColorCamDepthFrameTime = sensorData.lastColorCamDepthFrameTime;

                if (depthImageTexture.width != sensorData.colorImageWidth || depthImageTexture.height != sensorData.colorImageHeight)
                {
                    depthImageTexture = KinectInterop.CreateRenderTexture(depthImageTexture, sensorData.colorImageWidth, sensorData.colorImageHeight);
                }

                Array.Clear(depthHistBufferData, 0, depthHistBufferData.Length);
                Array.Clear(equalHistBufferData, 0, equalHistBufferData.Length);
                depthHistTotalPoints = 0;

                // get configured min & max distances 
                float minDistance = ((DepthSensorBase)sensorData.sensorInterface).minDepthDistance;
                float maxDistance = ((DepthSensorBase)sensorData.sensorInterface).maxDepthDistance;

                int depthMinDistance = (int)(minDistance * 1000f);
                int depthMaxDistance = (int)(maxDistance * 1000f);

                int frameLen = sensorData.colorCamDepthImage.Length;
                for (int i = 0; i < frameLen; i++)
                {
                    int depth = sensorData.colorCamDepthImage[i];
                    int limDepth = (depth <= DepthSensorBase.MAX_DEPTH_DISTANCE_MM) ? depth : 0;

                    if (limDepth > 0)
                    {
                        depthHistBufferData[limDepth]++;
                        depthHistTotalPoints++;
                    }
                }

                equalHistBufferData[0] = depthHistBufferData[0];
                for (int i = 1; i < depthHistBufferData.Length; i++)
                {
                    equalHistBufferData[i] = equalHistBufferData[i - 1] + depthHistBufferData[i];
                }

                // make depth 0 equal to the max-depth
                equalHistBufferData[0] = equalHistBufferData[equalHistBufferData.Length - 1];

                int depthBufferLength = sensorData.colorCamDepthImage.Length >> 1;
                if(depthImageBuffer == null || depthImageBuffer.count != depthBufferLength)
                {
                    depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));
                }

                KinectInterop.SetComputeBufferData(depthImageBuffer, sensorData.colorCamDepthImage, depthBufferLength, sizeof(uint));

                if (depthHistBuffer != null)
                {
                    KinectInterop.SetComputeBufferData(depthHistBuffer, equalHistBufferData, equalHistBufferData.Length, sizeof(int));
                }

                depthImageMaterial.SetInt("_TexResX", sensorData.colorImageWidth);
                depthImageMaterial.SetInt("_TexResY", sensorData.colorImageHeight);
                depthImageMaterial.SetInt("_MinDepth", depthMinDistance);
                depthImageMaterial.SetInt("_MaxDepth", depthMaxDistance);

                depthImageMaterial.SetBuffer("_DepthMap", depthImageBuffer);
                depthImageMaterial.SetBuffer("_HistMap", depthHistBuffer);
                depthImageMaterial.SetInt("_TotalPoints", depthHistTotalPoints);

                Graphics.Blit(null, depthImageTexture, depthImageMaterial);
            }


        }

    }
}

