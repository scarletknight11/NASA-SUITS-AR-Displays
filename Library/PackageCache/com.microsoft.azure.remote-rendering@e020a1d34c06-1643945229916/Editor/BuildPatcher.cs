using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.IO;
using System;
using System.Xml;
using System.Linq;

#if XR_MANAGEMENT_PLUGIN_AVAILABLE
using UnityEditor.XR.Management;
#endif

public class BuildPatcher
{
    enum TargetArchitecture
    {
        arm32,
        arm64,
        x86,
        x64
    };

    static string GetUnityArchitectureName(TargetArchitecture architecture)
    {
        switch (architecture)
        {
            case TargetArchitecture.arm32:
                return "ARM";
            case TargetArchitecture.arm64:
                return "ARM64";
            case TargetArchitecture.x64:
                return "x64";
            case TargetArchitecture.x86:
                return "x86";
            default:
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Unknown architecture {architecture}");
                return null;
        }
    }

    static string GetVisualStudioArchitectureName(TargetArchitecture architecture)
    {
        switch (architecture)
        {
            case TargetArchitecture.arm32:
                return "ARM";
            case TargetArchitecture.arm64:
                return "ARM64";
            case TargetArchitecture.x64:
                return "x64";
            case TargetArchitecture.x86:
                return "Win32";
            default:
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Unknown architecture {architecture}");
                return null;
        }
    }

    enum TargetFlavor
    {
        Debug,
        RelWithDebInfo,
        Release
    };
    delegate string GetLibraryPathDelegate(TargetArchitecture architecture, TargetFlavor flavor);
    delegate bool FileFilter(string fileName);

    static string[] UnityFlavors = new string[] { "Debug", "Master", "MasterWithLTCG", "Release" };
    static TargetFlavor[] UnityFlavorMapping = new TargetFlavor[] { TargetFlavor.Debug, TargetFlavor.RelWithDebInfo, TargetFlavor.RelWithDebInfo, TargetFlavor.RelWithDebInfo };

    private static void DirectoryCopy(string sourceDirName, string destDirName, bool copySubDirs, FileFilter filter)
    {
        // Get the subdirectories for the specified directory.
        DirectoryInfo dir = new DirectoryInfo(sourceDirName);

        if (!dir.Exists)
        {
            throw new DirectoryNotFoundException(
                "Source directory does not exist or could not be found: "
                + sourceDirName);
        }

        DirectoryInfo[] dirs = dir.GetDirectories();
        // If the destination directory doesn't exist, create it.
        if (!Directory.Exists(destDirName))
        {
            Directory.CreateDirectory(destDirName);
        }

        // Get the files in the directory and copy them to the new location.
        FileInfo[] files = dir.GetFiles();
        foreach (FileInfo file in files)
        {
            if (filter(file.Name))
            {
                string temppath = Path.Combine(destDirName, file.Name);
                file.CopyTo(temppath, true);
            }
        }

        // If copying subdirectories, copy them and their contents to new location.
        if (copySubDirs)
        {
            foreach (DirectoryInfo subdir in dirs)
            {
                string temppath = Path.Combine(destDirName, subdir.Name);
                DirectoryCopy(subdir.FullName, temppath, copySubDirs, filter);
            }
        }
    }

    [PostProcessBuildAttribute(1)]
    public static void OnPostprocessBuild(BuildTarget target, string pathToBuiltProject)
    {
        if (target == BuildTarget.WSAPlayer)
        {
            Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "{0}", "Starting post build patching of WSA project...");
            string[] folders = Directory.GetDirectories(pathToBuiltProject);

            string mainCppPath = null;
            string appXamlCppPath = null;
            string unityDataPath = null;
            string[] projectFiles = null;
            string projectRoot = null;

            bool hasArm64AudioPluginMsHRTF = false;

            foreach (string folder in folders)
            {
                string testPath1 = Path.Combine(folder, "Unity Data.vcxitems");
                if (File.Exists(testPath1))
                {
                    string testPath = Path.Combine(folder, "Main.cpp");
                    if (File.Exists(testPath))
                    {
                        mainCppPath = testPath;
                        unityDataPath = testPath1;
                        projectRoot = folder;
                        break;
                    }
                    testPath = Path.Combine(folder, "App.xaml.cpp");
                    if (File.Exists(testPath))
                    {
                        appXamlCppPath = testPath;
                        unityDataPath = testPath1;
                        projectRoot = folder;
                        break;
                    }
                }
            }

            if (projectRoot != null)
            {
                projectFiles = System.IO.Directory.GetFiles(projectRoot, "*.vcxproj");
                if (projectFiles.Length == 0)
                {
                    Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"No *.vcxproj file found in project folder {projectRoot}");
                }

                hasArm64AudioPluginMsHRTF = File.Exists(Path.Combine(projectRoot, @"Plugins\ARM64\AudioPluginMsHRTF.dll"));
            }
            else
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Could not find 'Unity Data.vcxitems' file in '{pathToBuiltProject}'");
            }

            // paths relevant for patching the visual studio project files
            string appRemotingPublicIncludePath;
            GetLibraryPathDelegate getLibraryPath;
            var targetArchitectures = (TargetArchitecture[])Enum.GetValues(typeof(TargetArchitecture));

