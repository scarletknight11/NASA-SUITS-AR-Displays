using Microsoft.MixedReality.Toolkit.Utilities;

namespace MRTKExtensions.Gesture {

    public static class GestureUtils {

        private const float PinchThreshold = 0.7f;
        private const float GrabThresold = 0.4f;

        //public static bool IsPinching(Handedness trackedHand)
        //{
            //return HandPoseUtils.CalculateIndexPinch(trackedHand) > PinchThreshold;
        //}

        //public static bool IsGrabbing(Handedness trackedHand)
        //{
        //    return !IsPinching(trackedHand) &&
        //        HandPoseUtils.MiddleFingerCurl(trackedHand) > GrabThresold &&
        //        HandPoseUtils.RingFingerCurl(trackedHand) > GrabThresold &&
        //        HandPoseUtils.PinkyFingerCurl(trackedHand) > GrabThresold &&
        //        HandPoseUtils.ThumbFingerCurl(trackedHand) > GrabThresold;
        //}

    }
}