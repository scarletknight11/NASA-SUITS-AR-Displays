using LZ4Sharp;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;

namespace com.rfilkov.kinect
{
    // message-received delegate
    internal delegate void ReceivedMessageEventHandler(object sender, ReceivedMessageEventArgs e);


    // received message event
    internal class ReceivedMessageEventArgs : System.EventArgs
    {
        public NetMessageData message;
        public bool synched;

        public ReceivedMessageEventArgs(NetMessageData message)
        {
            this.message = message;
            this.synched = false;
        }

        public ReceivedMessageEventArgs(NetMessageData message, bool synched)
        {
            this.message = message;
            this.synched = synched;
        }
    }


    // network connection data
    internal class NetConnData
    {
        public TcpClient client = null;
        public NetworkStream stream = null;
        public string remoteIP = string.Empty;

        private static int counter = 1;
        public int messageSize = 0;

        public int ID = 0; //counter of clients (each is unique)
        public bool readyToSend = true;

        public bool isActive = false;

        public const int MaxMessageQueueLength = 2;  // 50
        public Queue<NetMessageData> messageQueue = new Queue<NetMessageData>(MaxMessageQueueLength);

        public byte[] messageBuffer = null;
        public int bytesReceived = 0;
        public int packetCounter = 0;
        public ulong messageReceiveTime = 0;


        public NetConnData()
        {
            ID = counter;
            counter++;
            messageBuffer = new byte[messageSize];
        }

        public void ResetCounters()
        {
            bytesReceived = 0;
            packetCounter = 0;
        }
    }


    // network message type
    public enum NetMessageType : int { Control = 0, Color = 1, Depth = 2, Infrared = 3, BodyData = 4, BodyIndex = 5, Pose = 6, Depth2Color = 7, Color2Depth = 8, Color2BodyIndex = 9, Color2Infrared = 10 }
    // frame encode type
    public enum FrameEncodeType : int { None = 0, Raw = 1, Jpeg = 2, K4b = 3, Json = 4, SensorDataJson = 5, DSTraw = 6, CSTraw = 7, Compressed = 8 };
    // control message type
    public enum ControlMessageType : int { GetSensorData = 0, KeepAlive = 1, Disconnect = 2, GetDST = 3, GetCST = 4 }


    // network message data
    internal class NetMessageData
    {
        public NetMessageType msgType;
        public FrameEncodeType encType;

        public int frameWidth;
        public int frameHeight;

        public ulong timestamp;
        public byte[] frameData;

        private const int headerSize = 2 * sizeof(byte) + 2 * sizeof(ushort) + sizeof(ulong);
        private const int compHeaderSize = 1 + sizeof(int);  // compressed data header


        private ILZ4Compressor compressor = null;
        private ILZ4Decompressor decompressor = null;


        public NetMessageData()
        {
        }

        public NetMessageData(NetMessageType msgType, FrameEncodeType encType)
        {
            this.msgType = msgType;
            this.encType = encType;
        }

        public NetMessageData(NetMessageType msgType, FrameEncodeType encType, int frameWidth, int frameHeight, ulong timestamp)
        {
            this.msgType = msgType;
            this.encType = encType;

            this.frameWidth = frameWidth;
            this.frameHeight = frameHeight;

            this.timestamp = timestamp;
        }

        public void SetData(byte[] data)
        {
            frameData = data;
        }

        public void SetData(ushort[] data)
        {
            int frameLen = data.Length * sizeof(ushort);
            frameData = new byte[frameLen];
            KinectInterop.CopyBytes(data, sizeof(ushort), frameData, sizeof(byte));
        }

        public void SetCompressor(ILZ4Compressor compressor)
        {
            this.compressor = compressor;
        }

        public void SetDecompressor(ILZ4Decompressor decompressor)
        {
            this.decompressor = decompressor;
        }

        public void CompressData()
        {
            if (compressor != null && frameData != null)
            {
                byte[] compressBuffer = new byte[frameData.Length + compHeaderSize];

                compressBuffer[0] = (byte)encType;
                byte[] elemBytes = System.BitConverter.GetBytes(frameData.Length);
                elemBytes.CopyTo(compressBuffer, 1);

                int compSize = compressor.Compress(frameData, 0, frameData.Length, compressBuffer, compHeaderSize) + compHeaderSize;

                encType = FrameEncodeType.Compressed;
                frameData = new byte[compSize];
                System.Buffer.BlockCopy(compressBuffer, 0, frameData, 0, compSize);

                compressBuffer = null;
            }
        }

        public void DecompressData()
        {
            if(decompressor != null && frameData != null && frameData.Length > compHeaderSize && encType == FrameEncodeType.Compressed)
            {
                encType = (FrameEncodeType)frameData[0];
                int frameSize = System.BitConverter.ToInt32(frameData, 1);

                byte[] decompressBuffer = new byte[frameSize];
                int decompSize = decompressor.Decompress(frameData, compHeaderSize, decompressBuffer, 0, frameData.Length - compHeaderSize);
                frameData = decompressBuffer;

                decompressBuffer = null;
            }
        }

        public byte[] WrapMessage()
        {
            if (frameData == null)
                return null;

            if (compressor != null)
            {
                CompressData();
            }

            int msgOffset = sizeof(int);
            int msgLength = headerSize + frameData.Length;

            byte[] msgBytes = new byte[msgOffset + msgLength];

            byte[] lenBytes = System.BitConverter.GetBytes(msgLength);
            lenBytes.CopyTo(msgBytes, 0);

            msgBytes[msgOffset] = (byte)msgType; msgOffset++;
            msgBytes[msgOffset] = (byte)encType; msgOffset++;

            byte[] elemBytes = System.BitConverter.GetBytes((ushort)frameWidth);
            elemBytes.CopyTo(msgBytes, msgOffset); msgOffset += sizeof(ushort);

            elemBytes = System.BitConverter.GetBytes((ushort)frameHeight);
            elemBytes.CopyTo(msgBytes, msgOffset); msgOffset += sizeof(ushort);

            elemBytes = System.BitConverter.GetBytes(timestamp);
            elemBytes.CopyTo(msgBytes, msgOffset); msgOffset += sizeof(ulong);

            frameData.CopyTo(msgBytes, msgOffset); msgOffset += frameData.Length;

            return msgBytes;
        }

        public void UnwrapMessage(byte[] message)
        {
            int msgOffset = sizeof(int);

            msgType = (NetMessageType)message[msgOffset]; msgOffset++;
            encType = (FrameEncodeType)message[msgOffset]; msgOffset++;

            frameWidth = System.BitConverter.ToUInt16(message, msgOffset); msgOffset += sizeof(ushort);
            frameHeight = System.BitConverter.ToUInt16(message, msgOffset); msgOffset += sizeof(ushort);

            timestamp = System.BitConverter.ToUInt64(message, msgOffset); msgOffset += sizeof(ulong);

            int frameSize = message.Length - msgOffset;
            frameData = new byte[frameSize];
            System.Array.Copy(message, msgOffset, frameData, 0, frameSize);

            if(decompressor != null)
            {
                DecompressData();
            }
        }

    }


    // udp state to pass to async methods
    public struct UdpState
    {
        public UdpClient uc;
        public System.Net.IPEndPoint ep;
    }

}
