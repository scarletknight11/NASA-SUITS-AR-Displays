#if UNITY_INPUT_SYSTEM

using System.Runtime.InteropServices;
using UnityEngine.InputSystem.Utilities;
using UnityEngine.InputSystem.LowLevel;

namespace UnityEngine.XR.MagicLeap
{
    internal static class Constants
    {
        public const int kBaseCommandSize = 8;
    }

    public enum LEDEffect
    {
        RotateCW = 0,
        RotateCCW,
        Pulse,
        PaintCW,
        PaintCCW,
        Blink
    }

    public enum LEDSpeed
    {
        Slow = 0,
        Medium,
        Fast
    }

    public enum LEDPattern
    {
        None = 0,
        Clock2,
        Clock3,
        Clock1,
        Clock4,
        Clock5,
        Clock6,
        Clock7,
        Clock8,
        Clock9,
        Clock10,
        Clock11,
        Clock12,
        Clock1And7,
        Clock2And8,
        Clock3And9,
        Clock4And10,
        Clock5And11,
        Clock6And12,
    }

    public enum LEDColor
    {
        BrightMissionRed = 0,
        PastelMissionRed,
        BrightFloridaOrange,
        PastelFloridaOrange,
        BrightLunaYellow,
        PastelLunaYellow,
        BrightNebulaPink,
        PastelNebulaPink,
        BrightCosmicPurple,
        PastelCosmicPurple,
        BrightMysticBlue,
        PastelMysticBlue,
        BrightCelestialBlue,
        PastelCelestialBlue,
        BrightShaggleGreen,
        PastelShaggleGreen,
    }

    public enum VibePattern
    {
        None = 0,
        Click,
        Bump,
        DoubleClick,
        Buzz,
        Tick,
        ForceDown,
        ForceUp,
        ForceDwell,
        SecondForceDown,
    }

    public enum VibeIntensity
    {
        Low = 0,
        Medium,
        High,
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + (sizeof(uint) * 2))]
    public struct SendControllerVibe : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'V', 'P'); } }

        internal const int kSize = Constants.kBaseCommandSize + (sizeof(uint) * 2);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        uint pattern;

        [FieldOffset(Constants.kBaseCommandSize + sizeof(uint))]
        uint intensity;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static SendControllerVibe Create(VibePattern vibePattern, VibeIntensity vibeIntensity)
        {
            return new SendControllerVibe
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                pattern = (uint)vibePattern,
                intensity = (uint)vibeIntensity
            };
        }
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + (sizeof(uint) * 3))]
    public struct SendLEDPattern : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'L', 'P'); } }

        internal const int kSize = Constants.kBaseCommandSize + (sizeof(uint) * 3);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        uint pattern;

        [FieldOffset(Constants.kBaseCommandSize + sizeof(uint))]
        uint color;

        [FieldOffset(Constants.kBaseCommandSize + (sizeof(uint) * 2))]
        uint duration;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static SendLEDPattern Create(LEDPattern ledPattern, LEDColor ledColor, uint durationMs)
        {
            return new SendLEDPattern
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                pattern = (uint)ledPattern,
                color = (uint)ledColor,
                duration = durationMs
            };
        }
    }
	
    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + (sizeof(uint) * 5))]
    public struct SendLEDEffect : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'L', 'E'); } }

        internal const int kSize = Constants.kBaseCommandSize + (sizeof(uint) * 5);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        uint effect;

        [FieldOffset(Constants.kBaseCommandSize + sizeof(uint))]
        uint speed;

        [FieldOffset(Constants.kBaseCommandSize + (sizeof(uint) * 2))]
        uint pattern;

        [FieldOffset(Constants.kBaseCommandSize + (sizeof(uint) * 3))]
        uint color;

        [FieldOffset(Constants.kBaseCommandSize + (sizeof(uint) * 4))]
        uint duration;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static SendLEDEffect Create(LEDEffect ledEffect, LEDSpeed ledSpeed, LEDPattern ledPattern, LEDColor ledColor, uint durationMs)
        {
            return new SendLEDEffect
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                effect = (uint)ledEffect,
                speed = (uint)ledSpeed,
                pattern = (uint)ledPattern,
                color = (uint)ledColor,
                duration = durationMs
            };
        }
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + sizeof(bool))]
    public struct QueryControllerEnabled : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'Q', 'C'); } }

        internal const int kSize = Constants.kBaseCommandSize + sizeof(bool);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        public bool isEnabled;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static QueryControllerEnabled Create()
        {
            return new QueryControllerEnabled
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                isEnabled = false
            };
        }
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + sizeof(bool))]
    public struct SetControllerEnabled : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'S', 'C'); } }

        internal const int kSize = Constants.kBaseCommandSize + sizeof(bool);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        bool isEnabled;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static SetControllerEnabled Create(bool enabled)
        {
            return new SetControllerEnabled
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                isEnabled = enabled
            };
        }
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + sizeof(bool))]
    public struct QueryEyesEnabled : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'Q', 'E'); } }

        internal const int kSize = Constants.kBaseCommandSize + sizeof(bool);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        public bool isEnabled;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static QueryEyesEnabled Create()
        {
            return new QueryEyesEnabled
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                isEnabled = false
            };
        }
    }

    [StructLayout(LayoutKind.Explicit, Size = Constants.kBaseCommandSize + sizeof(bool))]
    public struct SetEyesEnabled : IInputDeviceCommandInfo
    {
        public static FourCC Type { get { return new FourCC('M', 'L', 'S', 'E'); } }

        internal const int kSize = Constants.kBaseCommandSize + sizeof(bool);

        [FieldOffset(0)]
        InputDeviceCommand baseCommand;

        [FieldOffset(Constants.kBaseCommandSize)]
        bool isEnabled;

        public FourCC typeStatic
        {
            get { return Type; }
        }

        public static SetEyesEnabled Create(bool enabled)
        {
            return new SetEyesEnabled
            {
                baseCommand = new InputDeviceCommand(Type, kSize),
                isEnabled = enabled
            };
        }
    }
}
#endif