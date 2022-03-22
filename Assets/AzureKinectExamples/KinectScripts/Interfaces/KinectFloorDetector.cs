using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using com.rfilkov.kinect;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// KinectFloorDetector is based on the 'Azure Kinect Floor Plane Detection Sample' that demonstrates one way to estimate the floor plane.
    /// </summary>
    public class KinectFloorDetector
    {
        /// <summary>
        /// Smoothing factor used for sensor position and rotation update. 
        /// </summary>
        public float smoothFactor = 5f;

        // reference to the sensor data
        private KinectInterop.SensorData sensorData = null;
        private Vector3 spaceScale = Vector3.one;
        private ulong lastDepthFrameTime = 0;

        // IMU data
        private Vector3 imuUpVector = Vector3.zero;
        //private Transform imuVectorTrans = null; 

        // data buffers
        private Vector3[] depth2SpaceTable = null;
        private int depth2SpaceWidth = 0, depth2SpaceHeight = 0;
        private float[] histMinMax = null;
        private float[] planePosNorm = null;

        private int binAggregation = 6;
        public int minFloorPointCount = 1024;
        public float planeMaxTiltInDeg = 5f;
        private float histBinSize = 0f;
        private int histBufferLength = 0;

        // compute buffers
        private ComputeBuffer pointCloudSpaceBuffer = null;
        private ComputeBuffer pointCloudDepthBuffer = null;

        private ComputeBuffer pointCloudPosBuffer = null;
        private ComputeBuffer pointCloudOfsBuffer = null;
        private ComputeBuffer pointCloudMaskBuffer = null;

        private ComputeBuffer ofsHistMinMaxBuffer = null;
        private ComputeBuffer ofsHistBinLeftBuffer = null;
        private ComputeBuffer ofsHistBinCountBuffer = null;
        private ComputeBuffer histCumulativeCountBuffer = null;
        private ComputeBuffer planeIndicesBuffer = null;
        private ComputeBuffer planePosNormBuffer = null;

        // compute shaders
        private ComputeShader floorDetOffsetEstShader = null;
        private int floorDetOffsetEstKernel = -1;

        private ComputeShader floorDetOffsetMinMaxShader = null;
        private int floorDetOffsetMinMaxKernel = -1;

        private ComputeShader floorDetOffsetHistShader = null;
        private int floorDetOffsetHistKernel = -1;

        private ComputeShader floorDetPlaneEstShader = null;
        private int floorDetPlaneEstKernel = -1;

        // results
        private bool bPlaneValid = false;
        private Vector3 vPlanePos = Vector3.zero;
        private Vector3 vPlaneNorm = Vector3.up;
        private Quaternion qSensorRot = Quaternion.identity;
        private Plane floorPlane = new Plane();
        private float fSensorHeight = 1f;

        // time
        private const float SMOOTH_TIME_THRESHOLD = 1f;
        private float fLastTimeSecs = 0f;

        // routine params
        private const int WAIT_FRAMES_BEFORE_GPUGET = 2;
        private int minDepthDistance = 0;
        private int maxDepthDistance = 10000;

        //private bool isImuVectorSet = false;
        private bool isDepthFrameSet = false;

        private MonoBehaviour callerInstance = null;
        private IEnumerator floorRoutine = null;
        private bool isRoutineRunning = false;


        /// <summary>
        /// Checks if a floor plane has been detected or not. 
        /// </summary>
        /// <returns>true if the floor plane is valid, false otherwise</returns>
        public bool IsFloorValid()
        {
            return bPlaneValid;
        }

        /// <summary>
        /// Gets the timestamp of the depth frame used for floor plane detection. 
        /// </summary>
        /// <returns>Depth frame timestamp</returns>
        public ulong GetDepthTimestamp()
        {
            return lastDepthFrameTime;
        }

        /// <summary>
        /// Gets the floor plane position.
        /// </summary>
        /// <returns>Floor plane position</returns>
        public Vector3 GetFloorPosition()
        {
            return vPlanePos;
        }

        /// <summary>
        /// Gets the floor plane normal.
        /// </summary>
        /// <returns>Floor plane normal</returns>
        public Vector3 GetFloorNormal()
        {
            return vPlaneNorm;
        }

        /// <summary>
        /// Gets the detected floor plane.
        /// </summary>
        /// <returns>Detected floor plane</returns>
        public Plane GetFloorPlane()
        {
            return floorPlane;
        }

        /// <summary>
        /// Gets the estimated sensor position, in meters.
        /// </summary>
        /// <returns>Sensor position, in meters</returns>
        public Vector3 GetSensorPosition()
        {
            return new Vector3(0f, fSensorHeight, 0f);
        }

        /// <summary>
        /// Gets the estimated sensor rotation.
        /// </summary>
        /// <returns>Sensor rotation</returns>
        public Quaternion GetSensorRotation()
        {
            return qSensorRot;
        }


        /// <summary>
        /// Initializes the buffers and shaders used by the floor detector.
        /// </summary>
        /// <param name="sensorData">Sensor data</param>
        /// <param name="maxDepthMm">Max depth distance in mm</param>
        public void InitFloorDetector(MonoBehaviour caller, KinectInterop.SensorData sensorData, int maxDepthMm)
        {
            this.callerInstance = caller;
            this.sensorData = sensorData;

            if (sensorData == null || sensorData.depthImageWidth == 0 || sensorData.depthImageHeight == 0)
                return;

            if (floorDetOffsetEstShader == null)
            {
                floorDetOffsetEstShader = Resources.Load("FloorDetectionOffsetEstShader") as ComputeShader;
                floorDetOffsetEstKernel = floorDetOffsetEstShader != null ? floorDetOffsetEstShader.FindKernel("EstimatePointCloudPosOfs") : -1;
            }

            if (floorDetOffsetMinMaxShader == null)
            {
                floorDetOffsetMinMaxShader = Resources.Load("FloorDetectionOffsetMinMaxShader") as ComputeShader;
                floorDetOffsetMinMaxKernel = floorDetOffsetMinMaxShader != null ? floorDetOffsetMinMaxShader.FindKernel("EstimateOffsetMinMax") : -1;
            }

            if (floorDetOffsetHistShader == null)
            {
                floorDetOffsetHistShader = Resources.Load("FloorDetectionOffsetHistShader") as ComputeShader;
                floorDetOffsetHistKernel = floorDetOffsetHistShader != null ? floorDetOffsetHistShader.FindKernel("EstimateOffsetHist") : -1;
            }

            if (floorDetPlaneEstShader == null)
            {
                floorDetPlaneEstShader = Resources.Load("FloorDetectionPlanePointsShader") as ComputeShader;
                floorDetPlaneEstKernel = floorDetPlaneEstShader != null ? floorDetPlaneEstShader.FindKernel("EstimatePlanePoints") : -1;
            }

            if (pointCloudSpaceBuffer == null)
            {
                int spaceBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight * 3;
                pointCloudSpaceBuffer = new ComputeBuffer(spaceBufferLength, sizeof(float));
            }

            if(pointCloudDepthBuffer == null)
            {
                int depthBufferLength = (sensorData.depthImageWidth * sensorData.depthImageHeight) >> 1;
                pointCloudDepthBuffer = new ComputeBuffer(depthBufferLength, sizeof(uint));
            }

            if (pointCloudPosBuffer == null)
            {
                int posBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight * 3;
                pointCloudPosBuffer = new ComputeBuffer(posBufferLength, sizeof(float));
            }

            if (pointCloudOfsBuffer == null)
            {
                int ofsBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight;
                pointCloudOfsBuffer = new ComputeBuffer(ofsBufferLength, sizeof(float));
            }

            if (pointCloudMaskBuffer == null)
            {
                int maskBufferLength = sensorData.depthImageWidth * sensorData.depthImageHeight;
                pointCloudMaskBuffer = new ComputeBuffer(maskBufferLength, sizeof(int));
            }

            if (ofsHistMinMaxBuffer == null)
            {
                histMinMax = new float[2];
                ofsHistMinMaxBuffer = new ComputeBuffer(histMinMax.Length, sizeof(float));
            }

            // hist bin size
            float planeDisplacementRangeInMeters = 0.050f; // 5 cm in meters
            //binAggregation = 6;
            histBinSize = planeDisplacementRangeInMeters / binAggregation;

            float fMaxDepth = (float)maxDepthMm / 1000f;
            histBufferLength = Mathf.FloorToInt(2 * fMaxDepth / histBinSize) + 1;
            //Debug.Log("histBinSize: " + histBinSize + ", histBufferLength: " + histBufferLength);

            if (ofsHistBinLeftBuffer == null)
            {
                ofsHistBinLeftBuffer = new ComputeBuffer(histBufferLength, sizeof(float));
            }

            if (ofsHistBinCountBuffer == null)
            {
                ofsHistBinCountBuffer = new ComputeBuffer(histBufferLength, sizeof(uint));
            }

            if (histCumulativeCountBuffer == null)
            {
                histCumulativeCountBuffer = new ComputeBuffer(histBufferLength, sizeof(uint));
            }

            if(planeIndicesBuffer == null)
            {
                int planeIndicesLength = sensorData.depthImageWidth * sensorData.depthImageHeight;
                planeIndicesBuffer = new ComputeBuffer(planeIndicesLength, sizeof(uint));
            }

            if(planePosNormBuffer == null)
            {
                planePosNorm = new float[4 * 3];  // pos & norm are v3
                planePosNormBuffer = new ComputeBuffer(planePosNorm.Length, sizeof(float));
            }

            spaceScale = sensorData.sensorSpaceScale;
            //minFloorPointCount = 1024;
            //planeMaxTiltInDeg = 5f;
            imuUpVector = Vector3.up;

            bPlaneValid = false;

            if(callerInstance != null)
            {
                isRoutineRunning = true;
                floorRoutine = UpdateFloorAsync();
                callerInstance.StartCoroutine(floorRoutine);
            }
        }


        /// <summary>
        /// Releases the buffers and shaders used by the floor detector.
        /// </summary>
        public void FinishFloorDetector()
        {
            if(isRoutineRunning)
            {
                isRoutineRunning = false;
                callerInstance.StopCoroutine(floorRoutine);
                floorRoutine = null;
            }

            if (pointCloudSpaceBuffer != null)
            {
                pointCloudSpaceBuffer.Dispose();
                pointCloudSpaceBuffer = null;
            }

            if (pointCloudDepthBuffer != null)
            {
                pointCloudDepthBuffer.Dispose();
                pointCloudDepthBuffer = null;
            }

            if (pointCloudPosBuffer != null)
            {
                pointCloudPosBuffer.Dispose();
                pointCloudPosBuffer = null;
            }

            if (pointCloudOfsBuffer != null)
            {
                pointCloudOfsBuffer.Dispose();
                pointCloudOfsBuffer = null;
            }

            if (pointCloudMaskBuffer != null)
            {
                pointCloudMaskBuffer.Dispose();
                pointCloudMaskBuffer = null;
            }

            if (ofsHistMinMaxBuffer != null)
            {
                ofsHistMinMaxBuffer.Dispose();
                ofsHistMinMaxBuffer = null;
            }

            if (ofsHistBinLeftBuffer != null)
            {
                ofsHistBinLeftBuffer.Dispose();
                ofsHistBinLeftBuffer = null;
            }

            if (ofsHistBinCountBuffer != null)
            {
                ofsHistBinCountBuffer.Dispose();
                ofsHistBinCountBuffer = null;
            }

            if (histCumulativeCountBuffer != null)
            {
                histCumulativeCountBuffer.Dispose();
                histCumulativeCountBuffer = null;
            }

            if(planeIndicesBuffer != null)
            {
                planeIndicesBuffer.Dispose();
                planeIndicesBuffer = null;
            }

            if(planePosNormBuffer != null)
            {
                planePosNormBuffer.Dispose();
                planePosNormBuffer = null;
            }

            if (floorDetOffsetEstShader != null)
            {
                floorDetOffsetEstShader = null;
            }

            if (floorDetOffsetMinMaxShader != null)
            {
                floorDetOffsetMinMaxShader = null;
            }

            if (floorDetOffsetHistShader != null)
            {
                floorDetOffsetHistShader = null;
            }

            if(floorDetPlaneEstShader != null)
            {
                floorDetPlaneEstShader = null;
            }
        }


        ///// <summary>
        ///// Updates the IMU up vector from the sample.
        ///// </summary>
        ///// <param name="imuAcc">IMU accelerometer sample</param>
        ///// <param name="accDepthRot">Extrinsics rotation between the accelerometer and depth sensor</param>
        //public void UpdateImuUpVector(Vector3 imuAcc, float[] accDepthRot)
        //{
        //    Vector3 Rx = new Vector3(accDepthRot[0], accDepthRot[1], accDepthRot[2]);
        //    Vector3 Ry = new Vector3(accDepthRot[3], accDepthRot[4], accDepthRot[5]);
        //    Vector3 Rz = new Vector3(accDepthRot[6], accDepthRot[7], accDepthRot[8]);
        //    Vector3 depthAcc = new Vector3( Vector3.Dot(Rx, imuAcc), Vector3.Dot(Ry, imuAcc), Vector3.Dot(Rz, imuAcc));

        //    //Vector3 depthGravity = depthAcc * -1f;
        //    //imuUpVector = (depthGravity * -1f).normalized;
        //    imuUpVector = depthAcc.normalized;
        //    //isImuVectorSet = true;

        //    //Debug.Log("imuUpVector: " + imuUpVector);
        //}


        /// <summary>
        /// Updates the IMU up vector.
        /// </summary>
        /// <param name="imuUpVector">IMU up vector</param>
        public void UpdateImuUpVector(Vector3 imuUpVector)
        {
            this.imuUpVector = imuUpVector.normalized;
        }


        /// <summary>
        /// Executes the floor detector shaders with the current depth frame data.
        /// </summary>
        /// <param name="depthFrame">Depth frame data</param>
        /// <param name="depthFrameTime">Depth frame time</param>
        /// <param name="depthFrameLock">Depth frame lock object</param>
        /// <param name="minDistance">Min depth distance, in meters</param>
        /// <param name="maxDistance">Max depth distance, in meters</param>
        /// <returns>true if the floor plane is detected, false otherwise</returns>
        public bool UpdateFloorDetector(ushort[] depthFrame, ulong depthFrameTime, ref object depthFrameLock, float minDistance, float maxDistance)
        {
            if (sensorData == null || depthFrame == null || sensorData.depthImageWidth == 0 || sensorData.depthImageHeight == 0)
                return false;
            if (lastDepthFrameTime == depthFrameTime)
                return false;

            lastDepthFrameTime = depthFrameTime;

            minDepthDistance = (int)(minDistance * 1000f);
            maxDepthDistance = (int)(maxDistance * 1000f);

            if (depth2SpaceWidth != sensorData.depthImageWidth || depth2SpaceHeight != sensorData.depthImageHeight)
            {
                depth2SpaceTable = sensorData.sensorInterface.GetDepthCameraSpaceTable(sensorData);
                depth2SpaceWidth = sensorData.depthImageWidth;
                depth2SpaceHeight = sensorData.depthImageHeight;

                pointCloudSpaceBuffer.SetData(depth2SpaceTable);
                depth2SpaceTable = null;
                //Debug.Log("Set space table for width: " + depth2SpaceWidth + ", height: " + depth2SpaceHeight);
            }

            // FloorDetectionOffsetEstShader
            //lock(depthFrameLock)
            {
                KinectInterop.SetComputeBufferData(pointCloudDepthBuffer, depthFrame, depthFrame.Length >> 1, sizeof(uint));
            }

            isDepthFrameSet = true;

            ////Debug.Log("imuUpVector: " + imuUpVector);
            //if(imuVectorTrans == null)
            //{
            //    GameObject imuVectorObj = GameObject.CreatePrimitive(PrimitiveType.Cube);
            //    imuVectorObj.name = "ImuVectorObj";

            //    imuVectorTrans = imuVectorObj.transform;
            //    imuVectorTrans.localScale = new Vector3(0.1f, 0.2f, 0.5f);
            //    imuVectorTrans.position = new Vector3(0, 1f, 1f);
            //}

            //imuVectorTrans.rotation = Quaternion.LookRotation(imuUpVector.normalized);

            if(bPlaneValid)
            {
                bPlaneValid = false;
                return true;
            }

            return false;
        }


        // updates the floor parameters async
        private IEnumerator UpdateFloorAsync()
        {
            while(isRoutineRunning)
            {
                // wait for imu vector & depth frame
                while (/**!isImuVectorSet ||*/ !isDepthFrameSet)
                {
                    yield return null;
                }

                //isImuVectorSet = false;
                isDepthFrameSet = false;

                KinectInterop.SetComputeShaderInt2(floorDetOffsetEstShader, "PointCloudRes", sensorData.depthImageWidth, sensorData.depthImageHeight);
                //KinectInterop.SetComputeShaderFloat2(floorDetOffsetEstShader, "SpaceScale", sensorData.sensorSpaceScale.x, sensorData.sensorSpaceScale.y);
                KinectInterop.SetComputeShaderFloat3(floorDetOffsetEstShader, "ImuUpVector", imuUpVector);

                floorDetOffsetEstShader.SetInt("MinDepth", minDepthDistance);
                floorDetOffsetEstShader.SetInt("MaxDepth", maxDepthDistance);

                floorDetOffsetEstShader.SetBuffer(floorDetOffsetEstKernel, "SpaceTable", pointCloudSpaceBuffer);
                floorDetOffsetEstShader.SetBuffer(floorDetOffsetEstKernel, "DepthMap", pointCloudDepthBuffer);

                floorDetOffsetEstShader.SetBuffer(floorDetOffsetEstKernel, "PointCloudPos", pointCloudPosBuffer);
                floorDetOffsetEstShader.SetBuffer(floorDetOffsetEstKernel, "PointCloudOfs", pointCloudOfsBuffer);
                floorDetOffsetEstShader.SetBuffer(floorDetOffsetEstKernel, "PointCloudMask", pointCloudMaskBuffer);

                floorDetOffsetEstShader.Dispatch(floorDetOffsetEstKernel, sensorData.depthImageWidth / 8, sensorData.depthImageHeight / 8, 1);

                // FloorDetectionOffsetMinMaxShader
                KinectInterop.SetComputeShaderInt2(floorDetOffsetMinMaxShader, "PointCloudRes", sensorData.depthImageWidth, sensorData.depthImageHeight);
                floorDetOffsetMinMaxShader.SetInt("OfsHistBinLength", histBufferLength);
                floorDetOffsetMinMaxShader.SetBuffer(floorDetOffsetMinMaxKernel, "PointCloudOfs", pointCloudOfsBuffer);
                floorDetOffsetMinMaxShader.SetBuffer(floorDetOffsetMinMaxKernel, "PointCloudMask", pointCloudMaskBuffer);

                floorDetOffsetMinMaxShader.SetBuffer(floorDetOffsetMinMaxKernel, "OfsMinMax", ofsHistMinMaxBuffer);
                floorDetOffsetMinMaxShader.SetBuffer(floorDetOffsetMinMaxKernel, "OfsHistBinCount", ofsHistBinCountBuffer);

                floorDetOffsetMinMaxShader.Dispatch(floorDetOffsetMinMaxKernel, 1, 1, 1);

                //ofsHistMinMaxBuffer.GetData(histMinMax);
                //Debug.Log("Hist min: " + histMinMax[0] + ", max: " + histMinMax[1]);

                // FloorDetectionOffsetHistShader
                KinectInterop.SetComputeShaderInt2(floorDetOffsetHistShader, "PointCloudRes", sensorData.depthImageWidth, sensorData.depthImageHeight);
                //floorDetOffsetHistShader.SetInt("PointCloudOfsLength", sensorData.depthImageWidth * sensorData.depthImageHeight);
                floorDetOffsetHistShader.SetInt("OfsHistBinLength", histBufferLength);
                floorDetOffsetHistShader.SetFloat("BinSize", histBinSize);

                floorDetOffsetHistShader.SetBuffer(floorDetOffsetHistKernel, "PointCloudOfs", pointCloudOfsBuffer);
                floorDetOffsetHistShader.SetBuffer(floorDetOffsetHistKernel, "PointCloudMask", pointCloudMaskBuffer);
                floorDetOffsetHistShader.SetBuffer(floorDetOffsetHistKernel, "OfsMinMax", ofsHistMinMaxBuffer);

                floorDetOffsetHistShader.SetBuffer(floorDetOffsetHistKernel, "OfsHistBinCount", ofsHistBinCountBuffer);
                //floorDetOffsetHistShader.SetBuffer(floorDetOffsetHistKernel, "OfsHistBinLeft", ofsHistBinLeftBuffer);

                floorDetOffsetHistShader.Dispatch(floorDetOffsetHistKernel, sensorData.depthImageWidth / 1, sensorData.depthImageHeight / 1, 1);
                //floorDetOffsetHistShader.Dispatch(floorDetOffsetHistKernel, 1, 1, 1);

                // FloorDetectionPlanePointsShader
                floorDetPlaneEstShader.SetInt("OfsHistBinLength", histBufferLength);
                floorDetPlaneEstShader.SetInt("PointCloudOfsLength", sensorData.depthImageWidth * sensorData.depthImageHeight);
                floorDetPlaneEstShader.SetFloat("BinSize", histBinSize);
                floorDetPlaneEstShader.SetInt("BinAggregation", binAggregation);
                floorDetPlaneEstShader.SetInt("MinimumFloorPointCount", minFloorPointCount / 4);

                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "OfsHistBinCount", ofsHistBinCountBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "PointCloudPos", pointCloudPosBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "PointCloudOfs", pointCloudOfsBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "PointCloudMask", pointCloudMaskBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "OfsMinMax", ofsHistMinMaxBuffer);

                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "OfsHistBinLeft", ofsHistBinLeftBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "HistCumulativeCount", histCumulativeCountBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "InlierIndices", planeIndicesBuffer);
                floorDetPlaneEstShader.SetBuffer(floorDetPlaneEstKernel, "PlanePosNorm", planePosNormBuffer);

                floorDetPlaneEstShader.Dispatch(floorDetPlaneEstKernel, 1, 1, 1);

                // wait some frames before GetData()
                for (int i = 0; i < WAIT_FRAMES_BEFORE_GPUGET; i++)
                {
                    yield return null;
                }

                //uint[] histCumCount = new uint[histBufferLength];
                //histCumulativeCountBuffer.GetData(histCumCount);
                //uint maxDiffCount = 0;

                //System.Text.StringBuilder sbCumCount = new System.Text.StringBuilder();
                //for(int i = 1; (i + binAggregation) < histCumCount.Length; i++)  // i += binAggregation
                //{
                //    uint diffCount = histCumCount[i + binAggregation - 1] - histCumCount[i - 1];
                //    if (maxDiffCount < diffCount)
                //        maxDiffCount = diffCount;

                //    if (diffCount > 0)
                //        sbCumCount.Append(i).Append('-').Append(diffCount).Append("  ");
                //}
                //Debug.Log("histCumCount(" + maxDiffCount + "): " + sbCumCount);

                planePosNormBuffer.GetData(planePosNorm);

                vPlanePos = new Vector3(planePosNorm[0], planePosNorm[1], planePosNorm[2]);
                vPlaneNorm = new Vector3(planePosNorm[3], planePosNorm[4], planePosNorm[5]);
                //Vector3 vPlaneOfs = new Vector3(planePosNorm[6], planePosNorm[7], planePosNorm[8]);
                //Vector3 vPlaneOfs2 = new Vector3(planePosNorm[9], planePosNorm[10], planePosNorm[11]);

                bPlaneValid = (vPlaneNorm != Vector3.zero);

                if (bPlaneValid)
                {
                    //Debug.Log("Plane pos: " + vPlanePos + ", norm: " + vPlaneNorm.normalized + ", rot: " + qSensorRot.eulerAngles + ", ofs: " + vPlaneOfs + ", ofs2: " + vPlaneOfs2);

                    vPlaneNorm = vPlaneNorm.normalized;
                    if (Vector3.Dot(vPlaneNorm, imuUpVector) < 0f)
                    {
                        vPlaneNorm = -vPlaneNorm;
                        //Debug.Log("Inverted plane normal: " + vPlaneNorm);
                    }

                    float floorTiltInDeg = Mathf.Acos(Vector3.Dot(vPlaneNorm, imuUpVector)) * Mathf.Rad2Deg;
                    if (floorTiltInDeg < planeMaxTiltInDeg)
                    {
                        // For reduced jitter, use gravity for floor normal.
                        vPlaneNorm = imuUpVector;
                        //Debug.Log("Used gravity for normal: " + vPlaneNorm + ", tiltAngle: " + floorTiltInDeg);
                    }

                    // get results
                    float fCurTimeSecs = Time.time;
                    bool bSmoothResult = (fCurTimeSecs - fLastTimeSecs) < SMOOTH_TIME_THRESHOLD;
                    //Debug.Log("SmoothResult: " + bSmoothResult);
                    fLastTimeSecs = fCurTimeSecs;

                    vPlanePos = new Vector3(vPlanePos.x * spaceScale.x, vPlanePos.y * spaceScale.y, vPlanePos.z * spaceScale.z);
                    vPlaneNorm = new Vector3(vPlaneNorm.x * spaceScale.x, vPlaneNorm.y * spaceScale.y, vPlaneNorm.z * spaceScale.z);

                    Quaternion curSensorRot = Quaternion.FromToRotation(vPlaneNorm, Vector3.up);
                    qSensorRot = bSmoothResult ? Quaternion.Slerp(qSensorRot, curSensorRot, smoothFactor * Time.deltaTime) : curSensorRot;

                    floorPlane = new Plane(vPlaneNorm, vPlanePos);
                    float curSensorHeight = floorPlane.GetDistanceToPoint(Vector3.zero);
                    fSensorHeight = bSmoothResult ? Mathf.Lerp(fSensorHeight, curSensorHeight, smoothFactor * Time.deltaTime) : curSensorHeight;

                    //Debug.Log("Floor pos: " + vPlanePos + ", norm: " + vPlaneNorm + ", rot: " + qSensorRot.eulerAngles + ", height: " + curSensorHeight + ", smoothed: " + fSensorHeight);
                }
            }
        }

    }
}
