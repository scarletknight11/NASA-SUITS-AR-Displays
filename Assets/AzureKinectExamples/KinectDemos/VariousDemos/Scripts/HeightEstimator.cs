using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// HeightEstimator uses the BodySlicer-component, to display user's height and other body sizes on screen.
    /// </summary>
    [RequireComponent(typeof(BodySlicer))]
    public class HeightEstimator : MonoBehaviour
    {
        [Tooltip("Smoothing factor used for height estimation.")]
        public float smoothFactor = 5f;

        [Tooltip("UI-Text used to display status messages.")]
        public UnityEngine.UI.Text statusText;

        [Tooltip("Estimated user-silhouette height, in meters.")]
        private float userHeight;

        // estimated torso widths
        private float userW1;
        private float userW2;
        private float userW3;
        private float userW4;
        private float userW5;

        // references
        private KinectManager kinectManager;
        private BodySlicer bodySlicer;
        private ulong lastFrameTime;

        // depth image resolution
        private int depthImageWidth;
        private int depthImageHeight;

        // depth scale
        private Vector3 depthScale = Vector3.one;

        // screen rectangle taken by the foreground image (in pixels)
        private Rect foregroundImgRect;


        void Start()
        {
            kinectManager = KinectManager.Instance;
            bodySlicer = gameObject.GetComponent<BodySlicer>();

            if (bodySlicer && kinectManager && kinectManager.IsInitialized())
            {
                depthImageWidth = kinectManager.GetDepthImageWidth(bodySlicer.sensorIndex);
                depthImageHeight = kinectManager.GetDepthImageHeight(bodySlicer.sensorIndex);

                depthScale = kinectManager.GetDepthImageScale(bodySlicer.sensorIndex);
            }
        }

        void Update()
        {
            if (bodySlicer && bodySlicer.getLastFrameTime() != lastFrameTime)
            {
                lastFrameTime = bodySlicer.getLastFrameTime();

                // calculate the foreground rectangle
                foregroundImgRect = kinectManager.GetForegroundRectDepth(bodySlicer.sensorIndex, bodySlicer.foregroundCamera);

                if (statusText)
                {
                    if (bodySlicer.getCalibratedUserId() != 0)
                    {
                        userHeight = !float.IsNaN(userHeight) ? Mathf.Lerp(userHeight, bodySlicer.getUserHeight(), smoothFactor * Time.deltaTime) : bodySlicer.getUserHeight();
                        string sUserInfo = string.Format("User {0} Height: {1:F2} m", bodySlicer.playerIndex, userHeight);

                        userW1 = !float.IsNaN(userW1) ? Mathf.Lerp(userW1, bodySlicer.getSliceWidth(BodySlice.TORSO_1), smoothFactor * Time.deltaTime) : bodySlicer.getSliceWidth(BodySlice.TORSO_1);
                        userW2 = !float.IsNaN(userW2) ? Mathf.Lerp(userW2, bodySlicer.getSliceWidth(BodySlice.TORSO_2), smoothFactor * Time.deltaTime) : bodySlicer.getSliceWidth(BodySlice.TORSO_2);
                        userW3 = !float.IsNaN(userW3) ? Mathf.Lerp(userW3, bodySlicer.getSliceWidth(BodySlice.TORSO_3), smoothFactor * Time.deltaTime) : bodySlicer.getSliceWidth(BodySlice.TORSO_3);
                        userW4 = !float.IsNaN(userW4) ? Mathf.Lerp(userW4, bodySlicer.getSliceWidth(BodySlice.TORSO_4), smoothFactor * Time.deltaTime) : bodySlicer.getSliceWidth(BodySlice.TORSO_4);
                        userW5 = !float.IsNaN(userW5) ? Mathf.Lerp(userW5, bodySlicer.getSliceWidth(BodySlice.TORSO_5), smoothFactor * Time.deltaTime) : bodySlicer.getSliceWidth(BodySlice.TORSO_4);

                        sUserInfo += string.Format("\n\nTorso-5: {4:F2} m\nTorso-4: {3:F2} m\nTorso-3: {2:F2} m\nTorso-2: {1:F2} m\nTorso-1: {0:F2} m", userW1, userW2, userW3, userW4, userW5);

                        statusText.text = sUserInfo;
                    }
                    else
                    {
                        statusText.text = string.Format("User {0} not found", bodySlicer.playerIndex); ;
                    }
                }
            }
        }

        //void OnRenderObject()
        //{
        //    if (bodySlicer)
        //    {
        //        int sliceCount = bodySlicer.getBodySliceCount();

        //        for (int i = 0; i < sliceCount; i++)
        //        {
        //            BodySliceData bodySlice = bodySlicer.getBodySliceData((BodySlice)i);
        //            DrawBodySlice(bodySlice);
        //        }
        //    }
        //}


        //// draws a body slice line
        //private void DrawBodySlice(BodySliceData bodySlice)
        //{
        //    if (bodySlice.isSliceValid && bodySlice.startDepthPoint != Vector2.zero && bodySlice.endDepthPoint != Vector2.zero)
        //    {
        //        //Debug.Log(bodySlice.sliceType + " -> " + bodySlice.startDepthPoint + "-" + bodySlice.endDepthPoint);

        //        float rectX = foregroundImgRect.xMin;
        //        float rectY = foregroundImgRect.yMin;

        //        float scaleX = foregroundImgRect.width / depthImageWidth;
        //        float scaleY = foregroundImgRect.height / depthImageHeight;

        //        float x1 = rectX + (depthScale.x >= 0f ? bodySlice.startDepthPoint.x : depthImageWidth - bodySlice.startDepthPoint.x) * scaleX;
        //        float y1 = rectY + (depthScale.y >= 0f ? bodySlice.startDepthPoint.y : depthImageHeight - bodySlice.startDepthPoint.y) * scaleY;

        //        float x2 = rectX + (depthScale.x >= 0f ? bodySlice.endDepthPoint.x : depthImageWidth - bodySlice.endDepthPoint.x) * scaleX;
        //        float y2 = rectY + (depthScale.y >= 0f ? bodySlice.endDepthPoint.y : depthImageHeight - bodySlice.endDepthPoint.y) * scaleY;

        //        KinectInterop.DrawLine((int)x1, (int)y1, (int)x2, (int)y2, 2f, Color.red);
        //    }
        //}

    }
}
