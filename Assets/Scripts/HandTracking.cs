using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;


public class HandTracking : MonoBehaviour {

    public void Update()
    {
        //is used to retrieve the position & determine which both hands to return
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist,
       Handedness.Any, out MixedRealityPose pose))
        {
            Vector3 positionOfWrist = pose.Position;
            IMixedRealityHand whichHand = HandJointUtils.
           FindHand(Handedness.Any);
        }
    }
}
