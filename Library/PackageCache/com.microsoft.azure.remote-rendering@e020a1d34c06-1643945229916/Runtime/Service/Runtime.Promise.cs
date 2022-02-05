// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
using System;
using System.Collections.Generic;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.Threading;
using System.Threading.Tasks;

namespace Microsoft.Azure.RemoteRendering
{
    internal class PromiseBase : IDisposable
    {
        private bool disposed = false;

#if DEBUG
        private System.Diagnostics.StackTrace stackTrace = new System.Diagnostics.StackTrace(true);
#endif

        private readonly CancellationTokenRegistration cancellationTokenRegistration;

        private readonly PromiseCreateOptions createOptions;

        public readonly PromiseSafeHandle Handle;

        protected PromiseBase(PromiseCreateOptions createOptions, CancellationToken cancellationToken)
        {
            PromiseSafeHandle promiseSafeHandle = null;
            int result = -1;
            try
            {
                result = NativeLibrary.ApiGenPromiseCreate(ref createOptions, out promiseSafeHandle);
            }
            catch (Exception ex)
            {
                Debug.Assert(false, $"NativeLibrary.ApiGenPromiseCreate threw exception {ex.Message}");
            }

            if (result != 0)
            {
                throw new InvalidOperationException();
            }

            this.Handle = promiseSafeHandle;
            this.createOptions = createOptions;
            this.cancellationTokenRegistration = cancellationToken.Register(() => NativeLibrary.ApiGenPromiseCancel(promiseSafeHandle));
        }

        ~PromiseBase()
        {
#if DEBUG
            Debug.Assert(false, $"A {nameof(Promise)} should never be finalized. Ensure all instances are disposed. Allocation at: {this.stackTrace}");
#else
            Debug.Assert(false, $"A {nameof(Promise)} should never be finalized. Ensure all instances are disposed.");
#endif
            this.Dispose(disposing: false);
        }

        /// <summary>
        /// An implementation of <see cref="IDisposable.Dispose"/> that cleans up the resources owned by this object.
        /// </summary>
        public void Dispose()
        {
            this.Dispose(disposing: true);
            GC.SuppressFinalize(this);
        }

        /// <summary>
        /// An implementation of Dispose using the Dispose pattern.
        /// </summary>
        /// <remarks>
        /// Order is important here - the <see cref="CancellationTokenRegistration"/> instance must be disposed before the <see cref="PromiseSafeHandle"/>.
        /// </remarks>
        protected virtual void Dispose(bool disposing)
        {
            if (!this.disposed)
            {
                ((IDisposable)this.cancellationTokenRegistration).Dispose();
                ((IDisposable)this.Handle).Dispose();
                this.disposed = true;
            }
        }
    }

    internal class Promise<T> : PromiseBase
    {
        private readonly TaskCompletionSource<T> taskCompletionSource;

        public Task<T> Task => this.taskCompletionSource.Task;

        public Promise(TaskCompletionSource<T> taskCompletionSource, PromiseCreateOptions createOptions, CancellationToken cancellationToken)
            : base(createOptions, cancellationToken)
        {
            this.taskCompletionSource = taskCompletionSource;
        }
    }

    internal class Promise : PromiseBase
    {
        private readonly TaskCompletionSource<bool> taskCompletionSource;

        public Task Task => this.taskCompletionSource.Task;

        public Promise(TaskCompletionSource<bool> taskCompletionSource, PromiseCreateOptions createOptions, CancellationToken cancellationToken)
            : base(createOptions, cancellationToken)
        {
            this.taskCompletionSource = taskCompletionSource;
        }

        public static Promise Create(CancellationToken cancellationToken)
        {
            return Promise.Create(null, cancellationToken);
        }

        public static Promise Create(Action<float> progress, CancellationToken cancellationToken)
        {
            TaskCompletionSource<bool> taskCompletionSource = new TaskCompletionSource<bool>();
            PromiseCreateOptions createOptions = BuildOptions(_ => true, taskCompletionSource, progress);

            return new Promise(taskCompletionSource, createOptions, cancellationToken);
        }

        public static Promise<TResult> Create<TResult>(Func<PackedValue, TResult> factory, CancellationToken cancellationToken)
        {
            return Promise.Create<TResult>(factory, null, cancellationToken);
        }

