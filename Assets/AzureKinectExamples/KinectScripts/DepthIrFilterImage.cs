using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// DepthIrFilterImage filters the sensor's IR image with the raw depth. The resulting image is displayed on the given RawImage.
    /// </summary>
    public class DepthIrFilterImage : MonoBehaviour
    {
        [Tooltip("Index of the used depth sensor. 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("RawImage used to display the depth filtered IR image.")]
        public UnityEngine.UI.RawImage backgroundImage;

        [Tooltip("Camera used to display the background image. Set it, if you'd like to allow background image to resize, to match the depth image's aspect ratio.")]
        public Camera backgroundCamera;

        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        private Material depthFilterMat = null;
        private RenderTexture depthFilterTex = null;
        private ComputeBuffer depthImageBuffer = null;
        private ulong lastDepthFrameTime = 0;

        // last camera rect width & height
        private float lastCamRectW = 0;
        private float lastCamRectH = 0;


        /// <summary>
        /// Gets depth filtered IR texture.
        /// </summary>
        /// <returns>Depth filtered IR texture.</returns>
        public Texture GetDepthFilterIrTex()
        {
            return depthFilterTex;
        }

        /// <summary>
        /// Gets depth filtered IR material.
        /// </summary>
        /// <returns>Depth filtered IR material.</returns>
        public Material GetDepthFilterIrMat()
        {
            return depthFilterMat;
        }


        /// <summary>
        /// Sets the maximum IR value, used to convert the raw IR values to texture.
        /// </summary>
        /// <param name="maxIrValue">Max IR value.</param>
        public void SetMaxIrValue(float maxIrValue)
        {
            if(kinectManager)
            {
                kinectManager.SetSensorMinMaxIrValues(sensorIndex, 0, maxIrValue);
            }
        }


        void Start()
        {
            kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized())
            {
                Shader depthFilterShader = Shader.Find("Kinect/DepthIrFilterShader");
                sensorData = kinectManager.GetSensorData(sensorIndex);

                if (depthFilterShader != null && sensorData != null)
                {
                    depthFilterMat = new Material(depthFilterShader);
                }
            }
        }

        void OnDestroy()
        {
            if (depthImageBuffer != null)
            {
                depthImageBuffer.Dispose();
                depthImageBuffer = null;
            }

            if(depthFilterTex != null)
            {
                depthFilterTex.Release();
                depthFilterTex = null;

                if (backgroundImage)
                {
                    backgroundImage.texture = null;
                }
            }
        }

        void LateUpdate()
        {
            if (kinectManager && kinectManager.IsInitialized() && depthFilterMat != null)
            {
                if (sensorData != null && sensorData.infraredImageTexture != null && sensorData.depthImage != null &&
                    lastDepthFrameTime != sensorData.lastDepthFrameTime)
                {
                    lastDepthFrameTime = sensorData.lastDepthFrameTime;

                    int depthBufferLength = (sensorData.depthImageWidth * sensorData.depthImageHeight) >> 1;
                    if (depthImageBuffer == null || depthImageBuffer.count != depthBufferLength)
                    {
                        depthImageBuffer = KinectInterop.CreateComputeBuffer(depthImageBuffer, depthBufferLength, sizeof(uint));
                    }

                    if (depthFilterTex == null || depthFilterTex.width != sensorData.depthImageWidth || depthFilterTex.height != sensorData.depthImageHeight)
                    {
                        depthFilterTex = KinectInterop.CreateRenderTexture(depthFilterTex, sensorData.depthImageWidth, sensorData.depthImageHeight);

                        if (backgroundImage)
                        {
                            backgroundImage.texture = depthFilterTex;
                            backgroundImage.rectTransform.localScale = kinectManager.GetDepthImageScale(sensorIndex);
                            backgroundImage.color = Color.white;
                        }
                    }

                    float minDistance = ((DepthSensorBase)sensorData.sensorInterface).minDepthDistance;
                    float maxDistance = ((DepthSensorBase)sensorData.sensorInterface).maxDepthDistance;

                    depthFilterMat.SetInt("_TexResX", sensorData.depthImageWidth);
                    depthFilterMat.SetInt("_TexResY", sensorData.depthImageHeight);
                    depthFilterMat.SetInt("_MinDepth", (int)(minDistance * 1000f));
                    depthFilterMat.SetInt("_MaxDepth", (int)(maxDistance * 1000f));

                    KinectInterop.SetComputeBufferData(depthImageBuffer, sensorData.depthImage, depthBufferLength, sizeof(uint));
                    depthFilterMat.SetBuffer("_DepthMap", depthImageBuffer);

                    depthFilterMat.SetTexture("_IrTex", sensorData.infraredImageTexture);

                    Graphics.Blit(null, depthFilterTex, depthFilterMat);
                }

                // check for resolution change
                float cameraWidth = backgroundCamera ? backgroundCamera.pixelRect.width : 0f;
                float cameraHeight = backgroundCamera ? backgroundCamera.pixelRect.height : 0f;

                if (backgroundImage && (lastCamRectW != cameraWidth || lastCamRectH != cameraHeight))
                {
                    SetImageResolution(cameraWidth, cameraHeight);
                }
            }
        }

        // sets new image resolution
        private void SetImageResolution(float cameraWidth, float cameraHeight)
        {
            lastCamRectW = cameraWidth;
            lastCamRectH = cameraHeight;

            //Debug.Log("aPos: " + backgroundImage.rectTransform.anchoredPosition + ", aMin: " + backgroundImage.rectTransform.anchorMin +
            //    ", aMax:" + backgroundImage.rectTransform.anchorMax + ", pivot: " + backgroundImage.rectTransform.pivot + 
            //    ", size: " + backgroundImage.rectTransform.sizeDelta);

            if (backgroundCamera != null)
            {
                // adjust image's size and position to match the stream aspect ratio
                int depthImageWidth = kinectManager.GetDepthImageWidth(sensorIndex);
                int depthImageHeight = kinectManager.GetDepthImageHeight(sensorIndex);

                RectTransform rectImage = backgroundImage.rectTransform;
                float rectWidth = (rectImage.anchorMin.x != rectImage.anchorMax.x) ? cameraWidth * (rectImage.anchorMax.x - rectImage.anchorMin.x) : rectImage.sizeDelta.x;
                float rectHeight = (rectImage.anchorMin.y != rectImage.anchorMax.y) ? cameraHeight * (rectImage.anchorMax.y - rectImage.anchorMin.y) : rectImage.sizeDelta.y;

                if (depthImageWidth > depthImageHeight)
                    rectWidth = rectHeight * depthImageWidth / depthImageHeight;
                else
                    rectHeight = rectWidth * depthImageHeight / depthImageWidth;

                Vector2 pivotOffset = (rectImage.pivot - new Vector2(0.5f, 0.5f)) * 2f;
                Vector2 imageScale = (Vector2)kinectManager.GetDepthImageScale(sensorIndex);
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
                rectImage.anchoredPosition = anchorPos;
            }
        }

    }
}
