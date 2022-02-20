using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Reflection;
using UnityEditor;
using UnityEngine;
using Type = System.Type;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    public static class ReflectionInspector
    {
        class ScopedGuiEnable : IDisposable
        {
            public ScopedGuiEnable(bool enable)
            {
                _previousState = GUI.enabled;
                GUI.enabled = enable;
            }

            public void Dispose()
            {
                GUI.enabled = _previousState;
            }

            bool _previousState;
        }
        public delegate string GetLabel(object item);

        //Handles enumerables fields creation, creates foldout for the enumerable and each item when expanded
        public static IEnumerable CreateEnumerable(IEnumerable enumerable, string name, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged, GetLabel getLabel = null)
        {
            GUI.enabled = true;
            //Stored foldout states
            List<bool> foldoutStates = null;
            object foundObject;
            if (storage.TryGetValue(storagePath, out foundObject))
            {
                foldoutStates = foundObject as List<bool>;
            }
            if (foldoutStates == null)
            {
                foldoutStates = new List<bool>();
                storage[storagePath] = foldoutStates;
            }

            if (foldoutStates.Count == 0)
            {
                foldoutStates.Add(false);
            }

            using (var scopedEnable = new ScopedGuiEnable(true))
            {
                foldoutStates[0] = EditorGUILayout.Foldout(foldoutStates[0], name);
            }
            if (foldoutStates[0])
            {
                var enumType = enumerable.GetType();

                Array array = enumerable as Array;
                // Allow adjusting the size of an array
                if (array != null)
                {
                    int newSize = EditorGUILayout.IntField("Size", array.Length);
                    if(newSize != array.Length)
                    {
                        var newArray = Array.CreateInstance(enumType.GetElementType(), newSize);
                        Array.Copy(array, newArray, Mathf.Min(array.Length, newArray.Length));
                        enumerable = array = newArray;
                    }
                }

                int idx = 1;
                EditorGUI.indentLevel++;
                foreach (object item in enumerable)
                {
                    if (foldoutStates.Count <= idx)
                    {
                        foldoutStates.Add(false);
                    }
                    string label = getLabel != null ? getLabel(item) : (idx - 1).ToString();

                    GUILayout.BeginHorizontal();
                    using (var scopedEnable = new ScopedGuiEnable(true))
                    {
                        foldoutStates[idx] = EditorGUILayout.Foldout(foldoutStates[idx], label);
                    }

                    // Enable changing a unity object in plain array
                    if (array != null && item is UnityEngine.Object)
                    {
                        var style = new GUIStyle(GUI.skin.button);
                        style.stretchWidth = false;
                        var newItem = EditorGUILayout.ObjectField(item as UnityEngine.Object, enumType.GetElementType(), false);
                        if((object)item != newItem)
                        {
                            array.SetValue(newItem, idx - 1);
                        }
                    }

                    GUILayout.EndHorizontal();
                    if (foldoutStates[idx])
                    {
                        CreateObjectInspector(item, storage, storagePath + "[" + (idx - 1).ToString() + "]", ref fieldChanged);
                    }
                    idx++;
                }
                EditorGUI.indentLevel--;
            }

            return enumerable;
        }

        public static T CreateField<T>(T value, PropertyInfo propInfo, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged, bool singleProp = false)
        {
            return (T)CreateField(propInfo, typeof(T), value, propInfo.Name, storage, storagePath, ref fieldChanged, singleProp);
        }

        //Handles single field, calls out to other functions if field is not simple
        public static object CreateField(MemberInfo memberInfo, Type type, object value, string name, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged, bool singleProp = false, bool guiEnabled = true)
        {
            //Custom base object inspector
            var storageTag = storagePath + "." + name;
            BaseObjectInspector boi;
            if (InspectorHelpers.Map.TryGetValue(type, out boi))
            {
                var objectBase = value as ObjectBase;
                boi.CreateObjectInspector(objectBase, storage, storageTag, ref fieldChanged);
                return value;
            }

            Type baseType = type;
            if(type.IsEnum)
            {
                baseType = typeof(System.Enum);
            }

            InspectorHelpers.CreateSimpleField createSimpleField;
            if (InspectorHelpers.SimpleTypes.TryGetValue(baseType, out createSimpleField))
            {
                value = createSimpleField(name, value, memberInfo, type);
            }
            else
            {
                // In case this is called for a struct like a Float3 the value.Equals() code
                // in CreateObjectInspector would always fail as we modify the value in place.
                // Thus we create a copy here so we do not modify the original value and can compare against it.
                if (value != null && value.GetType().IsValueType)
                {
                    value = value.GetType()
                        .GetMethod("MemberwiseClone", BindingFlags.NonPublic | BindingFlags.Instance)
                        .Invoke(value, null);
                }

                var enumerable = value as IEnumerable;
                if (enumerable != null)
                {
                    value = CreateEnumerable(enumerable, name, storage, storageTag, ref fieldChanged);
                }
                else
                {
                    // Handle Unity object fields like scripts and components using the defaul field
                    if (type.IsSubclassOf(typeof(UnityEngine.Object)))
                    {
                        value = EditorGUILayout.ObjectField(name, value as UnityEngine.Object, type, true);
                    }
                    else
                    {
                        // ARR/custom class here
                        if (value == null)
                        {
                            EditorGUILayout.LabelField(name + " : null");
                        }
                        else
                        {
                            //Unknown composite object, fall back to reflection

                            GUI.enabled = guiEnabled;
                            if (!storage.ContainsKey(storageTag))
                            {
                                storage[storageTag] = singleProp; //unfold member when its the only property
                            }

                            bool result;
                            using (var scopedEnable = new ScopedGuiEnable(true))
                            {
                                result = EditorGUILayout.Foldout((bool)storage[storageTag], name);
                            }
                            if (guiEnabled) //Only allow unfold when gui is enabled
                            {
                                storage[storageTag] = result;
                                if (result)
                                {
                                    EditorGUI.indentLevel++;
                                    CreateObjectInspector(value, storage, storageTag, ref fieldChanged);
                                    EditorGUI.indentLevel--;
                                }
                            }
                        }

                    }
                }
            }
            return value;
        }

        private static void IterateOnFields(FieldInfo[] fields, object target, Dictionary<string, object> storage, string storagePath, bool singleProperty, ref bool fieldChanged)
        {
            foreach (var field in fields)
            {
                var attr = field.GetCustomAttribute<BrowsableAttribute>();
                if (attr != null && !attr.Browsable)
                {
                    continue;
                }

                GUI.enabled = true;
                var enableInSimulationAttr = field.GetCustomAttribute<EnableInSimulationAttribute>();
                if (enableInSimulationAttr != null && !Application.isPlaying)
                {
                    GUI.enabled = false;
                }

                if (field.GetCustomAttribute<DisableInSimulationAttribute>() != null && Application.isPlaying)
                {
                    GUI.enabled = false;
                }

                object value = field.GetValue(target);
                object result = CreateField(field, field.FieldType, value, field.Name, storage, storagePath, ref fieldChanged, singleProperty, GUI.enabled);

                if (result != null && (value == null || !value.Equals(result)))
                {
                    field.SetValue(target, result);
                    fieldChanged = true;
                }
            }
        }

        private static void IterateOnProperties(PropertyInfo[] props, object target, Dictionary<string, object> storage, string storagePath, bool singleProperty, ref bool fieldChanged)
        {
            foreach (var prop in props)
            {
                var browsableAttr = prop.GetCustomAttribute<BrowsableAttribute>();
                if (browsableAttr != null && !browsableAttr.Browsable)
                {
                    continue;
                }

                // skip self array index [] property
                if(prop.GetMethod.GetParameters().Length > 0)
                {
                    continue;
                }

                GUI.enabled = prop.SetMethod != null;
                var enableInSimulationAttr = prop.GetCustomAttribute<EnableInSimulationAttribute>();
                if (enableInSimulationAttr != null && !Application.isPlaying)
                {
                    GUI.enabled = false;
                }

                if (prop.GetCustomAttribute<DisableInSimulationAttribute>() != null && Application.isPlaying)
                {
                    GUI.enabled = false;
                }

                object value = prop.GetMethod.Invoke(target, null);
                object result = CreateField(prop, prop.PropertyType, value, prop.Name, storage, storagePath, ref fieldChanged, singleProperty, GUI.enabled);

                if (prop.SetMethod != null && result != null && value != null && !value.Equals(result))
                {
                    prop.SetMethod.Invoke(target, new object[] { result });
                    fieldChanged = true;
                }
            }
        }

        //Goes through public fields and properties of target and generates inspector gui for them
        public static void CreateObjectInspector(object target, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged)
        {
            GUI.enabled = true;
            if (target == null)
            {
                return;
            }

            BindingFlags flags = BindingFlags.Public | BindingFlags.Instance;
            if (!(target is ObjectBase))
            {
                flags |= BindingFlags.DeclaredOnly;
            }

            Type targetType = target.GetType();
            var fields = target.GetType().GetFields(flags);
            var properties = target.GetType().GetProperties(flags);

            int totalMembers = fields.Length + properties.Length;

            if ( target is ARRComponentBase )
            {
                var cmpBaseType = typeof(ARRComponentBase);
                var curType = targetType;
                do
                {
                    curType = curType.BaseType;
                    if( curType == null )
                    {
                        break;
                    }

                    var cmpFields = curType.GetFields(flags);
                    var cmpProperties = curType.GetProperties(flags);
                    totalMembers += cmpFields.Length + cmpProperties.Length;
                    IterateOnFields(cmpFields, target, storage, storagePath, totalMembers != 0, ref fieldChanged);
                    IterateOnProperties(cmpProperties, target, storage, storagePath, totalMembers != 0, ref fieldChanged);
                } while(curType != cmpBaseType);
            }

            IterateOnFields(fields, target, storage, storagePath, totalMembers != 0, ref fieldChanged);
            IterateOnProperties(properties, target, storage, storagePath, totalMembers != 0, ref fieldChanged);
            GUI.enabled = true;
        }
    }
}