        public static Promise<TResult> Create<TResult>(Func<PackedValue, TResult> factory, Action<float> progress, CancellationToken cancellationToken)
        {
            TaskCompletionSource<TResult> taskCompletionSource = new TaskCompletionSource<TResult>();
            PromiseCreateOptions createOptions = BuildOptions(factory, taskCompletionSource, progress);

            return new Promise<TResult>(taskCompletionSource, createOptions, cancellationToken);
        }

        /// <summary>
        /// This needs to be kept in sync with CheckStatus(IntPtr handle, status value). That function throws, this function returns.
        /// This method is handwritten and needs to go away when ApiGen has better exception handling.
        /// </summary>
        private static Exception CreateException(status statusCode)
        {
            // put the enum value as string into the message
            string message = statusCode.ToString();

            switch (statusCode)
            {
                case status.OK:
                    return null;
                case status.Failed:
                    return new InvalidOperationException();
                case status.ObjectDisposed:
                    return new ObjectDisposedException("");
                case status.OutOfMemory:
                    return new OutOfMemoryException();
                case status.InvalidArgument:
                    return new ArgumentException();
                case status.OutOfRange:
                    return new ArgumentOutOfRangeException();
                case status.NotImplemented:
                    return new NotImplementedException();
                case status.KeyNotFound:
                    return new KeyNotFoundException();
                case status.CoreReturnValueStart:
                    return new RRException(Result.CoreReturnValueStart, message);
                case status.Fail:
                    return new RRException(Result.Fail, message);
                case status.Cancelled:
                    return new RRException(Result.Cancelled, message);
                case status.InvalidParam:
                    return new RRException(Result.InvalidParam, message);
                case status.InvalidType:
                    return new RRException(Result.InvalidType, message);
                case status.BufferTooSmall_Deprecated:
                    return new RRException(Result.BufferTooSmall_Deprecated, message);
                case status.NoConnection:
                    return new RRException(Result.NoConnection, message);
                case status.ApiUnavailable:
                    return new RRException(Result.ApiUnavailable, message);
                case status.AlreadyInitialized:
                    return new RRException(Result.AlreadyInitialized, message);
                case status.AlreadyDeinitialized:
                    return new RRException(Result.AlreadyDeinitialized, message);
                case status.StringTooLong:
                    return new RRException(Result.StringTooLong, message);
                case status.IndexOutOfRange:
                    return new RRException(Result.IndexOutOfRange, message);
                case status.InProgress:
                    return new RRException(Result.InProgress, message);
                case status.NotInitialized:
                    return new RRException(Result.NotInitialized, message);
                case status.CoreReturnValueLast:
                    return new RRException(Result.CoreReturnValueLast, message);
                case status.CoreReturnValueEnd:
                    return new RRException(Result.CoreReturnValueEnd, message);
                case status.LoadFileReturnValueStart:
                    return new RRException(Result.LoadFileReturnValueStart, message);
                case status.FileNotFound:
                    return new RRException(Result.FileNotFound, message);
                case status.InvalidVersion:
                    return new RRException(Result.InvalidVersion, message);
                case status.IncompatibleVersion_Deprecated:
                    return new RRException(Result.IncompatibleVersion_Deprecated, message);
                case status.FailedToOpenFile:
                    return new RRException(Result.FailedToOpenFile, message);
                case status.FileDownloadFailed:
                    return new RRException(Result.FileDownloadFailed, message);
                case status.ExceedsMemoryLimit:
                    return new RRException(Result.ExceedsMemoryLimit, message);
                case status.CannotWriteTargetFile:
                    return new RRException(Result.CannotWriteTargetFile, message);
                case status.FileCorrupt:
                    return new RRException(Result.FileCorrupt, message);
                case status.LoadFileReturnValueLast:
                    return new RRException(Result.LoadFileReturnValueLast, message);
                case status.LoadFileReturnValueEnd:
                    return new RRException(Result.LoadFileReturnValueEnd, message);
                case status.ObjectReturnValueStart:
                    return new RRException(Result.ObjectReturnValueStart, message);
                case status.InvalidId:
                    return new RRException(Result.InvalidId, message);
                case status.InvalidParentId:
                    return new RRException(Result.InvalidParentId, message);
                case status.AlreadyExists:
                    return new RRException(Result.AlreadyExists, message);
                case status.CyclicReference:
                    return new RRException(Result.CyclicReference, message);
                case status.ObjectLocked_Deprecated:
                    return new RRException(Result.ObjectLocked_Deprecated, message);
                case status.ObjectStatic:
                    return new RRException(Result.ObjectStatic, message);
                case status.ObjectReturnValueLast:
                    return new RRException(Result.ObjectReturnValueLast, message);
                case status.ObjectReturnValueEnd:
                    return new RRException(Result.ObjectReturnValueEnd, message);
                case status.ConnectionReturnValueStart:
                    return new RRException(Result.ConnectionReturnValueStart, message);
                case status.NoServerCertificate:
                    return new RRException(Result.NoServerCertificate, message);
                case status.HandshakePortBusy:
                    return new RRException(Result.HandshakePortBusy, message);
                case status.HandshakeUnreachable:
                    return new RRException(Result.HandshakeUnreachable, message);
                case status.HandshakeConnectionFailed:
                    return new RRException(Result.HandshakeConnectionFailed, message);
                case status.AuthenticationFailed:
                    return new RRException(Result.AuthenticationFailed, message);
                case status.RemotingVersionMismatch:
                    return new RRException(Result.RemotingVersionMismatch, message);
                case status.IncompatibleTransportProtocols:
                    return new RRException(Result.IncompatibleTransportProtocols, message);
                case status.HandshakeFailed:
                    return new RRException(Result.HandshakeFailed, message);
                case status.TransportPortBusy:
                    return new RRException(Result.TransportPortBusy, message);
                case status.TransportUnreachable:
                    return new RRException(Result.TransportUnreachable, message);
                case status.TransportConnectionFailed:
                    return new RRException(Result.TransportConnectionFailed, message);
                case status.ProtocolVersionMismatch:
                    return new RRException(Result.ProtocolVersionMismatch, message);
                case status.ProtocolError:
                    return new RRException(Result.ProtocolError, message);
                case status.VideoCodecNotAvailable:
                    return new RRException(Result.VideoCodecNotAvailable, message);
                case status.ConnectionLost:
                    return new RRException(Result.ConnectionLost, message);
                case status.DeviceLost:
                    return new RRException(Result.DeviceLost, message);
                case status.DisconnectRequest:
                    return new RRException(Result.DisconnectRequest, message);
                case status.Timeout:
                    return new RRException(Result.Timeout, message);
                case status.AlreadyConnected:
                    return new RRException(Result.AlreadyConnected, message);
                case status.ArrVersionMismatch:
                    return new RRException(Result.ArrVersionMismatch, message);
                case status.HandshakeNetworkUnreachable:
                    return new RRException(Result.HandshakeNetworkUnreachable, message);
                case status.HandshakeConnectionRefused:
                    return new RRException(Result.HandshakeConnectionRefused, message);
                case status.VideoFormatNotAvailable:
                    return new RRException(Result.VideoFormatNotAvailable, message);
                case status.PeerDisconnectRequest:
                    return new RRException(Result.PeerDisconnectRequest, message);
                case status.PeerDisconnectTimeout:
                    return new RRException(Result.PeerDisconnectTimeout, message);
                case status.SessionOpenTimeout:
                    return new RRException(Result.SessionOpenTimeout, message);
                case status.RemotingHandshakeTimeout:
                    return new RRException(Result.RemotingHandshakeTimeout, message);
                case status.InternalError:
                    return new RRException(Result.InternalError, message);
                case status.ConnectionReturnValueLast:
                    return new RRException(Result.ConnectionReturnValueLast, message);
                case status.ConnectionReturnValueEnd:
                    return new RRException(Result.ConnectionReturnValueEnd, message);
                case status.ManagerReturnValueStart:
                    return new RRException(Result.ManagerReturnValueStart, message);
                case status.InvalidToolId:
                    return new RRException(Result.InvalidToolId, message);
                case status.ManagerAlreadyCreated:
                    return new RRException(Result.ManagerAlreadyCreated, message);
                case status.ManagerNotCreatedYet:
                    return new RRException(Result.ManagerNotCreatedYet, message);
                case status.OtherSessionConnected:
                    return new RRException(Result.OtherSessionConnected, message);
                case status.BadStateTransition:
                    return new RRException(Result.BadStateTransition, message);
                case status.FailedToStartTool:
                    return new RRException(Result.FailedToStartTool, message);
                case status.ManagerReturnValueLast:
                    return new RRException(Result.ManagerReturnValueLast, message);
                case status.ManagerReturnValueEnd:
                    return new RRException(Result.ManagerReturnValueEnd, message);
                case status.SessionReturnValueStart:
                    return new RRException(Result.SessionReturnValueStart, message);
                case status.InvalidToken:
                    return new RRException(Result.InvalidToken, message);
                case status.InvalidUri:
                    return new RRException(Result.InvalidUri, message);
                case status.SessionReturnValueLast:
                    return new RRException(Result.SessionReturnValueLast, message);
                case status.SessionReturnValueEnd:
                    return new RRException(Result.SessionReturnValueEnd, message);
            }
            return new Exception("Unknown reason");
        }

#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WSA || UNITY_ANDROID
        internal delegate void apigen_promise_on_complete2(IntPtr context, ref PackedValue value);
        internal delegate void apigen_promise_on_error2(IntPtr context, status result);

