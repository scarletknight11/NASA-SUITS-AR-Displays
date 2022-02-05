using Microsoft.Azure.ObjectAnchors.Unity;
using System.IO;
using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public class ObjectAnchorsConfigInitializer
{
    const string ObjectAnchorsConfigDirectory = "Assets/AzureObjectAnchors.SDK/Resources/";
    const string ObjectAnchorsConfigAssetPath = ObjectAnchorsConfigDirectory + "ObjectAnchorsConfig.asset";

    // EditorApplication.update runs at approximately 100 times per second.
    // Allot a 6 second period to try to find an existing ObjectAnchorsConfig.
    const int MaxTries = 6 * 100;

    static int Counter = 0;

    static ObjectAnchorsConfigInitializer()
    {
        // Add a callback to the EditorApplication.update event.
        // This is needed so that all the assets/resources will be recognized by Unity
        // by the time the callback is called.
        EditorApplication.update += UpdateCallback;
    }

    static void UpdateCallback()
    {
        InitializeObjectAnchorsConfig();
    }

    /// <summary>
    /// Attempt to load configuration from config resource if present; otherwise, create a new configuration.
    /// </summary>
    /// <remarks>
    /// It is unclear when resources get loaded. In some cases, we have observed that the resource did exist,
    /// but Resources.Load() still failed to find the resource. 
    /// When this occurs, the data in the asset will be reset, and we wish to avoid this.
    /// </remarks>
    static void InitializeObjectAnchorsConfig()
    {
        var configResources = Resources.LoadAll("", typeof(ObjectAnchorsConfig));
        if (configResources != null && configResources.Length > 0)
        {
            if (configResources.Length > 1)
            {
                Debug.LogWarning("More than one ObjectAnchorsConfig found. The first one found will be used.");
            }

            EditorApplication.update -= UpdateCallback;
        }
        else
        {
            Counter++;

            if (Counter >= MaxTries)
            {
                Debug.Log($"Didn't find ObjectAnchorsConfig.asset in the Unity project.\n Creating a default config at {ObjectAnchorsConfigAssetPath}.");

                Directory.CreateDirectory(ObjectAnchorsConfigDirectory);

                ObjectAnchorsConfig config = ScriptableObject.CreateInstance<ObjectAnchorsConfig>();
                AssetDatabase.CreateAsset(config, ObjectAnchorsConfigAssetPath);
            }
        }
    }
}
