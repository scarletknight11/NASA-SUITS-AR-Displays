// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public static class FileHelper
    {
        public static List<string> GetFilesInDirectory(string path, string extension)
        {
            if (string.IsNullOrWhiteSpace(path) || string.IsNullOrWhiteSpace(extension))
            {
                return new List<string>();
            }

            List<string> files = new List<string>();

            try
            {
                files = Directory.GetFiles(path, $"*{extension}", SearchOption.AllDirectories).ToList();
            }
            catch (ArgumentNullException)
            {
                Debug.LogError("The specified path is not found or is invalid");
            }
            catch (DirectoryNotFoundException)
            {
                Debug.LogError("The specified path is not found or is invalid");
            }
            catch (PathTooLongException)
            {
                Debug.LogError("The specified path, file name, or both exceed the system-defined maximum length");
            }

            return files;
        }
    }
}

