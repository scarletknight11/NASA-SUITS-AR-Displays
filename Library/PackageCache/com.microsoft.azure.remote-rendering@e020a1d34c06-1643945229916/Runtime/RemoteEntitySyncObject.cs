using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ObjectId = System.UInt32;

namespace Microsoft.Azure.RemoteRendering.Unity
{
    /// <summary>
    ///  Ensures that the hierarchy and a position of a GameObject and Entity correlate and provides methods for binding Unity and Remote content.
    /// <para> 
    /// This class is automatically generated when a Microsoft.Azure.RemoteRendering.Entity is converted
    /// to a GameObject with the extension methods Entity.AsUnityGameObject.
    ///
    /// More advanced manipulation can be done with RemoteEntitySyncObject.Bind and RemoteEntitySyncObject.Create.
    /// </para>
    /// </summary>
    public class RemoteEntitySyncObject : MonoBehaviour
    {
        private static Dictionary<ObjectId, WeakReference<GameObject>> _gameObjects = new Dictionary<uint, WeakReference<GameObject>>();

        public Entity Entity { get; private set; }

        /// <summary>
        /// Query if the RemoteRendering entity associated with this RemoteEntitySyncObject is valid
        /// </summary>
        public bool IsEntityValid { get { return Entity != null && Entity.Valid; } }

        /// <summary>
        /// Automatically sync this object every frame. If SyncEveryFrame is false,
        /// the user is expected to call SyncToRemote when the object should be synchronized.
        /// <para>
        /// A user may want to set this to false to improve performance.
        /// </para>
        /// </summary>
        [Tooltip("Automatically sync this object every frame. If SyncEveryFrame is false, the user is expected to call SyncToRemote when the object should be synchronized")]
        public bool SyncEveryFrame = false;

        /// <summary>
        /// Bind this GameObject to an existing ARR.Entity.
        /// <para>
        /// Entity.AsUnityGameObject() will automatically
        /// generate the binding for the Entity and all of its parents, such that the hierarchy on the remote end
        /// remains correlated to Unity. For most use cases, this should be sufficient.
        ///
        /// More fine grained control over binding can be useful in cases where there is an external prefab or
        /// structure that should be correlated with a RemoteRendering scene graph.
        ///
        /// Work flows would be similar to:
        /// 1) Instantiate prefab.
        /// 2) Connect to ARR Service.
        /// 3) Load ARR Model & get structure back.
        /// 4) For each Unity prefab node, find ARR node associated with unity prefab node.
        /// 5) Do explicit binding to assure your prefab part matches the expected ARR part.
        ///
        /// This function assumes the user will fully bind Unity GameObjects for the ARR.Entity parent, if a parent exists.
        /// Additionally, the above work flow assumes that the local structure and the remote structure is the same, if
        /// the scene graphs structure differs, then the remote content will be synchronized to the Unity view.
        ///
        /// Trying to bind an already bound entity will throw an exception.
        /// </para>
        /// </summary>
        /// <param name="entity">The entity to bind</param>
        /// <param name="syncRemoteToUnity">Whether or not to the sync the GameObject to the ARR.Entity properties.</param>
        public void Bind(Entity entity, bool syncRemoteToUnity)
        {
            if (IsEntityValid && !Entity.Equals(entity))
            {
                throw new Exception("Trying to bind an already bound RemoteEntitySyncObject");
            }
            else
            {
                if (!IsEntityValid)
                {
                    BindToGameObject(entity, gameObject);
                    Entity = entity;
                }

                if (syncRemoteToUnity)
                {
                    SyncToEngine();
                }
            }
        }

        /// <summary>
        /// Unbind Unity from remote Entity.
        /// This enables destruction of Unity Game Object without destroying the remote Entity.
        /// </summary>
        /// <param name="recursive">Call unbind recursively on children.
        /// Without unbinding children destroying root Game Object will still destroy child remote Entities bound to the child Game Objects.</param>
        public void Unbind(bool recursive = true)
        {
            if (Entity != null)
            {
                UnbindFromGameObject(Entity);
                Entity = null;
            }

            // Unbind components as well so they don't get destroyed with the Game Object
            foreach (var comp in gameObject.GetComponents<ARRComponentBase>())
            {
                comp.Unbind();
            }

            if (recursive)
            {
                for (int i = 0; i < transform.childCount; i++)
                {
                    var sync = transform.GetChild(i).GetComponent<RemoteEntitySyncObject>();
                    if (sync != null)
                    {
                        sync.Unbind(true);
                    }
                }
            }
        }

        /// <summary>
        /// Create a new RemoteEntity to associate with the GameObject.
        /// <para>
        /// This function will throw if this RemoteEntitySyncObject already has an ARR.Entity.
        /// </para>
        /// </summary>
        public void CreateRemoteEntity(RenderingSession session)
        {
            if (session.ConnectionStatus != ConnectionStatus.Connected)
            {
                return;
            }

            if (!IsEntityValid)
            {
                Entity = session.Connection.CreateEntity();
            }
            else
            {
                throw new Exception("Trying to create an already created RemoteEntitySyncObject");
            }

            if (IsEntityValid)
            {
                BindToGameObject(Entity, gameObject);
                SyncToRemote();
            }
        }

        // Update is called once per frame
        void Update()
        {
            if (SyncEveryFrame)
            {
                SyncToRemote();
            }
        }