#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
            bool useOpenXr = false;
            try
            {
                var buildTarget = EditorUserBuildSettings.activeBuildTarget;
                var buildTargetGroup = BuildPipeline.GetBuildTargetGroup(buildTarget);
                var xrGeneralSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(buildTargetGroup);
                var assignedSettings = xrGeneralSettings.AssignedSettings;
                foreach (var loader in assignedSettings.loaders)
                {
                    // OpenXR check is only required for UNITY_2020_2_OR_NEWER because the plugin has been introduced in version 2020.2
                    if (loader is UnityEngine.XR.OpenXR.OpenXRLoaderBase)
                    {
                        useOpenXr = true;
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Failed to query OpenXR properties: {ex.Message}");
            }
#endif

            // Find the location of the holographic app remoting sdk
            string gitRepoPath = Environment.GetEnvironmentVariable("HOLOGRAPHIC_APP_REMOTING_GIT");
            if (String.IsNullOrEmpty(gitRepoPath))
            {
                string remoteRenderingRoot = GetRemoteRenderingRoot();
                appRemotingPublicIncludePath = @"Plugins\include\";
                string appRemotingPublicIncludePathAbs = Path.Combine(projectRoot, appRemotingPublicIncludePath);

                getLibraryPath = (architecture, flavor) =>
                {
                    return $@"Plugins\{GetUnityArchitectureName(architecture)}\";
                };

                try
                {
                    FileFilter fileFilter;
#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
                    if (useOpenXr)
                    {
                        fileFilter = x => x.EndsWith(".h") || x.EndsWith(".json");
                    }
                    else
#endif
                    {
                        fileFilter = x => x.EndsWith(".h");
                    }

                    DirectoryCopy(Path.Combine(remoteRenderingRoot, appRemotingPublicIncludePath, "HolographicAppRemoting"), Path.Combine(appRemotingPublicIncludePathAbs, "HolographicAppRemoting"), true, fileFilter);

                    foreach (var arch in targetArchitectures)
                    {
                        string sourceLib = Path.Combine(remoteRenderingRoot, @"Plugins\WSA", GetUnityArchitectureName(arch), "Microsoft.Holographic.HybridRemoting.lib");
                        string dstLib = Path.Combine(projectRoot, getLibraryPath(arch, TargetFlavor.RelWithDebInfo), "Microsoft.Holographic.HybridRemoting.lib");
                        if (File.Exists(sourceLib))
                        {
                            File.Copy(sourceLib, dstLib, true);
                        }
                    }
                }
                catch (Exception ex)
                {
                    Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Failed to copy holographic app remoting related files to destination directory: {ex.Message}");
                }
            }
            else
            {
                appRemotingPublicIncludePath = Path.Combine(gitRepoPath, @"src\libstreamer\publicinc\");

                getLibraryPath = (architecture, flavor) =>
                {
                    return Path.Combine(gitRepoPath, $@"temp\msvc2019-msvc2019\{architecture}\uwp\src\libstreamer\{flavor}\");
                };
            }

            // Patch main.cpp
            try
            {
                string initFuncName = "HolographicStreamerHybridPlayerInit";

#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
                var buildTarget = EditorUserBuildSettings.activeBuildTarget;
                var buildTargetGroup = BuildPipeline.GetBuildTargetGroup(buildTarget);
                var xrGeneralSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(buildTargetGroup);
                var assignedSettings = xrGeneralSettings.AssignedSettings;
                foreach (var loader in assignedSettings.loaders)
                {
                    // OpenXR check is only required for UNITY_2020_2_OR_NEWER because the plugin has been introduced in version 2020.2
                    if (loader is UnityEngine.XR.OpenXR.OpenXRLoaderBase)
                    {
                        initFuncName = "HolographicStreamerHybridPlayerOpenXrInit";
                    }
                }
#endif

                string contents = "";

                Func<string> RemoveInitFunc = () =>
                {
                    string[] searchTerms = {
                        "\r\n#include <HolographicAppRemoting/StreamerHybridPlayer.h>",
                        "\r\n    HolographicStreamerHybridPlayerInit();",
                        "\r\n    HolographicStreamerHybridPlayerOpenXrInit();"
                    };
                    foreach (string item in searchTerms)
                    {
                        if (contents.Contains(item))
                        {
                            contents = contents.Replace(item, "");
                        }
                    }
                    return contents;
                };

                if (mainCppPath != null)
                {
                    contents = File.ReadAllText(mainCppPath);
                    {
                        RemoveInitFunc();
                        contents = contents.Replace("RoInitializeWrapper roInit;", String.Format("RoInitializeWrapper roInit;\r\n    {0}();", initFuncName));
                        contents = contents.Replace("#include \"App.h\"", "#include \"App.h\"\r\n#include <HolographicAppRemoting/StreamerHybridPlayer.h>");
                        File.WriteAllText(mainCppPath, contents);
                    }
                }
                else if (appXamlCppPath != null)
                {
                    contents = File.ReadAllText(appXamlCppPath);
                    {
                        RemoveInitFunc();
                        contents = contents.Replace("InitializeComponent();", String.Format("InitializeComponent();\r\n    {0}();", initFuncName));
                        contents = contents.Replace("#include \"pch.h\"", "#include \"pch.h\"\r\n#include <HolographicAppRemoting/StreamerHybridPlayer.h>");
                    }
                    File.WriteAllText(appXamlCppPath, contents);
                }
            }
            catch (Exception ex)
            {
                Debug.LogFormat(LogType.Error, LogOption.NoStacktrace, null, "{0}", $"Failed to patch Main.cpp: {ex.Message}");
            }

            // Patch *.vcxproj
            foreach (string projectFile in projectFiles)
            {
                try
                {
                    bool modified = false;
                    XmlDocument projectDoc = new XmlDocument();
                    projectDoc.Load(projectFile);
                    var propertyGroups = projectDoc.GetElementsByTagName("PropertyGroup");
                    foreach (XmlElement element in propertyGroups)
                    {
                        if (element.HasAttribute("Label"))
                        {
                            if (element.GetAttribute("Label") == "Globals")
                            {
                                var warnOrErrorElements = element.GetElementsByTagName("ResolveAssemblyWarnOrErrorOnTargetArchitectureMismatch");
                                if (warnOrErrorElements.Count == 0)
                                {
                                    var elem = projectDoc.CreateElement("ResolveAssemblyWarnOrErrorOnTargetArchitectureMismatch", element.NamespaceURI);
                                    elem.InnerText = "Warning";
                                    element.AppendChild(elem);
                                    modified = true;
                                }
                                else if (warnOrErrorElements[0].InnerText != "Warning")
                                {
                                    warnOrErrorElements[0].InnerText = "Warning";
                                    modified = true;
                                }
                                break;
                            }
                        }
                    }

                    var itemDefinitionGroups = projectDoc.GetElementsByTagName("ItemDefinitionGroup");
                    foreach (XmlElement itemDefinitionGroup in itemDefinitionGroups)
                    {
                        var clCompiles = itemDefinitionGroup.GetElementsByTagName("ClCompile");
                        foreach (XmlElement clCompile in clCompiles)
                        {
                            var additionalIncludeDirectories = clCompile.GetElementsByTagName("AdditionalIncludeDirectories");
                            foreach (XmlElement additionalIncludeDirectory in additionalIncludeDirectories)
                            {
                                if (!additionalIncludeDirectory.InnerText.Contains(appRemotingPublicIncludePath))
                                {
                                    additionalIncludeDirectory.InnerText = appRemotingPublicIncludePath + ";" + additionalIncludeDirectory.InnerText;
                                    modified = true;
                                }
                            }
                        }

                        var links = itemDefinitionGroup.GetElementsByTagName("Link", itemDefinitionGroup.NamespaceURI);
                        foreach (XmlElement link in links)
                        {
                            var additionalLibraryDirectories = link.GetElementsByTagName("AdditionalLibraryDirectories");
                            if (additionalLibraryDirectories.Count != 16)
                            {
                                for (int flavorIndex = 0; flavorIndex < UnityFlavors.Length; flavorIndex++)
                                {
                                    foreach (var targetArch in targetArchitectures)
                                    {
                                        var newAdditionalLibraryDirectory = projectDoc.CreateElement("AdditionalLibraryDirectories", link.NamespaceURI);
                                        newAdditionalLibraryDirectory.SetAttribute("Condition", $@"'$(Configuration)|$(Platform)'=='{UnityFlavors[flavorIndex]}|{GetVisualStudioArchitectureName(targetArch)}'");
                                        newAdditionalLibraryDirectory.InnerText = getLibraryPath(targetArch, UnityFlavorMapping[flavorIndex]) + ";%(AdditionalLibraryDirectories)";
                                        link.AppendChild(newAdditionalLibraryDirectory);
                                        modified = true;
                                    }
                                }
                            }

                            var additionalDependencies = link.GetElementsByTagName("AdditionalDependencies");
                            foreach (XmlElement additionalDependency in additionalDependencies)
                            {
                                if (!additionalDependency.InnerText.Contains("Microsoft.Holographic.HybridRemoting.lib"))
                                {
                                    additionalDependency.InnerText = "Microsoft.Holographic.HybridRemoting.lib;" + additionalDependency.InnerText;
                                    modified = true;
                                }
                            }
                        }
                    }

#if XR_MANAGEMENT_PLUGIN_AVAILABLE && MR_OPENXR_PLUGIN_AVAILABLE && UNITY_2020_2_OR_NEWER
                    if (useOpenXr)
                    {
                        // <None Include="Plugins\include\HolographicAppRemoting\XrApiLayer_msft_holographic_remoting.json">
                        //   <DeploymentContent>true</DeploymentContent>
                        //   <Link>XrApiLayer_msft_holographic_remoting.json</Link>
                        // </None>

                        var itemGroups = projectDoc.GetElementsByTagName("ItemGroup");
                        foreach (XmlElement itemGroup in itemGroups)
                        {
                            // Append to first ItemGroup without any attributes.
                            if (itemGroup.Attributes.Count == 0)
                            {
                                string openXR_Layer = "Plugins\\include\\HolographicAppRemoting\\XrApiLayer_msft_holographic_remoting.json";
                                bool openXR_LayerFound = itemGroup.ChildNodes.Cast<XmlElement>().Any(x => x.GetAttribute("Include") == openXR_Layer);

                                if (!openXR_LayerFound)
                                {
                                    var newNoneElement = projectDoc.CreateElement("None", itemGroup.NamespaceURI);
                                    newNoneElement.SetAttribute("Include", openXR_Layer);
                                    {
                                        var newDeploymentContentElement = projectDoc.CreateElement("DeploymentContent", newNoneElement.NamespaceURI);
                                        newDeploymentContentElement.InnerText = "true";
                                        newNoneElement.AppendChild(newDeploymentContentElement);

                                        var newLinkElement = projectDoc.CreateElement("Link", newNoneElement.NamespaceURI);
                                        newLinkElement.InnerText = "XrApiLayer_msft_holographic_remoting.json";
                                        newNoneElement.AppendChild(newLinkElement);
                                    }
                                    itemGroup.AppendChild(newNoneElement);
                                    modified = true;
                                }

                                break;
                            }
                        }
                    }
#endif

                    if (modified)
                    {
                        projectDoc.Save(projectFile);
                    }
                }
                catch (Exception ex)
                {
                    Debug.LogException(ex);
                }
            }

            // Patch Unity Data.vcxitems
            try
            {
                bool modified = false;
                XmlDocument unityDataDoc = new XmlDocument();
                unityDataDoc.Load(unityDataPath);
                var targets = unityDataDoc.GetElementsByTagName("Target");
                XmlElement BeforeResolveReferencesTarget = null;
                foreach (XmlElement t in targets)
                {
                    if (t.HasAttribute("Name") && t.GetAttribute("Name") == "BeforeResolveReferences")
                    {
                        BeforeResolveReferencesTarget = t;
                        break;
                    }
                }

                if (BeforeResolveReferencesTarget == null)
                {
                    BeforeResolveReferencesTarget = unityDataDoc.CreateElement("Target", unityDataDoc.DocumentElement.NamespaceURI);
                    BeforeResolveReferencesTarget.SetAttribute("Name", "BeforeResolveReferences");
                    BeforeResolveReferencesTarget.SetAttribute("Condition", "'$(BuildingProject)' == 'true'");
                    unityDataDoc.DocumentElement.AppendChild(BeforeResolveReferencesTarget);
                    modified = true;
                }

                // Delete old copy and delete nodes
                List<XmlElement> toRemove = new List<XmlElement>();
                foreach (XmlElement e in BeforeResolveReferencesTarget.ChildNodes)
                {
                    if (!String.IsNullOrEmpty(gitRepoPath))
                    {
                        if ((e.HasAttribute("SourceFiles") && e.GetAttribute("SourceFiles").Contains("HolographicAppRemoting")) ||
                            (e.HasAttribute("Files") && e.GetAttribute("Files").Contains("HolographicAppRemoting")))
                        {
                            toRemove.Add(e);
                        }
                    }
                }

                if (toRemove.Count > 0)
                {
                    foreach (var remove in toRemove)
                    {
                        BeforeResolveReferencesTarget.RemoveChild(remove);
                    }
                    modified = true;
                }

                // Insert copy and delete nodes for each flavor-architecture pair
                if (!String.IsNullOrEmpty(gitRepoPath))
                {
                    var remotingDllDest = "$(ProjectDir)Microsoft.Holographic.HybridRemoting.dll";
                    for (int flavorIndex = 0; flavorIndex < UnityFlavors.Length; flavorIndex++)
                    {
                        foreach (var targetArch in targetArchitectures)
                        {
                            var condition = $@"'$(Configuration)|$(Platform)'=='{UnityFlavors[flavorIndex]}|{GetVisualStudioArchitectureName(targetArch)}'";
                            var binPath = Path.GetFullPath(Path.Combine(gitRepoPath, $@"temp\msvc2017\{targetArch}\uwp\src\libstreamer\{UnityFlavorMapping[flavorIndex]}"));

                            var copyDll = unityDataDoc.CreateElement("Copy", BeforeResolveReferencesTarget.NamespaceURI);
                            copyDll.SetAttribute("Condition", condition);
                            copyDll.SetAttribute("SourceFiles", Path.Combine(binPath, "Microsoft.Holographic.HybridRemoting.dll"));
                            copyDll.SetAttribute("DestinationFiles", remotingDllDest);
                            BeforeResolveReferencesTarget.AppendChild(copyDll);

                            modified = true;
                        }
                    }
                }

                var itemGroups = unityDataDoc.GetElementsByTagName("ItemGroup");
                XmlElement includeHolographicDll = null;
                foreach (XmlElement itemGroup in itemGroups)
                {
                    var nones = itemGroup.GetElementsByTagName("None");
                    foreach (XmlElement none in nones)
                    {
                        if (none.HasAttribute("Include"))
                        {
                            if (none.GetAttribute("Include").Contains("Microsoft.Holographic.HybridRemoting.dll"))
                            {
                                includeHolographicDll = none;
                            }
                        }
                    }
                }

                // If the HolographicAppRemoting.dll is not included for deployment, add it.
                if (includeHolographicDll == null)
                {
                    var itemGroup = unityDataDoc.CreateElement("ItemGroup", unityDataDoc.DocumentElement.NamespaceURI);
                    unityDataDoc.DocumentElement.AppendChild(itemGroup);

                    var none = unityDataDoc.CreateElement("None", itemGroup.NamespaceURI);
                    none.SetAttribute("Include", "$(MSBuildThisFileDirectory)Microsoft.Holographic.HybridRemoting.dll");
                    itemGroup.AppendChild(none);

                    var DeploymentContent = unityDataDoc.CreateElement("DeploymentContent", none.NamespaceURI);
                    DeploymentContent.InnerText = "true";
                    none.AppendChild(DeploymentContent);

                    var ExcludeFromResourceIndex = unityDataDoc.CreateElement("ExcludeFromResourceIndex", none.NamespaceURI);
                    ExcludeFromResourceIndex.InnerText = "true";
                    none.AppendChild(ExcludeFromResourceIndex);
                    modified = true;
                }

                if (modified)
                {
                    unityDataDoc.Save(unityDataPath);
                }
            }
            catch (Exception ex)
            {
                Debug.LogException(ex);
            }
        }
    }

    private static string GetRemoteRenderingRoot()
    {
        var buildPatcherFilePath = GetRemoteRenderingRootHelper();

        return Path.GetDirectoryName(Path.GetDirectoryName(buildPatcherFilePath));
    }

    private static string GetRemoteRenderingRootHelper([System.Runtime.CompilerServices.CallerFilePath] string buildPatcherFilePath = null)
    {
        if (buildPatcherFilePath?.EndsWith("BuildPatcher.cs", StringComparison.OrdinalIgnoreCase) != true)
        {
            throw new Exception($"Got unexpected {nameof(buildPatcherFilePath)}: \"{buildPatcherFilePath}\".");
        }

        return buildPatcherFilePath;
    }
}
