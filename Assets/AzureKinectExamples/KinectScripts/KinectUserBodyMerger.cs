using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// KinectUserBodyMerger merges user bodies detected by multiple connected sensors.
    /// Attribution: This class is based on the BodyMerger-class, provided by Cy-Fighter.com (http://cy-fighter.com/). 
    /// See: KinectUserBodyMerger-Attribution.txt
    /// </summary>
    public class KinectUserBodyMerger
    {
        // references to sensor-data objects
        private List<KinectInterop.SensorData> sensorDatas = null;
        private Dictionary<ulong, ulong>[] adUserIdToSensorTrackingId = null;

        // sensor user Id to merged user Id
        private Dictionary<string, ulong> dictSensorUserIdToUserId = new Dictionary<string, ulong>();
        private Dictionary<string, float> dictSensorUserIdToLastUsed = new Dictionary<string, float>();
        private Dictionary<string, float> dictSensorUserIdToFirstUsed = new Dictionary<string, float>();
        private ulong nextUserId = 0;


        // maximum distance between close bodies
        private const float MAX_DISTANCE_TO_CLOSE_BODY = 0.35f;

        // if only one sensor needs to be considered, set its index here
        private const int SINGLE_SENSOR_INDEX = -1;

        // wait time in seconds, before sensor user gets removed from the dictionaries 
        private const float WAIT_TIME_BEFORE_REMOVAL = 0.5f;


        public KinectUserBodyMerger(List<KinectInterop.SensorData> sensorDatas)
        {
            this.sensorDatas = sensorDatas;

            adUserIdToSensorTrackingId = new Dictionary<ulong, ulong>[sensorDatas.Count];
            for(int i = 0; i < adUserIdToSensorTrackingId.Length; i++)
            {
                adUserIdToSensorTrackingId[i] = new Dictionary<ulong, ulong>();
            }

            dictSensorUserIdToUserId.Clear();
            dictSensorUserIdToFirstUsed.Clear();
            dictSensorUserIdToLastUsed.Clear();

            nextUserId = 1;
        }


        /// <summary>
        /// Merges the user bodies, detected by the multiple sensors.
        /// </summary>
        public List<KinectInterop.BodyData> MergeUserBodies(ref ulong lastBodyFrameTime, BoneOrientationConstraints boneConstraints)
        {
            // get list of all bodies
            List<KinectInterop.BodyData> alAllBodies = GetAllBodiesList(ref lastBodyFrameTime, boneConstraints);

            // build mergeable body sets
            List<List<KinectInterop.BodyData>> mergeableBodySets = new List<List<KinectInterop.BodyData>>();

            while (alAllBodies.Count > 0)
            {
                List<KinectInterop.BodyData> alCloseBodies = new List<KinectInterop.BodyData>();
                alCloseBodies.Add(alAllBodies[0]);
                alAllBodies.RemoveAt(0);

                FindOverlappingBodies(ref alCloseBodies, ref alAllBodies, MAX_DISTANCE_TO_CLOSE_BODY, mergeableBodySets.Count);
                mergeableBodySets.Add(alCloseBodies);
            }

            // merge the bodies
            List<KinectInterop.BodyData> alMergedBodies = new List<KinectInterop.BodyData>();

            for(int i = 0; i < adUserIdToSensorTrackingId.Length; i++)
            {
                adUserIdToSensorTrackingId[i].Clear();
            }

            List<string> lostUsers = new List<string>();
            lostUsers.AddRange(dictSensorUserIdToUserId.Keys);

            for (int i = 0; i < mergeableBodySets.Count; i++)
            {
                KinectInterop.BodyData mergedBody = GetMergedBody(mergeableBodySets[i], i, ref lostUsers);
                alMergedBodies.Add(mergedBody);
            }

            // clean up
            mergeableBodySets.Clear();
            mergeableBodySets = null;
            alAllBodies = null;

            if (lostUsers.Count > 0)
            {
                foreach (string sensorUserId in lostUsers)
                {
                    if (dictSensorUserIdToUserId.ContainsKey(sensorUserId) && (Time.time - dictSensorUserIdToLastUsed[sensorUserId]) >= WAIT_TIME_BEFORE_REMOVAL)
                    {
                        dictSensorUserIdToUserId.Remove(sensorUserId);
                        dictSensorUserIdToFirstUsed.Remove(sensorUserId);
                        dictSensorUserIdToLastUsed.Remove(sensorUserId);

                        //Debug.Log("Removed lost sensor-user-id from dict: " + sensorUserId);
                    }
                }

                lostUsers.Clear();
                lostUsers = null;
            }

            return alMergedBodies;
        }

        // returns list of all bodies, tracked by all sensors
        private List<KinectInterop.BodyData> GetAllBodiesList(ref ulong lastBodyFrameTime, BoneOrientationConstraints boneConstraints)
        {
            List<KinectInterop.BodyData> alAllBodies = new List<KinectInterop.BodyData>();

            for (int s = 0; s < sensorDatas.Count; s++)
            {
                if (SINGLE_SENSOR_INDEX >= 0 && s != SINGLE_SENSOR_INDEX)
                    continue;

                KinectInterop.SensorData sensorData = sensorDatas[s];
                uint sensorBodyCount = sensorData.trackedBodiesCount;

                if(sensorBodyCount > 0 && sensorData.lastBodyFrameTime > lastBodyFrameTime)
                {
                    lastBodyFrameTime = sensorData.lastBodyFrameTime;
                }

                for (uint b = 0; b < sensorBodyCount; b++)
                {
                    KinectInterop.BodyData bodyData = new KinectInterop.BodyData((int)KinectInterop.JointType.Count);

                    sensorData.alTrackedBodies[b].CopyTo(ref bodyData);
                    bodyData.sensorIndex = s;

                    // filter orientation constraints
                    if (boneConstraints != null)
                    {
                        boneConstraints.Constrain(ref bodyData);
                    }

                    alAllBodies.Add(bodyData);
                }

                //break;
            }

            if(alAllBodies.Count > 0)
            {
                //Debug.Log("Found " + alAllBodies.Count + " total bodies.");
            }

            return alAllBodies;
        }


        /// <summary>
        /// Returns the sensor-specific userId, given the merged userId.
        /// </summary>
        /// <param name="sensorIndex">Sensor index</param>
        /// <param name="userId">Merged user ID</param>
        /// <returns>Sensor-specific user ID</returns>
        public ulong GetSensorTrackingId(int sensorIndex, ulong userId)
        {
            if (adUserIdToSensorTrackingId == null || adUserIdToSensorTrackingId.Length < sensorIndex)
                return 0;

            if (adUserIdToSensorTrackingId[sensorIndex].ContainsKey(userId))
            {
                return adUserIdToSensorTrackingId[sensorIndex][userId];
            }

            return 0;
        }


        // finds all other overlapping bodies in the list
        private void FindOverlappingBodies(ref List<KinectInterop.BodyData> alCloseBodies, ref List<KinectInterop.BodyData> alAllBodies, 
            float mergeDistance, int mBodyIndex)
        {
            Vector3 pelvisAvgPos = GetBodyJointAvgPos(alCloseBodies, (int)KinectInterop.JointType.Pelvis);
            //Vector3 headAvgPos = GetBodyJointAvgPos(alCloseBodies, (int)KinectInterop.JointType.Head);

            string sensorUserId0 = alCloseBodies.Count > 0 ? alCloseBodies[0].sensorIndex.ToString() + "_" + alCloseBodies[0].liTrackingID.ToString() : string.Empty;
            ulong firstUserId = dictSensorUserIdToUserId.ContainsKey(sensorUserId0) ? dictSensorUserIdToUserId[sensorUserId0] : 0;

            for (int i = alAllBodies.Count - 1; i >= 0; i--)
            {
                string sensorUserId = alAllBodies[i].sensorIndex.ToString() + "_" + alAllBodies[i].liTrackingID.ToString();
                ulong curUserId = dictSensorUserIdToUserId.ContainsKey(sensorUserId) ? dictSensorUserIdToUserId[sensorUserId] : 0;
                Vector3 pelvisUserPos = alAllBodies[i].joint[(int)KinectInterop.JointType.Pelvis].position;

                if ((firstUserId != 0 && curUserId == firstUserId) || Vector3.Distance(pelvisUserPos, pelvisAvgPos) <= mergeDistance)
                {
                    alCloseBodies.Add(alAllBodies[i]);
                    alAllBodies.RemoveAt(i);

                    //if(firstUserId != 0 && curUserId != 0 && curUserId != firstUserId)  // just in case
                    //{
                    //    dictSensorUserIdToUserId.Remove(sensorUserId);
                    //    Debug.Log("Removed sensor-user-id from dict: " + sensorUserId);
                    //}
                }
                else
                {
                    //Debug.Log(string.Format("{0} - {1}: {2}, {3}: {4}, dist: {5:F2}", firstUserId, sensorUserId0, pelvisAvgPos, sensorUserId, pelvisUserPos, Vector3.Distance(pelvisUserPos, pelvisAvgPos)));
                }
            }

            //Debug.Log("mBodyIndex " + mBodyIndex + " has " + alCloseBodies.Count + " mergeable bodies.");
        }

        // returns averaged position of a body joint in a list of bodies
        private Vector3 GetBodyJointAvgPos(List<KinectInterop.BodyData> alBodyList, int jointIndex)
        {
            Vector3 avgJointPos = Vector3.zero;
            int bodyCount = alBodyList.Count;
            int jointPosCount = 0;

            for (int i = 0; i < alBodyList.Count; i++)
            {
                if((int)alBodyList[i].joint[jointIndex].trackingState >= (int)KinectInterop.TrackingState.Tracked)
                {
                    avgJointPos += alBodyList[i].joint[jointIndex].position;
                    jointPosCount++;
                }
            }

            avgJointPos = jointPosCount > 0 ? avgJointPos / jointPosCount : Vector3.zero;

            return avgJointPos;
        }

        // averages the bodies in the list and returns the single merged body 
        private KinectInterop.BodyData GetMergedBody(List<KinectInterop.BodyData> alCloseBodies, int bodyIndex, ref List<string> lostUsers)
        {
            int jointCount = (int)KinectInterop.JointType.Count;
            KinectInterop.BodyData mergedBody = new KinectInterop.BodyData(jointCount);

            for (int j = 0; j < jointCount; j++)
            {
                //int maxTrackingState = GetBodyJointMaxState(alCloseBodies, j);
                int minTrackingState = GetBodyJointMinState(alCloseBodies, j);

                CalcAverageBodyJoint(alCloseBodies, j, minTrackingState, ref mergedBody);
            }

            mergedBody.liTrackingID = GetMergedBodyId(alCloseBodies, ref lostUsers);
            mergedBody.iBodyIndex = bodyIndex;

            for(int i = 0; i < alCloseBodies.Count; i++)
            {
                adUserIdToSensorTrackingId[alCloseBodies[i].sensorIndex][mergedBody.liTrackingID] = alCloseBodies[i].liTrackingID;
            }

            KinectInterop.JointData pelvisData = mergedBody.joint[0];
            mergedBody.bIsTracked = pelvisData.trackingState != KinectInterop.TrackingState.NotTracked;

            //Debug.Log(string.Format("MBody {0} Id: {1}, pos: {2}, rot: {3}", bodyIndex, mergedBody.liTrackingID, pelvisData.position, pelvisData.normalRotation.eulerAngles));

            mergedBody.kinectPos = pelvisData.kinectPos;
            mergedBody.position = pelvisData.position;

            mergedBody.orientation = pelvisData.orientation;
            mergedBody.normalRotation = pelvisData.normalRotation;
            mergedBody.mirroredRotation = pelvisData.mirroredRotation;

            KinectInterop.CalcBodyJointDirs(ref mergedBody);

            return mergedBody;
        }

        // returns max tracking state of a body joint in a list of bodies
        private int GetBodyJointMaxState(List<KinectInterop.BodyData> alBodyList, int jointIndex)
        {
            int maxState = (int)KinectInterop.TrackingState.NotTracked;
            int bodyCount = alBodyList.Count;

            for (int i = 0; i < bodyCount; i++)
            {
                if ((int)alBodyList[i].joint[jointIndex].trackingState > maxState)
                {
                    maxState = (int)alBodyList[i].joint[jointIndex].trackingState;
                }
            }

            return maxState;
        }

        // returns min tracking state of a body joint in a list of bodies
        private int GetBodyJointMinState(List<KinectInterop.BodyData> alBodyList, int jointIndex)
        {
            int minState = (int)KinectInterop.TrackingState.HighConf;
            int bodyCount = alBodyList.Count;

            for (int i = 0; i < bodyCount; i++)
            {
                if ((int)alBodyList[i].joint[jointIndex].trackingState < minState)
                {
                    minState = (int)alBodyList[i].joint[jointIndex].trackingState;
                }
            }

            return minState;
        }

        // whether the joint is 
        private static readonly bool[] isSingleSensorJoint =
        {
            false,  // Pelvis
            false,  // SpineNaval
            false,  // SpineChest
            false,  // Neck
            false,  // Head

            false,  // ClavicleLeft
            false,  // ShoulderLeft
            false,  // ElbowLeft
            true,   // WristLeft
            true,   // HandLeft

            false,  // ClavicleRight
            false,  // ShoulderRight
            false,  // ElbowRight
            true,   // WristRight
            true,   // HandRight

            false,  // HipLeft
            false,  // KneeLeft
            true,   // AnkleLeft
            true,   // FootLeft

            false,  // HipRight
            false,  // KneeRight
            true,   // AnkleRight
            true,   // FootRight

            true,   // Nose
            true,   // EyeLeft
            true,   // EarLeft
            true,   // EyeRight
            true,   // EarRight

            true,   // HandtipLeft
            true,   // ThumbLeft
            true,   // HandtipRight
            true    // ThumbRight
        };

        // returns averaged position of a body joint in a list of bodies
        private void CalcAverageBodyJoint(List<KinectInterop.BodyData> alBodyList, int jointIndex, int minTrackingState,
            ref KinectInterop.BodyData bodyData)
        {
            Vector3 avgJointPos = Vector3.zero;
            Vector3 firstKinectPos = Vector3.zero;

            Quaternion avgJointRot = Quaternion.identity;
            Quaternion firstJointOri = Quaternion.identity;
            Quaternion firstJointRot = Quaternion.identity;
            float x = 0f, y = 0f, z = 0f, w = 0f;

            float jointAvgCount = 0f;
            int bodyCount = alBodyList.Count;

            for (int i = 0; i < bodyCount; i++)
            {
                //if (SINGLE_SENSOR_INDEX >= 0 && alBodyList[i].sensorIndex != SINGLE_SENSOR_INDEX)
                //    continue;

                //if (jointIndex == (int)KinectInterop.JointType.WristRight)
                //{
                //    Debug.Log(string.Format("BM {0:F3} {1}: {2}_{3}, state: {4}\npos: {5}, rot: {6}", Time.time, (KinectInterop.JointType)jointIndex,
                //        alBodyList[i].sensorIndex, alBodyList[i].liTrackingID, alBodyList[i].joint[jointIndex].trackingState,
                //        alBodyList[i].joint[jointIndex].position, alBodyList[i].joint[jointIndex].mirroredRotation.eulerAngles));
                //}

                //if (jointIndex == (int)KinectInterop.JointType.WristLeft)
                //{
                //    Debug.Log(string.Format("BM {0:F3} {1}: {2}_{3}, state: {4}\npos: {5}, rot: {6}", Time.time, (KinectInterop.JointType)jointIndex,
                //        alBodyList[i].sensorIndex, alBodyList[i].liTrackingID, alBodyList[i].joint[jointIndex].trackingState,
                //        alBodyList[i].joint[jointIndex].position, alBodyList[i].joint[jointIndex].mirroredRotation.eulerAngles));
                //}

                KinectInterop.TrackingState jointState = alBodyList[i].joint[jointIndex].trackingState;
                //if ((int)jointState == maxTrackingState)
                if(jointState != KinectInterop.TrackingState.NotTracked)
                {
                    Quaternion jointRot = alBodyList[i].joint[jointIndex].normalRotation;

                    if (avgJointPos == Vector3.zero)
                    {
                        firstKinectPos = alBodyList[i].joint[jointIndex].kinectPos;
                        firstJointOri = alBodyList[i].joint[jointIndex].orientation;
                        firstJointRot = jointRot;
                    }

                    //if(jointIndex == 0)
                    //{
                    //    //Debug.Log(string.Format("Body Id: {0}_{1}, pos: {2}, rot: {3}", alBodyList[i].sensorIndex, alBodyList[i].liTrackingID, alBodyList[i].joint[jointIndex].position, alBodyList[i].joint[jointIndex].normalRotation.eulerAngles));
                    //}

                    float jointWeight = 1f; // jointState != KinectInterop.TrackingState.Inferred ? 1f : 0.5f;
                    avgJointPos += alBodyList[i].joint[jointIndex].position * jointWeight;

                    if(Quaternion.Dot(jointRot, firstJointRot) < 0f)
                        jointRot = new Quaternion(-jointRot.x, -jointRot.y, -jointRot.z, -jointRot.w);  // inverse the sign
                    if (jointWeight < 0.9f)
                        jointRot = Quaternion.Slerp(Quaternion.identity, jointRot, jointWeight);
                    x += jointRot.x; y += jointRot.y; z += jointRot.z; w += jointRot.w;

                    jointAvgCount += jointWeight; // (jointState != KinectInterop.TrackingState.Inferred ? 1f : 0.5f);

                    if (isSingleSensorJoint[jointIndex])
                    {
                        //minTrackingState = (int)jointState;
                        //break;
                    }
                }
            }

            if(jointAvgCount > 0)
            {
                float addDet = 1f / jointAvgCount;
                avgJointPos = avgJointPos * addDet;

                x *= addDet; y *= addDet; z *= addDet; w *= addDet;
                float lengthD = 1.0f / (w * w + x * x + y * y + z * z);
                x *= lengthD; y *= lengthD; z *= lengthD; w *= lengthD;
                avgJointRot = new Quaternion(x, y, z, w);
            }

            KinectInterop.JointData jointData = bodyData.joint[jointIndex];

            jointData.trackingState = (KinectInterop.TrackingState)minTrackingState;
            jointData.kinectPos = firstKinectPos;
            jointData.position = avgJointPos;

            jointData.orientation = firstJointOri;
            jointData.normalRotation = avgJointRot;

            Vector3 mirroredRot = avgJointRot.eulerAngles;
            mirroredRot.y = -mirroredRot.y;
            mirroredRot.z = -mirroredRot.z;
            jointData.mirroredRotation = Quaternion.Euler(mirroredRot);

            //if (jointIndex == (int)KinectInterop.JointType.WristRight)
            //{
            //    Debug.Log(string.Format("BM1 {0}: pos: {1}, rot: {2}\n", (KinectInterop.JointType)jointIndex, jointData.position, jointData.mirroredRotation.eulerAngles));
            //}

            bodyData.joint[jointIndex] = jointData;
        }


        // averages the bodies in the list and returns the single merged body 
        private ulong GetMergedBodyId(List<KinectInterop.BodyData> alCloseBodies, ref List<string> lostUsers)
        {
            int bodyCount = alCloseBodies.Count;
            float minStartTime = float.MaxValue;
            ulong userBodyId = 0;

            // look for the oldest available user id
            for (int i = 0; i < bodyCount; i++)
            {
                string sensorUserId = alCloseBodies[i].sensorIndex.ToString() + "_" + alCloseBodies[i].liTrackingID.ToString();

                if (dictSensorUserIdToUserId.ContainsKey(sensorUserId) && dictSensorUserIdToFirstUsed[sensorUserId] < minStartTime)
                {
                    userBodyId = dictSensorUserIdToUserId[sensorUserId];
                    minStartTime = dictSensorUserIdToFirstUsed[sensorUserId];
                }
            }

            for (int i = 0; i < bodyCount; i++)
            {
                string sensorUserId = alCloseBodies[i].sensorIndex.ToString() + "_" + alCloseBodies[i].liTrackingID.ToString();

                if (userBodyId == 0)
                {
                    if (!dictSensorUserIdToUserId.ContainsKey(sensorUserId))
                    {
                        //bool bBodyIdFound = false;
                        //for(int b = bodyCount - 1; b > i; b--)
                        //{
                        //    string closeUserId = alCloseBodies[b].sensorIndex.ToString() + "_" + alCloseBodies[b].liTrackingID.ToString();
                        //    if(dictSensorUserIdToUserId.ContainsKey(closeUserId))
                        //    {
                        //        //Debug.Log("Using userId of close-user-id '" + closeUserId + "' for sensor-user-id '" + sensorUserId + "': " + dictSensorUserIdToUserId[closeUserId]);

                        //        dictSensorUserIdToUserId[sensorUserId] = dictSensorUserIdToUserId[closeUserId];
                        //        dictSensorUserIdToLastUsed[sensorUserId] = Time.time;
                        //        bBodyIdFound = true;
                        //    }
                        //}

                        //if(!bBodyIdFound)
                        {
                            //Debug.Log("Creating new userId '" + nextUserId + "' for sensor-user-id '" + sensorUserId + "'");

                            dictSensorUserIdToUserId[sensorUserId] = nextUserId;
                            dictSensorUserIdToFirstUsed[sensorUserId] = Time.time;
                            dictSensorUserIdToLastUsed[sensorUserId] = Time.time;
                            nextUserId++;
                        }
                    }

                    userBodyId = dictSensorUserIdToUserId[sensorUserId];
                }
                else if (!dictSensorUserIdToUserId.ContainsKey(sensorUserId) || dictSensorUserIdToUserId[sensorUserId] != userBodyId)
                {
                    //ulong oldUserId = dictSensorUserIdToUserId.ContainsKey(sensorUserId) ? dictSensorUserIdToUserId[sensorUserId] : 0;
                    //Debug.Log("Updating userId for sensor-user-id '" + sensorUserId + "' from '" + oldUserId + "' to '" + userBodyId + "'");

                    dictSensorUserIdToUserId[sensorUserId] = userBodyId;
                    if (!dictSensorUserIdToFirstUsed.ContainsKey(sensorUserId))
                        dictSensorUserIdToFirstUsed[sensorUserId] = Time.time;
                    dictSensorUserIdToLastUsed[sensorUserId] = Time.time;
                }

                if (lostUsers.Contains(sensorUserId))
                {
                    lostUsers.Remove(sensorUserId);
                }
            }

            return userBodyId;
        }

    }
}
