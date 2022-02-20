using System;
using System.Threading;

using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Microsoft.Azure.RemoteRendering.Unity
{
    public static class MainThreadInvoker
    {
        private static SynchronizationContext s_synchronizationContext = null;

#if UNITY_EDITOR
        [InitializeOnLoadMethod]
#endif
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void onLoad()
        {
            s_synchronizationContext = SynchronizationContext.Current;
        }

        public static void Invoke(Action action, bool waitForCompletion)
        {
            if (s_synchronizationContext == SynchronizationContext.Current)
            {
                action();
            }
            else if (waitForCompletion)
            {
                Semaphore waitSemaphore = new Semaphore(0, 1);
                s_synchronizationContext.Post(_ =>
                {
                    action();
                    waitSemaphore.Release(1);
                }, null);
                waitSemaphore.WaitOne();
            }
            else
            {
                s_synchronizationContext.Post(_ => { action(); }, null);
            }
        }
    }
}
