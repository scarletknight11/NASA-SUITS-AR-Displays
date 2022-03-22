using UnityEngine;

using System;
using System.Collections;
using System.Collections.Generic;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// Implementation of a Holt Double Exponential Smoothing filter. The double exponential
    /// smooths the curve and predicts.  There is also noise jitter removal. And maximum
    /// prediction bounds.  The parameters are commented in the Init function.
    /// </summary>
    public class JointVelocitiesFilter
    {
        // The history data.
        //private VelocityHistoryData[,] history;
        private BodyHistoryData[] history;

        // The smoothing parameters for this filter.
        private SmoothParameters smoothParameters;
        private SmoothingType smoothingType = SmoothingType.Default;

        // True when the filter parameters are initialized.
        private bool init;

        // userId to index
        private Dictionary<ulong, int> dictUserIdToIndex = new Dictionary<ulong, int>();


        /// Initializes a new instance of the class.
        public JointVelocitiesFilter()
        {
            init = false;
        }

        // Initialize the filter with a default set of TransformSmoothParameters.
        public void Init()
        {
            // Specify some defaults
            Init(0.5f, 0.5f, 0.5f, 0.05f, 0.04f);
        }

        /// <summary>
        /// Initialize the filter with a set of manually specified TransformSmoothParameters.
        /// </summary>
        /// <param name="smoothingValue">Smoothing = [0..1], lower values is closer to the raw data and more noisy.</param>
        /// <param name="correctionValue">Correction = [0..1], higher values correct faster and feel more responsive.</param>
        /// <param name="predictionValue">Prediction = [0..n], how many frames into the future we want to predict.</param>
        /// <param name="jitterRadiusValue">JitterRadius = The deviation distance in m that defines jitter.</param>
        /// <param name="maxDeviationRadiusValue">MaxDeviation = The maximum distance in m that filtered positions are allowed to deviate from raw data.</param>
        public void Init(float smoothingValue, float correctionValue, float predictionValue, float jitterRadiusValue, float maxDeviationRadiusValue)
        {
            smoothParameters = new SmoothParameters();

            smoothParameters.smoothing = smoothingValue;                   // How much soothing will occur.  Will lag when too high
            smoothParameters.correction = correctionValue;                 // How much to correct back from prediction.  Can make things springy
            smoothParameters.prediction = predictionValue;                 // Amount of prediction into the future to use. Can over shoot when too high
            smoothParameters.jitterRadius = jitterRadiusValue;             // Size of the radius where jitter is removed. Can do too much smoothing when too high
            smoothParameters.maxDeviationRadius = maxDeviationRadiusValue; // Size of the max prediction radius Can snap back to noisy data when too high

            // Check for divide by zero. Use an epsilon of a 10th of a millimeter
            smoothParameters.jitterRadius = Math.Max(0.0001f, smoothParameters.jitterRadius);

            Reset();
            init = true;
        }

        // Initialize the filter with a set of TransformSmoothParameters.
        public void Init(SmoothParameters smoothParameters)
        {
            this.smoothingType = SmoothingType.Default;
            this.smoothParameters = smoothParameters;

            Reset();
            init = true;
        }

        // Initialize the filter with a set of SmoothParameters.
        public void Init(SmoothingType smoothingType)
        {
            this.smoothingType = smoothingType;
            smoothParameters = new SmoothParameters();

            switch (smoothingType)
            {
                case SmoothingType.Light:
                    smoothParameters.smoothing = 0.3f;
                    smoothParameters.correction = 0.35f;
                    smoothParameters.prediction = 0.35f;
                    smoothParameters.jitterRadius = 0.15f;
                    smoothParameters.maxDeviationRadius = 0.15f;
                    break;
                case SmoothingType.Medium:
                    smoothParameters.smoothing = 0.5f;
                    smoothParameters.correction = 0.1f;
                    smoothParameters.prediction = 0.5f;
                    smoothParameters.jitterRadius = 0.1f;
                    smoothParameters.maxDeviationRadius = 0.1f;
                    break;
                case SmoothingType.Aggressive:
                    smoothParameters.smoothing = 0.7f;
                    smoothParameters.correction = 0.3f;
                    smoothParameters.prediction = 1.0f;
                    smoothParameters.jitterRadius = 1.0f;
                    smoothParameters.maxDeviationRadius = 1.0f;
                    break;

                //case SmoothingType.Default:
                default:
                    smoothParameters.smoothing = 0.5f;
                    smoothParameters.correction = 0.5f;
                    smoothParameters.prediction = 0.5f;
                    smoothParameters.jitterRadius = 0.05f;
                    smoothParameters.maxDeviationRadius = 0.04f;
                    break;
            }

            Reset();
            init = true;
        }

        // Resets the filter to default values.
        public void Reset()
        {
            KinectManager kinectManager = KinectManager.Instance;
            int maxBodyCount = 10;  // kinectManager.GetMaxBodyCount();
            int jointCount = kinectManager.GetJointCount();

            //history = new JointHistoryData[kinectManager.GetMaxBodyCount(), kinectManager.GetJointCount()];
            history = new BodyHistoryData[maxBodyCount];
            for (int i = 0; i < maxBodyCount; i++)
            {
                history[i] = new BodyHistoryData(jointCount);
            }

            //Debug.Log("BodyCount: " + kinectManager.GetMaxBodyCount() + ", JointCount: " + kinectManager.GetJointCount());
        }

        //// Update the filter with a new frame of data and smooth.
        //public void UpdateFilter(ref KinectInterop.BodyData[] alTrackedBodies)
        //{
        //    if (init == false)
        //    {
        //        Init();    // initialize with default parameters                
        //    }

        //    SmoothParameters tempSmoothingParams = new SmoothParameters();

        //    tempSmoothingParams.smoothing = smoothParameters.smoothing;
        //    tempSmoothingParams.correction = smoothParameters.correction;
        //    tempSmoothingParams.prediction = smoothParameters.prediction;

        //    int bodyCount = alTrackedBodies != null ? alTrackedBodies.Length : 0;
        //    for (int bodyIndex = 0; bodyIndex < bodyCount; bodyIndex++)
        //    {
        //        if (alTrackedBodies[bodyIndex].bIsTracked)
        //        {
        //            FilterBodyJoints(ref alTrackedBodies[bodyIndex], /**bodyIndex*/ alTrackedBodies[bodyIndex].iBodyIndex, tempSmoothingParams);
        //        }
        //    }
        //}

        // Update the filter with a new frame of data and smooth.
        public void UpdateFilter(ref KinectInterop.BodyData bodyData)
        {
            if (!init)
            {
                // initialize with by-default parameters
                Init();
            }

            if (smoothingType == SmoothingType.None)
                return;

            SmoothParameters tempSmoothingParams = new SmoothParameters();
            tempSmoothingParams.smoothing = smoothParameters.smoothing;
            tempSmoothingParams.correction = smoothParameters.correction;
            tempSmoothingParams.prediction = smoothParameters.prediction;

            if (bodyData.bIsTracked)
            {
                // get body index
                int bodyIndex = GetUserIndex(bodyData.liTrackingID);
                if (bodyIndex < 0)
                {
                    bodyIndex = GetFreeIndex();
                    if (bodyIndex >= 0)
                        history[bodyIndex].userId = bodyData.liTrackingID;
                    //Debug.Log("Created history for userId: " + history[bodyIndex].userId + ", index: " + bodyIndex + ", time: " + DateTime.UtcNow);
                }

                // filter
                if (bodyIndex >= 0)
                {
                    FilterBodyJoints(ref bodyData, bodyIndex, tempSmoothingParams);
                }
            }

            // free unused history
            //CleanUpUserHistory();
        }

        // Update the filter for all body joints
        private void FilterBodyJoints(ref KinectInterop.BodyData bodyData, int bodyIndex, SmoothParameters tempSmoothingParams)
        {
            KinectManager kinectManager = KinectManager.Instance;
            int jointCount = kinectManager.GetJointCount();
            long lastUpdateTime = history[bodyIndex].lastUpdateTime;

            for (int jointIndex = 0; jointIndex < jointCount; jointIndex++)
            {
                //// If not tracked, we smooth a bit more by using a bigger jitter radius
                //// Always filter end joints highly as they are more noisy
                //if (bodyData.joint[jointIndex].trackingState != KinectInterop.TrackingState.Tracked ||
                //    jointIndex == (int)KinectInterop.JointType.FootLeft || jointIndex == (int)KinectInterop.JointType.FootRight ||
                //    jointIndex == (int)KinectInterop.JointType.HandLeft || jointIndex == (int)KinectInterop.JointType.HandRight ||
                //    jointIndex == (int)KinectInterop.JointType.HandtipLeft || jointIndex == (int)KinectInterop.JointType.HandtipRight ||
                //    jointIndex == (int)KinectInterop.JointType.ThumbLeft || jointIndex == (int)KinectInterop.JointType.ThumbRight)
                ////|| jointIndex == (int)KinectInterop.JointType.Head)
                //{
                //    tempSmoothingParams.jitterRadius = smoothParameters.jitterRadius * 2.0f;
                //    tempSmoothingParams.maxDeviationRadius = smoothParameters.maxDeviationRadius * 2.0f;
                //}
                //else
                {
                    tempSmoothingParams.jitterRadius = smoothParameters.jitterRadius;
                    tempSmoothingParams.maxDeviationRadius = smoothParameters.maxDeviationRadius;
                }

                bodyData.joint[jointIndex].posVel = FilterJoint(bodyData.joint[jointIndex].posVel, bodyIndex, jointIndex, tempSmoothingParams);
            }

            //Debug.Log("  updated vel history for userId: " + history[bodyIndex].userId + ", index: " + bodyIndex + ", time: " + history[bodyIndex].lastUpdateTime + " (" + lastUpdateTime + ")");
        }

        // Update the filter for one joint
        private Vector3 FilterJoint(Vector3 rawVelocity, int bodyIndex, int jointIndex, SmoothParameters smoothingParameters)
        {
            Vector3 filteredVelocity;
            Vector3 diffVec;
            Vector3 trend;
            float diffVal;

            Vector3 prevFilteredVelocity = history[bodyIndex].jointHistory[jointIndex].filteredVelocity;
            Vector3 prevTrend = history[bodyIndex].jointHistory[jointIndex].trend;
            Vector3 prevRawVelocity = history[bodyIndex].jointHistory[jointIndex].rawVelocity;
            bool jointIsValid = (rawVelocity != Vector3.zero);

            // If joint is invalid, reset the filter
            if (!jointIsValid)
            {
                history[bodyIndex].jointHistory[jointIndex].frameCount = 0;
            }

            // Initial start values
            if (history[bodyIndex].jointHistory[jointIndex].frameCount == 0)
            {
                filteredVelocity = rawVelocity;
                trend = Vector3.zero;
            }
            else if (history[bodyIndex].jointHistory[jointIndex].frameCount == 1)
            {
                filteredVelocity = (rawVelocity + prevRawVelocity) * 0.5f;
                diffVec = filteredVelocity - prevFilteredVelocity;
                trend = (diffVec * smoothingParameters.correction) + (prevTrend * (1.0f - smoothingParameters.correction));
            }
            else
            {
                // First apply jitter filter
                diffVec = rawVelocity - prevFilteredVelocity;
                diffVal = Math.Abs(diffVec.magnitude);

                if (diffVal <= smoothingParameters.jitterRadius)
                {
                    filteredVelocity = (rawVelocity * (diffVal / smoothingParameters.jitterRadius)) + (prevFilteredVelocity * (1.0f - (diffVal / smoothingParameters.jitterRadius)));
                }
                else
                {
                    filteredVelocity = rawVelocity;
                }

                // Now the double exponential smoothing filter
                filteredVelocity = (filteredVelocity * (1.0f - smoothingParameters.smoothing)) + ((prevFilteredVelocity + prevTrend) * smoothingParameters.smoothing);

                diffVec = filteredVelocity - prevFilteredVelocity;
                trend = (diffVec * smoothingParameters.correction) + (prevTrend * (1.0f - smoothingParameters.correction));
            }

            // Predict into the future to reduce latency
            Vector3 predictedVelocity = filteredVelocity + (trend * smoothingParameters.prediction);

            // Check that we are not too far away from raw data
            diffVec = predictedVelocity - rawVelocity;
            diffVal = Mathf.Abs(diffVec.magnitude);

            if (diffVal > smoothingParameters.maxDeviationRadius)
            {
                predictedVelocity = (predictedVelocity * (smoothingParameters.maxDeviationRadius / diffVal)) + (rawVelocity * (1.0f - (smoothingParameters.maxDeviationRadius / diffVal)));
            }

            // Save the data from this frame
            history[bodyIndex].jointHistory[jointIndex].rawVelocity = rawVelocity;
            history[bodyIndex].jointHistory[jointIndex].filteredVelocity = filteredVelocity;
            history[bodyIndex].jointHistory[jointIndex].trend = trend;
            history[bodyIndex].jointHistory[jointIndex].frameCount++;

            DateTime dtNow = DateTime.UtcNow;
            history[bodyIndex].lastUpdateTime = dtNow.Ticks;

            return predictedVelocity;
        }


        // returns the history index for the given user, or -1 if not found
        private int GetUserIndex(ulong userId)
        {
            for (int i = 0; i < history.Length; i++)
            {
                if (history[i].userId == userId)
                    return i;
            }

            return -1;
        }

        // returns the 1st free history index, or -1 if not found
        private int GetFreeIndex()
        {
            for (int i = 0; i < history.Length; i++)
            {
                if (history[i].userId == 0)
                    return i;
            }

            return -1;
        }

        // frees history indices that were unused for long time
        public void CleanUpUserHistory()
        {
            DateTime dtNow = DateTime.UtcNow;
            long timeNow = dtNow.Ticks;

            for (int i = 0; i < history.Length; i++)
            {
                if (history[i].userId != 0 && (timeNow - history[i].lastUpdateTime) >= 10000000)
                {
                    //Debug.Log("Removed vel history for userId " + history[i].userId + ", index: " + i + ", time: " + dtNow + ", not used since: " + (timeNow - history[i].lastUpdateTime) + " ticks");

                    history[i].userId = 0;
                    history[i].lastUpdateTime = 0;

                    for (int j = 0; j < history[i].jointHistory.Length; j++)
                    {
                        history[i].jointHistory[j].frameCount = 0;
                    }
                }
            }
        }


        // body history data used by the filter
        private struct BodyHistoryData
        {
            public ulong userId;

            public long lastUpdateTime;

            public VelocityHistoryData[] jointHistory;


            public BodyHistoryData(int jointCount)
            {
                userId = 0;
                lastUpdateTime = 0;
                jointHistory = new VelocityHistoryData[jointCount];
            }
        }

        // velocity history data used by the filter
        private struct VelocityHistoryData
        {
            // Gets or sets Historical Velocity.  
            public Vector3 rawVelocity;

            // Gets or sets Historical Filtered Velocity.  
            public Vector3 filteredVelocity;

            // Gets or sets Historical Trend.  
            public Vector3 trend;

            // Gets or sets Historical FrameCount.  
            public uint frameCount;
        }
    }
}
