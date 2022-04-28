#if (UNITY_5 || UNITY_5_3_OR_NEWER) && UNITY_IOS
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;

using System.Diagnostics;

#if UNITY_2017_2_OR_NEWER
using UnityEditor.iOS.Xcode.Extensions;
#endif
using System;
using System.Collections;
using System.IO;

namespace DlibFaceLandmarkDetector
{
    public class DlibFaceLandmarkDetectorIOSBuildPostprocessor : MonoBehaviour
    {

        [PostProcessBuild]
        public static void OnPostprocessBuild (BuildTarget buildTarget, string path)
        {
            string[] guids = UnityEditor.AssetDatabase.FindAssets ("DlibFaceLandmarkDetectorIOSBuildPostprocessor");
            if (guids.Length == 0) {
                UnityEngine.Debug.LogWarning ("SetPluginImportSettings Faild : DlibFaceLandmarkDetectorIOSBuildPostprocessor.cs is missing.");
                return;
            }
            string dlibFaceLandmarkDetectorMenuItemFolderPath = AssetDatabase.GUIDToAssetPath (guids [0]).Substring ("Assets/".Length);
            dlibFaceLandmarkDetectorMenuItemFolderPath = dlibFaceLandmarkDetectorMenuItemFolderPath.Substring (0, dlibFaceLandmarkDetectorMenuItemFolderPath.LastIndexOf ("Editor/DlibFaceLandmarkDetectorIOSBuildPostprocessor.cs"));


            if (buildTarget == BuildTarget.iOS) {
                if (PlayerSettings.iOS.sdkVersion == iOSSdkVersion.DeviceSDK) {

                    RemoveSimulatorArchitectures (path + "/Libraries/"+dlibFaceLandmarkDetectorMenuItemFolderPath+"Plugins/iOS/", "libdlibfacelandmarkdetector.a");
                }
            }
        }

        /// <summary>
        /// Removes the simulator architectures.
        /// </summary>
        /// <param name="WorkingDirectory">Working directory.</param>
        /// <param name="filePath">File path.</param>
        private static void RemoveSimulatorArchitectures (string WorkingDirectory, string filePath)
        {
            Process process = new Process ();
            process.StartInfo.FileName = "/bin/bash";
            process.StartInfo.WorkingDirectory = WorkingDirectory;

            process.StartInfo.Arguments = "-c \" ";

            process.StartInfo.Arguments += "lipo -remove i386 " + filePath + " -o " + filePath + ";";
            process.StartInfo.Arguments += "lipo -remove x86_64 " + filePath + " -o " + filePath + ";";
            process.StartInfo.Arguments += "lipo -info " + filePath + ";";

            process.StartInfo.Arguments += " \"";

            process.StartInfo.UseShellExecute = false;
            process.StartInfo.RedirectStandardOutput = true;
            process.StartInfo.RedirectStandardError = true;

            process.Start ();

            string output = process.StandardOutput.ReadToEnd ();
            string error = process.StandardError.ReadToEnd ();

            process.WaitForExit ();
            process.Close ();

            if (string.IsNullOrEmpty (error)) {
                UnityEngine.Debug.Log ("success : " + output);
            } else {
                UnityEngine.Debug.LogWarning ("error : " + error);
            }
        }

    }
}
#endif