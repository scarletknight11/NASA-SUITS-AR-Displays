using com.rfilkov.kinect;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.components
{
    /// <summary>
    /// Moving step start and end times.
    /// </summary>
    [System.Serializable]
    public struct MovingStepInterval
    {
        public float startTime;
        public float endTime;
    }

    /// <summary>
    /// MovingPoseManager manages and estimates the user performance in sequence of dynamic poses.
    /// </summary>
    public class MovingPoseManager : MonoBehaviour
    {
        [Tooltip("Dynamic pose detector, used by the motion manager.")]
        public DynamicPoseDetector dynPoseDetector = null;

        [Tooltip("Maximum number of points per step.")]
        public int maxPointsPerStep = 100;

        //[Tooltip("Whether to aggregate the motion-detector pose matching (true) or the match percentage (false).")]
        //public bool useDetectorMatching = false;

        //[Tooltip("Whether to check for motion or not.")]
        //public bool isMotionCheckOn = true;

        //[Tooltip("Time between the scene start and the first dynamic pose check, in seconds.")]
        //[Range(0f, 20f)]
        //public float firstCheckAfter = 10f;

        [Tooltip("Time between dynamic-pose checks, in seconds. 0 means check each frame.")]
        [Range(0f, 20f)]
        public float timeBetweenChecks = 1f;

        [Tooltip("Start and end times for each motion step.")]
        public List<MovingStepInterval> motionStepTimes = new List<MovingStepInterval>();

        //[Tooltip("Start times for each step.")]
        //public List<float> stepStartTimes = new List<float>();

        //[Tooltip("End times for each step. Should match the start times above.")]
        //public List<float> stepEndTimes = new List<float>();

        [Tooltip("GUI-Text to display motion-info messages.")]
        public UnityEngine.UI.Text motionInfoText;

        [Tooltip("GUI-Text to display step-info messages.")]
        public UnityEngine.UI.Text stepInfoText;


        // current motion-step parameters
        private int stepIndex = -1;
        private bool stepValid = false;

        private float stepStartTime = 0f;
        private float stepEndTime = 0f;
        private float stepCheckInt = 0f;

        // time of the last and next pose-detector check
        private float motionStartTime = 0f;
        private float lastCheckTime = 0f;
        private float nextCheckTime = 0f;

        // step match percent and number of checks
        private float stepMatchPercent = 0f;
        private int stepNumberChecks = 0;

        // motion parameters - current and maximum points
        private int currentPoints = 0;
        private int maxPoints = 0;

        // last time returned by the pose detector
        private float lastDetectorTime = 0f;
        private float lastDetectorPoseMatch = 0f;

        // initial messages
        private string initialMotionInfo = string.Empty;
        private string initialStepInfo = string.Empty;



        /// <summary>
        /// Gets the current points for the whole motion.
        /// </summary>
        /// <returns>Current motion points.</returns>
        public int GetCurrentMotionPoints()
        {
            return currentPoints;
        }


        /// <summary>
        /// Gets the max points for the whole motion.
        /// </summary>
        /// <returns>Max motion points.</returns>
        public int GetMaxMotionPoints()
        {
            return maxPoints;
        }


        /// <summary>
        /// Gets current step index.
        /// </summary>
        /// <returns>Current step index.</returns>
        public int GetCurrentStepIndex()
        {
            return stepIndex;
        }


        /// <summary>
        /// Gets the number of motion steps.
        /// </summary>
        /// <returns>The number of motion steps.</returns>
        public int GetMotionStepCount()
        {
            return motionStepTimes.Count;
        }


        /// <summary>
        /// Checks whether the current motion step is valid. If not this would mean the motion is finished.
        /// </summary>
        /// <returns>True if the motion is in progress, false if the motion is finished.</returns>
        public bool IsMotionStepValid()
        {
            return stepValid;
        }


        /// <summary>
        /// Gets the step match percent.
        /// </summary>
        /// <returns>The overall match percent.</returns>
        public float GetCurrentStepMatch()
        {
            return stepNumberChecks > 0 ? (stepMatchPercent / (float)stepNumberChecks) : 0f;
        }


        /// <summary>
        /// Gets the last pose-detector check time.
        /// </summary>
        /// <returns>The last check time.</returns>
        public float GetCurrentStepTime()
        {
            return lastCheckTime;
        }

        /// <summary>
        /// Gets the last pose-detector check time.
        /// </summary>
        /// <returns>The last check time.</returns>
        public float GetLastDetectorCheckTime()
        {
            return lastDetectorTime;
        }

        /// <summary>
        /// Gets the last pose-detector pose-match percent.
        /// </summary>
        /// <returns>The last check time.</returns>
        public float GetLastDetectorPoseMatch()
        {
            return lastDetectorPoseMatch;
        }

        /// <summary>
        /// Resets motion-check parameters.
        /// </summary>
        public void ResetMotionCheckParams()
        {
            motionStartTime = Time.realtimeSinceStartup;
            nextCheckTime = 0f;

            stepIndex = -1;
            stepValid = true;

            stepStartTime = 0f;
            stepEndTime = 0f;
            stepCheckInt = 0f;

            // reset step matching
            stepMatchPercent = 0f;
            stepNumberChecks = 0;

            lastDetectorTime = 0f;
            lastDetectorPoseMatch = 0f;

            // reset motion points
            currentPoints = 0;
            maxPoints = 0;

            // do some checks
            if (motionStepTimes.Count == 0)
            {
                Debug.LogError("Please add some values to the moving-step times lists.");
            }

            // clear the info-text
            if (stepInfoText != null)
            {
                stepInfoText.text = initialStepInfo;
            }

            if (motionInfoText != null)
            {
                motionInfoText.text = initialMotionInfo;
            }
        }


        void Awake()
        {
            // lookup the dynamic pose detector, if needed
            if (dynPoseDetector == null)
            {
                dynPoseDetector = gameObject.GetComponent<DynamicPoseDetector>();
            }

            // set the first time to check
            //nextCheckTime = Time.realtimeSinceStartup + firstCheckAfter;

            if(motionInfoText)
            {
                initialMotionInfo = motionInfoText.text;
            }

            if(stepInfoText)
            {
                initialStepInfo = stepInfoText.text;
            }

            // reset motion-check parameters
            ResetMotionCheckParams();
        }


        void Update()
        {
            KinectManager kinectManager = KinectManager.Instance;
            if (!kinectManager || !kinectManager.IsInitialized())
                return;

            float currentTime = Time.realtimeSinceStartup;

            // is it time for the next check?
            if (stepValid && currentTime >= nextCheckTime)
            {
                lastCheckTime = currentTime;

                // check the pose for the current step
                if (lastCheckTime >= stepStartTime && stepEndTime > 0f /**&& lastCheckTime < motionStepEndTime*/)
                {
                    // accumulate the detector's match percent
                    if (dynPoseDetector != null && dynPoseDetector.GetPoseCheckTime() != lastDetectorTime)
                    {
                        lastDetectorTime = dynPoseDetector.GetPoseCheckTime();
                        lastDetectorPoseMatch = dynPoseDetector.GetMatchPercent();

                        if (lastDetectorPoseMatch > 0f)
                        {
                            stepMatchPercent += lastDetectorPoseMatch;
                            stepNumberChecks++;

                            Debug.Log(string.Format("Step {0}, check: {1}, step-match: {2:F0}%, step-time: {3:F1}\n  pose-match: {4:F0}%, pose-time: {5:F1}",
                                stepIndex, stepNumberChecks,
                                GetCurrentStepMatch() * 100f, lastCheckTime,
                                lastDetectorPoseMatch * 100f, lastDetectorTime));
                        }
                    }

                    if (stepInfoText != null)
                    {
                        float fMatchPercent = GetCurrentStepMatch();
                        string sMatchStatus = GetMatchStatus(stepMatchPercent, stepNumberChecks);
                        int stepIndex = this.stepIndex >= 0 ? this.stepIndex : 0;

                        string sStepMessage = string.Format("Step {0} - {1} (match: {2:F0}%)", stepIndex, sMatchStatus, fMatchPercent * 100f);
                        stepInfoText.text = sStepMessage;
                    }
                }

                // check, if it is time for the next step
                if (lastCheckTime >= stepEndTime)
                {
                    stepValid = GetNextMotionStepParams();

                    if (motionInfoText != null && maxPoints > 0)
                    {
                        string sMatchStatus = GetMatchStatus(currentPoints, maxPoints);
                        int stepIndex = stepValid ? this.stepIndex : (this.stepIndex + 1);
                        int totalPoints = motionStepTimes.Count * maxPointsPerStep;

                        string sMotionMessage = string.Format("{0}, points: {1} out of {2}, steps: {3} out of {4}",
                            sMatchStatus, currentPoints, totalPoints,
                            stepIndex, motionStepTimes.Count);
                        motionInfoText.text = sMotionMessage;
                    }
                }

                nextCheckTime = currentTime + stepCheckInt;
            }

            if (!stepValid && stepInfoText != null)
            {
                // clear the step info at the end
                stepInfoText.text = string.Empty;
            }
        }


        // go to the next step and init its parameters
        private bool GetNextMotionStepParams()
        {
            if (stepValid)
            {
                // estimate motion points
                float fStepMatchPercent = GetCurrentStepMatch();
                int currentStepPoints = Mathf.RoundToInt(GetStepScore(fStepMatchPercent) * (float)maxPointsPerStep);

                if (stepIndex >= 0)
                {
                    currentPoints += currentStepPoints;
                    maxPoints += maxPointsPerStep;
                }

                string sMatchStatus = GetMatchStatus(currentPoints, maxPoints);
                Debug.Log(string.Format("Motion status: {0}, points: {1}, max-points: {2}, current-step: {3}",
                    sMatchStatus, currentPoints, maxPoints, currentStepPoints));

                // clear step match params
                stepMatchPercent = 0f;
                stepNumberChecks = 0;
            }

            // go to the next step
            stepIndex++;

            if (stepIndex < motionStepTimes.Count)
            {
                // init motion step start & end times
                float motionStepStart = motionStepTimes[stepIndex].startTime;
                float motionStepEnd = motionStepTimes[stepIndex].endTime;

                if (motionStepEnd < motionStepStart)
                {
                    Debug.LogError(string.Format("Step {0} has end time {1:F1} less than start time {2:F2}. Please fix this.", stepIndex, motionStepStart, motionStepEnd));
                    motionStepEnd = motionStepStart + 2f;
                }

                stepStartTime = motionStartTime + motionStepStart;
                stepEndTime = motionStartTime + motionStepEnd;
                stepCheckInt = timeBetweenChecks;

                Debug.Log(string.Format("Next step {0}, start-time: {1:F1}, end-time: {2:F1}", stepIndex, stepStartTime, stepEndTime));

                return true;
            }
            else
            {
                // don't change the step index
                stepIndex--;
                return false;
            }
        }


        // returns step score, according to the match percent
        private float GetStepScore(float stepMatchPercent)
        {
            return stepMatchPercent;

            //if (stepMatchPercent == 0f)
            //    return 0f;

            //if (stepMatchPercent < 0.5f)
            //    return 0.49f;
            //else if (stepMatchPercent < 0.7f)
            //    return 0.69f;
            //else if (stepMatchPercent < 0.85f)
            //    return 0.84f;
            //else
            //    return 1f;
        }


        // returns status description 
        private string GetMatchStatus(float nom, float denom)
        {
            float fRes = denom > 0f ? (nom / denom) : 0f;

            if (fRes == 0f)
                return "No motion";

            if (fRes < 0.5f)
                return "Bad";
            else if (fRes < 0.7f)
                return "Good";
            else if (fRes < 0.85f)
                return "Very good";
            else
                return "Excellent";
        }

    }
}

