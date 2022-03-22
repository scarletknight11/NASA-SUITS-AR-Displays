using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using LZ4Sharp;


namespace com.rfilkov.kinect
{
    /// <summary>
    /// Kinect net-server listens for client connections and sends the data from the given sensor's streams to its clients over the network.
    /// </summary>
    public class KinectNetServer : MonoBehaviour
    {
        [Tooltip("Depth sensor index - 0 is the 1st one, 1 - the 2nd one, etc.")]
        public int sensorIndex = 0;

        [Tooltip("The base port for all sensor frame streams (each frame stream listens on separate port).")]
        public int baseListenPort = 11000;

        [Tooltip("Whether to listen for auto-server-discovery broadcasts (local network only).")]
        public bool listenForServerDiscovery = false;

        [Tooltip("Whether to serve the body index frames along with the body frames.")]
        private bool serveBodyIndexFrames = true;

        [Tooltip("Whether to compress the raw data frames (like depth, body index, etc.) or not.")]
        public bool compressRawFrames = true;

        [Tooltip("UI-Text to display the connection status messages.")]
        public Text connStatusText;

        [Tooltip("UI-Text to display the server status messages.")]
        public Text serverStatusText;

        [Tooltip("UI-Text to display the server console messages.")]
        public Text consoleText;


        // references
        private KinectManager kinectManager = null;
        private KinectInterop.SensorData sensorData = null;

        // keep-alive
        private ulong lastKeepAliveFrameTime = 0;
        private const int keepAliveInterval = 20000000;  // 2 seconds

        // sensor frame servers
        private TcpNetServer controlFrameServer = null;
        private TcpNetServer colorFrameServer = null;
        private TcpNetServer depthFrameServer = null;
        private TcpNetServer infraredFrameServer = null;
        private TcpNetServer bodyDataFrameServer = null;
        private TcpNetServer bodyIndexFrameServer = null;
        private TcpNetServer poseFrameServer = null;
        private TcpNetServer depth2colorFrameServer = null;
        private TcpNetServer color2depthFrameServer = null;
        private TcpNetServer color2infraredFrameServer = null;
        private TcpNetServer color2bodyIndexFrameServer = null;

        // auto-server-discovery broadcast server
        private UdpBroadcastServer autoDiscoveryServer = null;

        // sensor frame timestamps
        //private ulong lastControlFrameTime = 0;
        private ulong lastColorFrameTime = 0;
        private ulong lastDepthFrameTime = 0;
        private ulong lastInfraredFrameTime = 0;
        private ulong lastBodyDataFrameTime = 0;
        private ulong lastBodyIndexFrameTime = 0;
        private ulong lastPoseFrameTime = 0;
        private ulong lastDepth2ColorFrameTime = 0;
        private ulong lastColor2DepthFrameTime = 0;
        private ulong lastColor2InfraredFrameTime = 0;
        private ulong lastColor2BodyIndexFrameTime = 0;

        // stream 2d textures
        //private Texture2D colorTex2d = null;
        //private Texture2D depthTex2d = null;
        private Texture2D infraredTex2d = null;
        private Texture2D depth2colorTex2d = null;
        private Texture2D color2infraredTex2d = null;

        // depth & bi frame bytes
        byte[] colorCamDepthFrameData = null;
        byte[] colorCamBodyIndexFrameData = null;

        // last sensor pose
        private string lastSensorPoseStr = string.Empty;

        //// whether color2depth is enabled or not
        //private bool color2depthEnabled = false;
        //private bool color2bodyIndexEnabled = false;

        // compressors
        private ILZ4Compressor controlFrameCompressor = null;
        private ILZ4Compressor depthFrameCompressor = null;
        private ILZ4Compressor bodyIndexFrameCompressor = null;
        private ILZ4Compressor color2depthFrameCompressor = null;
        private ILZ4Compressor color2bodyIndexFrameCompressor = null;

        // console buffer
        private System.Text.StringBuilder sbConsole = new System.Text.StringBuilder();


        void Start()
        {
            kinectManager = KinectManager.Instance;
            sensorData = kinectManager ? kinectManager.GetSensorData(sensorIndex) : null;

            if(sensorData != null && sensorData.sensorInterface != null)
            {
                // cache space tables
                Debug.Log("Caching space tables of sensor " + sensorIndex + "...");
                sensorData.sensorInterface.GetDepthCameraSpaceTable(sensorData);
                sensorData.sensorInterface.GetColorCameraSpaceTable(sensorData);

                // init servers
                Debug.Log("Initing network servers of sensor " + sensorIndex + "...");
                KinectInterop.FrameSource dwFlags = ((DepthSensorBase)sensorData.sensorInterface).frameSourceFlags;
                InitNetServers(dwFlags);
            }
            else
            {
                Debug.LogError("KinectManager not found or not initialized.");

                if (serverStatusText)
                {
                    serverStatusText.text = "KinectManager not found or not initialized.";
                }
            }
        }


        void OnDestroy()
        {
            // close all net servers
            CloseNetServers();
        }


        void Update()
        {
            if(connStatusText)
            {
                // update conn status
                int connCount = GetConnectionsCount();
                connStatusText.text = string.Format("NetServer running: {0} connections.", connCount);
            }

            if(sbConsole.Length > 0)
            {
                // update console
                lock(sbConsole)
                {
                    if(consoleText)
                        consoleText.text += sbConsole.ToString();
                    sbConsole.Clear();
                }

                // scroll to end
                ScrollRect scrollRect = consoleText ? consoleText.gameObject.GetComponentInParent<ScrollRect>() : null;
                if (scrollRect)
                {
                    Canvas.ForceUpdateCanvases();
                    scrollRect.verticalScrollbar.value = 0f;
                    Canvas.ForceUpdateCanvases();
                }
            }

            // check for updated data
            UpdateNetServers();
        }


