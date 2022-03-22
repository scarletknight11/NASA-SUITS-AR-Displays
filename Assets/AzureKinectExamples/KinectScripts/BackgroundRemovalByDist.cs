using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// BackgroundRemovalByDist filters part of the real environment, according to the given spatial limits.
    /// </summary>
    public class BackgroundRemovalByDist : MonoBehaviour
    {
        [Tooltip("Horizontal limit - minimum, in meters.")]
        [Range(-5f, 5f)]
        public float xMin = -1.5f;

        [Tooltip("Horizontal limit - maximum, in meters.")]
        [Range(-5f, 5f)]
        public float xMax = 1.5f;

        [Tooltip("Vertical limit - minimum, in meters.")]
        [Range(-5f, 5f)]
        public float yMin = -1.5f;

        [Tooltip("Vertical limit - maximum, in meters.")]
        [Range(-5f, 5f)]
        public float yMax = 1.5f;

        [Tooltip("Distance limit - minimum, in meters.")]
        [Range(0.5f, 10f)]
        public float zMin = 0.5f;

        [Tooltip("Distance limit - maximum at left, in meters.")]
        [Range(0.5f, 10f)]
        public float zMaxLeft = 3f;

        [Tooltip("Distance limit - maximum at right, in meters.")]
        [Range(0.5f, 10f)]
        public float zMaxRight = 3f;

        // foreground filter shader
        private ComputeShader foregroundFilterShader = null;
        private int foregroundFilterKernel = -1;


        void Start()
        {
            foregroundFilterShader = Resources.Load("ForegroundFiltDistShader") as ComputeShader;
            foregroundFilterKernel = foregroundFilterShader != null ? foregroundFilterShader.FindKernel("FgFiltDist") : -1;
        }


        /// <summary>
        /// Applies vertex filter by distance.
        /// </summary>
        /// <param name="vertexTexture">The vertex texture</param>
        /// <param name="alphaTexture">The alpha texture</param>
        public void ApplyVertexFilter(RenderTexture vertexTexture, RenderTexture alphaTexture, Matrix4x4 sensorWorldMatrix)
        {
            //foregroundFilterShader.SetMatrix("Transform", sensorWorldMatrix);
            //Matrix4x4 matWorldKinect = sensorWorldMatrix.inverse;

            Vector3 posMin = new Vector3(xMin, yMin, zMin);  // matWorldKinect.MultiplyPoint3x4(new Vector3(xMin, yMin, zMin));
            Vector3 posMaxX = new Vector3(xMax, yMin, zMin) - posMin;  // matWorldKinect.MultiplyPoint3x4(new Vector3(xMax, yMin, zMin)) - posMin;
            Vector3 posMaxY = new Vector3(xMin, yMax, zMin) - posMin;  // matWorldKinect.MultiplyPoint3x4(new Vector3(xMin, yMax, zMin)) - posMin;

            Vector3 posMaxZLeft = new Vector3(xMin, yMin, zMaxRight) - posMin;  // matWorldKinect.MultiplyPoint3x4(new Vector3(xMin, yMin, zMaxRight)) - posMin;
            Vector3 posMaxZRight = new Vector3(xMin, yMin, zMaxLeft) - posMin;  // matWorldKinect.MultiplyPoint3x4(new Vector3(xMin, yMin, zMaxLeft)) - posMin;

            Vector3 posMaxZ = (posMaxZLeft + posMaxZRight) / 2;

            Vector3 posDot = new Vector3(Vector3.Dot(posMaxX, posMaxX), Vector3.Dot(posMaxY, posMaxY), Vector3.Dot(posMaxZ, posMaxZ));

            foregroundFilterShader.SetVector("_PosMin", posMin);
            foregroundFilterShader.SetVector("_PosMaxX", posMaxX);
            foregroundFilterShader.SetVector("_PosMaxY", posMaxY);
            foregroundFilterShader.SetVector("_PosMaxZ", posMaxZ);
            foregroundFilterShader.SetVector("_PosMaxZLeft", posMaxZLeft);
            foregroundFilterShader.SetVector("_PosMaxZRight", posMaxZRight);
            foregroundFilterShader.SetVector("_PosDot", posDot);

            foregroundFilterShader.SetTexture(foregroundFilterKernel, "_VertexTex", vertexTexture);
            foregroundFilterShader.SetTexture(foregroundFilterKernel, "_AlphaTex", alphaTexture);
            foregroundFilterShader.Dispatch(foregroundFilterKernel, vertexTexture.width / 8, vertexTexture.height / 8, 1);
        }

    }
}
