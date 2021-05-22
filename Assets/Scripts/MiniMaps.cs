using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MiniMaps : MonoBehaviour {

    public Transform player;

    //Only Updates player of Minimap after player is moved
    void LateUpdate() {
        //Computes the Position of the Ball on Minimap
        Vector3 newPosition = player.position;
        newPosition.y = transform.position.y;
        transform.position = newPosition;
    }
}