        internal struct InternalCallbacks
        {
            public apigen_promise_on_complete2 completeCallback;
            public apigen_promise_on_error2 errorCallback;
            public Action<float> progressCallback;
        }

        [AOT.MonoPInvokeCallback(typeof(apigen_promise_on_complete))]
        static void InternalComplete(IntPtr context, ref PackedValue value)
        {
            if (s_cookieTracker.TryRemove(context, out InternalCallbacks entry))
            {
                entry.completeCallback(context, ref value);
            }
        }

        [AOT.MonoPInvokeCallback(typeof(apigen_promise_on_error))]
        static void InternalError(IntPtr context, status result)
        {
            if (s_cookieTracker.TryRemove(context, out InternalCallbacks entry))
            {
                entry.errorCallback(context, result);
            }
        }

        [AOT.MonoPInvokeCallback(typeof(apigen_promise_on_progress))]
        static void InternalProgress(IntPtr context, float progress)
        {
            if (s_cookieTracker.TryGetValue(context, out InternalCallbacks entry))
            {
                entry.progressCallback(progress);
            }
        }

        static ConcurrentDictionary<IntPtr, InternalCallbacks> s_cookieTracker = new ConcurrentDictionary<IntPtr, InternalCallbacks>();
        static Int64 s_cookieID = 0;

