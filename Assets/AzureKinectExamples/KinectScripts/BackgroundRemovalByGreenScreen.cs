using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// BackgroundRemovalByGreenScreen filters color camera data, according to its similarity or difference to the color of the green-screen.
    /// </summary>
    public class BackgroundRemovalByGreenScreen : MonoBehaviour
    {
        [Tooltip("The color of the 'green screen'.")]
        public Color greenScreenColor = Color.green;

        [Tooltip("Allowed similarity between the 'green screen' color and the texture color.")]
        public float greenScreenColorRange = 0.5f;

        [Tooltip("Alpha values below this value will be set to fully transparent.")]
        [Range(0f, 1f)]
        public float setAsTransparentBelow = 0f;

        [Tooltip("Alpha values above this value will be set to fully opaque.")]
        [Range(0f, 1f)]
        public float setAsOpaqueAbove = 1f;

        [Tooltip("Green screen rectangle in normalized coordinates (between 0 and 1).")]
        public Rect greenScreenRect = new Rect(0, 0, 1, 1);


        // foreground filter shader
        private ComputeShader foregroundFilterShader = null;
        private int foregroundFilterKernel = -1;


        // initializes background removal shaders
        public bool InitBackgroundRemoval(KinectInterop.SensorData sensorData)
        {
            if (sensorData != null && sensorData.colorImageWidth > 0 && sensorData.colorImageHeight > 0)
            {
                foregroundFilterShader = Resources.Load("ForegroundFiltGreenScreenShader") as ComputeShader;
                foregroundFilterKernel = foregroundFilterShader != null ? foregroundFilterShader.FindKernel("FgFiltFreenScreen") : -1;

                return true;
            }

            return false;
        }


        //// releases background removal shader resources
        //public void FinishBackgroundRemoval(KinectInterop.SensorData sensorData)
        //{
        //}


        /// <summary>
        /// Applies foreground filter by green screen.
        /// </summary>
        public void ApplyForegroundFilterByGreenScreen(RenderTexture alphaTexture, KinectInterop.SensorData sensorData, 
            KinectManager kinectManager, RenderTexture colorTexture)
        {
            if (foregroundFilterShader != null && colorTexture != null && alphaTexture != null)
            {
                foregroundFilterShader.SetVector("_GreenScreenColor", greenScreenColor);
                foregroundFilterShader.SetFloat("_GreenScreenColorRange", greenScreenColorRange);

                foregroundFilterShader.SetTexture(foregroundFilterKernel, "_ColorTex", colorTexture);
                foregroundFilterShader.SetTexture(foregroundFilterKernel, "_AlphaTex", alphaTexture);

                foregroundFilterShader.SetFloat("_SetTranspBelow", setAsTransparentBelow);
                foregroundFilterShader.SetFloat("_SetOpaqueAbove", setAsOpaqueAbove);

                float xMin = sensorData.colorImageScale.x > 0 ? greenScreenRect.xMin * colorTexture.width : (1f - greenScreenRect.xMax) * colorTexture.width;
                float yMin = sensorData.colorImageScale.y > 0 ? greenScreenRect.yMin * colorTexture.height : (1f - greenScreenRect.yMax) * colorTexture.height;
                float xMax = sensorData.colorImageScale.x > 0 ? greenScreenRect.xMax * colorTexture.width : (1f - greenScreenRect.xMin) * colorTexture.width;
                float yMax = sensorData.colorImageScale.y > 0 ? greenScreenRect.yMax * colorTexture.height : (1f - greenScreenRect.yMin) * colorTexture.height;

                Vector4 vGreenScreenRect = new Vector4(xMin, yMin, xMax, yMax);
                foregroundFilterShader.SetVector("_GreenScreenRect", vGreenScreenRect);
                //Debug.Log(vGreenScreenRect);

                foregroundFilterShader.Dispatch(foregroundFilterKernel, alphaTexture.width / 8, alphaTexture.height / 8, 1);
                //Debug.Log("ApplyForegroundFilterByGreenScreen()");
            }
        }

    }
}