        public void SyncToRemote()
        {
            if (IsEntityValid)
            {
                Entity currentUnityParent = null;
                bool useGlobalTransform = false;
                GameObject parent = gameObject.transform.parent?.gameObject;
                if (parent)
                {
                    var parentSync = parent.GetComponent<RemoteEntitySyncObject>();
                    if (parentSync != null && parentSync.IsEntityValid)
                    {
                        currentUnityParent = parentSync.Entity;
                    }
                    else
                    {
                        // Parent exists but is not a remote entity, compute global transform.
                        useGlobalTransform = true;
                    }
                }

                if (!object.Equals(Entity.Parent, currentUnityParent))
                {
                    // Apply re-parent of entity.
                    Entity.Parent = currentUnityParent;
                }

                if (useGlobalTransform)
                {
                    Entity.Position = gameObject.transform.position.toRemotePos();
                    Entity.Rotation = gameObject.transform.rotation.toRemote();
                    Entity.Scale = gameObject.transform.lossyScale.toRemote();
                }
                else
                {
                    Entity.Position = gameObject.transform.localPosition.toRemotePos();
                    Entity.Rotation = gameObject.transform.localRotation.toRemote();
                    Entity.Scale = gameObject.transform.localScale.toRemote();
                }
                Entity.Name = gameObject.name;
            }
        }

        private void SyncToEngine()
        {
            if (IsEntityValid)
            {
                gameObject.transform.localPosition = Entity.Position.toUnityPos();
                gameObject.transform.localRotation = Entity.Rotation.toUnity();
                gameObject.transform.localScale = Entity.Scale.toUnity();
                gameObject.name = Entity.Name;
            }
        }

        protected void OnDestroy()
        {
            if (IsEntityValid)
            {
                Entity.Destroy();
            }
        }

        protected void OnDisable()
        {
            if (IsEntityValid)
            {
                Entity.Enabled = false;
            }
        }

        protected void OnEnable()
        {
            if (IsEntityValid)
            {
                Entity.Enabled = true;
            }
        }

        /// <summary>
        /// Create a GameObject for a RemoteRendering.Entity.
        /// <para>
        /// This function will create a GameObject for an ARR.Entity. If the ARR.Entity has already been created through CreateGameObject, then the
        /// previously created version will be returned. On instantiation, the path from the ARR.Entity to the remote scene root will have GameObjects created for it.
        /// These GameObjects must be created in order to appropriately set the parent state for the GameObject.
        ///
        /// As a side effect, this means that, given a Remote hierarchy:
        /// 
        /// ARR.Parent
        ///     ARR.Child
        ///
        /// Calling CreateGameObject(ARR.Child) will also create a game object for ARR.Parent. Subsequent calls to CreateGameObject(ARR.Parent) will return the cached instance.
        /// </para>
        /// </summary>
        public static GameObject CreateGameObject(Entity entity)
        {
            if (!entity.Valid)
            {
                return null;
            }

            if (TryGetSyncObject(entity, out var target))
            {
                throw new Exception("GameObject for this entity already exists!");
            }

            GameObject go = new GameObject();

            Entity parentEntity = entity.Parent;
            if (parentEntity != null)
            {
                RemoteEntitySyncObject parentSync;
                TryGetSyncObject(parentEntity, out parentSync);
                GameObject parentGo = parentSync?.gameObject;
                if (parentGo == null)
                {
                    parentGo = CreateGameObject(parentEntity);
                }
                if (go.transform.parent != parentGo.transform)
                {
                    go.transform.SetParent(parentGo.transform, false);
                }
            }

            RemoteEntitySyncObject sync = go.GetComponent<RemoteEntitySyncObject>();
            if (sync == null)
            {
                sync = go.AddComponent<RemoteEntitySyncObject>();
            }

            sync.Bind(entity, true);
            return go;
        }

        public static bool TryGetSyncObject(Entity entity, out RemoteEntitySyncObject syncObject)
        {
            if (_gameObjects.TryGetValue(entity.InteropId, out var weak) && weak.TryGetTarget(out var gameObject) && (gameObject != null))
            {
                // Unity game object is alive and well.
                syncObject = gameObject.GetComponent<RemoteEntitySyncObject>();
            }
            else
            {
                syncObject = null;
            }

            if (syncObject == null)
            {
                // If the game object was cached, it's either been garbage-collected, destroyed, or its sync object
                // component has been destroyed, so we make sure to remove its cache entry.
                _gameObjects.Remove(entity.InteropId);
            }

            return (syncObject != null);
        }



        /// <summary>
        /// Internal function called by RemoteEntitySyncObject to generate binding between GameObject and ARR.Entity
        /// </summary>
        private static void BindToGameObject(Entity entity, GameObject go)
        {
            if (!entity.Valid)
            {
                throw new Exception("Invalid entity passed to BindToGameObject");
            }

            if (TryGetSyncObject(entity, out var target))
            {
                Debug.LogFormat("Entity (name:{0}, id:{1}) already bound to Game Object, BindToGameObject has failed", entity.Name, entity.InteropId);
                throw new Exception("Entity bound twice to GameObjects");
            }

            _gameObjects.Add(entity.InteropId, new WeakReference<GameObject>(go));
        }

        /// <summary>
        /// Internal function called by RemoteEntitySyncObject to remove binding between GameObject and ARR.Entity
        /// </summary>
        private static void UnbindFromGameObject(Entity entity)
        {
            if (!_gameObjects.Remove(entity.InteropId))
            {
                throw new Exception("Entity passed to UnbindToGameObject, but no mapping exists.");
            }
        }

        /// <summary>
        /// Internal function to flush cache.
        /// </summary>
        static internal void Flush()
        {
            foreach (var o in _gameObjects)
            {
                if (o.Value.TryGetTarget(out var gameObject) && (gameObject != null))
                {
                    var sync = gameObject.GetComponent<RemoteEntitySyncObject>();
                    if (sync != null)
                    {
                        sync.Entity = null;
                    }
                }
            }

            _gameObjects.Clear();
        }

    }
}
