﻿using UnityEngine;
using System.Collections;
using System.IO;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// BodyDataRecorderPlayer is the component that can be used for recording and replaying of body-data files.
    /// </summary>
    public class BodyDataRecorderPlayer : MonoBehaviour
    {
        [Tooltip("Path to the file used to record or replay the recorded data.")]
        public string filePath = "BodyRecording.txt";

        [Tooltip("UI-Text to display information messages.")]
        public UnityEngine.UI.Text infoText;

        [Tooltip("Whether to start playing the recorded data, right after the scene start.")]
        public bool playAtStart = false;


        // singleton instance of the class
        private static BodyDataRecorderPlayer instance = null;

        // whether it is recording or playing saved data at the moment
        private bool isRecording = false;
        private bool isPlaying = false;

        // reference to the KM
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        // time variables used for recording and playing
        private ulong liRelTime = 0;
        private float fStartTime = 0f;
        private float fCurrentTime = 0f;
        private int fCurrentFrame = 0;

        // player variables
        private StreamReader fileReader = null;
        private float fPlayTime = 0f;
        private string sPlayLine = string.Empty;
        private Vector3 sensorSpaceScale = Vector3.one;


        /// <summary>
        /// Gets the singleton BodyDataRecorderPlayer instance.
        /// </summary>
        /// <value>The KinectRecorderPlayer instance.</value>
        public static BodyDataRecorderPlayer Instance
        {
            get
            {
                return instance;
            }
        }


        // starts recording
        public void StartRecording()
        {
            if (isRecording)
                return;

            isRecording = true;

            // avoid recording an playing at the same time
            if (isPlaying && isRecording)
            {
                CloseFile();
                isPlaying = false;

                Debug.Log("Playing stopped.");
            }

            // stop recording if there is no file name specified
            if (filePath.Length == 0)
            {
                isRecording = false;

                Debug.LogError("No file to save.");
                if (infoText != null)
                {
                    infoText.text = "No file to save.";
                }
            }
            else if(filePath.IndexOf('/') < 0 && filePath.IndexOf('\\') < 0)
            {
#if UNITY_EDITOR || UNITY_STANDALONE
                string saveFolder = ".";
#else
                string saveFolder = Application.persistentDataPath;
#endif
                if (saveFolder.Length > 0 && saveFolder[saveFolder.Length - 1] != '/' && saveFolder[saveFolder.Length - 1] != '\\')
                {
                    saveFolder += "/";
                }

                filePath = saveFolder + filePath;
            }

            if (isRecording)
            {
                Debug.Log("Recording started. File: " + filePath);
                if (infoText != null)
                {
                    infoText.text = "Recording...";
                }

                // delete the old csv file
                if (filePath.Length > 0 && File.Exists(filePath))
                {
                    File.Delete(filePath);
                }

                // initialize times
                fStartTime = fCurrentTime = Time.time;
                fCurrentFrame = 0;
            }

            //return isRecording;
        }


        // starts playing
        public void StartPlaying()
        {
            if (isPlaying)
                return;

            isPlaying = true;

            // avoid recording an playing at the same time
            if (isRecording && isPlaying)
            {
                isRecording = false;
                Debug.Log("Recording stopped.");
            }

            if (filePath.Length > 0 && filePath.IndexOf('/') < 0 && filePath.IndexOf('\\') < 0)
            {
#if UNITY_EDITOR || UNITY_STANDALONE
                string saveFolder = ".";
#else
                string saveFolder = Application.persistentDataPath;
#endif
                if (saveFolder.Length > 0 && saveFolder[saveFolder.Length - 1] != '/' && saveFolder[saveFolder.Length - 1] != '\\')
                {
                    saveFolder += "/";
                }

                filePath = saveFolder + filePath;
            }

            // stop playing if there is no file name specified
            if (filePath.Length == 0 || !File.Exists(filePath))
            {
                isPlaying = false;
                Debug.LogError("File not found: " + filePath);

                if (infoText != null)
                {
                    infoText.text = "File not found: " + filePath;
                }
            }

            if (isPlaying)
            {
                Debug.Log("Playing started. File: " + filePath);
                if (infoText != null)
                {
                    infoText.text = "Playing...";
                }

                // initialize times
                fStartTime = fCurrentTime = Time.time;
                fCurrentFrame = -1;

                // open the file and read a line
#if !UNITY_WSA
                fileReader = new StreamReader(filePath);
#endif
                ReadLineFromFile();

                // enable the play mode
                if (kinectManager)
                {
                    kinectManager.EnablePlayMode(true);
                }
            }

            //return isPlaying;
        }


        // stops recording or playing
        public void StopRecordingOrPlaying()
        {
            if (isRecording)
            {
                isRecording = false;

                string sSavedTimeAndFrames = string.Format("{0:F3}s., {1} frames.", (fCurrentTime - fStartTime), fCurrentFrame);
                Debug.Log("Recording stopped @ " + sSavedTimeAndFrames);

                if (infoText != null)
                {
                    infoText.text = "Recording stopped @ " + sSavedTimeAndFrames;
                }
            }

            if (isPlaying)
            {
                // restore the space scale
                if(sensorData != null)
                {
                    sensorData.sensorSpaceScale = sensorSpaceScale;
                }

                // close the file, if it is playing
                CloseFile();
                isPlaying = false;

                Debug.Log("Playing stopped.");
                if (infoText != null)
                {
                    infoText.text = "Playing stopped.";
                }
            }

            //if (infoText != null)
            //{
            //    infoText.text = "Say: 'Record' to start the recorder, or 'Play' to start the player.";
            //}
        }

        // returns if file recording is in progress at the moment
        public bool IsRecording()
        {
            return isRecording;
        }

        // returns if file-play is in progress at the moment
        public bool IsPlaying()
        {
            return isPlaying;
        }


        // ----- end of public functions -----


        void Awake()
        {
            instance = this;
        }

        void Start()
        {
            //if (infoText != null)
            //{
            //    infoText.text = "Say: 'Record' to start the recorder, or 'Play' to start the player.";
            //}

            kinectManager = KinectManager.Instance;
            sensorData = kinectManager ? kinectManager.GetSensorData(0) : null;
            sensorSpaceScale = sensorData != null ? sensorData.sensorSpaceScale : Vector3.one;

            if (!kinectManager)
            {
                Debug.Log("KinectManager not found, probably not initialized.");

                if (infoText != null)
                {
                    infoText.text = "KinectManager not found, probably not initialized.";
                }
            }

            if (playAtStart)
            {
                StartPlaying();
            }
        }

        void Update()
        {
            if (isRecording)
            {
                // save the body frame, if any
                if (kinectManager && kinectManager.IsInitialized() && liRelTime != kinectManager.GetBodyFrameTimestamp())
                {
                    liRelTime = kinectManager.GetBodyFrameTimestamp();
                    string sBodyFrame = kinectManager.GetBodyFrameData(ref fCurrentTime, ';');

                    System.Globalization.CultureInfo invCulture = System.Globalization.CultureInfo.InvariantCulture;

                    if (sBodyFrame.Length > 0)
                    {
#if !UNITY_WSA
                        using (StreamWriter writer = File.AppendText(filePath))
                        {
                            string sRelTime = string.Format(invCulture, "{0:F3}", (fCurrentTime - fStartTime));
                            writer.WriteLine(sRelTime + "|" + sBodyFrame);

                            if (infoText != null)
                            {
                                infoText.text = string.Format("Recording @ {0}s., frame {1}.", sRelTime, fCurrentFrame);
                            }

                            fCurrentFrame++;
                        }
#else
					string sRelTime = string.Format(invCulture, "{0:F3}", (fCurrentTime - fStartTime));
					Debug.Log(sRelTime + "|" + sBodyFrame);
#endif
                    }
                }
            }

            if (isPlaying)
            {
                // wait for the right time
                fCurrentTime = Time.time;
                float fRelTime = fCurrentTime - fStartTime;

                if (sPlayLine != null && fRelTime >= fPlayTime)
                {
                    // then play the line
                    if (kinectManager && sPlayLine.Length > 0)
                    {
                        kinectManager.SetBodyFrameData(sPlayLine);
                    }

                    // and read the next line
                    ReadLineFromFile();
                }

                if (sPlayLine == null)
                {
                    // finish playing, if we reached the EOF
                    StopRecordingOrPlaying();
                }
            }
        }

        void OnDestroy()
        {
            // don't forget to release the resources
            CloseFile();
            isRecording = isPlaying = false;
        }

        // reads a line from the file
        private bool ReadLineFromFile()
        {
            if (fileReader == null)
                return false;

            // read a line
            sPlayLine = fileReader.ReadLine();
            if (sPlayLine == null)
                return false;

            System.Globalization.CultureInfo invCulture = System.Globalization.CultureInfo.InvariantCulture;
            System.Globalization.NumberStyles numFloat = System.Globalization.NumberStyles.Float;

            // extract the unity time and the body frame
            char[] delimiters = { '|' };
            string[] sLineParts = sPlayLine.Split(delimiters);

            if (sLineParts.Length >= 2)
            {
                float.TryParse(sLineParts[0], numFloat, invCulture, out fPlayTime);
                sPlayLine = sLineParts[1];
                fCurrentFrame++;

                if (infoText != null)
                {
                    infoText.text = string.Format("Playing @ {0:F3}s., frame {1}.", fPlayTime, fCurrentFrame);
                }

                return true;
            }

            return false;
        }

        // close the file and disable the play mode
        private void CloseFile()
        {
            // close the file
            if (fileReader != null)
            {
                fileReader.Dispose();
                fileReader = null;
            }

            // disable the play mode
            if (kinectManager)
            {
                kinectManager.EnablePlayMode(false);
            }
        }

    }
}
