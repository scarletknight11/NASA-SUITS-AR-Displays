using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Body slice enum.
    /// </summary>
    public enum BodySlice
    {
        HEIGHT = 0,
        WIDTH = 1,

        TORSO_1 = 2,
        TORSO_2 = 3,
        TORSO_3 = 4,
        TORSO_4 = 5,
        TORSO_5 = 6,

        COUNT = 7
    }

    /// <summary>
    /// Data structure used by the body slicer.
    /// </summary>
    public struct BodySliceData
    {
        public BodySlice sliceType;
        public bool isSliceValid;

        public float diameter;
        public int depthPointsLength;
        public int colorPointsLength;

        //	public ushort[] depths;
        public Vector2 startDepthPoint;
        public Vector2 endDepthPoint;

        public Vector2 startColorPoint;
        public Vector2 endColorPoint;

        public Vector3 startKinectPoint;
        public Vector3 endKinectPoint;
    }


    /// <summary>
    /// Body slicer is component that estimates the user height from the depth data, as well as several other body sizes.
    /// </summary>
    public class BodySlicer : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("Index of the player, tracked by this component. 0 means the 1st player, 1 - the 2nd one, 2 - the 3rd one, etc.")]
        public int playerIndex = 0;

        [Tooltip("Camera used to estimate the overlay positions of 3D-objects over the background. By default it is the main camera.")]
        public Camera foregroundCamera;

        [Tooltip("Whether the sensor is in portrait mode or not.")]
        public bool portraitMode = false;

        [Tooltip("Whether the body height should estimated or not.")]
        public bool estimateBodyHeight = true;

        [Tooltip("Whether the body width should estimated or not.")]
        public bool estimateBodyWidth = false;

        [Tooltip("Whether the body slices should estimated or not.")]
        public bool estimateBodySlices = false;

        [Tooltip("Whether the slicing should be done on all updates, or only after the user calibration.")]
        public bool continuousSlicing = false;

        [Tooltip("Whether the detected body slices should be displayed on the screen.")]
        public bool displayBodySlices = false;


        private ulong calibratedUserId;
        private byte userBodyIndex;


        // The singleton instance of BodySlicer
        //private static BodySlicer instance = null;
        private KinectManager kinectManager;
        private KinectInterop.SensorData sensorData;
        private ulong lastDepthFrameTime;

        // body slice data
        private BodySliceData[] bodySlices = new BodySliceData[(int)BodySlice.COUNT];

        // depth image resolution
        private int depthImageWidth;
        private int depthImageHeight;

        // depth scale
        private Vector3 depthScale = Vector3.one;

        // screen rectangle taken by the foreground image (in pixels)
        private Rect foregroundImgRect;


        ///// <summary>
        ///// Gets the singleton BodySlicer instance.
        ///// </summary>
        ///// <value>The singleton BodySlicer instance.</value>
        //public static BodySlicer Instance
        //{
        //    get
        //    {
        //        return instance;
        //    }
        //}


        /// <summary>
        /// Gets the height of the user.
        /// </summary>
        /// <returns>The user height.</returns>
        public float getUserHeight()
        {
            return getSliceWidth(BodySlice.HEIGHT);
        }


        /// <summary>
        /// Gets the slice width.
        /// </summary>
        /// <returns>The slice width.</returns>
        /// <param name="slice">Slice.</param>
        public float getSliceWidth(BodySlice slice)
        {
            int iSlice = (int)slice;

            if (bodySlices[iSlice].isSliceValid)
            {
                return bodySlices[iSlice].diameter;
            }

            return 0f;
        }


        /// <summary>
        /// Gets the body slice count.
        /// </summary>
        /// <returns>The body slice count.</returns>
        public int getBodySliceCount()
        {
            return bodySlices != null ? bodySlices.Length : 0;
        }


        /// <summary>
        /// Gets the body slice data.
        /// </summary>
        /// <returns>The body slice data.</returns>
        /// <param name="slice">Slice.</param>
        public BodySliceData getBodySliceData(BodySlice slice)
        {
            return bodySlices[(int)slice];
        }


        /// <summary>
        /// Gets the calibrated user ID.
        /// </summary>
        /// <returns>The calibrated user ID.</returns>
        public ulong getCalibratedUserId()
        {
            return calibratedUserId;
        }


        /// <summary>
        /// Gets the last frame time.
        /// </summary>
        /// <returns>The last frame time.</returns>
        public ulong getLastFrameTime()
        {
            return lastDepthFrameTime;
        }


        ////////////////////////////////////////////////////////////////////////


        void Awake()
        {
            //instance = this;
        }

        void Start()
        {
            kinectManager = KinectManager.Instance;
            sensorData = kinectManager ? kinectManager.GetSensorData(sensorIndex) : null;

            if(kinectManager && kinectManager.IsInitialized())
            {
                depthImageWidth = kinectManager.GetDepthImageWidth(sensorIndex);
                depthImageHeight = kinectManager.GetDepthImageHeight(sensorIndex);

                depthScale = kinectManager.GetDepthImageScale(sensorIndex);
            }

            if (foregroundCamera == null)
            {
                // by default use the main camera
                foregroundCamera = Camera.main;
            }
        }

        void Update()
        {
            if (!kinectManager || !kinectManager.IsInitialized() || sensorData == null)
                return;

            // calculate the foreground rectangle
            foregroundImgRect = kinectManager.GetForegroundRectDepth(sensorIndex, foregroundCamera);

            // get required player
            ulong userId = kinectManager.GetUserIdByIndex(playerIndex);

            if (calibratedUserId == 0)
            {
                if (userId != 0)
                {
                    OnCalibrationSuccess(userId);
                }
            }
            else
            {
                if (calibratedUserId != userId)
                {
                    OnUserLost(calibratedUserId);
                }
                else if (continuousSlicing)
                {
                    EstimateBodySlices(calibratedUserId);
                }
            }
        }

        void OnRenderObject()
        {
            if (displayBodySlices)
            {
                DrawBodySlice(bodySlices[(int)BodySlice.HEIGHT]);

                DrawBodySlice(bodySlices[(int)BodySlice.TORSO_1]);
                DrawBodySlice(bodySlices[(int)BodySlice.TORSO_2]);
                DrawBodySlice(bodySlices[(int)BodySlice.TORSO_3]);
                DrawBodySlice(bodySlices[(int)BodySlice.TORSO_4]);
                DrawBodySlice(bodySlices[(int)BodySlice.TORSO_5]);
            }
        }


        // draws a body slice line
        private void DrawBodySlice(BodySliceData bodySlice)
        {
            if (bodySlice.isSliceValid && bodySlice.startDepthPoint != Vector2.zero && bodySlice.endDepthPoint != Vector2.zero)
            {
                float rectX = foregroundImgRect.xMin;
                float rectY = foregroundImgRect.yMin;

                float scaleX = foregroundImgRect.width / depthImageWidth;
                float scaleY = foregroundImgRect.height / depthImageHeight;

                float x1 = rectX + (depthScale.x >= 0f ? bodySlice.startDepthPoint.x : depthImageWidth - bodySlice.startDepthPoint.x) * scaleX;
                float y1 = rectY + (depthScale.y >= 0f ? bodySlice.startDepthPoint.y : depthImageHeight - bodySlice.startDepthPoint.y) * scaleY;

                float x2 = rectX + (depthScale.x >= 0f ? bodySlice.endDepthPoint.x : depthImageWidth - bodySlice.endDepthPoint.x) * scaleX;
                float y2 = rectY + (depthScale.y >= 0f ? bodySlice.endDepthPoint.y : depthImageHeight - bodySlice.endDepthPoint.y) * scaleY;

                KinectInterop.DrawLine((int)x1, (int)y1, (int)x2, (int)y2, 2f, Color.red);
            }
        }


        public void OnCalibrationSuccess(ulong userId)
        {
            calibratedUserId = userId;

            // estimate body slices
            EstimateBodySlices(calibratedUserId);
        }


        void OnUserLost(ulong userId)
        {
            calibratedUserId = 0;

            // invalidate the body slice data
            for (int i = 0; i < bodySlices.Length; i++)
            {
                bodySlices[i].isSliceValid = false;
            }
        }


        // estimates the body slice data for the given user
        public bool EstimateBodySlices(ulong userId)
        {
            if (userId <= 0)
                userId = calibratedUserId;

            if (!kinectManager || userId == 0)
                return false;

            userBodyIndex = (byte)kinectManager.GetBodyIndexByUserId(userId);
            if (userBodyIndex == 255)
                return false;

            bool bSliceSuccess = false;

            if (sensorData.bodyIndexImage != null && sensorData.depthImage != null &&
                sensorData.lastDepthFrameTime != lastDepthFrameTime)
            {
                lastDepthFrameTime = sensorData.lastDepthFrameTime;
                bSliceSuccess = true;

                Vector2 pointPelvis = kinectManager.MapSpacePointToDepthCoords(sensorIndex, kinectManager.GetJointKinectPosition(userId, (int)KinectInterop.JointType.Pelvis, false));

                if (estimateBodyHeight)
                {
                    bodySlices[(int)BodySlice.HEIGHT] = !portraitMode ? GetUserHeightParams(pointPelvis) : GetUserWidthParams(pointPelvis);
                }

                if (estimateBodyWidth)
                {
                    bodySlices[(int)BodySlice.WIDTH] = !portraitMode ? GetUserWidthParams(pointPelvis) : GetUserHeightParams(pointPelvis);
                }

                if (estimateBodySlices && kinectManager.IsJointTracked(userId, (int)KinectInterop.JointType.Pelvis) && kinectManager.IsJointTracked(userId, (int)KinectInterop.JointType.Neck))
                {
                    Vector2 point1 = pointPelvis;
                    Vector2 point2 = kinectManager.MapSpacePointToDepthCoords(sensorIndex, kinectManager.GetJointKinectPosition(userId, (int)KinectInterop.JointType.Neck, false));
                    Vector2 sliceDir = (point2 - point1) / 4f;

                    bool sliceOnX = !portraitMode ? true : false;
                    bool sliceOnY = !portraitMode ? false : true;

                    Vector2 vSlicePoint = point1;
                    bodySlices[(int)BodySlice.TORSO_1] = GetBodySliceParams(BodySlice.TORSO_1, vSlicePoint, sliceOnX, sliceOnY, -1);

                    vSlicePoint += sliceDir;
                    bodySlices[(int)BodySlice.TORSO_2] = GetBodySliceParams(BodySlice.TORSO_2, vSlicePoint, sliceOnX, sliceOnY, -1);

                    vSlicePoint += sliceDir;
                    bodySlices[(int)BodySlice.TORSO_3] = GetBodySliceParams(BodySlice.TORSO_3, vSlicePoint, sliceOnX, sliceOnY, -1);

                    vSlicePoint += sliceDir;
                    bodySlices[(int)BodySlice.TORSO_4] = GetBodySliceParams(BodySlice.TORSO_4, vSlicePoint, sliceOnX, sliceOnY, -1);

                    vSlicePoint = point2;
                    bodySlices[(int)BodySlice.TORSO_5] = GetBodySliceParams(BodySlice.TORSO_5, vSlicePoint, sliceOnX, sliceOnY, -1);
                }
            }

            return bSliceSuccess;
        }


        // creates body slice data for user height
        private BodySliceData GetUserHeightParams(Vector2 pointSpineBase)
        {
            int depthLength = sensorData.depthImage.Length;
            int depthWidth = sensorData.depthImageWidth;
            int depthHeight = sensorData.depthImageHeight;

            Vector2 posTop = new Vector2(0, depthHeight);
            for (int i = 0, x = 0, y = 0; i < depthLength; i++)
            {
                if (sensorData.bodyIndexImage[i] == userBodyIndex)
                {
                    //if (posTop.y > y)
                    posTop = new Vector2(x, y);
                    break;
                }

                x++;
                if (x >= depthWidth)
                {
                    x = 0;
                    y++;
                }
            }

            Vector2 posBottom = new Vector2(0, -1);
            for (int i = depthLength - 1, x = depthWidth - 1, y = depthHeight - 1; i >= 0; i--)
            {
                if (sensorData.bodyIndexImage[i] == userBodyIndex)
                {
                    //if (posBottom.y < y)
                    posBottom = new Vector2(x, y);
                    break;
                }

                x--;
                if (x < 0)
                {
                    x = depthWidth - 1;
                    y--;
                }
            }

            BodySliceData sliceData = new BodySliceData();
            sliceData.sliceType = BodySlice.HEIGHT;
            sliceData.isSliceValid = false;

            if (posBottom.y >= 0)
            {
                sliceData.startDepthPoint = posTop;
                sliceData.endDepthPoint = posBottom;
                sliceData.depthPointsLength = (int)posBottom.y - (int)posTop.y + 1;

                int index1 = (int)posTop.y * depthWidth + (int)posTop.x;
                ushort depth1 = sensorData.depthImage[index1];
                sliceData.startKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.startDepthPoint, depth1, true);

                int index2 = (int)posBottom.y * depthWidth + (int)posBottom.x;
                ushort depth2 = sensorData.depthImage[index2];
                sliceData.endKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.endDepthPoint, depth2, true);

                sliceData.startColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.startDepthPoint, depth1);
                sliceData.endColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.endDepthPoint, depth2);

                if (sliceData.startColorPoint.y < 0)
                    sliceData.startColorPoint.y = 0;
                if (sliceData.endColorPoint.y >= sensorData.colorImageHeight)
                    sliceData.endColorPoint.y = sensorData.colorImageHeight - 1;
                sliceData.colorPointsLength = (int)sliceData.endColorPoint.y - (int)sliceData.startColorPoint.y + 1;

                // correct x-positions of depth points
                sliceData.startDepthPoint.x = pointSpineBase.x;
                sliceData.endDepthPoint.x = pointSpineBase.x;

                sliceData.diameter = (sliceData.endKinectPoint - sliceData.startKinectPoint).magnitude;
                sliceData.isSliceValid = true;
            }

            return sliceData;
        }

        // creates body slice data for user width
        private BodySliceData GetUserWidthParams(Vector2 pointSpineBase)
        {
            int depthLength = sensorData.depthImage.Length;
            int depthWidth = sensorData.depthImageWidth;
            //int depthHeight = sensorData.depthImageHeight;

            Vector2 posLeft = new Vector2(depthWidth, 0);
            Vector2 posRight = new Vector2(-1, 0);

            for (int i = 0, x = 0, y = 0; i < depthLength; i++)
            {
                if (sensorData.bodyIndexImage[i] == userBodyIndex)
                {
                    if (posLeft.x > x)
                        posLeft = new Vector2(x, y);
                    if (posRight.x < x)
                        posRight = new Vector2(x, y);
                }

                x++;
                if (x >= depthWidth)
                {
                    x = 0;
                    y++;
                }
            }

            BodySliceData sliceData = new BodySliceData();
            sliceData.sliceType = BodySlice.WIDTH;
            sliceData.isSliceValid = false;

            if (posRight.x >= 0)
            {
                sliceData.startDepthPoint = posLeft;
                sliceData.endDepthPoint = posRight;
                sliceData.depthPointsLength = (int)posRight.x - (int)posLeft.x + 1;

                int index1 = (int)posLeft.y * depthWidth + (int)posLeft.x;
                ushort depth1 = sensorData.depthImage[index1];
                sliceData.startKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.startDepthPoint, depth1, true);

                int index2 = (int)posRight.y * depthWidth + (int)posRight.x;
                ushort depth2 = sensorData.depthImage[index2];
                sliceData.endKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.endDepthPoint, depth2, true);

                sliceData.startColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.startDepthPoint, depth1);
                sliceData.endColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.endDepthPoint, depth2);

                if (sliceData.startColorPoint.x < 0)
                    sliceData.startColorPoint.x = 0;
                if (sliceData.endColorPoint.x >= sensorData.colorImageWidth)
                    sliceData.endColorPoint.x = sensorData.colorImageWidth - 1;
                sliceData.colorPointsLength = (int)sliceData.endColorPoint.x - (int)sliceData.startColorPoint.x + 1;

                // correct y-positions of depth points
                sliceData.startDepthPoint.y = pointSpineBase.y;
                sliceData.endDepthPoint.y = pointSpineBase.y;

                sliceData.diameter = (sliceData.endKinectPoint - sliceData.startKinectPoint).magnitude;
                sliceData.isSliceValid = true;
            }

            return sliceData;
        }

        // creates body slice data for the given body slice
        private BodySliceData GetBodySliceParams(BodySlice sliceType, Vector2 middlePoint, bool bSliceOnX, bool bSliceOnY, int maxDepthLength)
        {
            BodySliceData sliceData = new BodySliceData();
            sliceData.sliceType = sliceType;

            sliceData.isSliceValid = false;
            sliceData.depthPointsLength = 0;

            if (!kinectManager || middlePoint == Vector2.zero)
                return sliceData;
            if (!bSliceOnX && !bSliceOnY)
                return sliceData;

            middlePoint.x = Mathf.FloorToInt(middlePoint.x + 0.5f);
            middlePoint.y = Mathf.FloorToInt(middlePoint.y + 0.5f);

            int depthWidth = sensorData.depthImageWidth;
            int depthHeight = sensorData.depthImageHeight;

            int indexMid = (int)middlePoint.y * depthWidth + (int)middlePoint.x;
            byte userIndex = sensorData.bodyIndexImage[indexMid];

            if (userIndex != userBodyIndex)
                return sliceData;

            sliceData.startDepthPoint = middlePoint;
            sliceData.endDepthPoint = middlePoint;

            int indexDiff1 = 0;
            int indexDiff2 = 0;

            if (bSliceOnX)
            {
                // min-max
                int minIndex = (int)middlePoint.y * depthWidth;
                int maxIndex = (int)(middlePoint.y + 1) * depthWidth;

                // horizontal left
                int stepIndex = -1;
                indexDiff1 = TrackSliceInDirection(indexMid, stepIndex, minIndex, maxIndex, userIndex);

                // horizontal right
                stepIndex = 1;
                indexDiff2 = TrackSliceInDirection(indexMid, stepIndex, minIndex, maxIndex, userIndex);
            }
            else if (bSliceOnY)
            {
                // min-max
                int minIndex = 0;
                int maxIndex = depthHeight * depthWidth;

                // vertical up
                int stepIndex = -depthWidth;
                indexDiff1 = TrackSliceInDirection(indexMid, stepIndex, minIndex, maxIndex, userIndex);

                // vertical down
                stepIndex = depthWidth;
                indexDiff2 = TrackSliceInDirection(indexMid, stepIndex, minIndex, maxIndex, userIndex);
            }

            // calculate depth length
            sliceData.depthPointsLength = indexDiff1 + indexDiff2 + 1;

            // check for max length (used by upper legs)
            if (maxDepthLength > 0 && sliceData.depthPointsLength > maxDepthLength)
            {
                if (indexDiff1 > indexDiff2)
                    indexDiff1 = indexDiff2;
                else
                    indexDiff2 = indexDiff1;

                sliceData.depthPointsLength = indexDiff1 + indexDiff2 + 1;
            }

            // set start and end depth points
            if (bSliceOnX)
            {
                sliceData.startDepthPoint.x -= indexDiff1;
                sliceData.endDepthPoint.x += indexDiff2;
            }
            else if (bSliceOnY)
            {
                sliceData.startDepthPoint.y -= indexDiff1;
                sliceData.endDepthPoint.y += indexDiff2;
            }

            // start point
            int index1 = (int)sliceData.startDepthPoint.y * depthWidth + (int)sliceData.startDepthPoint.x;
            ushort depth1 = sensorData.depthImage[index1];
            sliceData.startKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.startDepthPoint, depth1, true);

            // end point
            int index2 = (int)sliceData.endDepthPoint.y * depthWidth + (int)sliceData.endDepthPoint.x;
            ushort depth2 = sensorData.depthImage[index2];
            sliceData.endKinectPoint = kinectManager.MapDepthPointToSpaceCoords(sensorIndex, sliceData.endDepthPoint, depth2, true);

            sliceData.startColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.startDepthPoint, depth1);
            sliceData.endColorPoint = kinectManager.MapDepthPointToColorCoords(sensorIndex, sliceData.endDepthPoint, depth2);

            if (sliceData.startColorPoint.x < 0)
                sliceData.startColorPoint.x = 0;
            if (sliceData.endColorPoint.x >= sensorData.colorImageWidth)
                sliceData.endColorPoint.x = sensorData.colorImageWidth - 1;
            sliceData.colorPointsLength = (int)sliceData.endColorPoint.x - (int)sliceData.startColorPoint.x + 1;

            // diameter
            sliceData.diameter = (sliceData.endKinectPoint - sliceData.startKinectPoint).magnitude;
            sliceData.isSliceValid = true;

            return sliceData;
        }

        // determines the number of points in the given direction
        private int TrackSliceInDirection(int index, int stepIndex, int minIndex, int maxIndex, byte userIndex)
        {
            int indexDiff = 0;
            int errCount = 0;

            index += stepIndex;
            while (index >= minIndex && index < maxIndex)
            {
                if (sensorData.bodyIndexImage[index] != userIndex)
                {
                    errCount++;
                    if (errCount > 0) // allow 0 error(s)
                        break;
                }
                else
                {
                    errCount = 0;
                }

                index += stepIndex;
                indexDiff++;
            }

            return indexDiff;
        }

    }
}
