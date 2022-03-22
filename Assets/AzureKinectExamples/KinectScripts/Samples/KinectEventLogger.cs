using com.rfilkov.kinect;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;


namespace com.rfilkov.components
{
    /// <summary>
    /// KinectEventLogger is a simple class, containing log methods for testing KinectEventManager.
    /// </summary>
    public class KinectEventLogger : MonoBehaviour
    {

        [Tooltip("RawImage used to display the color image.")]
        public UnityEngine.UI.RawImage colorImage;

        [Tooltip("RawImage used to display the depth image.")]
        public UnityEngine.UI.RawImage depthImage;

        [Tooltip("RawImage used to display the infrared image.")]
        public UnityEngine.UI.RawImage infraredImage;

        [Tooltip("RawImage used to display the body-index image.")]
        public UnityEngine.UI.RawImage bodyIndexImage;

        [Tooltip("RawImage used to display the transformed color image.")]
        public UnityEngine.UI.RawImage transformedColorImage;

        [Tooltip("RawImage used to display the transformed infrared image.")]
        public UnityEngine.UI.RawImage transformedInfraredImage;


        public void OnDepthSensorsStarted()
        {
            Debug.Log("OnDepthSensorsStarted");
        }

        public void OnDepthSensorsStopped()
        {
            Debug.Log("OnDepthSensorsStopped");
        }

        public void OnSensorDisconnect(ulong lastFrameTime)
        {
            Debug.Log("OnSensorDisconnect at time: " + lastFrameTime);
        }

        public void OnNewColorImage(Texture colorTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewColorImage at time: " + lastFrameTime);

            if(colorImage != null)
            {
                colorImage.texture = colorTex;
            }
        }

        public void OnNewDepthFrame(ushort[] depthFrame, int frameWidth, int frameHeight, ulong lastFrameTime)
        {
            Debug.Log("OnNewDepthFrame at time: " + lastFrameTime + "\n" + GetDataString(depthFrame, frameWidth, frameHeight));
        }

        public void OnNewInfraredFrame(ushort[] infraredFrame, int frameWidth, int frameHeight, ulong lastFrameTime)
        {
            Debug.Log("OnNewInfraredFrame at time: " + lastFrameTime + "\n" + GetDataString(infraredFrame, frameWidth, frameHeight));
        }

        public void OnNewBodyFrame(KinectInterop.BodyData[] alBodies, uint bodyCount, ulong lastFrameTime)
        {
            Debug.Log("OnNewBodyFrame at time: " + lastFrameTime + "\nFound" + alBodies.Length + " bodies.");
        }

        public void OnNewBodyIndexFrame(byte[] bodyIndexFrame, int frameWidth, int frameHeight, ulong lastFrameTime)
        {
            Debug.Log("OnNewBodyIndexFrame at time: " + lastFrameTime + "\n" + GetDataString(bodyIndexFrame, frameWidth, frameHeight));
        }

        public void OnNewDepthImage(Texture depthTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewDepthImage at time: " + lastFrameTime);

            if (depthImage != null)
            {
                depthImage.texture = depthTex;
            }
        }

        public void OnNewInfraredImage(Texture infraredTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewInfraredImage at time: " + lastFrameTime);

            if (infraredImage != null)
            {
                infraredImage.texture = infraredTex;
            }
        }

        public void OnNewBodyIndexImage(Texture bodyIndexTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewBodyIndexImage at time: " + lastFrameTime);

            if (bodyIndexImage != null)
            {
                bodyIndexImage.texture = bodyIndexTex;
            }
        }

        public void OnNewDepthCameraColorImage(Texture tcolorTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewDepthCameraColorImage at time: " + lastFrameTime);

            if (transformedColorImage != null)
            {
                transformedColorImage.texture = tcolorTex;
            }
        }

        public void OnNewColorCameraDepthFrame(ushort[] depthFrame, int frameWidth, int frameHeight, ulong lastFrameTime)
        {
            Debug.Log("OnNewColorCameraDepthFrame at time: " + lastFrameTime + "\n" + GetDataString(depthFrame, frameWidth, frameHeight));
        }

        public void OnNewColorCameraInfraredImage(Texture tinfraredTex, ulong lastFrameTime)
        {
            Debug.Log("OnNewColorCameraInfraredImage at time: " + lastFrameTime);

            if (transformedInfraredImage != null)
            {
                transformedInfraredImage.texture = tinfraredTex;
            }
        }

        public void OnNewColorCameraBodyIndexFrame(byte[] bodyIndexFrame, int frameWidth, int frameHeight, ulong lastFrameTime)
        {
            Debug.Log("OnNewColorCameraBodyIndexFrame at time: " + lastFrameTime + "\n" + GetDataString(bodyIndexFrame, frameWidth, frameHeight));
        }


        // returns several data elements as string
        private string GetDataString(ushort[] frame, int frameWidth, int frameHeight)
        {
            StringBuilder sbBuf = new StringBuilder();

            int p1 = frameHeight / 2 * frameWidth + frameWidth / 2 - 4;
            int p2 = p1 + 8;

            sbBuf.Append("...");
            for (int i = p1; i < p2; i++)
            {
                sbBuf.Append(frame[i]).Append(' ');
            }
            sbBuf.Append("...");

            return sbBuf.ToString();
        }

        // returns several data elements as string
        private string GetDataString(byte[] frame, int frameWidth, int frameHeight)
        {
            StringBuilder sbBuf = new StringBuilder();

            int p1 = frameHeight / 2 * frameWidth + frameWidth / 2 - 4;
            int p2 = p1 + 8;

            sbBuf.Append("...");
            for (int i = p1; i < p2; i++)
            {
                sbBuf.Append(frame[i]).Append(' ');
            }
            sbBuf.Append("...");

            return sbBuf.ToString();
        }

    }
}

