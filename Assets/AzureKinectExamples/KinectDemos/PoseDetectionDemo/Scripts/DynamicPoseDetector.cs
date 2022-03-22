﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Dynamic pose detector checks whether the user's pose matches predefined animated model's pose.
    /// </summary>
    public class DynamicPoseDetector : MonoBehaviour
    {
        [Tooltip("User avatar model, who needs to reach the target pose.")]
        public PoseModelHelper avatarModel;

        [Tooltip("Model in pose that need to be reached by the user.")]
        public PoseModelHelper poseModel;

        [Tooltip("List of joints to compare.")]
        public List<KinectInterop.JointType> poseJoints = new List<KinectInterop.JointType>();

        [Tooltip("Allowed delay in pose match, in seconds. 0 means no delay allowed.")]
        [Range(0f, 10f)]
        public float delayAllowed = 2f;

        [Tooltip("Time between pose-match checks, in seconds. 0 means check each frame.")]
        [Range(0f, 1f)]
        public float timeBetweenChecks = 0.1f;

        [Tooltip("Threshold, above which we consider the pose is matched.")]
        [Range(0.5f, 1f)]
        public float matchThreshold = 0.7f;

        [Tooltip("GUI-Text to display information messages.")]
        public UnityEngine.UI.Text infoText;

        // whether the pose is matched or not
        private bool bPoseMatched = false;
        // match percent (between 0 and 1)
        private float fMatchPercent = 0f;
        // pose-time with best matching
        private float fMatchPoseTime = 0f;


        // data for each saved pose
        public class PoseModelData
        {
            public float fTime;
            public Vector3[] avBoneDirs;
        }

        // list of saved pose data
        private List<PoseModelData> alSavedPoses = new List<PoseModelData>();

        // current avatar pose
        private PoseModelData poseAvatar = new PoseModelData();

        // last time the model pose was saved 
        private float lastPoseSavedTime = 0f;


        /// <summary>
        /// Determines whether the target pose is matched or not.
        /// </summary>
        /// <returns><c>true</c> if the target pose is matched; otherwise, <c>false</c>.</returns>
        public bool IsPoseMatched()
        {
            return bPoseMatched;
        }


        /// <summary>
        /// Gets the pose match percent.
        /// </summary>
        /// <returns>The match percent (value between 0 and 1).</returns>
        public float GetMatchPercent()
        {
            return fMatchPercent;
        }


        /// <summary>
        /// Gets the time of the best matching pose.
        /// </summary>
        /// <returns>Time of the best matching pose.</returns>
        public float GetMatchPoseTime()
        {
            return fMatchPoseTime;
        }


        /// <summary>
        /// Gets the last check time.
        /// </summary>
        /// <returns>The last check time.</returns>
        public float GetPoseCheckTime()
        {
            return lastPoseSavedTime;
        }


        void Update()
        {
            KinectManager kinectManager = KinectManager.Instance;
            AvatarController avatarCtrl = avatarModel ? avatarModel.gameObject.GetComponent<AvatarController>() : null;

            // get mirrored state
            bool isMirrored = avatarCtrl ? avatarCtrl.mirroredMovement : true;  // true by default

            // current time
            float fCurrentTime = Time.realtimeSinceStartup;

            // save model pose, if needed
            if ((fCurrentTime - lastPoseSavedTime) >= timeBetweenChecks)
            {
                lastPoseSavedTime = fCurrentTime;

                // remove old poses and save current one
                RemoveOldSavedPoses(fCurrentTime);
                AddCurrentPoseToSaved(fCurrentTime, isMirrored);
            }

            if (kinectManager != null && kinectManager.IsInitialized() &&
               avatarModel != null && avatarCtrl && kinectManager.IsUserTracked(avatarCtrl.playerId))
            {
                // get current avatar pose
                GetAvatarPose(fCurrentTime, isMirrored);

                // get the difference
                bool bDebugPose = infoText != null;
                string sDebugPose = GetPoseDifference(isMirrored, bDebugPose);

                if (infoText != null)
                {
                    string sPoseMessage = string.Format("Pose match: {0:F0}% {1:F1}s ago {2}", fMatchPercent * 100f, Time.realtimeSinceStartup - fMatchPoseTime,
                                                        (bPoseMatched ? "- Matched" : ""));
                    if(bDebugPose)
                    {
                        sPoseMessage += "\n\n" + sDebugPose;
                    }

                    infoText.text = sPoseMessage;
                }
            }
            else
            {
                // no user found
                fMatchPercent = 0f;
                fMatchPoseTime = 0f;
                bPoseMatched = false;

                if (infoText != null)
                {
                    infoText.text = "Try to follow the model pose.";
                }
            }
        }


        // removes saved poses older than delayAllowed from the list
        private void RemoveOldSavedPoses(float fCurrentTime)
        {
            for (int i = alSavedPoses.Count - 1; i >= 0; i--)
            {
                if ((fCurrentTime - alSavedPoses[i].fTime) >= delayAllowed)
                {
                    alSavedPoses.RemoveAt(i);
                }
            }
        }


        // adds current pose of poseModel to the saved poses list
        private void AddCurrentPoseToSaved(float fCurrentTime, bool isMirrored)
        {
            KinectManager kinectManager = KinectManager.Instance;
            if (kinectManager == null || poseModel == null || poseJoints == null)
                return;

            PoseModelData pose = new PoseModelData();
            pose.fTime = fCurrentTime;
            pose.avBoneDirs = new Vector3[poseJoints.Count];

            // save model rotation
            Quaternion poseSavedRotation = poseModel.GetBoneTransform(0).rotation;
            poseModel.GetBoneTransform(0).rotation = avatarModel.GetBoneTransform(0).rotation;

            int numJoints = kinectManager.GetJointCount();
            for (int i = 0; i < poseJoints.Count; i++)
            {
                KinectInterop.JointType joint = poseJoints[i];
                KinectInterop.JointType nextJoint = kinectManager.GetNextJoint(joint);

                if (nextJoint != joint && nextJoint >= 0 && (int)nextJoint < numJoints)
                {
                    Transform poseTransform1 = poseModel.GetBoneTransform(poseModel.GetBoneIndexByJoint(joint, isMirrored));
                    Transform poseTransform2 = poseModel.GetBoneTransform(poseModel.GetBoneIndexByJoint(nextJoint, isMirrored));

                    if (poseTransform1 != null && poseTransform2 != null)
                    {
                        pose.avBoneDirs[i] = (poseTransform2.position - poseTransform1.position).normalized;
                    }
                }
            }

            // add pose to the list
            alSavedPoses.Add(pose);

            // restore model rotation
            poseModel.GetBoneTransform(0).rotation = poseSavedRotation;
        }


        // gets the current avatar pose
        private void GetAvatarPose(float fCurrentTime, bool isMirrored)
        {
            KinectManager kinectManager = KinectManager.Instance;
            if (kinectManager == null || avatarModel == null || poseJoints == null)
                return;

            poseAvatar.fTime = fCurrentTime;
            if (poseAvatar.avBoneDirs == null)
            {
                poseAvatar.avBoneDirs = new Vector3[poseJoints.Count];
            }

            int numJoints = kinectManager.GetJointCount();
            for (int i = 0; i < poseJoints.Count; i++)
            {
                KinectInterop.JointType joint = poseJoints[i];
                KinectInterop.JointType nextJoint = kinectManager.GetNextJoint(joint);

                if (nextJoint != joint && nextJoint >= 0 && (int)nextJoint < numJoints)
                {
                    Transform avatarTransform1 = avatarModel.GetBoneTransform(avatarModel.GetBoneIndexByJoint(joint, isMirrored));
                    Transform avatarTransform2 = avatarModel.GetBoneTransform(avatarModel.GetBoneIndexByJoint(nextJoint, isMirrored));

                    if (avatarTransform1 != null && avatarTransform2 != null)
                    {
                        poseAvatar.avBoneDirs[i] = (avatarTransform2.position - avatarTransform1.position).normalized;
                    }
                }
            }
        }


        // gets the difference between the avatar pose and the list of saved poses
        private string GetPoseDifference(bool isMirrored, bool bDebugPose)
        {
            // by-default values
            bPoseMatched = false;
            fMatchPercent = 0f;
            fMatchPoseTime = 0f;

            KinectManager kinectManager = KinectManager.Instance;
            if (poseJoints == null || poseAvatar.avBoneDirs == null)
                return string.Empty;

            StringBuilder sbDebugPose = bDebugPose ? new StringBuilder() : null;
            string sDebugPose = string.Empty;

            // check the difference with saved poses, starting from the last one
            for (int p = alSavedPoses.Count - 1; p >= 0; p--)
            {
                float fAngleDiff = 0f;
                float fMaxDiff = 0f;

                PoseModelData poseModel = alSavedPoses[p];
                for (int i = 0; i < poseJoints.Count; i++)
                {
                    Vector3 vPoseBone = poseModel.avBoneDirs[i];
                    Vector3 vAvatarBone = poseAvatar.avBoneDirs[i];

                    float fDiff = Vector3.Angle(vPoseBone, vAvatarBone);
                    if (fDiff > 90f)
                        fDiff = 90f;

                    fAngleDiff += fDiff;
                    fMaxDiff += 90f;  // we assume the max diff could be 90 degrees

                    if(bDebugPose)
                    {
                        sbDebugPose.AppendFormat("{0} - diff: {1:F0}", poseJoints[i], fDiff).AppendLine();
                    }
                }

                float fPoseMatch = fMaxDiff > 0f ? (1f - fAngleDiff / fMaxDiff) : 0f;
                if (fPoseMatch > fMatchPercent)
                {
                    fMatchPercent = fPoseMatch;
                    fMatchPoseTime = poseModel.fTime;
                    bPoseMatched = (fMatchPercent >= matchThreshold);

                    if(bDebugPose)
                    {
                        sDebugPose = sbDebugPose.ToString();
                    }
                }

                if (bDebugPose)
                {
                    sbDebugPose.Clear();
                }
            }

            return sDebugPose;
        }

    }
}

