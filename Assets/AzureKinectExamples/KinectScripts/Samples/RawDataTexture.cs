using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using com.rfilkov.kinect;
using System;

namespace com.rfilkov.components
{
    public class RawDataTexture : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("RawImage used to display the raw data texture.")]
        public RawImage rawImage;

        [Tooltip("Image value factor.")]
        public ushort valueFactor = 100;


        // references
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        private ushort[] rawImageData = null;
        private byte[] rawImageDataBytes = null;
        private ulong lastFrameTime = 0;


        void Start()
        {
            kinectManager = KinectManager.Instance;

            if (kinectManager && kinectManager.IsInitialized())
            {
                sensorData = kinectManager.GetSensorData(sensorIndex);
            }

            if (rawImage == null)
            {
                rawImage = GetComponent<RawImage>();
            }
        }


        void Update()
        {
            if (rawImage != null && sensorData != null && kinectManager != null && kinectManager.IsInitialized())
            {
                ushort[] rawData = sensorData.depthImage;  // sensorData.infraredImage;  // 
                ulong rawDataTime = sensorData.lastDepthFrameTime;  // sensorData.lastInfraredFrameTime;  // 

                if (rawData != null && lastFrameTime != rawDataTime)
                {
                    // Create texture.
                    if (rawImage.texture == null)
                    {
                        int width = sensorData.depthImageWidth;
                        int height = sensorData.depthImageHeight;
                        int pixelCount = width * height;

                        rawImage.texture = new Texture2D(width, height, TextureFormat.R16, false);
                        rawImage.texture.wrapMode = TextureWrapMode.Clamp;
                        rawImage.texture.filterMode = FilterMode.Point;
                        rawImage.texture.name = "KinectDepth";

                        rawImageData = new ushort[pixelCount];
                        rawImageDataBytes = new byte[pixelCount * sizeof(ushort)];

                        rawImage.rectTransform.localScale = kinectManager.GetColorImageScale(sensorIndex);
                        rawImage.color = Color.white;
                    }

                    if (rawImageDataBytes != null)
                    {
                        for (int i = 0; i < rawData.Length; i++)
                        {
                            rawImageData[i] = (ushort)(rawData[i] * valueFactor);
                        }

                        // ushort[] to byte[].
                        // https://stackoverflow.com/questions/37213819/convert-ushort-into-byte-and-back
                        Buffer.BlockCopy(rawImageData, 0, rawImageDataBytes, 0, rawImageDataBytes.Length);

                        // Load into texture.
                        ((Texture2D)rawImage.texture).LoadRawTextureData(rawImageDataBytes);
                        ((Texture2D)rawImage.texture).Apply();

                        Debug.Log("lastFrameTime: " + rawDataTime);
                    }

                    lastFrameTime = rawDataTime;
                }

            }
        }

    }
}
