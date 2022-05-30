using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 

public class spawn : MonoBehaviour {

    public Transform spawnPos;
    public GameObject spawnee;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown("space"))
        {
            Instantiate(spawnee, spawnPos.position, spawnPos.rotation);
        }
    }
    
    public void SpawnObjects()
    {
        Instantiate(spawnee, spawnPos.position, spawnPos.rotation);
    }

}
