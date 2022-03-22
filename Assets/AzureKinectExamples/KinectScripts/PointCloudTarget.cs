using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;
using static com.rfilkov.kinect.DepthSensorBase;


namespace com.rfilkov.components
{
    /// <summary>
    /// PointCloudTarget sets the point cloud resolution of the respective sensor, as well as the target render textures.
    /// </summary>
    public class PointCloudTarget : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Resolution of the generated point-cloud textures.")]
        public PointCloudResolution pointCloudResolution = PointCloudResolution.DepthCameraResolution;

        [Tooltip("Render texture, used for point-cloud vertex mapping. The texture resolution should match the depth or color image resolution.")]
        public RenderTexture pointCloudVertexTexture = null;

        [Tooltip("Render texture, used for point-cloud color mapping. The texture resolution should match the depth or color image resolution.")]
        public RenderTexture pointCloudColorTexture = null;

        [Tooltip("List of comma-separated player indices to be included in the point cloud. Use -1 for all players, or empty list for full point cloud.")]
        public string pointCloudPlayerList = string.Empty;


        // references
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;
        private DepthSensorBase sensorInt = null;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            sensorData = kinectManager != null && kinectManager.IsInitialized() ? kinectManager.GetSensorData(sensorIndex) : null;

            if(sensorData != null && sensorData.sensorInterface != null)
            {
                sensorInt = (DepthSensorBase)sensorData.sensorInterface;

                sensorInt.pointCloudResolution = pointCloudResolution;
                sensorInt.pointCloudVertexTexture = pointCloudVertexTexture;
                sensorInt.pointCloudColorTexture = pointCloudColorTexture;
                sensorInt.pointCloudPlayerList = pointCloudPlayerList;
                //Debug.Log("PointCloudResolution: " + pointCloudResolution + ", PointCloudVertexTexture: " + pointCloudVertexTexture + ", PointCloudColorTexture: " + pointCloudColorTexture);
            }
        }


        //void Update()
        //{
        //    if (sensorInt == null)
        //        return;

        //    Vector2Int texRes = sensorInt.GetPointCloudTexResolution(sensorData);

        //    if (pointCloudVertexTexture != null && (pointCloudVertexTexture.width != texRes.x || pointCloudVertexTexture.height != texRes.y))
        //    {
        //        pointCloudVertexTexture.Release();
        //        pointCloudVertexTexture.width = texRes.x;
        //        pointCloudVertexTexture.height = texRes.y;
        //        pointCloudVertexTexture.Create();

        //        //Debug.Log("Updated PointCloudVertexTexture with w: " + pointCloudVertexTexture.width + " and h: " + pointCloudVertexTexture.height);
        //    }

        //    if (pointCloudColorTexture != null && (pointCloudColorTexture.width != texRes.x || pointCloudColorTexture.height != texRes.y))
        //    {
        //        pointCloudColorTexture.Release();
        //        pointCloudColorTexture.width = texRes.x;
        //        pointCloudColorTexture.height = texRes.y;
        //        pointCloudColorTexture.Create();

        //        //Debug.Log("Updated PointCloudColorTexture with w: " + pointCloudColorTexture.width + " and h: " + pointCloudColorTexture.height);
        //    }
        //}

    }
}
