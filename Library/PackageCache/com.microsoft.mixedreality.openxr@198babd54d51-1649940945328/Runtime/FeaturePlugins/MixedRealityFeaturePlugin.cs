// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.OpenXR.Features;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
#endif

namespace Microsoft.MixedReality.OpenXR
{

#if UNITY_EDITOR
    [OpenXRFeature(UiName = featureName,
        BuildTargetGroups = new[] { BuildTargetGroup.Standalone, BuildTargetGroup.WSA },
        Company = "Microsoft",
        Desc = "Supports features on HoloLens 2 and Mixed Reality headsets.",
        DocumentationLink = "https://aka.ms/openxr-unity",
        CustomRuntimeLoaderBuildTargets = null,
        OpenxrExtensionStrings = requestedExtensions,
        Required = true,
        Category = FeatureCategory.Feature,
        FeatureId = featureId,
        Version = "1.4.0")]
#endif
    [NativeLibToken(NativeLibToken = NativeLibToken.HoloLens)]
    internal class MixedRealityFeaturePlugin : OpenXRFeaturePlugin<MixedRealityFeaturePlugin>
    {
        internal const string featureId = "com.microsoft.openxr.feature.hololens";
        internal const string featureName = "Mixed Reality Features";
        internal const string mixedRealityExtensions = ""
            + "XR_MSFT_unbounded_reference_space "
            + "XR_MSFT_spatial_anchor "
            + "XR_MSFT_secondary_view_configuration "
            + "XR_MSFT_first_person_observer "
            + "XR_MSFT_spatial_graph_bridge "
            + "XR_MSFT_perception_anchor_interop "
            + "XR_MSFT_spatial_anchor_persistence "
            + "XR_MSFT_scene_understanding "
            + "XR_MSFT_scene_understanding_serialization "
            + "XR_MSFT_spatial_anchor_export_preview "
            + "XR_MSFT_composition_layer_reprojection"; // Do not add space at the end

        internal const string requestedExtensions = ""
            + "XR_MSFT_holographic_window_attachment "
            + "XR_KHR_win32_convert_performance_counter_time "
            + mixedRealityExtensions;

        [Header("Mixed Reality Capture Rendering Settings")]

        [SerializeField, LabelWidth(190f),
            Tooltip("Using first person observer, Mixed Reality Capture (MRC) will render from the perspective of the PV camera with an extra rendering pass. " +
            "This provides better hologram quality and alignment to the physical world but may use more rendering resources. " +
            "When this flag is set, MRC will render from one of the eyes without an extra rendering pass, reducing the " +
            "rendering cost for MRC but potentially introducing visual disparity, especially on hand tracking visuals.")]
        private bool disableFirstPersonObserver = false;

        private SessionSubsystemController m_sessionSubsystemController;
        private PlaneSubsystemController m_planeSubsystemController;
        private AnchorSubsystemController m_anchorSubsystemController;
        private RaycastSubsystemController m_raycastSubsystemController;
        private MeshSubsystemController m_meshSubsystemController;
        private OpenXRViewConfigurationSettings m_viewConfigurationSettings;

        internal MixedRealityFeaturePlugin()
        {
            AddSubsystemController(m_sessionSubsystemController = new SessionSubsystemController(nativeLibToken, this));
            AddSubsystemController(m_anchorSubsystemController = new AnchorSubsystemController(nativeLibToken, this));
            AddSubsystemController(m_planeSubsystemController = new PlaneSubsystemController(nativeLibToken, this));
            AddSubsystemController(m_raycastSubsystemController = new RaycastSubsystemController(nativeLibToken, this));
            AddSubsystemController(m_meshSubsystemController = new MeshSubsystemController(nativeLibToken, this));
            AddSubsystemController(m_viewConfigurationSettings = new OpenXRViewConfigurationSettings(nativeLibToken, this));
        }

#if UNITY_EDITOR
        internal string versionInstalledOnLaunch = string.Empty;

        protected override void OnEnable()
        {
            base.OnEnable();

            // Only cache the version here on first load.
            if (string.IsNullOrWhiteSpace(versionInstalledOnLaunch))
            {
                versionInstalledOnLaunch = UnityEditor.PackageManager.PackageInfo.FindForAssembly(typeof(MixedRealityFeaturePlugin).Assembly)?.version;
            }
        }
#endif // UNITY_EDITOR

        protected override bool OnInstanceCreate(ulong instance)
        {
            bool returnValue = base.OnInstanceCreate(instance);

            if (disableFirstPersonObserver)
            {
                NativeLib.SetViewConfigurationTypeDisabled(nativeLibToken, ViewConfigurationType.SecondaryMonoFirstPersonObserver);
            }

            return returnValue;
        }

        protected override IntPtr HookGetInstanceProcAddr(IntPtr func)
        {
            return NativeLib.HookGetInstanceProcAddr(nativeLibToken, func);
        }

        internal IntPtr TryAcquireSceneCoordinateSystem(Pose poseInScene)
        {
            return NativeLib.TryAcquireSceneCoordinateSystem(nativeLibToken, poseInScene);
        }

        internal IntPtr TryAcquirePerceptionSpatialAnchor(ulong anchorHandle)
        {
            return NativeLib.TryAcquirePerceptionSpatialAnchor(nativeLibToken, anchorHandle);
        }

        internal IntPtr TryAcquirePerceptionSpatialAnchor(Guid trackableId)
        {
            return NativeLib.TryAcquirePerceptionSpatialAnchor(nativeLibToken, trackableId);
        }

        internal Guid TryAcquireXrSpatialAnchor(object perceptionAnchor)
        {
            return NativeLib.TryAcquireXrSpatialAnchor(nativeLibToken, perceptionAnchor);
        }

        internal Guid TryAcquireAndReplaceXrSpatialAnchor(object perceptionAnchor, Guid existingId)
        {
            return NativeLib.TryAcquireAndReplaceXrSpatialAnchor(nativeLibToken, perceptionAnchor, existingId);
        }

        internal IReadOnlyList<ViewConfiguration> EnabledViewConfigurations => m_viewConfigurationSettings.EnabledViewConfigurations;

        internal IntPtr TryGetPerceptionDeviceFactory()
        {
            return NativeLib.TryGetPerceptionDeviceFactory(nativeLibToken, OpenXRFeature.xrGetInstanceProcAddr);
        }

#if UNITY_EDITOR
        protected override void GetValidationChecks(List<ValidationRule> results, BuildTargetGroup targetGroup)
        {
            MixedRealityFeatureValidator.GetValidationChecks(this, results, targetGroup);
        }
#endif
    }
}
