using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Utilities;

namespace DyiPinchGrab
{
    public class DyiHandManipulation : MonoBehaviour
    {
        [SerializeField]
        private TrackedHandJoint trackedHandJoint = TrackedHandJoint.IndexMiddleJoint;

        [SerializeField]
        private float grabDistance = 0.1f;

        [SerializeField]
        private Handedness trackedHand = Handedness.Both;

        [SerializeField]
        private bool trackPinch = true;

        [SerializeField]
        private bool trackGrab = true;
    }
}