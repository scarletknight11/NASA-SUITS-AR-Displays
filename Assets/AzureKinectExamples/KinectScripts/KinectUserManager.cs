using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// Kinect user manager is the component that tracks the users in front of the sensor.
    /// </summary>
    public class KinectUserManager : MonoBehaviour
    {

        [System.Serializable]
        public class KinectUserEvent : UnityEvent<ulong, int> { }


        /// <summary>
        /// Fired when new user gets detected.
        /// </summary>
        [Tooltip("This event is fired, when new user gets detected.")]
        //public event System.Action<ulong, int> OnUserAdded;
        public KinectUserEvent OnUserAdded = new KinectUserEvent();

        /// <summary>
        /// Fired when user gets removed.
        /// </summary>
        [Tooltip("This event is fired, when user gets removed.")]
        //public event System.Action<ulong, int> OnUserRemoved;
        public KinectUserEvent OnUserRemoved = new KinectUserEvent();


        // List of all users
        internal List<ulong> alUserIds = new List<ulong>();
        internal Dictionary<ulong, int> dictUserIdToIndex = new Dictionary<ulong, int>();
        internal ulong[] aUserIndexIds = new ulong[KinectInterop.Constants.MaxBodyCount];
        internal Dictionary<ulong, float> dictUserIdToTime = new Dictionary<ulong, float>();

        // Primary (first or closest) user ID
        internal ulong liPrimaryUserId = 0;

        // Calibration gesture data for each player
        internal Dictionary<ulong, KinectGestureManager.GestureData> playerCalibrationData = new Dictionary<ulong, KinectGestureManager.GestureData>();

        // reference to KM
        private KinectManager kinectManager = null;

        // transformation matrix of the primary body sensor (used to apply the sensor orientation transformation)
        //protected Matrix4x4 matBodySensor = Matrix4x4.identity;

        // parameters used by the FixedStepIndices order
        [Tooltip("Minimum (leftmost) position, used by the FixedStepIndices-order, in meters.")]
        public float fixedPosMin = -2f;  // minimum (leftmost) fixed position, in meters
        [Tooltip("Maximum (rightmost) position, used by the FixedStepIndices-order, in meters.")]
        public float fixedPosMax = 2f;   // maximum (rightmost) fixed position, in meters
        [Tooltip("Fixed step between indices, used by the FixedStepIndices-order, in meters.")]
        public float fixedPosStep = 1f;  // fixed step between indices, in meters

        [Tooltip("Central position (in meters from the sensor), used by the Distance-user detection order.")]
        public Vector3 centralPosition = Vector3.zero;


        protected virtual void Start()
        {
            kinectManager = KinectManager.Instance;
        }


        // returns the fixed step user index, according to the user position in space.
        private int GetFixedStepUserIndex(Vector3 userPos)
        {
            float xDist = Mathf.Clamp(userPos.x, fixedPosMin, fixedPosMax);
            int userIndex = Mathf.FloorToInt((xDist - fixedPosMin) / fixedPosStep);

            return userIndex;
        }


        /// <summary>
        /// Updates the user indices as needed, according to the detection order
        /// </summary>
        /// <param name="userDetectionOrder"></param>
        public virtual void UpdateUserIndices(KinectManager.UserDetectionOrder userDetectionOrder)
        {
            switch(userDetectionOrder)
            {
                case KinectManager.UserDetectionOrder.Appearance:
                    break;
                case KinectManager.UserDetectionOrder.Distance:
                case KinectManager.UserDetectionOrder.LeftToRight:
                    RearrangeUserIndices(userDetectionOrder);
                    break;
                case KinectManager.UserDetectionOrder.FixedStepIndices:
                    // clear all indices
                    System.Array.Clear(aUserIndexIds, 0, aUserIndexIds.Length);

                    // set current user indices
                    for (int i = 0; i < alUserIds.Count; i++)
                    {
                        ulong userId = alUserIds[i];

                        if (userId != 0)
                        {
                            Vector3 userPos = kinectManager.GetUserPosition(userId);
                            int userIndex = GetFixedStepUserIndex(userPos);
                            //Debug.Log(string.Format("  UpdateUserIndices - UserId: {0}, xPos: {1:F2}, index: {2}", userId, userPos.x, userIndex));
                            aUserIndexIds[userIndex] = userId;
                        }
                    }
                    break;
            }
        }


        /// <summary>
        /// Rearranges the user indices, according to the current criteria
        /// </summary>
        public virtual void RearrangeUserIndices(KinectManager.UserDetectionOrder userDetectionOrder)
        {
            if (userDetectionOrder != KinectManager.UserDetectionOrder.Appearance &&
                userDetectionOrder != KinectManager.UserDetectionOrder.FixedStepIndices)
            {
                // get current user positions
                Vector3[] userPos = new Vector3[aUserIndexIds.Length];
                for (int i = 0; i < aUserIndexIds.Length; i++)
                {
                    ulong userId = aUserIndexIds[i];
                    userPos[i] = userId != 0 ? kinectManager.GetUserPosition(userId) : Vector3.zero;
                }

                // bubble sort
                bool reorderDone = false;
                for (int i = aUserIndexIds.Length - 1; i >= 1; i--)
                {
                    bool switchDone = false;

                    for (int j = 0; j < i; j++)
                    {
                        if (userPos[j] == Vector3.zero || userPos[j + 1] == Vector3.zero)
                            continue;

                        float userDist1 = 0f;
                        if (userDetectionOrder == KinectManager.UserDetectionOrder.Distance)
                            userDist1 = Mathf.Abs(userPos[j].x - centralPosition.x) + Mathf.Abs(userPos[j].z - centralPosition.z);
                        else if (userDetectionOrder == KinectManager.UserDetectionOrder.LeftToRight)
                            userDist1 = userPos[j].x;

                        if (Mathf.Abs(userDist1) < 0.01f)
                            userDist1 = 1000f;  // far away

                        float userDist2 = 0f;
                        if (userDetectionOrder == KinectManager.UserDetectionOrder.Distance)
                            userDist2 = Mathf.Abs(userPos[j + 1].x - centralPosition.x) + Mathf.Abs(userPos[j + 1].z - centralPosition.z);
                        else if (userDetectionOrder == KinectManager.UserDetectionOrder.LeftToRight)
                            userDist2 = userPos[j + 1].x;

                        if (Mathf.Abs(userDist2) < 0.01f)
                            userDist2 = 1000f;  // far away

                        if (userDist1 > userDist2)
                        {
                            // switch them
                            ulong tmpUserId = aUserIndexIds[j];
                            aUserIndexIds[j] = aUserIndexIds[j + 1];
                            aUserIndexIds[j + 1] = tmpUserId;

                            reorderDone = switchDone = true;
                        }
                    }

                    if (!switchDone)  // check for sorted array
                        break;
                }

                if (reorderDone)
                {
                    //System.Text.StringBuilder sbUsersOrder = new System.Text.StringBuilder();
                    //sbUsersOrder.Append("Users rearranged: ");

                    //for (int i = 0; i < aUserIndexIds.Length; i++)
                    //{
                    //    if (aUserIndexIds[i] != 0)
                    //    {
                    //        sbUsersOrder.Append(i).Append(":").Append(aUserIndexIds[i]).Append("  ");
                    //    }
                    //}

                    //Debug.Log(sbUsersOrder.ToString());
                }
            }
        }


        // Returns empty user slot for the given user Id
        protected virtual int GetEmptyUserSlot(ulong userId, int bodyIndex, ref KinectInterop.BodyData[] alTrackedBodies, KinectManager.UserDetectionOrder userDetectionOrder)
        {
            // rearrange current users
            RearrangeUserIndices(userDetectionOrder);
            int uidIndex = -1;

            if(userDetectionOrder == KinectManager.UserDetectionOrder.FixedStepIndices)
            {
                Vector3 userPos = alTrackedBodies[bodyIndex].position;
                int userIndex = GetFixedStepUserIndex(userPos);
                //Debug.Log(string.Format("GetEmptyUserSlot - UserId: {0}, xPos: {1:F2}, index: {2}, IndexId: {3}", userId, userPos.x, userIndex, aUserIndexIds[userIndex]));

                if (aUserIndexIds[userIndex] == 0)
                {
                    uidIndex = userIndex;
                }
            }
            else if (userDetectionOrder != KinectManager.UserDetectionOrder.Appearance)
            {
                // add the new user, depending on the distance
                Vector3 userPos = alTrackedBodies[bodyIndex].position;

                float userDist = 0f;
                if (userDetectionOrder == KinectManager.UserDetectionOrder.Distance)
                    userDist = Mathf.Abs(userPos.x - centralPosition.x) + Mathf.Abs(userPos.z - centralPosition.z);
                else if (userDetectionOrder == KinectManager.UserDetectionOrder.LeftToRight)
                    userDist = userPos.x;

                for (int i = 0; i < aUserIndexIds.Length; i++)
                {
                    if (aUserIndexIds[i] == 0)
                    {
                        // free user slot
                        uidIndex = i;
                        break;
                    }
                    else
                    {
                        ulong uidUserId = aUserIndexIds[i];
                        Vector3 uidUserPos = kinectManager.GetUserPosition(uidUserId);

                        float uidUserDist = 0;
                        if (userDetectionOrder == KinectManager.UserDetectionOrder.Distance)
                            uidUserDist = Mathf.Abs(uidUserPos.x - centralPosition.x) + Mathf.Abs(uidUserPos.z - centralPosition.z);
                        else if (userDetectionOrder == KinectManager.UserDetectionOrder.LeftToRight)
                            uidUserDist = uidUserPos.x;

                        if (userDist < uidUserDist)
                        {
                            // current user is left to the compared one
                            for (int u = (aUserIndexIds.Length - 2); u >= i; u--)
                            {
                                aUserIndexIds[u + 1] = aUserIndexIds[u];

                                if (aUserIndexIds[u] != 0)
                                {
                                    Debug.Log(string.Format("Reindexing user {0} to {1}, ID: {2}, pos: {3}, other-pos: {4}.", u, u + 1, aUserIndexIds[u], userPos, uidUserPos));
                                }
                            }

                            aUserIndexIds[i] = 0; // cleanup current index
                            uidIndex = i;
                            break;
                        }
                    }
                }

            }
            else
            {
                // look for the 1st available slot
                for (int i = 0; i < aUserIndexIds.Length; i++)
                {
                    if (aUserIndexIds[i] == 0)
                    {
                        uidIndex = i;
                        break;
                    }
                }
            }

            return uidIndex;
        }


        // releases the user slot. rearranges the remaining users.
        protected virtual void FreeEmptyUserSlot(int uidIndex, KinectManager.UserDetectionOrder userDetectionOrder)
        {
            aUserIndexIds[uidIndex] = 0;

            if (userDetectionOrder != KinectManager.UserDetectionOrder.Appearance &&
                userDetectionOrder != KinectManager.UserDetectionOrder.FixedStepIndices)
            {
                // rearrange the remaining users
                for (int u = uidIndex; u < (aUserIndexIds.Length - 1); u++)
                {
                    aUserIndexIds[u] = aUserIndexIds[u + 1];

                    if (aUserIndexIds[u + 1] != 0)
                    {
                        Debug.Log(string.Format("Reindexing user {0} to {1}, ID: {2}.", u + 1, u, aUserIndexIds[u + 1]));
                    }
                }

                // make sure the last slot is free
                aUserIndexIds[aUserIndexIds.Length - 1] = 0;
            }

            // rearrange the remaining users
            RearrangeUserIndices(userDetectionOrder);
        }


        // Adds UserId to the list of users
        public virtual int CalibrateUser(ulong userId, int bodyIndex, ref KinectInterop.BodyData[] alTrackedBodies, 
            KinectManager.UserDetectionOrder userDetectionOrder, GestureType playerCalibrationPose, KinectGestureManager gestureManager)
        {
            if (!alUserIds.Contains(userId))
            {
                if (CheckForCalibrationPose(userId, bodyIndex, playerCalibrationPose, gestureManager, ref alTrackedBodies))
                {
                    //int uidIndex = alUserIds.Count;
                    int uidIndex = GetEmptyUserSlot(userId, bodyIndex, ref alTrackedBodies, userDetectionOrder);

                    if (uidIndex >= 0)
                    {
                        aUserIndexIds[uidIndex] = userId;
                    }
                    else
                    {
                        // no empty user-index slot
                        return -1;
                    }

                    dictUserIdToIndex[userId] = bodyIndex;
                    dictUserIdToTime[userId] = Time.time;
                    alUserIds.Add(userId);

                    // set primary user-id, if there is none
                    if (liPrimaryUserId == 0 && aUserIndexIds.Length > 0)
                    {
                        liPrimaryUserId = aUserIndexIds[0];  // userId
                    }

                    return uidIndex;
                }
            }

            return -1;
        }


        // fires the OnUserAdded-event
        internal void FireOnUserAdded(ulong userId, int userIndex)
        {
            OnUserAdded?.Invoke(userId, userIndex);
        }


        // Remove a lost UserId
        public virtual int RemoveUser(ulong userId, KinectManager.UserDetectionOrder userDetectionOrder)
        {
            //int uidIndex = alUserIds.IndexOf(userId);
            int uidIndex = System.Array.IndexOf(aUserIndexIds, userId);

            // clear calibration data for this user
            if (playerCalibrationData.ContainsKey(userId))
            {
                playerCalibrationData.Remove(userId);
            }

            // clean up the outdated calibration data in the data dictionary
            List<ulong> alCalDataKeys = new List<ulong>(playerCalibrationData.Keys);

            foreach (ulong calUserID in alCalDataKeys)
            {
                KinectGestureManager.GestureData gestureData = playerCalibrationData[calUserID];

                if ((gestureData.timestamp + 60f) < Time.realtimeSinceStartup)
                {
                    playerCalibrationData.Remove(calUserID);
                }
            }

            alCalDataKeys.Clear();

            // remove user-id from the global users lists
            dictUserIdToIndex.Remove(userId);
            dictUserIdToTime.Remove(userId);
            alUserIds.Remove(userId);

            if (uidIndex >= 0)
            {
                FreeEmptyUserSlot(uidIndex, userDetectionOrder);
            }

            // if this was the primary user, update the primary user-id
            if (liPrimaryUserId == userId)
            {
                if (aUserIndexIds.Length > 0)
                {
                    liPrimaryUserId = aUserIndexIds[0];
                }
                else
                {
                    liPrimaryUserId = 0;
                }
            }

            if (alUserIds.Count == 0)
            {
                //Debug.Log("Waiting for users.");
            }

            return uidIndex;
        }


        // fires the OnUserRemoved-event
        internal void FireOnUserRemoved(ulong userId, int userIndex)
        {
            OnUserRemoved?.Invoke(userId, userIndex);
        }


        // check if the calibration pose is complete for given user
        protected virtual bool CheckForCalibrationPose(ulong UserId, int bodyIndex, GestureType calibrationGesture, 
            KinectGestureManager gestureManager, ref KinectInterop.BodyData[] alTrackedBodies)
        {
            if (calibrationGesture == GestureType.None)
                return true;
            if (!gestureManager)
                return false;

            KinectGestureManager.GestureData gestureData = playerCalibrationData.ContainsKey(UserId) ?
                playerCalibrationData[UserId] : new KinectGestureManager.GestureData();

            // init gesture data if needed
            if (gestureData.userId != UserId)
            {
                gestureData.userId = UserId;
                gestureData.gesture = calibrationGesture;
                gestureData.state = 0;
                gestureData.timestamp = Time.realtimeSinceStartup;
                gestureData.joint = 0;
                gestureData.progress = 0f;
                gestureData.complete = false;
                gestureData.cancelled = false;
            }

            // get joint positions and tracking
            int iAllJointsCount = (int)KinectInterop.JointType.Count;
            bool[] playerJointsTracked = new bool[iAllJointsCount];
            Vector3[] playerJointsPos = new Vector3[iAllJointsCount];

            int[] aiNeededJointIndexes = gestureManager.GetNeededJointIndexes();
            int iNeededJointsCount = aiNeededJointIndexes.Length;

            //// sensor orientation angle
            //float orientAngle = kinectManager.GetPrimaryBodySensorOrientationAngle();
            //Vector3 sensorOri = new Vector3(0f, 0f, orientAngle);
            //matBodySensor.SetTRS(Vector3.zero, Quaternion.Euler(sensorOri), Vector3.one);

            for (int i = 0; i < iNeededJointsCount; i++)
            {
                int joint = aiNeededJointIndexes[i];

                if (joint >= 0)
                {
                    KinectInterop.JointData jointData = alTrackedBodies[bodyIndex].joint[joint];

                    playerJointsTracked[joint] = jointData.trackingState != KinectInterop.TrackingState.NotTracked;
                    playerJointsPos[joint] = jointData.position;  //.kinectPos;
                    //playerJointsPos[joint] = matBodySensor.MultiplyPoint3x4(playerJointsPos[joint]);  // apply sensor orientation

                    if (!playerJointsTracked[joint] && (joint == (int)KinectInterop.JointType.Neck))
                    {
                        KinectInterop.JointData lShoulderData = alTrackedBodies[bodyIndex].joint[(int)KinectInterop.JointType.ShoulderLeft];
                        KinectInterop.JointData rShoulderData = alTrackedBodies[bodyIndex].joint[(int)KinectInterop.JointType.ShoulderRight];

                        if (lShoulderData.trackingState != KinectInterop.TrackingState.NotTracked && rShoulderData.trackingState != KinectInterop.TrackingState.NotTracked)
                        {
                            playerJointsTracked[joint] = true;
                            playerJointsPos[joint] = (lShoulderData.position + rShoulderData.position) / 2f;
                        }
                    }
                }
            }

            // estimate the gesture progess
            gestureManager.CheckForGesture(UserId, ref gestureData, Time.realtimeSinceStartup,
                ref playerJointsPos, ref playerJointsTracked);
            playerCalibrationData[UserId] = gestureData;

            // check if gesture is complete
            if (gestureData.complete)
            {
                gestureData.userId = 0;
                playerCalibrationData[UserId] = gestureData;

                return true;
            }

            return false;
        }

    }
}

