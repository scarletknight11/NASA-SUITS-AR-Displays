using Microsoft.Azure.Kinect.Sensor;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// Kinect4AzureSyncher synhronizes the captures received from master and sub k4a-devices.
    /// </summary>
    public class Kinect4AzureSyncher
    {

        // data for each sensor
        private class SyncherSensorData
        {
            public long expDelay;

            public long capTimestamp;
            public Capture capture;

            public long pushCapTimestamp;
            public Capture pushCapture;

            public long btTimestamp;
        }

        // max allowed timestamp error
        private const long MAX_TIME_ERROR = 100000;  // 10000;  // 1000;

        // available sensor interfaces
        private List<Kinect4AzureInterface> sensorInts = new List<Kinect4AzureInterface>();
        private List<KinectInterop.SensorData> sensorDatas = new List<KinectInterop.SensorData>();
        private List<long> expectedDelays = new List<long>();

        // number of sensors and index of the master
        private int numSensors = 0;
        private int iMaster = -1;  // index of the master interface

        // master play time
        private long masterPlayTime = 0;
        private object masterPlayLock = new object();

        // syncher sensor data
        private SyncherSensorData[] syncherData = null;
        // syncher lock object
        private object syncherLock = new object();


        public Kinect4AzureSyncher()
        {
        }


        // initializes the syncher for the given sensor interface
        public int StartSyncherForSensor(Kinect4AzureInterface sensorInt, KinectInterop.SensorData sensorData, bool isMaster, long expectedDelay)
        {
            if (sensorInt == null)
                return -1;

            int sensorIndex = numSensors;
            sensorInts.Add(sensorInt);
            sensorDatas.Add(sensorData);
            expectedDelays.Add(expectedDelay);
            numSensors++;

            if(isMaster)
            {
                if (iMaster >= 0)
                    throw new Exception("Master index already set at " + iMaster + ". Current interface index is " + sensorIndex + ". Multiple masters are not supported.");

                iMaster = sensorIndex;
            }

            //Debug.Log("Started syncher for sensor D" + sensorInt.deviceIndex + ", delay: " + expectedDelay + ", index: " + sensorIndex + ", master: " + iMaster);

            return sensorIndex;
        }


        // releases the resources taken by the syncher data
        public void StopSyncher()
        {
            lock(syncherLock)
            {
                for (int i = numSensors - 1; i >= 0; i--)
                {
                    if (syncherData != null && syncherData[i] != null)
                    {
                        if (syncherData[i].capture != null)
                        {
                            syncherData[i].capture.Dispose();
                            syncherData[i].capture = null;
                        }

                        if (syncherData[i].pushCapture != null)
                        {
                            syncherData[i].pushCapture.Dispose();
                            syncherData[i].pushCapture = null;
                        }
                    }
                }
            }

            //Debug.Log("Stopped syncher for " + numSensors + " sensors.");
        }


        // sets master device play time
        public void SetMasterPlayTime(long playTime)
        {
            lock(masterPlayLock)
            {
                masterPlayTime = playTime;
            }
        }


        // returns the latest master play time
        public long GetMasterPlayTime()
        {
            long playTime = 0;

            lock(masterPlayLock)
            {
                playTime = masterPlayTime;
            }

            return playTime;
        }


        // returns the master index, or -1 if no master is set
        public int GetMasterIndex()
        {
            return iMaster;
        }


        // checks if the given frame time is synched or not
        public bool IsSensorFrameSynched(int sensorIndex, ulong frameTime, ulong masterTime)
        {
            if(syncherData != null && sensorIndex >= 0 && sensorIndex < syncherData.Length)
            {
                long expTime = (long)masterTime + syncherData[sensorIndex].expDelay;
                long subError = (long)frameTime - expTime;

                if (frameTime != 0 && subError >= -MAX_TIME_ERROR && subError <= MAX_TIME_ERROR)
                {
                    return true;
                }
            }

            return false;
        }


        // updates the sensor capture
        public void UpdateCapture(int sensorIndex, long capTimestamp, Capture capture)
        {
            if (capture == null)
                return;

            if (capTimestamp == 0)
            {
                //Debug.Log("Ignoring capture for syncher index " + sensorIndex + ". Timestamp: " + capTimestamp);
                capture.Dispose();

                return;
            }

            lock (syncherLock)
            {
                if (syncherData == null || numSensors != syncherData.Length || syncherData[sensorIndex] == null)
                {
                    CreateSyncherData(sensorIndex);
                }

                // dispose current capture
                if (syncherData[sensorIndex].capture != null)
                {
                    //Debug.Log("Disposing capture for syncher index " + sensorIndex + ". Timestamp: " + syncherData[sensorIndex].capTimestamp);

                    syncherData[sensorIndex].capture.Dispose();
                    syncherData[sensorIndex].capture = null;
                }

                // set new capture
                //Debug.Log("Setting capture for syncher index " + sensorIndex + ". Timestamp: " + capTimestamp);

                syncherData[sensorIndex].capTimestamp = capTimestamp;
                syncherData[sensorIndex].capture = capture;

                // check for synched captures
                bool bAllSynched = numSensors > 1 && iMaster >= 0 && syncherData[iMaster] != null && syncherData[iMaster].capTimestamp != 0;

                if (bAllSynched)
                {
                    long masterTime = syncherData[iMaster].capTimestamp;

                    for (int i = 0; i < numSensors; i++)
                    {
                        if (syncherData[i] == null || syncherData[i].capTimestamp == 0)
                        {
                            bAllSynched = false;
                            break;
                        }

                        long subTime = syncherData[i].capTimestamp;
                        long expTime = masterTime + syncherData[i].expDelay;
                        long subError = subTime - expTime;

                        if (i != iMaster && (subTime == 0 || subError < -MAX_TIME_ERROR || subError > MAX_TIME_ERROR))
                        {
                            bAllSynched = false;
                            break;
                        }
                    }
                }

                if (bAllSynched)
                {
                    //Debug.Log("Synched captures. Index: " + sensorIndex + " MasterTime: " + syncherData[iMaster].capTimestamp);

                    // process synched sensor captures
                    for (int i = 0; i < numSensors; i++)
                    {
                        Kinect4AzureInterface sensorInt = sensorInts[i];
                        KinectInterop.SensorData sensorData = sensorDatas[i];

                        //Debug.Log("  Processing capture " + i + ". Timestamp: " + syncherData[i].capTimestamp);
                        sensorInt.ProcessSensorCapture(sensorData, syncherData[i].capture);
                        syncherData[i].capture = null;
                    }
                }
                else
                {
                    //Debug.Log("Captures not synched. Index: " + sensorIndex + " ThisTime: " + syncherData[sensorIndex].capTimestamp + 
                    //    ", MasterTime: " + syncherData[iMaster].capTimestamp + ", diff: " + (syncherData[iMaster].capTimestamp - syncherData[sensorIndex].capTimestamp));
                }
            }
        }


        // updates the push bt-capture
        public void UpdatePushBtCapture(int sensorIndex, long capTimestamp, Capture capture)
        {
            if (capture == null || capture.Depth == null)
                return;

            if (capTimestamp == 0)
            {
                //Debug.Log("Ignoring push-capture for syncher index " + sensorIndex + ". Timestamp: " + capTimestamp);
                capture.Dispose();

                return;
            }

            lock (syncherLock)
            {
                if (syncherData == null || numSensors != syncherData.Length || syncherData[sensorIndex] == null)
                {
                    CreateSyncherData(sensorIndex);
                }

                // dispose current capture
                if (syncherData[sensorIndex].pushCapture != null)
                {
                    //Debug.Log("Disposing push-capture for syncher index " + sensorIndex + ". Timestamp: " + syncherData[sensorIndex].pushCapTimestamp);

                    syncherData[sensorIndex].pushCapture.Dispose();
                    syncherData[sensorIndex].pushCapture = null;
                }

                // set new capture
                //Debug.Log("Setting push-capture for syncher index " + sensorIndex + ". Timestamp: " + capTimestamp);

                syncherData[sensorIndex].pushCapTimestamp = capTimestamp;
                syncherData[sensorIndex].pushCapture = capture;

                // check for synched captures
                bool bAllSynched = numSensors > 1 && iMaster >= 0 && syncherData[iMaster] != null && syncherData[iMaster].pushCapTimestamp != 0;

                if (bAllSynched)
                {
                    long masterTime = syncherData[iMaster].pushCapTimestamp;

                    for (int i = 0; i < numSensors; i++)
                    {
                        if (syncherData[i] == null || syncherData[i].pushCapTimestamp == 0)
                        {
                            bAllSynched = false;
                            break;
                        }

                        long subTime = syncherData[i].pushCapTimestamp;
                        long expTime = masterTime + syncherData[i].expDelay;
                        long subError = subTime - expTime;

                        if (i != iMaster && (subTime == 0 || subError < -MAX_TIME_ERROR || subError > MAX_TIME_ERROR))
                        {
                            bAllSynched = false;
                            break;
                        }
                    }
                }

                if (bAllSynched)
                {
                    //Debug.Log("Synched push-captures. Index: " + sensorIndex + " MasterTime: " + syncherData[iMaster].pushCapTimestamp);

                    // process synched sensor captures
                    for (int i = 0; i < numSensors; i++)
                    {
                        Kinect4AzureInterface sensorInt = sensorInts[i];
                        KinectInterop.SensorData sensorData = sensorDatas[i];

                        //Debug.Log("  Processing push capture " + i + ". Timestamp: " + syncherData[i].pushCapTimestamp);
                        sensorInt.PushBodyFrame(sensorData, syncherData[i].pushCapture, true);
                        syncherData[i].pushCapture = null;
                    }
                }
                else
                {
                    //Debug.Log("Push-captures not synched. Index: " + sensorIndex + " ThisTime: " + syncherData[sensorIndex].pushCapTimestamp + 
                    //    ", MasterTime: " + syncherData[iMaster].pushCapTimestamp + ", diff: " + (syncherData[iMaster].pushCapTimestamp - syncherData[sensorIndex].pushCapTimestamp));
                }
            }
        }


        // updates the body tracking frame
        public void UpdateBtFrame(int sensorIndex, long frameTimestamp)
        {
            if(frameTimestamp == 0)
            {
                //Debug.Log("Ignoring bt-frame for syncher index " + sensorIndex + ". Timestamp: " + frameTimestamp);
                return;
            }

            lock (syncherLock)
            {
                if(syncherData == null || numSensors != syncherData.Length || syncherData[sensorIndex] == null)
                {
                    CreateSyncherData(sensorIndex);
                }

                // set new frame
                //Debug.Log("Setting bt-frame for syncher index " + sensorIndex + ". Timestamp: " + frameTimestamp);
                syncherData[sensorIndex].btTimestamp = frameTimestamp;

                // check for synched body frames
                bool bAllSynched = numSensors > 1 && iMaster >= 0 && syncherData[iMaster] != null && syncherData[iMaster].btTimestamp != 0;

                if (bAllSynched)
                {
                    long masterTime = syncherData[iMaster].btTimestamp;

                    for (int i = 0; i < numSensors; i++)
                    {
                        if(syncherData[i] == null || syncherData[i].btTimestamp == 0)
                        {
                            bAllSynched = false;
                            break;
                        }

                        long subTime = syncherData[i].btTimestamp;
                        long expTime = masterTime + syncherData[i].expDelay;
                        long subError = subTime - expTime;

                        if (i != iMaster && (subTime == 0 || subError < -MAX_TIME_ERROR || subError > MAX_TIME_ERROR))
                        {
                            bAllSynched = false;
                            break;
                        }
                    }
                }

                if (bAllSynched)
                {
                    //Debug.Log("Synched bt-frames. Index: " + sensorIndex + " MasterTime: " + syncherData[iMaster].btTimestamp);

                    // process synched body frames
                    for (int i = 0; i < numSensors; i++)
                    {
                        Kinect4AzureInterface sensorInt = sensorInts[i];
                        KinectInterop.SensorData sensorData = sensorDatas[i];

                        //Debug.Log("  Processing bt-frame " + i + ". Timestamp: " + syncherData[i].btTimestamp);
                        sensorInt.ProcessBodyFrame(sensorData, IntPtr.Zero, true);
                        sensorInt.ProcessBtSensorCapture(sensorData);
                    }
                }
                else
                {
                    //Debug.Log("Bt-frames not synched. Index: " + sensorIndex + " ThisTime: " + syncherData[sensorIndex].btTimestamp  + 
                    //    ", MasterTime: " + syncherData[iMaster].btTimestamp + ", diff: " + (syncherData[iMaster].btTimestamp - syncherData[sensorIndex].btTimestamp));
                }
            }
        }


        // creates and returns syncher data, as needed
        private SyncherSensorData CreateSyncherData(int sensorIndex)
        {
            if(syncherData == null || numSensors != syncherData.Length)
            {
                syncherData = new SyncherSensorData[numSensors];
            }

            if(syncherData[sensorIndex] == null)
            {
                syncherData[sensorIndex] = new SyncherSensorData();
                syncherData[sensorIndex].expDelay = expectedDelays[sensorIndex];

                syncherData[sensorIndex].capture = null;
                syncherData[sensorIndex].pushCapture = null;
            }

            return syncherData[sensorIndex];
        }

    }
}