        // initializes the sensor net servers
        private void InitNetServers(KinectInterop.FrameSource dwFlags)
        {
            try
            {
                lastKeepAliveFrameTime = 0;
                lastSensorPoseStr = string.Empty;
                int minPort = int.MaxValue, maxPort = int.MinValue;

                controlFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Control, "ControlServer", sbConsole);
                controlFrameServer.ReceivedMessage += new ReceivedMessageEventHandler(ControlFrameReceived);
                minPort = Mathf.Min(minPort, controlFrameServer.serverPort); maxPort = Mathf.Max(maxPort, controlFrameServer.serverPort);

                if (compressRawFrames)
                    controlFrameCompressor = LZ4CompressorFactory.CreateNew();

                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 && sensorData.colorImageTexture != null)
                {
                    colorFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Color, "ColorServer", sbConsole);
                    minPort = Mathf.Min(minPort, colorFrameServer.serverPort); maxPort = Mathf.Max(maxPort, colorFrameServer.serverPort);
                }

                if((dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                {
                    depthFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Depth, "DepthServer", sbConsole);
                    minPort = Mathf.Min(minPort, depthFrameServer.serverPort); maxPort = Mathf.Max(maxPort, depthFrameServer.serverPort);

                    if(compressRawFrames)
                        depthFrameCompressor = LZ4CompressorFactory.CreateNew();
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeInfrared) != 0)
                {
                    infraredTex2d = new Texture2D(sensorData.depthImageWidth, sensorData.depthImageHeight, TextureFormat.ARGB32, false);
                    infraredFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Infrared, "InfraredServer", sbConsole);
                    minPort = Mathf.Min(minPort, infraredFrameServer.serverPort); maxPort = Mathf.Max(maxPort, infraredFrameServer.serverPort);
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeBody) != 0)
                {
                    bodyDataFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.BodyData, "BodyDataServer", sbConsole);
                    minPort = Mathf.Min(minPort, bodyDataFrameServer.serverPort); maxPort = Mathf.Max(maxPort, bodyDataFrameServer.serverPort);
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0 && serveBodyIndexFrames)
                {
                    bodyIndexFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.BodyIndex, "BodyIndexServer", sbConsole);
                    minPort = Mathf.Min(minPort, bodyIndexFrameServer.serverPort); maxPort = Mathf.Max(maxPort, bodyIndexFrameServer.serverPort);

                    if (compressRawFrames)
                        bodyIndexFrameCompressor = LZ4CompressorFactory.CreateNew();
                }

                if ((dwFlags & KinectInterop.FrameSource.TypePose) != 0)
                {
                    poseFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Pose, "PoseServer", sbConsole);
                    minPort = Mathf.Min(minPort, poseFrameServer.serverPort); maxPort = Mathf.Max(maxPort, poseFrameServer.serverPort);
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 && (dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                {
                    depth2colorFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Depth2Color, "TColorServer", sbConsole);
                    minPort = Mathf.Min(minPort, depth2colorFrameServer.serverPort); maxPort = Mathf.Max(maxPort, depth2colorFrameServer.serverPort);
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 && (dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                {
                    color2depthFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Color2Depth, "TDepthServer", sbConsole);
                    minPort = Mathf.Min(minPort, color2depthFrameServer.serverPort); maxPort = Mathf.Max(maxPort, color2depthFrameServer.serverPort);

                    if (compressRawFrames)
                        color2depthFrameCompressor = LZ4CompressorFactory.CreateNew();
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 && (dwFlags & KinectInterop.FrameSource.TypeDepth) != 0)
                {
                    color2infraredFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Color2Infrared, "TInfraredServer", sbConsole);
                    minPort = Mathf.Min(minPort, color2infraredFrameServer.serverPort); maxPort = Mathf.Max(maxPort, color2infraredFrameServer.serverPort);
                }

                if ((dwFlags & KinectInterop.FrameSource.TypeColor) != 0 && (dwFlags & KinectInterop.FrameSource.TypeDepth) != 0 && (dwFlags & KinectInterop.FrameSource.TypeBodyIndex) != 0)
                {
                    color2bodyIndexFrameServer = new TcpNetServer(baseListenPort + (int)NetMessageType.Color2BodyIndex, "TBodyIndex", sbConsole);
                    minPort = Mathf.Min(minPort, color2bodyIndexFrameServer.serverPort); maxPort = Mathf.Max(maxPort, color2bodyIndexFrameServer.serverPort);

                    if (compressRawFrames)
                        color2bodyIndexFrameCompressor = LZ4CompressorFactory.CreateNew();
                }

                // get server ip address
                string serverName = GetLocalNameOrIP();

                if (listenForServerDiscovery)
                {
                    int sensorType = (int)sensorData.sensorInterface.GetSensorPlatform();
                    string sensorId = sensorData.sensorInterface.GetSensorDeviceId();

                    string responseData = string.Format("KNS|{0}|{1}|{2}|{3}", serverName, baseListenPort, sensorType, sensorId);
                    autoDiscoveryServer = new UdpBroadcastServer(baseListenPort, "DiscoveryServer", "KNS", responseData, sbConsole);
                }

                if (serverStatusText)
                {
                    serverStatusText.text = string.Format("NetServer listens on {0}:{1}-{2}", serverName, minPort, maxPort);
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogError("Error initing NetServer: " + ex.Message);
                Debug.Log(ex);

                if (serverStatusText)
                {
                    serverStatusText.text = string.Format("Error initing NetServer: {0}", ex.Message);
                }
            }
        }


        // closes all sensor net servers
        private void CloseNetServers()
        {
            try
            {
                if (controlFrameServer != null)
                {
                    controlFrameServer.ReceivedMessage -= new ReceivedMessageEventHandler(ControlFrameReceived);
                    controlFrameServer.Close();
                    controlFrameServer = null;
                    controlFrameCompressor = null;
                }

                if (colorFrameServer != null)
                {
                    colorFrameServer.Close();
                    colorFrameServer = null;
                }

                if (depthFrameServer != null)
                {
                    depthFrameServer.Close();
                    depthFrameServer = null;
                    depthFrameCompressor = null;
                }

                if (infraredFrameServer != null)
                {
                    infraredFrameServer.Close();
                    infraredFrameServer = null;
                }

                if (bodyDataFrameServer != null)
                {
                    bodyDataFrameServer.Close();
                    bodyDataFrameServer = null;
                }

                if (bodyIndexFrameServer != null)
                {
                    bodyIndexFrameServer.Close();
                    bodyIndexFrameServer = null;
                    bodyIndexFrameCompressor = null;
                }

                if (poseFrameServer != null)
                {
                    poseFrameServer.Close();
                    poseFrameServer = null;
                }

                if (depth2colorFrameServer != null)
                {
                    depth2colorFrameServer.Close();
                    depth2colorFrameServer = null;
                }

                if (color2depthFrameServer != null)
                {
                    color2depthFrameServer.Close();
                    color2depthFrameServer = null;
                    color2depthFrameCompressor = null;
                }

                if (color2infraredFrameServer != null)
                {
                    color2infraredFrameServer.Close();
                    color2infraredFrameServer = null;
                }

                if (color2bodyIndexFrameServer != null)
                {
                    color2bodyIndexFrameServer.Close();
                    color2bodyIndexFrameServer = null;
                    color2bodyIndexFrameCompressor = null;
                }

                if(autoDiscoveryServer != null)
                {
                    autoDiscoveryServer.Close();
                    autoDiscoveryServer = null;
                }

                if (serverStatusText)
                {
                    serverStatusText.text = "NetServer closed.";
                }

            }
            catch (System.Exception ex)
            {
                Debug.LogError("Error closing NetServer: " + ex.Message);
                Debug.Log(ex);

                if (serverStatusText)
                {
                    serverStatusText.text = string.Format("Error closing NetServer: {0}", ex.Message);
                }
            }
        }


        // checks for updated sensor data and sends it to the connected clients
        private void UpdateNetServers()
        {
            if (sensorData == null)
                return;

            try
            {
                // control - keep alive
                ulong ulTimeNow = (ulong)System.DateTime.Now.Ticks;
                bool isControlClientActive = controlFrameServer != null ? controlFrameServer.IsActive() : false;

                if ((ulTimeNow - lastKeepAliveFrameTime) >= keepAliveInterval && isControlClientActive)
                {
                    lastKeepAliveFrameTime = ulTimeNow;
                    SendControlMessage(ControlMessageType.KeepAlive);
                }

                // color frame
                if (colorFrameServer != null && colorFrameServer.GetConnCount() > 0)
                {
                    if(sensorData.lastColorFrameTime != lastColorFrameTime)
                    {
                        lastColorFrameTime = sensorData.lastColorFrameTime;

                        byte[] btColorData = ((Texture2D)sensorData.colorImageTexture).EncodeToJPG();

                        NetMessageData message = new NetMessageData(NetMessageType.Color, FrameEncodeType.Jpeg,
                            sensorData.colorImageWidth, sensorData.colorImageHeight, lastColorFrameTime);
                        message.SetData(btColorData);

                        colorFrameServer.SendMessageToAllConnections(message);
                    }
                }

                // depth frame
                if (depthFrameServer != null && depthFrameServer.GetConnCount() > 0)
                {
                    if (sensorData.lastDepthFrameTime != lastDepthFrameTime)
                    {
                        lastDepthFrameTime = sensorData.lastDepthFrameTime;

                        NetMessageData message = new NetMessageData(NetMessageType.Depth, FrameEncodeType.Raw,
                            sensorData.depthImageWidth, sensorData.depthImageHeight, lastDepthFrameTime);
                        message.SetData(sensorData.depthImage);

                        if (compressRawFrames)
                        {
                            message.SetCompressor(depthFrameCompressor);
                        }

                        depthFrameServer.SendMessageToAllConnections(message);
                    }
                }

                // infrared frame
                if (infraredFrameServer != null && infraredFrameServer.GetConnCount() > 0)
                {
                    if (sensorData.lastInfraredImageTime != lastInfraredFrameTime)
                    {
                        lastInfraredFrameTime = sensorData.lastInfraredImageTime;

                        byte[] btInfraredData = GetTextureAsJpeg(sensorData.infraredImageTexture, infraredTex2d);

                        NetMessageData message = new NetMessageData(NetMessageType.Color, FrameEncodeType.Jpeg,
                            sensorData.depthImageWidth, sensorData.depthImageHeight, lastInfraredFrameTime);
                        message.SetData(btInfraredData);

                        infraredFrameServer.SendMessageToAllConnections(message);
                    }
                }

                // body data frame
                if (bodyDataFrameServer != null && bodyDataFrameServer.GetConnCount() > 0)
                {
                    if (sensorData.lastBodyFrameTime != lastBodyDataFrameTime)
                    {
                        lastBodyDataFrameTime = sensorData.lastBodyFrameTime;

                        float fUnityTime = 0f;
                        string sBodyFrame = KinectInterop.GetBodyFrameAsCsv(ref sensorData.alTrackedBodies,
                            sensorData.trackedBodiesCount, sensorData.lastBodyFrameTime, sensorData.sensorSpaceScale, ref fUnityTime, '\t');
                        byte[] btBodyData = System.Text.Encoding.UTF8.GetBytes(sBodyFrame);

                        NetMessageData message = new NetMessageData(NetMessageType.BodyData, FrameEncodeType.K4b,
                            sensorData.depthImageWidth, sensorData.depthImageHeight, lastBodyDataFrameTime);
                        message.SetData(btBodyData);

                        bodyDataFrameServer.SendMessageToAllConnections(message);
                    }
                }

                // body index frame
                if (bodyIndexFrameServer != null && bodyIndexFrameServer.GetConnCount() > 0)
                {
                    if (sensorData.lastBodyIndexFrameTime != lastBodyIndexFrameTime)
                    {
                        lastBodyIndexFrameTime = sensorData.lastBodyIndexFrameTime;

                        NetMessageData message = new NetMessageData(NetMessageType.BodyIndex, FrameEncodeType.Raw,
                            sensorData.depthImageWidth, sensorData.depthImageHeight, lastBodyIndexFrameTime);
                        message.SetData(sensorData.bodyIndexImage);

                        if (compressRawFrames)
                        {
                            message.SetCompressor(bodyIndexFrameCompressor);
                        }

                        bodyIndexFrameServer.SendMessageToAllConnections(message);
                    }
                }

                // pose frame
                if (poseFrameServer != null && poseFrameServer.GetConnCount() > 0)
                {
                    if (sensorData.lastSensorPoseFrameTime != lastPoseFrameTime)
                    {
                        lastPoseFrameTime = sensorData.lastSensorPoseFrameTime;

                        string curSensorPoseStr = sensorData.sensorPosePosition.ToString() + " " + sensorData.sensorPoseRotation.eulerAngles.ToString();
                        if(lastSensorPoseStr != curSensorPoseStr)
                        {
                            lastSensorPoseStr = curSensorPoseStr;

                            KinectInterop.NetPoseData netPoseData = sensorData.sensorInterface.GetSensorNetPoseData(sensorData);
                            string sPoseData = JsonUtility.ToJson(netPoseData);
                            byte[] btPoseData = System.Text.Encoding.UTF8.GetBytes(sPoseData);

                            NetMessageData message = new NetMessageData(NetMessageType.Pose, FrameEncodeType.Json, 0, 0, lastPoseFrameTime);
                            message.SetData(btPoseData);

                            poseFrameServer.SendMessageToAllConnections(message);
                        }
                    }
                }

                // depth2color frame
                if (depth2colorFrameServer != null && depth2colorFrameServer.GetConnCount() > 0)
                {
                    if(depth2colorTex2d == null)
                    {
                        depth2colorTex2d = new Texture2D(sensorData.depthImageWidth, sensorData.depthImageHeight, sensorData.colorImageFormat, false);
                        sensorData.sensorInterface.EnableDepthCameraColorFrame(sensorData, true);
                    }

                    ulong frameTime = 0;
                    Texture depth2colorTex = sensorData.sensorInterface.GetDepthCameraColorFrameTexture(sensorData, ref depth2colorTex2d, ref frameTime);

                    if (depth2colorTex != null && frameTime != lastDepth2ColorFrameTime)
                    {
                        lastDepth2ColorFrameTime = frameTime;

                        byte[] btFrameData = depth2colorTex2d.EncodeToJPG();
                        //Debug.Log("Depth2ColorFrame length: " + btFrameData.Length);

                        NetMessageData message = new NetMessageData(NetMessageType.Depth2Color, FrameEncodeType.Jpeg,
                            sensorData.depthImageWidth, sensorData.depthImageHeight, frameTime);
                        message.SetData(btFrameData);

                        depth2colorFrameServer.SendMessageToAllConnections(message);
                    }
                }
                else if (depth2colorTex2d != null && depth2colorFrameServer != null && depth2colorFrameServer.GetConnCount() == 0)
                {
                    // disable depth2color frame
                    depth2colorTex2d = null;
                    sensorData.sensorInterface.EnableDepthCameraColorFrame(sensorData, false);
                }

                // color2depth frame
                if (color2depthFrameServer != null && color2depthFrameServer.GetConnCount() > 0)
                {
                    if(colorCamDepthFrameData == null)
                    {
                        colorCamDepthFrameData = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight * sizeof(ushort)];
                        sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, true);
                        //color2depthEnabled = true;
                    }

                    ulong frameTime = 0;
                    byte[] btFrameData = sensorData.sensorInterface.GetColorCameraDepthFrameBytes(sensorData, ref colorCamDepthFrameData, ref frameTime);

                    if (btFrameData != null && frameTime != lastColor2DepthFrameTime)
                    {
                        lastColor2DepthFrameTime = frameTime;

                        NetMessageData message = new NetMessageData(NetMessageType.Color2Depth, FrameEncodeType.Raw,
                            sensorData.colorImageWidth, sensorData.colorImageHeight, frameTime);
                        message.SetData(btFrameData);

                        if (compressRawFrames)
                        {
                            message.SetCompressor(color2depthFrameCompressor);
                        }

                        color2depthFrameServer.SendMessageToAllConnections(message);
                    }
                }
                else if (colorCamDepthFrameData != null && color2depthFrameServer != null && color2depthFrameServer.GetConnCount() == 0)
                {
                    // disable color2depth frame
                    //color2depthEnabled = false;
                    colorCamDepthFrameData = null;
                    sensorData.sensorInterface.EnableColorCameraDepthFrame(sensorData, false);
                }

                // color2infrared frame
                if (color2infraredFrameServer != null && color2infraredFrameServer.GetConnCount() > 0)
                {
                    if (color2infraredTex2d == null)
                    {
                        color2infraredTex2d = new Texture2D(sensorData.colorImageWidth, sensorData.colorImageHeight, TextureFormat.ARGB32, false);
                        sensorData.sensorInterface.EnableColorCameraInfraredFrame(sensorData, false, true);
                    }

                    ulong frameTime = 0;
                    Texture color2infraredTex = sensorData.sensorInterface.GetColorCameraInfraredFrameTexture(sensorData, ref color2infraredTex2d, ref frameTime);

                    if (color2infraredTex != null && frameTime != lastColor2InfraredFrameTime)
                    {
                        lastColor2InfraredFrameTime = frameTime;

                        byte[] btFrameData = color2infraredTex2d.EncodeToJPG();
                        //Debug.Log("Color2InfraredFrame length: " + btFrameData.Length);

                        NetMessageData message = new NetMessageData(NetMessageType.Color2Infrared, FrameEncodeType.Jpeg,
                            sensorData.colorImageWidth, sensorData.colorImageHeight, frameTime);
                        message.SetData(btFrameData);

                        color2infraredFrameServer.SendMessageToAllConnections(message);
                    }
                }
                else if (color2infraredTex2d != null && color2infraredFrameServer != null && color2infraredFrameServer.GetConnCount() == 0)
                {
                    // disable color2infrared frame
                    color2infraredTex2d = null;
                    sensorData.sensorInterface.EnableColorCameraInfraredFrame(sensorData, false, false);
                }

                // color2bodyIndex frame
                if (color2bodyIndexFrameServer != null && color2bodyIndexFrameServer.GetConnCount() > 0)
                {
                    if(colorCamBodyIndexFrameData == null)
                    {
                        colorCamBodyIndexFrameData = new byte[sensorData.colorImageWidth * sensorData.colorImageHeight];
                        sensorData.sensorInterface.EnableColorCameraBodyIndexFrame(sensorData, true);
                        //color2bodyIndexEnabled = true;
                    }

                    ulong frameTime = 0;
                    byte[] btFrameData = sensorData.sensorInterface.GetColorCameraBodyIndexFrame(sensorData, ref colorCamBodyIndexFrameData, ref frameTime);

                    if (btFrameData != null && frameTime != lastColor2BodyIndexFrameTime)
                    {
                        lastColor2BodyIndexFrameTime = frameTime;

                        NetMessageData message = new NetMessageData(NetMessageType.Color2BodyIndex, FrameEncodeType.Raw,
                            sensorData.colorImageWidth, sensorData.colorImageHeight, frameTime);
                        message.SetData(btFrameData);

                        if (compressRawFrames)
                        {
                            message.SetCompressor(color2bodyIndexFrameCompressor);
                        }

                        color2bodyIndexFrameServer.SendMessageToAllConnections(message);
                    }
                }
                else if (colorCamBodyIndexFrameData != null && color2bodyIndexFrameServer != null && color2bodyIndexFrameServer.GetConnCount() == 0)
                {
                    // disable color2bodyIndex frame
                    //color2bodyIndexEnabled = false;
                    colorCamBodyIndexFrameData = null;
                    sensorData.sensorInterface.EnableColorCameraBodyIndexFrame(sensorData, false);
                }

            }
            catch (System.Exception ex)
            {
                Debug.LogError("Error updating NetServer: " + ex.Message);
                Debug.LogError(ex);
            }
        }


        // control frame received
        private void ControlFrameReceived(object state, ReceivedMessageEventArgs args)
        {
            if (sensorData == null)
                return;

            try
            {
                if(args.message.frameData != null && args.message.frameData.Length > 0)
                {
                    ControlMessageType ctrlMsgType = (ControlMessageType)args.message.frameData[0];

                    switch(ctrlMsgType)
                    {
                        case ControlMessageType.GetSensorData:
                            CtrlSendGetSensorData();
                            break;

                        case ControlMessageType.KeepAlive:
                            // do nothing
                            break;

                        case ControlMessageType.Disconnect:
                            // do nothing for now
                            break;

                        case ControlMessageType.GetDST:
                            CtrlSendGetDST();
                            break;

                        case ControlMessageType.GetCST:
                            CtrlSendGetCST();
                            break;

                        default:
                            throw new System.Exception("Invalid control message: " + args.message.frameData[0]);
                    }
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogException(ex);
            }
        }


        // sends the net-sensor-data to clients
        private void CtrlSendGetSensorData()
        {
            KinectInterop.NetSensorData netSensorData = sensorData.sensorInterface.GetNetSensorData(sensorData);
            string sNetSensorData = netSensorData != null ? JsonUtility.ToJson(netSensorData) : null;
            byte[] btNetSensorData = System.Text.Encoding.UTF8.GetBytes(sNetSensorData);

            ulong ulTimeNow = (ulong)System.DateTime.Now.Ticks;
            NetMessageData message = new NetMessageData(NetMessageType.Control, FrameEncodeType.SensorDataJson, 0, 0, ulTimeNow);
            message.SetData(btNetSensorData);

            if (compressRawFrames)
            {
                message.SetCompressor(controlFrameCompressor);
            }

            controlFrameServer.SendMessageToAllConnections(message);
        }


        // sends the net-dst data to clients
        private void CtrlSendGetDST()
        {
            Vector3[] avSpaceTable = sensorData.sensorInterface.GetDepthCameraSpaceTable(sensorData);

            if(avSpaceTable != null)
            {
                byte[] btSpaceTable = new byte[avSpaceTable.Length * 3 * sizeof(float)];
                KinectInterop.CopyBytes(avSpaceTable, 3 * sizeof(float), btSpaceTable, sizeof(byte));

                ulong ulTimeNow = (ulong)System.DateTime.Now.Ticks;
                NetMessageData message = new NetMessageData(NetMessageType.Control, FrameEncodeType.DSTraw, sensorData.depthImageWidth, sensorData.depthImageHeight, ulTimeNow);
                message.SetData(btSpaceTable);

                if (compressRawFrames)
                {
                    message.SetCompressor(controlFrameCompressor);
                }

                controlFrameServer.SendMessageToAllConnections(message);
            }
        }


        // sends the net-cst data to clients
        private void CtrlSendGetCST()
        {
            Vector3[] avSpaceTable = sensorData.sensorInterface.GetColorCameraSpaceTable(sensorData);

            if (avSpaceTable != null)
            {
                byte[] btSpaceTable = new byte[avSpaceTable.Length * 3 * sizeof(float)];
                KinectInterop.CopyBytes(avSpaceTable, 3 * sizeof(float), btSpaceTable, sizeof(byte));

                ulong ulTimeNow = (ulong)System.DateTime.Now.Ticks;
                NetMessageData message = new NetMessageData(NetMessageType.Control, FrameEncodeType.CSTraw, sensorData.colorImageWidth, sensorData.colorImageHeight, ulTimeNow);
                message.SetData(btSpaceTable);

                if (compressRawFrames)
                {
                    message.SetCompressor(controlFrameCompressor);
                }

                controlFrameServer.SendMessageToAllConnections(message);
            }
        }


        // convert render texture to jpg format
        private byte[] GetTextureAsJpeg(RenderTexture tex, Texture2D tex2d)
        {
            KinectInterop.RenderTex2Tex2D(tex, ref tex2d);
            byte[] btJpeg = tex2d.EncodeToJPG();

            return btJpeg;
        }


        // returns local host name or ip address
        private string GetLocalNameOrIP()
        {
            string localIP = "localhost";

            try
            {
                IPHostEntry host = Dns.GetHostEntry(Dns.GetHostName());

                foreach (IPAddress ip in host.AddressList)
                {
                    if (ip.AddressFamily == AddressFamily.InterNetwork)
                    {
                        localIP = ip.ToString();
                        if (localIP == "0.0.0.0" || localIP.StartsWith("169.254."))
                            continue;

                        break;
                    }
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogException(ex);
            }

            return localIP;
        }


        // returns the number of active connections
        private int GetConnectionsCount()
        {
            int numConn = 0;

            if (controlFrameServer != null)
                numConn += controlFrameServer.GetConnCount();
            if (colorFrameServer != null)
                numConn += colorFrameServer.GetConnCount();
            if (depthFrameServer != null)
                numConn += depthFrameServer.GetConnCount();
            if (infraredFrameServer != null)
                numConn += infraredFrameServer.GetConnCount();
            if (bodyDataFrameServer != null)
                numConn += bodyDataFrameServer.GetConnCount();
            if (bodyIndexFrameServer != null)
                numConn += bodyIndexFrameServer.GetConnCount();
            if (poseFrameServer != null)
                numConn += poseFrameServer.GetConnCount();
            if (depth2colorFrameServer != null)
                numConn += depth2colorFrameServer.GetConnCount();
            if (color2depthFrameServer != null)
                numConn += color2depthFrameServer.GetConnCount();
            if (color2infraredFrameServer != null)
                numConn += color2infraredFrameServer.GetConnCount();
            if (color2bodyIndexFrameServer != null)
                numConn += color2bodyIndexFrameServer.GetConnCount();

            return numConn;
        }


        // sends control message to the server
        private void SendControlMessage(ControlMessageType messageType)
        {
            if (controlFrameServer != null && controlFrameServer.IsActive())
            {
                ulong ulTimeNow = (ulong)System.DateTime.Now.Ticks;
                NetMessageData msg = new NetMessageData(NetMessageType.Control, FrameEncodeType.Raw, 0, 0, ulTimeNow);

                byte[] btMsgData = new byte[1];
                btMsgData[0] = (byte)messageType;
                msg.SetData(btMsgData);

                controlFrameServer.SendMessageToAllConnections(msg);
                //Debug.Log("Sending ctrl message " + messageType);
            }
        }

    }


    /// <summary>
    /// TcpNetServer provides network server functionality over tcp streams.
    /// This class is based on the excellent work of Andy Wilson and Hrvoje Benko in "Room Alive Toolkit" - https://github.com/microsoft/RoomAliveToolkit
    /// </summary>
    internal class TcpNetServer
    {
        public int serverPort = 11000;
        //private const int bufferSize = 10240000;
        public int tmpBufferSize = 640000;

        private System.Text.StringBuilder sbConsole = null;

        private TcpListener server;
        private List<NetConnData> connections = new List<NetConnData>();

        public bool isServerRunning = false;

        // thread signal
        public ManualResetEvent allDoneServer = new ManualResetEvent(false);

        public string serverName = string.Empty;

        public ReceivedMessageEventHandler ReceivedMessage = null;


        public bool IsConnected()
        {
            return (connections.Count > 0);
        }

        public int GetConnCount()
        {
            return connections.Count;
        }

        public bool IsActive()
        {
            bool bActive = (connections.Count > 0) ? true : false;

            foreach (NetConnData conn in connections)
            {
                if (!conn.isActive)
                {
                    bActive = false;
                    break;
                }
            }

            return bActive;
        }

        public bool IsReadyToSend()
        {
            bool bReady = (connections.Count > 0) ? true : false;

            foreach (NetConnData conn in connections)
            {
                if (!conn.readyToSend)
                {
                    bReady = false;
                    break;
                }
            }

            return bReady;
        }

        //public void CloseConnection(int connId)
        //{
        //    foreach (NetConnData conn in connections)
        //    {
        //        if (conn.ID == connId)
        //        {
        //            //Debug.Log(serverName + " closing connection " + conn.ID + " to " + conn.remoteEP);
        //            LogToConsole(serverName + " closing connection to client " + conn.remoteIP);
        //            conn.isActive = false;

        //            connections.Remove(conn);
        //            break;
        //        }
        //    }
        //}

        public void CloseConnectionsTo(string remoteIP)
        {
            for (int i = connections.Count - 1; i >= 0; i--)
            {
                NetConnData conn = connections[i];

                if (conn.remoteIP == remoteIP)
                {
                    //Debug.Log(serverName + " closing connection " + conn.ID + " to " + conn.remoteEP);
                    LogToConsole(serverName + " closing connection to client " + conn.remoteIP);
                    conn.isActive = false;

                    connections.Remove(conn);
                }
            }
        }

        public void CloseAllConnections()
        {
            foreach (NetConnData conn in connections)
            {
                //Debug.Log(serverName + " closing connection " + conn.ID + " to " + conn.remoteEP);
                LogToConsole(serverName + " closing connection to client " + conn.remoteIP);
                conn.isActive = false;
            }

            connections.Clear();
        }

        public void SendMessageToAllConnections(NetMessageData message)
        {
            foreach (NetConnData conn in connections)
            {
                lock (conn.messageQueue)
                {
                    if (conn.messageQueue.Count < NetConnData.MaxMessageQueueLength)
                    {
                        conn.messageQueue.Enqueue(message);
                    }
                }
            }
        }

        public void SendMessageToConnection(NetMessageData message, int connId)
        {
            foreach (NetConnData conn in connections)
            {
                if (conn.ID == connId)
                {
                    lock (conn.messageQueue)
                    {
                        if (conn.messageQueue.Count < NetConnData.MaxMessageQueueLength)
                        {
                            conn.messageQueue.Enqueue(message);
                        }
                    }

                    break;
                }
            }
        }


        public TcpNetServer(int port, string name, System.Text.StringBuilder sbConsole)
        {
            serverPort = port;
            serverName = name;
            this.sbConsole = sbConsole;

            isServerRunning = true;
            Thread serverThread = new Thread(StartServer);
            serverThread.Start();
        }

        public void Close()
        {
            isServerRunning = false;
            allDoneServer.Set();

            foreach (NetConnData cs in connections)
            {
                cs.isActive = false;
            }
        }

        private void StartServer()
        {
            try
            {
                IPHostEntry host = Dns.GetHostEntry(Dns.GetHostName());
                string localIP = "localhost";

                foreach (IPAddress ip in host.AddressList)
                {
                    if (ip.AddressFamily == AddressFamily.InterNetwork)
                    {
                        localIP = ip.ToString();
                        if (localIP == "0.0.0.0" || localIP.StartsWith("169.254."))
                            continue;

                        break;
                    }
                }

                IPEndPoint listenEP = new IPEndPoint(IPAddress.Any, serverPort);
                server = new TcpListener(listenEP);

                server.Start();
                //Debug.Log(serverName + " started on " + localIP + ":" + serverPort);
                LogToConsole(serverName + " started on " + localIP + ":" + serverPort);

                while (isServerRunning)
                {
                    allDoneServer.Reset();
                    server.BeginAcceptTcpClient(new System.AsyncCallback(HandleNetClientConnected), server);

                    allDoneServer.WaitOne();
                }
            }
            catch (SocketException e)
            {
                LogErrorToConsole(serverName + " SocketException: " + e.ToString());
            }
            finally
            {
                // Stop listening for new clients.
                isServerRunning = false;
                server.Stop();

                LogToConsole(serverName + " stopped.");
            }
        }

        private void HandleNetClientConnected(System.IAsyncResult ar)
        {
            TcpListener server = (TcpListener)ar.AsyncState;

            try
            {
                NetConnData conn = new NetConnData();

                conn.client = server.EndAcceptTcpClient(ar);
                conn.stream = conn.client.GetStream();

                conn.remoteIP = conn.client.Client.RemoteEndPoint.ToString();
                int iP = conn.remoteIP.IndexOf(':');
                if (iP >= 0)
                    conn.remoteIP = conn.remoteIP.Substring(0, iP);

                CloseConnectionsTo(conn.remoteIP);
                connections.Add(conn);
                allDoneServer.Set();

                LogToConsole(serverName + " connected to client " + conn.remoteIP);

                NetClientProc(conn);
            }
            catch(System.ObjectDisposedException)
            {
                // do nothing
            }
            catch (System.Exception ex)
            {
                LogErrorToConsole(serverName + " error while connecting: " + ex.Message);
                //Debug.LogException(ex);
                allDoneServer.Set();
            }
        }

        private void NetClientProc(NetConnData conn)
        {
            conn.isActive = true;
            int bytesReceived = 0;
            byte[] bufferTmp = new byte[tmpBufferSize];

            try
            {
                while (conn.client.Connected && conn.isActive)
                {
                    if (conn.readyToSend && conn.stream.CanWrite && conn.messageQueue.Count > 0)
                    {
                        byte[] sendBuffer;
                        lock (conn.messageQueue)
                        {
                            sendBuffer = conn.messageQueue.Dequeue().WrapMessage();
                            conn.readyToSend = false;
                        }

                        conn.stream.BeginWrite(sendBuffer, 0, sendBuffer.Length, new System.AsyncCallback(MessageSentToClient), conn);
                    }

                    bytesReceived = 0;
                    while (conn.stream.DataAvailable)
                    {
                        conn.messageReceiveTime = (ulong)System.DateTime.Now.Ticks;
                        bytesReceived = conn.stream.Read(bufferTmp, 0, bufferTmp.Length);
                        ProcessReceivedData(bufferTmp, bytesReceived, conn);
                    }

                    Thread.Sleep(KinectInterop.THREAD_SLEEP_TIME_MS);
                }
            }
            catch (System.Exception ex)
            {
                LogErrorToConsole(ex);
            }

            conn.isActive = false;
            conn.messageQueue.Clear();

            LogToConsole(serverName + " connection to client " + conn.remoteIP + " closed.");

            conn.stream.Close();
            conn.client.Close();

            if(connections.Contains(conn))
            {
                connections.Remove(conn);
            }
        }

        private void MessageSentToClient(System.IAsyncResult ar)
        {
            NetConnData conn = (NetConnData)ar.AsyncState;

            try
            {
                conn.stream.EndWrite(ar);
            }
            catch (System.Exception ex)
            {
                if(conn.isActive)
                {
                    LogErrorToConsole(serverName + " error sending to client: " + ex.Message);
                    //Debug.LogException(ex);

                    conn.isActive = false;
                }
            }

            conn.readyToSend = true;
        }

        private void ProcessReceivedData(byte[] buffer, int bytesReceived, NetConnData conn)
        {
            if (conn.bytesReceived == 0 && bytesReceived > 3)  //new message
            {
                int newMessageSize = System.BitConverter.ToInt32(buffer, 0) + sizeof(int);  //prefix is one int

                if (newMessageSize != conn.messageSize)
                {
                    conn.messageSize = newMessageSize;
                    conn.messageBuffer = new byte[newMessageSize];
                }
            }

            int availableLength = conn.messageSize - conn.bytesReceived;
            int copyLen = Mathf.Min(availableLength, bytesReceived);
            conn.packetCounter++;

            System.Array.Copy(buffer, 0, conn.messageBuffer, conn.bytesReceived, copyLen);
            conn.bytesReceived += copyLen;

            if (conn.bytesReceived == conn.messageSize)
            {
                conn.ResetCounters();

                NetMessageData message = new NetMessageData();
                //message.SetDecompressor(decompressor);
                message.UnwrapMessage(conn.messageBuffer);

                ReceivedMessage?.Invoke(conn, new ReceivedMessageEventArgs(message));
            }

            if (copyLen != bytesReceived)
            {
                byte[] newBuffer = new byte[bytesReceived - copyLen];
                System.Array.Copy(buffer, copyLen, newBuffer, 0, bytesReceived - copyLen);
                ProcessReceivedData(newBuffer, bytesReceived - copyLen, conn);
            }
        }

        // logs message to the console
        private void LogToConsole(string sMessage)
        {
            Debug.Log(sMessage);

            lock(sbConsole)
            {
                sbConsole.Append(sMessage).AppendLine();
            }
        }

        // logs error message to the console
        private void LogErrorToConsole(string sMessage)
        {
            Debug.LogError(sMessage);

            lock (sbConsole)
            {
                sbConsole.Append(sMessage).AppendLine();
            }
        }


        // logs error message to the console
        private void LogErrorToConsole(System.Exception ex)
        {
            LogErrorToConsole(ex.Message + "\n" + ex.StackTrace);
        }

    }


    /// <summary>
    /// UdpBroadcastServer provides broadcast functionality over the network.
    /// </summary>
    internal class UdpBroadcastServer
    {
        public int serverPort = 11000;

        private UdpClient server;

        public bool isServerRunning = false;

        // thread signal
        public ManualResetEvent allDoneServer = new ManualResetEvent(false);

        public string serverName = string.Empty;

        public string sRequestKey = string.Empty;
        public string sResponseData = string.Empty;
        public byte[] btResponseData = new byte[0];

        private System.Text.StringBuilder sbConsole = null;


        public UdpBroadcastServer(int port, string name, string requestKey, string responseData, System.Text.StringBuilder sbConsole)
        {
            serverPort = port;
            serverName = name;

            sRequestKey = requestKey;
            sResponseData = responseData;
            btResponseData = System.Text.Encoding.UTF8.GetBytes(sResponseData);

            this.sbConsole = sbConsole;

            isServerRunning = true;
            Thread serverThread = new Thread(StartServer);
            serverThread.Start();
        }

        public void Close()
        {
            isServerRunning = false;
            allDoneServer.Set();
        }

        private void StartServer()
        {
            try
            {
                IPEndPoint ep = new IPEndPoint(IPAddress.Any, serverPort);
                server = new UdpClient(ep);

                //Debug.Log(serverName + " started on " + localIP + ":" + serverPort);
                LogToConsole(serverName + " started on udp port " + serverPort);

                while (isServerRunning)
                {
                    allDoneServer.Reset();

                    UdpState state = new UdpState();
                    state.ep = ep;
                    state.uc = server;

                    //Debug.Log("Listening for udp requests.");
                    server.BeginReceive(new System.AsyncCallback(HandleNetClientConnected), state);

                    allDoneServer.WaitOne();
                }
            }
            catch (SocketException e)
            {
                LogErrorToConsole(serverName + " SocketException: " + e.ToString());
            }
            finally
            {
                isServerRunning = false;
                server.Close();

                LogToConsole(serverName + " stopped.");
            }
        }

        private void HandleNetClientConnected(System.IAsyncResult ar)
        {
            UdpState state = (UdpState)ar.AsyncState;

            try
            {
                UdpClient uc = state.uc;
                IPEndPoint ep = state.ep;

                byte[] receiveBytes = uc.EndReceive(ar, ref ep);

                string receiveString = System.Text.Encoding.UTF8.GetString(receiveBytes);
                if (receiveString == sRequestKey)
                {
                    LogToConsole(serverName + " received broadcast request from " + ep.Address.ToString());
                    uc.BeginSend(btResponseData, btResponseData.Length, ep, new System.AsyncCallback(MessageSentToClient), uc);
                }
                else
                {
                    LogErrorToConsole(serverName + " received false request '" + receiveString + "' from " + ep.ToString());
                }
            }
            catch (System.ObjectDisposedException)
            {
                // do nothing
            }
            catch (System.Exception ex)
            {
                LogErrorToConsole(serverName + " error while connecting: " + ex.Message);
                //Debug.LogException(ex);
            }

            allDoneServer.Set();
        }

        private void MessageSentToClient(System.IAsyncResult ar)
        {
            UdpClient uc = (UdpClient)ar.AsyncState;

            try
            {
                uc.EndSend(ar);
            }
            catch (System.Exception ex)
            {
                LogErrorToConsole(serverName + " error sending to client: " + ex.Message);
                //Debug.LogException(ex);
            }
        }

        // logs message to the console
        private void LogToConsole(string sMessage)
        {
            Debug.Log(sMessage);

            lock (sbConsole)
            {
                sbConsole.Append(sMessage).AppendLine();
            }
        }

        // logs error message to the console
        private void LogErrorToConsole(string sMessage)
        {
            Debug.LogError(sMessage);

            lock (sbConsole)
            {
                sbConsole.Append(sMessage).AppendLine();
            }
        }


        // logs error message to the console
        private void LogErrorToConsole(System.Exception ex)
        {
            LogErrorToConsole(ex.Message + "\n" + ex.StackTrace);
        }

    }

}
