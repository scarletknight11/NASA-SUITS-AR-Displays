using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    public class BaseObjectInspector
    {
        static BaseObjectInspector _instance = new BaseObjectInspector();
        public static BaseObjectInspector Instance { get { return _instance; } }

        public virtual bool CreateObjectInspector(ResourceBase ob, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged)
        {
            if (ob == null || !ob.Valid)
            {
                EditorGUILayout.HelpBox("Id: " + ob?.InteropId + " object is NOT valid", MessageType.Error);
                return false;
            }
            return true;
        }

        public virtual bool CreateObjectInspector(ObjectBase ob, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged)
        {
            if (ob == null || !ob.Valid)
            {
                EditorGUILayout.HelpBox("Id: " + ob?.InteropId + " object is NOT valid", MessageType.Error);
                return false;
            }
            return true;
        }
    }

    public class MaterialInspector : BaseObjectInspector
    {
        static MaterialInspector _instance = new MaterialInspector();
        public new static MaterialInspector Instance { get { return _instance; } }

        public override bool CreateObjectInspector(ResourceBase ob, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged)
        {
            if (!base.CreateObjectInspector(ob, storage, storagePath, ref fieldChanged))
            {
                return false;
            }

            var material = ob as Material;
            if (material != null)
            {
                material.Name = ReflectionInspector.CreateField(material.Name, typeof(Material).GetProperty("Name"), storage, storagePath, ref fieldChanged);
                return true;
            }

            return false;
        }
    }

    public class MeshComponentInspector : BaseObjectInspector
    {
        static MeshComponentInspector _instance = new MeshComponentInspector();
        public new static MeshComponentInspector Instance { get { return _instance; } }

        public override bool CreateObjectInspector(ObjectBase ob, Dictionary<string, object> storage, string storagePath, ref bool fieldChanged)
        {
            if (!base.CreateObjectInspector(ob, storage, storagePath, ref fieldChanged))
            {
                return false;
            }
            var meshComponent = ob as MeshComponent;
            if (meshComponent == null)
            {
                return false;
            }
            var type = typeof(MeshComponent);

            meshComponent.Enabled = ReflectionInspector.CreateField(meshComponent.Enabled, type.GetProperty("Enabled"), storage, storagePath, ref fieldChanged);

            int idx = 0;
            ReflectionInspector.CreateEnumerable(meshComponent.Materials, "Materials", storage, storagePath, ref fieldChanged, (object item) =>
            {
                string name = idx + " : {Default material}";
                var material = (item as Material);
                var style = new GUIStyle(GUI.skin.button);
                style.stretchWidth = false;
                if (material != null)
                {
                    name = string.IsNullOrEmpty(material.Name) ? idx + " : {No name}" : material.Name;
                    if (GUILayout.Button("Remove", style))
                    {
                        meshComponent.SetMaterial(idx, null);
                    }
                }
                idx++;
                return name;
            });
            ReflectionInspector.CreateField(meshComponent.Mesh, type.GetProperty("Mesh"), storage, storagePath, ref fieldChanged);

            return true;
        }
    }
}
