using UnityEngine;
using System.Collections;

namespace com.rfilkov.components
{
    public class MouseCameraOrbit : MonoBehaviour
    {
        public Vector3 centerPos;
        public float distance = 5.0f;
        public float xSpeed = 120.0f;
        public float ySpeed = 120.0f;

        public float yMinLimit = -20f;
        public float yMaxLimit = 80f;

        public float distanceMin = .5f;
        public float distanceMax = 15f;

        float x = 0.0f;
        float y = 0.0f;


        void Start()
        {
            Vector3 angles = transform.eulerAngles;
            x = angles.y;
            y = angles.x;
        }


        //public void SetTransformRotation(Quaternion transformRot)
        //{
        //    transform.rotation = transformRot;

        //    Vector3 angles = transformRot.eulerAngles;
        //    x = angles.y;
        //    y = angles.x;
        //}


        void LateUpdate()
        {
            // check for Alt + mouse button
            if (Input.GetMouseButton(0) && (Input.GetKey(KeyCode.LeftAlt) || Input.GetKey(KeyCode.RightAlt)))  
            {
                x += Input.GetAxis("Mouse X") * xSpeed * distance * 0.02f;
                y -= Input.GetAxis("Mouse Y") * ySpeed * 0.02f;

                y = ClampAngle(y, yMinLimit, yMaxLimit);

                Quaternion rotation = Quaternion.Euler(y, x, 0);

                //distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5, distanceMin, distanceMax);

                //RaycastHit hit;
                //if (Physics.Linecast(centerPos, transform.position, out hit))
                //{
                //    distance -= hit.distance;
                //}

                Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
                Vector3 position = rotation * negDistance + centerPos;

                transform.rotation = rotation;
                transform.position = position;
            }
        }

        public static float ClampAngle(float angle, float min, float max)
        {
            if (angle < -360F)
                angle += 360F;
            if (angle > 360F)
                angle -= 360F;

            return Mathf.Clamp(angle, min, max);
        }
    }
}
