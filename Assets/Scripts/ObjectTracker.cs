using Microsoft.MixedReality.Toolkit;
using UnityEngine;

public class ObjectTracker : MonoBehaviour
{
    

    // Update is called once per frame
    void Update()
    {
        Vector3 gazeDirection = Vector3.zero;
        GameObject target = null;
        Vector3 origin = Vector3.zero;
        Vector3 pointer = Vector3.zero;

        //gazetarget hits collider of the gameobject
        if (CoreServices.InputSystem.GazeProvider.GazeTarget != null)
        {
            //direction from the GazeOrigin to the GazePoint. Position returned as a vector.
            gazeDirection = CoreServices.InputSystem.GazeProvider.GazeDirection;
            target = CoreServices.InputSystem.GazeProvider.GazeTarget;
            origin = CoreServices.InputSystem.GazeProvider.GazeOrigin;
            pointer = CoreServices.InputSystem.GazeProvider.GazePointer.Position;
        }
    }
}
