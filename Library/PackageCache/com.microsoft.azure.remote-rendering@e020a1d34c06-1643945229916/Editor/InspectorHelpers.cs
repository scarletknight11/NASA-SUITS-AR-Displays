using System;
using System.Reflection;
using System.Collections.Generic;
using UnityEditor;
using Type = System.Type;
using UnityEngine;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    public static class InspectorHelpers
    {
        public delegate object CreateSimpleField(string name, object value, MemberInfo memberInfo, Type exactType);

        const float LargeFloat = 10e16f; //arbitrary large float
        const float LowFloat = -LargeFloat;

        static Dictionary<Type, BaseObjectInspector> _map = new Dictionary<Type, BaseObjectInspector>();
        static Dictionary<Type, CreateSimpleField> _simpleTypes = new Dictionary<Type, CreateSimpleField>();
        public static Dictionary<Type, BaseObjectInspector> Map { get { return _map; } }
        public static Dictionary<Type, CreateSimpleField> SimpleTypes { get { return _simpleTypes; } }

        static InspectorHelpers()
        {
            //Simple type field handlers
            SimpleTypes[typeof(int)] = (string name, object value, MemberInfo memberInfo, Type exactType) =>
            {
                RangeAttribute range = memberInfo.GetCustomAttribute<RangeAttribute>(false);
                if (range != null)
                {
                    if (range.min > LowFloat && range.max < LargeFloat)
                    {
                        return EditorGUILayout.IntSlider(name, (int)value, (int)range.min, (int)range.max);
                    }
                    else
                    {
                        return Math.Min(Math.Max(EditorGUILayout.IntField(name, (int)value), (int)range.min), (int)range.max);
                    }
                }
                else
                {
                    return EditorGUILayout.IntField(name, (int)value);
                }
            };

            SimpleTypes[typeof(uint)] = (string name, object value, MemberInfo memberInfo, Type exactType) =>
            {
                RangeAttribute range = memberInfo.GetCustomAttribute<RangeAttribute>(false);
                if (range != null)
                {
                    if (range.min >= 0 && range.max < int.MaxValue)
                    {
                        return EditorGUILayout.IntSlider(name, (int)value, (int)range.min, (int)range.max);
                    }
                    else
                    {
                        return Math.Min(Math.Max(EditorGUILayout.LongField(name, (uint)value), (uint)range.min), (uint)range.max);
                    }
                }
                else
                {
                    return (uint)EditorGUILayout.LongField(name, (uint)value);
                }
            };

            SimpleTypes[typeof(string)] = (string name, object value, MemberInfo memberInfo, Type exactType) => EditorGUILayout.TextField(name, (string)value);
            SimpleTypes[typeof(bool)] = (string name, object value, MemberInfo memberInfo, Type exactType) => EditorGUILayout.Toggle(name, (bool)value);
            SimpleTypes[typeof(float)] = (string name, object value, MemberInfo memberInfo, Type exactType) =>
            {
                RangeAttribute range = memberInfo.GetCustomAttribute<RangeAttribute>(false);
                if (range != null)
                {
                    if(range.min > LowFloat && range.max < LargeFloat)
                    {
                        return EditorGUILayout.Slider(name, (float)value, range.min, range.max);
                    }
                    else
                    {
                        return Mathf.Clamp(EditorGUILayout.FloatField(name, (float)value), range.min, range.max);
                    }
                }
                else
                {
                    return EditorGUILayout.FloatField(name, (float)value);
                }
            };
            SimpleTypes[typeof(double)] = (string name, object value, MemberInfo memberInfo, Type exactType) =>
            {
                RangeAttribute range = memberInfo.GetCustomAttribute<RangeAttribute>(false);
                if (range != null)
                {
                    if (range.min > LowFloat && range.max < LargeFloat)
                    {
                        return EditorGUILayout.Slider(name, (float)value, range.min, range.max);
                    }
                    else
                    {
                        return Math.Min(Math.Max(EditorGUILayout.DoubleField(name, (double)value), range.min), range.max);
                    }
                }
                else
                {
                    return EditorGUILayout.DoubleField(name, (double)value);
                }
            };
            SimpleTypes[typeof(Color4Ub)] = (string name, object value, MemberInfo memberInfo, Type exactType) => EditorGUILayout.ColorField(name, ((Color4Ub)value).toUnity()).toRemote();
            SimpleTypes[typeof(Color4)] = (string name, object value, MemberInfo memberInfo, Type exactType) => EditorGUILayout.ColorField(name, ((Color4)value).toUnity()).toRemoteColor4();
            SimpleTypes[typeof(System.Enum)] = (string name, object value, MemberInfo memberInfo, Type exactType) =>
            {
                if (exactType.IsDefined(typeof(FlagsAttribute), false))
                {
                    return EditorGUILayout.EnumFlagsField(name, (System.Enum)value);
                }
                else
                {
                    return EditorGUILayout.EnumPopup(name, (System.Enum)value);
                }
            };
            //Custom inspectors of RR objects
            Map[typeof(ObjectBase)] = BaseObjectInspector.Instance;
            Map[typeof(MeshComponent)] = MeshComponentInspector.Instance;
            Map[typeof(Material)] = MaterialInspector.Instance;
        }
    }
}
