using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace com.rfilkov.kinect
{
    /// <summary>
    /// Descriptor of the sensor interface.
    /// </summary>
    [System.Serializable]
    public class DepthSensorDescriptor
    {
        /// <summary>
        /// Sensor type.
        /// </summary>
        public string sensorType;

        /// <summary>
        /// Full path to the sensor interface.
        /// </summary>
        public string sensorInterface;

        /// <summary>
        /// Settings of the sensor interface.
        /// </summary>
        public string sensorIntSettings;

        /// <summary>
        /// Sensor interface version.
        /// </summary>
        public string sensorIntVersion;

        /// <summary>
        /// Transform position.
        /// </summary>
        public Vector3 transformPos;

        /// <summary>
        /// Transform rotation.
        /// </summary>
        public Vector3 transformRot;

    }
}