        private static PromiseCreateOptions BuildOptions<TResult>(Func<PackedValue, TResult> factory, TaskCompletionSource<TResult> taskCompletionSource, Action<float> progress)
        {
            IntPtr cookie = (IntPtr)(Interlocked.Increment(ref s_cookieID));
            InternalCallbacks internalCB = new InternalCallbacks()
            {
                completeCallback = (IntPtr context, ref PackedValue value) =>
                {
                    TResult result = factory(value);

                    taskCompletionSource.SetResult(result);
                },

                errorCallback = (IntPtr context, status result) =>
                {
                    if (result == status.Cancelled)
                    {
                        taskCompletionSource.SetCanceled();
                    }
                    else
                    {
                        // Use the TrySetException variant instead of SetException to also cover the case that the task has been disposed already
                        taskCompletionSource.TrySetException(CreateException(result));
                    }
                },

                progressCallback = progress
            };

            // This should be impossible, so we throw a general fail
            // if a key is already present in the dictionary.
            if(!s_cookieTracker.TryAdd(cookie, internalCB))
            {
                throw CreateException(status.Fail);
            }

            return new PromiseCreateOptions()
            {
                context = cookie,
                onComplete = InternalComplete,
                onError = InternalError,
                onProgress = ((progress != null) ? InternalProgress : (apigen_promise_on_progress)null)
            };
        }

#else // UNITY_EDITOR || UNITY_STANDALONE || UNITY_WSA || UNITY_ANDROID

        // plain C# version
        private static PromiseCreateOptions BuildOptions<TResult>(Func<PackedValue, TResult> factory, TaskCompletionSource<TResult> taskCompletionSource, Action<float> progress)
        {
            return new PromiseCreateOptions()
            {
                context = IntPtr.Zero,
                onComplete = (IntPtr context, ref PackedValue value) =>
                {
                    TResult result = factory(value);

                    taskCompletionSource.SetResult(result);
                },
                onError = (IntPtr context, status result) =>
                {
                    if (result == status.Cancelled)
                    {
                        taskCompletionSource.SetCanceled();
                    }
                    else
                    {
                        // Use the TrySetException variant instead of SetException to also cover the case that the task has been disposed already
                        taskCompletionSource.TrySetException(CreateException(result));
                    }
                },
                onProgress = (progress == null ? null : new apigen_promise_on_progress((_, value) => progress(value)))
            };
        }

#endif // UNITY_EDITOR || UNITY_STANDALONE || UNITY_WSA


    }
}
