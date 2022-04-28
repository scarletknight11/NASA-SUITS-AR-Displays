using System;
using UnityEngine.XR.Management;
using UnityEngine.XR.InteractionSubsystems;

namespace UnityEngine.XR.MagicLeap
{
    /// <summary>
    /// <para>
    /// Controls the lifecycle and configuration options for a Magic Leap gesture subsystem. There
    /// is only one active Magic Leap Gestures.  The event callbacks will inform code of when gesture events occur.
    /// </para>
    /// </summary>
    [DisallowMultipleComponent]
    public sealed class MagicLeapGestures : MonoBehaviour
    {
        /// <summary>
        /// Get the <c>MagicLeapGestureSubsystem</c> whose lifetime this component manages.
        /// </summary>
        public MagicLeapGestureSubsystem gestureSubsystem { get; private set; }

        /// <summary>
        /// This event is invoked whenever a <see cref="MagicLeapKeyPoseGestureEvent"/> is received by the gestures subsystem.
        /// </summary>
        public event Action<MagicLeapKeyPoseGestureEvent> onKeyPoseGestureChanged;

        /// <summary>
        /// This event is invoked whenever a <see cref="MagicLeapTouchpadGestureEvent"/> is received by the gestures subsystem.
        /// </summary>
        public event Action<MagicLeapTouchpadGestureEvent> onTouchpadGestureChanged;

        /// <summary>
        /// This event is invoked whenever a <see cref="ActivateGestureEvent"/> is received by the gestures subsystem.
        /// </summary>
        public event Action<ActivateGestureEvent> onActivate;

        [SerializeField]
        bool m_ControllerGesturesEnabled;

        [SerializeField]
        bool m_HandGesturesEnabled;

        public bool controllerGesturesEnabled
        {
            get => m_ControllerGesturesEnabled;
            set
            {
                if(m_ControllerGesturesEnabled != value)
                {
                    m_ControllerGesturesEnabled = value;
                    if (enabled && gestureSubsystem != null)
                        gestureSubsystem.ControllerGesturesEnabled = m_ControllerGesturesEnabled;
                }
            }
        }

        public bool handGesturesEnabled
        {
            get => m_HandGesturesEnabled;
            set
            {
                if (m_HandGesturesEnabled != value)
                {
                    m_HandGesturesEnabled = value;
                    if (enabled && gestureSubsystem != null)
                        gestureSubsystem.HandGesturesEnabled = m_HandGesturesEnabled;
                }
            }
        }

        void OnEnable()
        {
            gestureSubsystem = XRGeneralSettings.Instance?.Manager?.activeLoader?.GetLoadedSubsystem<XRGestureSubsystem>() as MagicLeapGestureSubsystem;
            if (gestureSubsystem != null)
            {
                gestureSubsystem.HandGesturesEnabled = m_HandGesturesEnabled;
                gestureSubsystem.ControllerGesturesEnabled = m_ControllerGesturesEnabled;
            }
        }

        void OnDisable()
        {
            if (gestureSubsystem != null)
            {
                gestureSubsystem.HandGesturesEnabled = false;
                gestureSubsystem.ControllerGesturesEnabled = false;
            }

            gestureSubsystem = null;
        }

        void Update()
        {
            if (gestureSubsystem == null || !gestureSubsystem.running)
                return;

            gestureSubsystem.Update();

            if (onKeyPoseGestureChanged != null)
            {
                foreach (var keyPoseGestureEvent in gestureSubsystem.keyPoseGestureEvents)
                    onKeyPoseGestureChanged(keyPoseGestureEvent);
            }

            if (onTouchpadGestureChanged != null)
            {
                foreach (var touchpadGestureEvent in gestureSubsystem.touchpadGestureEvents)
                    onTouchpadGestureChanged(touchpadGestureEvent);
            }

            if (onActivate != null)
            {
                foreach (var activateGestureEvent in gestureSubsystem.activateGestureEvents)
                    onActivate(activateGestureEvent);
            }
        }
    }
}
