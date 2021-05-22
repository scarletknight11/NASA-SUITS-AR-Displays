using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    public float speed = 100f;

    // Update is called once per frame
    void Update()
    {
        gameObject.transform.Rotate(Vector3.up * speed * Time.deltaTime);
    }
}
