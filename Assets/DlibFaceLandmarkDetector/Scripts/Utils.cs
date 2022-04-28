using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.IO;
using AOT;

namespace DlibFaceLandmarkDetector.UnityUtils
{
    public static class Utils
    {
        /**
        * Returns this "Dlib FaceLandmark Detector" version number.
        * 
        * @return this "Dlib FaceLandmark Detector" version number
        */
        public static string getVersion ()
        {
            return "1.2.6";
        }

        /**
        * Gets the readable path of a file in the "StreamingAssets" folder.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder. e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] If the target file has not yet been copied to WebGL's virtual filesystem, you need to use getFilePathAsync() at first.
        * 
        * @param filepath a relative file path starting from "StreamingAssets" folder.
        * @param refresh [Android] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns a readable file path in case of success and returns empty in case of error.
        */
        public static string getFilePath (string filepath, bool refresh = false, int timeout = 0)
        {
            #if UNITY_ANDROID && !UNITY_EDITOR
            filepath = filepath.TrimStart (chTrims);

            string srcPath = Path.Combine (Application.streamingAssetsPath, filepath);
            string destPath = Path.Combine (Application.persistentDataPath, "dlibfacelandmarkdetector");
            destPath = Path.Combine (destPath, filepath);

            if (!refresh && File.Exists (destPath))
                return destPath;

            #if UNITY_2017_1_OR_NEWER
            using (UnityEngine.Networking.UnityWebRequest request = UnityEngine.Networking.UnityWebRequest.Get (srcPath)) {

                request.timeout = timeout;

            #if UNITY_2018_2_OR_NEWER
                request.SendWebRequest ();
            #else
                request.Send ();
            #endif

                while (!request.isDone) {;}

            #if UNITY_2017_1_OR_NEWER
                if (request.isHttpError || request.isNetworkError) {
            #else
                if (request.isError) {
            #endif
                    Debug.LogWarning (request.error);
                    Debug.LogWarning (request.responseCode);
                    return String.Empty;
                }

                //create Directory
                String dirPath = Path.GetDirectoryName (destPath);
                if (!Directory.Exists (dirPath))
                    Directory.CreateDirectory (dirPath);

                File.WriteAllBytes (destPath, request.downloadHandler.data);
            }
            #else
            using (WWW request = new WWW (srcPath)) {
                while (!request.isDone) {;}

                if (!string.IsNullOrEmpty(request.error)) {
                    Debug.LogWarning (request.error);
                    return String.Empty;
                }

                //create Directory
                String dirPath = Path.GetDirectoryName (destPath);
                if (!Directory.Exists (dirPath))
                    Directory.CreateDirectory (dirPath);

                File.WriteAllBytes (destPath, request.bytes);
            }
            #endif
            return destPath;
            #elif UNITY_WEBGL && !UNITY_EDITOR
            filepath = filepath.TrimStart (chTrims);

            string destPath = Path.Combine(Path.AltDirectorySeparatorChar.ToString(), "dlibfacelandmarkdetector");
            destPath = Path.Combine(destPath, filepath);

            if (File.Exists(destPath)){
                return destPath;
            }else{
                return String.Empty;
            }
            #else
            filepath = filepath.TrimStart (chTrims);

            string destPath = Path.Combine (Application.streamingAssetsPath, filepath);

            if (File.Exists (destPath)) {
                return destPath;
            } else {
                return String.Empty;
            }
            #endif
        }

        /**
        * Gets the multiple readable paths of files in the "StreamingAssets" folder.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder. e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] If the target file has not yet been copied to WebGL's virtual filesystem, you need to use getFilePathAsync() at first.
        * 
        * @param filepaths an array of relative file paths starting from the "StreamingAssets" folder.
        * @param refresh [Android] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an array of readable file paths.
        */
        public static string[] getMultipleFilePaths (string[] filepaths, bool refresh = false, int timeout = 0)
        {
            string[] result = new string[filepaths.Length];

            for (int i = 0; i < filepaths.Length; i++) {
                result [i] = getFilePath (filepaths [i], refresh, timeout);
            }

            return result;
        }

        /**
        * Gets the readable path of a file in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepath a relative file path starting from the "StreamingAssets" folder.
        * @param completed a callback function that is called when the process is completed. Returns a readable file path in case of success and returns empty in case of error.
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */
        public static IEnumerator getFilePathAsync (string filepath, Action<string> completed, bool refresh = false, int timeout = 0)
        {
            return getFilePathAsync (filepath, completed, null, null, refresh, timeout);
        }

        /**
        * Gets the readable path of a file in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepath a relative file path starting from the "StreamingAssets" folder.
        * @param completed a callback function that is called when the process is completed. Returns a readable file path in case of success and returns empty in case of error.
        * @param progressChanged a callback function that is called when the process is the progress. Returns the file path and a progress value (0.0 to 1.0).
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */
        public static IEnumerator getFilePathAsync (string filepath, Action<string> completed, Action<string, float> progressChanged, bool refresh = false, int timeout = 0)
        {
            return getFilePathAsync (filepath, completed, progressChanged, null, refresh, timeout);
        }

        /**
        * Gets the readable path of a file in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepath a relative file path starting from the "StreamingAssets" folder.
        * @param completed a callback function that is called when the process is completed. Returns a readable file path in case of success and returns empty in case of error.
        * @param progressChanged a callback function that is called when the process is the progress. Returns the file path and a progress value (0.0 to 1.0).
        * @param errorOccurred a callback function that is called when the process is error occurred. Returns the file path and an error string and an error response code.
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */       
        public static IEnumerator getFilePathAsync (string filepath, Action<string> completed, Action<string, float> progressChanged, Action<string, string, long> errorOccurred, bool refresh = false, int timeout = 0)
        {
            #if (UNITY_ANDROID || UNITY_WEBGL) && !UNITY_EDITOR
            filepath = filepath.TrimStart (chTrims);

            string srcPath = Path.Combine(Application.streamingAssetsPath, filepath);
            #if UNITY_ANDROID
            string destPath = Path.Combine(Application.persistentDataPath, "dlibfacelandmarkdetector");
            #else
            string destPath = Path.Combine(Path.AltDirectorySeparatorChar.ToString(), "dlibfacelandmarkdetector");
            #endif
            destPath = Path.Combine(destPath, filepath);

            if (!refresh && File.Exists(destPath)){
                if (progressChanged != null)
                    progressChanged (filepath, 0);
                yield return null;
                if (progressChanged != null)
                    progressChanged (filepath, 1);
                if (completed != null)
                    completed (destPath);
            } else {

            #if UNITY_WEBGL || (UNITY_ANDROID && UNITY_2017_1_OR_NEWER)
                using (UnityEngine.Networking.UnityWebRequest request = UnityEngine.Networking.UnityWebRequest.Get (srcPath)) {

                    request.timeout = timeout;

            #if UNITY_2018_2_OR_NEWER
                    request.SendWebRequest ();
            #else
                    request.Send ();
            #endif

                    while (!request.isDone) {

                        if (progressChanged != null)
                            progressChanged (filepath, request.downloadProgress);

                        yield return null;
                    }

                    if (progressChanged != null)
                        progressChanged (filepath, request.downloadProgress);

            #if UNITY_2017_1_OR_NEWER
                    if (request.isHttpError || request.isNetworkError) {
            #else
                    if (request.isError) {
            #endif
                        Debug.LogWarning (request.error);
                        Debug.LogWarning (request.responseCode);

                        if (errorOccurred != null) {
                            errorOccurred (filepath, request.error, request.responseCode);
                        } else {
                            if (completed != null)
                                completed (String.Empty);
                        }
                        yield break;
                    }

                    //create Directory
                    String dirPath = Path.GetDirectoryName (destPath);
                    if (!Directory.Exists (dirPath))
                        Directory.CreateDirectory (dirPath);

                    File.WriteAllBytes (destPath, request.downloadHandler.data);
                }
            #else

                using (WWW request = new WWW (srcPath)) {

                    while (!request.isDone) {
                        if (progressChanged != null)
                            progressChanged(filepath, request.progress);

                        yield return null;
                    }

                    if (progressChanged != null)
                        progressChanged (filepath, request.progress);

                    if (!string.IsNullOrEmpty(request.error)) {
                        Debug.LogWarning (request.error);

                        if (errorOccurred != null) {
                            errorOccurred (filepath, request.error, 0);
                        } else {
                            if (completed != null)
                                completed (String.Empty);
                        }
                        yield break;
                    }

                    //create Directory
                    String dirPath = Path.GetDirectoryName (destPath);
                    if (!Directory.Exists (dirPath))
                        Directory.CreateDirectory (dirPath);

                    File.WriteAllBytes(destPath, request.bytes);
                }
            #endif
                if (completed != null)
                    completed (destPath);
            }
            #else
            filepath = filepath.TrimStart (chTrims);

            string destPath = Path.Combine (Application.streamingAssetsPath, filepath);

            if (progressChanged != null)
                progressChanged (filepath, 0);
            yield return null;
            if (progressChanged != null)
                progressChanged (filepath, 1);
    
            if (File.Exists (destPath)) {
                if (completed != null)
                    completed (destPath);
            } else {
                if (errorOccurred != null) {
                    errorOccurred (filepath, "Unknown Error", 0);
                } else {
                    if (completed != null)
                        completed (String.Empty);
                }
            }
            #endif

            yield break;
        }

        /**
        * Gets the multiple readable paths of files in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepaths an array of relative file paths starting from the "StreamingAssets" folder.
        * @param allCompleted a callback function that is called when the process is completed. Returns an array of readable file paths.
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */
        public static IEnumerator getMultipleFilePathsAsync (string[] filepaths, Action<string[]> allCompleted, bool refresh = false, int timeout = 0)
        {
            return getMultipleFilePathsAsync (filepaths, allCompleted, null, null, refresh, timeout);
        }

        /**
        * Gets the multiple readable paths of files in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepaths an array of relative file paths starting from the "StreamingAssets" folder.
        * @param allCompleted a callback function that is called when the process is completed. Returns an array of readable file paths.
        * @param progressChanged a callback function that is called when the process is the progress. Returns the file path and a progress value (0.0 to 1.0).
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */
        public static IEnumerator getMultipleFilePathsAsync (string[] filepaths, Action<string[]> allCompleted, Action<string, float> progressChanged, bool refresh = false, int timeout = 0)
        {
            return getMultipleFilePathsAsync (filepaths, allCompleted, progressChanged, null, refresh, timeout);
        }

        /**
        * Gets the multiple readable paths of files in the "StreamingAssets" folder by using coroutines.
        * <p>
        * <br>Set a relative file path from the starting point of the "StreamingAssets" folder.  e.g. "foobar.txt" or "hogehoge/foobar.txt".
        * <br>[Android] The target file that exists in the "StreamingAssets" folder is copied into the folder of the Application.persistentDataPath. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * <br>[WebGL] The target file in the "StreamingAssets" folder is copied to the WebGL's virtual filesystem. If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied. 
        * 
        * @param filepaths an array of relative file paths starting from the "StreamingAssets" folder.
        * @param allCompleted a callback function that is called when the process is completed. Returns an array of readable file paths.
        * @param progressChanged a callback function that is called when the process is the progress. Returns the file path and a progress value (0.0 to 1.0).
        * @param errorOccurred a callback function that is called when the process is error occurred. Returns the file path and an error string and an error response code.
        * @param refresh [Android][WebGL] If refresh flag is false, when the file has already been copied, the file is not copied. If refresh flag is true, the file is always copied.
        * @param timeout [Android 2017.1+][WebGL] Sets UnityWebRequest to attempt to abort after the number of seconds in timeout has passed. No timeout is applied when timeout is set to 0 and this property defaults to 0. 
        * @return returns an IEnumerator object. Yielding the IEnumerator inside a coroutine will cause the coroutine to pause until the UnityWebRequest encounters a system error or finishes communicating.
        */
        public static IEnumerator getMultipleFilePathsAsync (string[] filepaths, Action<string[]> allCompleted, Action<string, float> progressChanged, Action<string, string, long> errorOccurred, bool refresh = false, int timeout = 0)
        {
            string[] readableFilePaths = new string[filepaths.Length];

            for (int i = 0; i < filepaths.Length; i++) {
                yield return getFilePathAsync (filepaths [i], (result) => {
                    readableFilePaths [i] = result;
                }, progressChanged, errorOccurred, refresh, timeout);
            }

            if (allCompleted != null)
                allCompleted (readableFilePaths);
        }

        private static char[] chTrims = {
            '.',
            #if UNITY_WINRT_8_1 && !UNITY_EDITOR
            '/',
            '\\'
            #else
            System.IO.Path.DirectorySeparatorChar,
            System.IO.Path.AltDirectorySeparatorChar
            #endif
        };

        /// <summary>
        /// if true, CvException is thrown instead of calling Debug.LogError (msg).
        /// </summary>
        #pragma warning disable 0414
        private static bool throwOpenCVException = false;
        #pragma warning restore 0414

        /**
        * Sets the debug mode.
        * <p>
        * <br>if debugMode is true, The error log of the Native side OpenCV will be displayed on the Unity Editor Console.However, if throwException is true, CvException is thrown instead of calling Debug.LogError (msg).
        * <br>Please use as follows.
        * <br>Utils.setDebugMode(true);
        * <br>aaa
        * <br>bbb
        * <br>ccc
        * <br>Utils.setDebugMode(false);
        * 
        * @param debugMode if true, The error log of the Native side OpenCV will be displayed on the Unity Editor Console.
        * @param throwException if true, CvException is thrown instead of calling Debug.LogError (msg).
        */
        public static void setDebugMode (bool debugMode, bool throwException = false)
        {
            #if (UNITY_PRO_LICENSE || UNITY_5 || UNITY_5_3_OR_NEWER)
            DlibFaceLandmarkDetector_SetDebugMode (debugMode);

            if (debugMode) {
                DlibFaceLandmarkDetector_SetDebugLogFunc (debugLogFunc);
                //                              DlibFaceLandmarkDetector_DebugLogTest ();
            } else {
                DlibFaceLandmarkDetector_SetDebugLogFunc (null);
            }

            throwOpenCVException = throwException;

            #endif
        }

        #if (UNITY_PRO_LICENSE || UNITY_5 || UNITY_5_3_OR_NEWER)

        private delegate void DebugLogDelegate (string str);

        [MonoPInvokeCallback (typeof(DebugLogDelegate))]
        private static void debugLogFunc (string str)
        {
            if (throwOpenCVException) {
                throw new DlibException (str);
            } else {
                Debug.LogError (str);
            }
        }

        #endif


        #if (UNITY_IOS || UNITY_WEBGL) && !UNITY_EDITOR
        const string LIBNAME = "__Internal";
        


#else
        const string LIBNAME = "dlibfacelandmarkdetector";
        #endif

        [DllImport (LIBNAME)]
        private static extern void DlibFaceLandmarkDetector_SetDebugMode (bool flag);

        [DllImport (LIBNAME)]
        private static extern void DlibFaceLandmarkDetector_SetDebugLogFunc (DebugLogDelegate func);

        [DllImport (LIBNAME)]
        private static extern void DlibFaceLandmarkDetector_DebugLogTest ();
    }
}