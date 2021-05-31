using UnityEngine;

public class Spawner : MonoBehaviour {

    private Vector3 SpawnPos;
    public GameObject spawnObject;
    //public Transform placeholder;
    private float newSpawnDuration = 1.0f;

    #region Singleton

    public static Spawner Instance;

    private void Awake()
    {
        Instance = this;
    }

    #endregion

    private void Start()
    {
        SpawnPos = transform.position;
        SpawnNewObject();
    }

    void SpawnNewObject()
    {
        //used to spawn gameobject in xyx positions
        Instantiate(spawnObject, SpawnPos, Quaternion.identity);
    }

    //method to spawn gameobject
    public void NewSpawnRequest()
    {
        Invoke("SpawnNewObject", newSpawnDuration);
    }
}