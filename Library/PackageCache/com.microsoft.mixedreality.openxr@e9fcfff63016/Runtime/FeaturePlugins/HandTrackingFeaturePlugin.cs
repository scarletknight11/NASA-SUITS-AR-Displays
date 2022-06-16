// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;

#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Layouts;
#endif

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
#endif

namespace Microsoft.MixedReality.OpenXR
{
#if UNITY_EDITOR
    [OpenXRFeature(UiName = featureName,
        BuildTargetGroups = new[] { BuildTargetGroup.Standalone, BuildTargetGroup.WSA, BuildTargetGroup.Android },
        Company = "Microsoft",
        Desc = "Supports articulated hand tracking with 26 hand joints.",
        DocumentationLink = "https://aka.ms/openxr-unity",
        CustomRuntimeLoaderBuildTargets = null,
        OpenxrExtensionStrings = requestedExtensions,
        Required = false,
        Category = FeatureCategory.Feature,
        FeatureId = featureId,
        Version = "1.4.1")]
#endif
    [NativeLibToken(NativeLibToken = NativeLibToken.HandTracking)]
    internal class HandTrackingFeaturePlugin : OpenXRFeaturePlugin<HandTrackingFeaturePlugin>
    {
        internal const string featureId = "com.microsoft.openxr.feature.handtracking";
        internal const string featureName = "Hand Tracking";
        private const string requestedExtensions = "XR_EXT_hand_tracking XR_MSFT_hand_tracking_mesh";

        private HandTrackingSubsystemController m_handTrackingSubsystemController;

        HandTrackingFeaturePlugin()
        {
            AddSubsystemController(m_handTrackingSubsystemController = new HandTrackingSubsystemController(this));
        }

        protected override IntPtr HookGetInstanceProcAddr(IntPtr func)
        {
            return NativeLib.HookGetInstanceProcAddr(nativeLibToken, func);
        }

#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
        [UnityEngine.Scripting.Preserve, InputControlLayout(displayName = featureName + " (OpenXR)", commonUsages = new[] { "LeftHand", "RightHand" })]
        public class OpenXRHandTracking : InputDevice { }

        /// <inheritdoc/>
        protected override bool OnInstanceCreate(ulong instance)
        {
            InputSystem.RegisterLayout(typeof(OpenXRHandTracking),
                matches: new InputDeviceMatcher()
                .WithInterface(UnityEngine.InputSystem.XR.XRUtilities.InterfaceMatchAnyVersion)
                .WithProduct("OpenXR (Right|Left) Hand")
                );

            return base.OnInstanceCreate(instance);
        }
#endif
    }
}
