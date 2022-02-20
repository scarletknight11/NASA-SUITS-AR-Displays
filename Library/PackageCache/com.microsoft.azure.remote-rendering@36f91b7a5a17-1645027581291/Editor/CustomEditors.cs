using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using Microsoft.Azure.RemoteRendering.Unity;
using System;
using System.Reflection;
using UnityEngine;
using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    static class SceneUtility
    {
        public static void MarkCurrentSceneDirty(bool dirty, UnityEngine.Object obj)
        {
            if (dirty && !Application.IsPlaying(obj))
            {
                var activeScene = PrefabStageUtility.GetCurrentPrefabStage() != null ? PrefabStageUtility.GetCurrentPrefabStage().scene : EditorSceneManager.GetActiveScene();
                EditorSceneManager.MarkSceneDirty(activeScene);
            }
        }
    }

    [CustomEditor(typeof(StageSpace))]
    public class StageSpaceEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
            EditorGUILayout.HelpBox(@"EXPERIMENTAL: Changing the origin of the stage space will break local/remote content alignment for a brief moment.
Thus, it is currently only intended to be used in combination with 'World Locking Tools' which exhibit only very small changes over time.", MessageType.Warning);
        }
    }

    [CustomEditor(typeof(OutlineSettingsComponent))]
    public class OutlineSettingsEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(VisualizeRemoteFocusPoint))]
    public class VisualizeRemoteFocusPointEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(EnableDepthComponent))]
    public class EnableDepthEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRMeshComponent))]
    public class MeshComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRCutPlaneComponent))]
    public class CutPlaneComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRHierarchicalStateOverrideComponent))]
    public class HierarchicalStateOverrideComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRPointLightComponent))]
    public class PointLightComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRSpotLightComponent))]
    public class SpotLightComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(ARRDirectionalLightComponent))]
    public class DirectionalLightComponentEditor : Editor
    {
        Dictionary<string, object> storage = new Dictionary<string, object>();
        public override void OnInspectorGUI()
        {
            bool fieldChanged = false;
            ReflectionInspector.CreateObjectInspector(target, storage, "", ref fieldChanged);
            SceneUtility.MarkCurrentSceneDirty(fieldChanged, target);
        }
    }

    [CustomEditor(typeof(RemoteEntitySyncObject))]
    public class RemoteEntitySyncObjectEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            var myTarget = (RemoteEntitySyncObject)target;
            if(myTarget.Entity == null || !myTarget.Entity.Valid)
            {
                GUI.enabled = false;
                EditorGUILayout.LabelField("Entity null or invalid");
                GUI.enabled = true;
                return;
            }

            EditorGUILayout.LabelField("ID: " + myTarget.Entity.InteropId);

            var style = new GUIStyle(GUI.skin.button);
            style.stretchWidth = false;

            if (GUILayout.Button("Sync now", style))
            {
                myTarget.SyncToRemote();
            }

            if (GUILayout.Button("Show children", style))
            {
                foreach (var child in myTarget.Entity.Children)
                {
                    child.GetOrCreateGameObject(UnityCreationMode.CreateUnityComponents);
                }
            }
        }
    }
}
