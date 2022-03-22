using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// DepthSensorInterface is the template for all sensor-interface implementations. 
    /// </summary>
    public interface DepthSensorInterface
    {
        // returns the depth sensor platform
        KinectInterop.DepthSensorPlatform GetSensorPlatform();

        // returns the device-id of the currently opened sensor
        string GetSensorDeviceId();

        // returns the type of sensor interface settings
        System.Type GetSensorSettingsType();

        // returns sensor interface settings
        DepthSensorBase.BaseSensorSettings GetSensorSettings(DepthSensorBase.BaseSensorSettings settings);

        // sets sensor interface settings
        void SetSensorSettings(DepthSensorBase.BaseSensorSettings settings);

        // returns the list of available sensors, controlled by this sensor interface
        List<KinectInterop.SensorDeviceInfo> GetAvailableSensors();

        // opens the given sensor and inits needed resources. returns new sensor-data object
        KinectInterop.SensorData OpenSensor(KinectManager kinectManager, KinectInterop.FrameSource dwFlags, bool bSyncDepthAndColor, bool bSyncBodyAndDepth);

        // closes the sensor and frees used resources
        void CloseSensor(KinectInterop.SensorData sensorData);

        // enables or disables the pose stream
        void EnablePoseStream(KinectInterop.SensorData sensorData, bool bEnable);

        // enables or disables synchronization of frames between the master & sub sensors
        bool EnableSensorSync(KinectInterop.SensorData sensorData, bool bEnable);

        // returns true if the sensor is master, false if it's standalone or subordinate
        bool IsSensorMaster();

        // checks if the given sensor frame timestamp is synched with the master or not
        bool IsSensorFrameSynched(ulong frameTime, ulong masterTime);

        // set minimum & maximum infrared values, used in IR texture generation
        void SetMinMaxInfraredValues(float minValue, float maxValue);

        // initializes the secondary sensor data, after sensor initialization
        void InitSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager);

        // checks whether the sensor data is valid. can wait for valid data, as in case of the net-interface
        bool IsSensorDataValid();

        // returns the body tracker orientation angle (Z-angle), in degrees
        float GetBodyTrackerOrientationAngle();

        // polls data frames in the sensor-specific thread
        void PollSensorFrames(KinectInterop.SensorData sensorData);

        // polls coordinate transformation frames and data in the sensor-specific thread
        void PollCoordTransformFrames(KinectInterop.SensorData sensorData);

        // post-processes the sensor data after polling
        void PollSensorFrameTimes(KinectInterop.SensorData sensorData);

        // updates sensor data, if needed
        // returns true if update is successful, false otherwise
        bool UpdateSensorData(KinectInterop.SensorData sensorData, KinectManager kinectManager, bool isPlayMode);

        // updates transformed frame textures, if needed
        // returns true if update is successful, false otherwise
        bool UpdateTransformedFrameTextures(KinectInterop.SensorData sensorData, KinectManager kinectManager);

        // updates the selected sensor textures, if needed
        // returns true if update is successful, false otherwise
        bool UpdateSensorTextures(KinectInterop.SensorData sensorData, KinectManager kinectManager, ulong prevDepthFrameTime, ulong prevIrFrameTime);

        // returns sensor transform. Please note transform updates depend on the getPoseFrames-KM setting.
        Transform GetSensorTransform();

        // returns depth-to-color-camera matrix
        Matrix4x4 GetDepthToColorCameraMatrix();

        // returns sensor-to-world matrix
        Matrix4x4 GetSensorToWorldMatrix();

        // sets sensor-to-world matrix
        void SetSensorToWorldMatrix(Vector3 sensorWorldPosition, Quaternion sensorWorldRotation, bool isUpdateTransform);

        // sets sensor-to-world matrix
        void SetSensorToWorldMatrix(Matrix4x4 mSensor2World, bool isUpdateTransform);

        // returns the depth camera space table
        Vector3[] GetDepthCameraSpaceTable(KinectInterop.SensorData sensorData);

        // returns the color camera space table
        Vector3[] GetColorCameraSpaceTable(KinectInterop.SensorData sensorData);

        // returns depth camera space coordinates for the given depth image point
        Vector3 MapDepthPointToSpaceCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal);

        // returns depth image coordinates for the given depth camera space point
        Vector2 MapSpacePointToDepthCoords(KinectInterop.SensorData sensorData, Vector3 spacePos);

        // returns color camera space coordinates for the given color image point
        Vector3 MapColorPointToSpaceCoords(KinectInterop.SensorData sensorData, Vector2 colorPos, ushort depthVal);

        // returns color image coordinates for the given color camera space point
        Vector2 MapSpacePointToColorCoords(KinectInterop.SensorData sensorData, Vector3 spacePos);

        // returns color image coordinates for the given depth image point
        Vector2 MapDepthPointToColorCoords(KinectInterop.SensorData sensorData, Vector2 depthPos, ushort depthVal);

        // returns depth image coordinates for the given color image point
        Vector2 MapColorPointToDepthCoords(KinectInterop.SensorData sensorData, Vector2 colorPos, int minDist, int maxDist);

        // returns the anchor position of the background raw image
        Vector2 GetBackgroundImageAnchorPos(KinectInterop.SensorData sensorData);

        // returns the resolution in pixels of the point-cloud textures
        Vector2Int GetPointCloudTexResolution(KinectInterop.SensorData sensorData);

        // returns the net-sensor-data for network exchange
        KinectInterop.NetSensorData GetNetSensorData(KinectInterop.SensorData sensorData);

        // sets the local sensor data from the network exchange data
        void SetNetSensorData(KinectInterop.NetSensorData netSensorData, KinectInterop.SensorData sensorData, KinectManager kinectManager);

        // returns the sensor pose data for network exchange 
        KinectInterop.NetPoseData GetSensorNetPoseData(KinectInterop.SensorData sensorData);

        // sets the local sensor pose data from the network exchange data
        void SetSensorNetPoseData(KinectInterop.NetPoseData netPoseData, KinectInterop.SensorData sensorData, KinectManager kinectManager);

        // enables or disables depth camera color frame processing
        void EnableDepthCameraColorFrame(KinectInterop.SensorData sensorData, bool isEnable);

        // returns the latest depth camera color frame texture along with the last frame time  
        Texture GetDepthCameraColorFrameTexture(KinectInterop.SensorData sensorData, ref Texture2D copyToTex2D, ref ulong frameTime);

        // enables or disables color camera depth frame processing
        void EnableColorCameraDepthFrame(KinectInterop.SensorData sensorData, bool isEnable);

        // returns the latest color camera depth frame along with the last frame time. the returned data is ushort array.
        ushort[] GetColorCameraDepthFrame(KinectInterop.SensorData sensorData, ref ushort[] copyToFrame, ref ulong frameTime);

        // returns the latest color camera depth frame along with the last frame time. the returned data frame is byte array.
        byte[] GetColorCameraDepthFrameBytes(KinectInterop.SensorData sensorData, ref byte[] copyToFrame, ref ulong frameTime);

        // enables or disables color camera infrared frame processing
        void EnableColorCameraInfraredFrame(KinectInterop.SensorData sensorData, bool isEnableRawData, bool isEnableTexture);

        // returns the latest color camera infrared frame along with the last frame time. the returned data is ushort array.
        ushort[] GetColorCameraInfraredFrame(KinectInterop.SensorData sensorData, ref ushort[] copyToFrame, ref ulong frameTime);

        // returns the latest color camera infrared frame texture along with the last frame time  
        Texture GetColorCameraInfraredFrameTexture(KinectInterop.SensorData sensorData, ref Texture2D copyToTex2D, ref ulong frameTime);

        // enables or disables color camera body-index frame processing
        void EnableColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, bool isEnable);

        // returns the latest color camera body-index frame along with the last frame time
        byte[] GetColorCameraBodyIndexFrame(KinectInterop.SensorData sensorData, ref byte[] copyToFrame, ref ulong frameTime);
    }
}
