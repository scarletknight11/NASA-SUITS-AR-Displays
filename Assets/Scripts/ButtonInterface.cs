using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonInterface : MonoBehaviour {

    public GameObject button;

    void Start()
    {
        button.SetActive(true);
    }

    public void Dissappear()
    {
        button.SetActive(false);
    }
    
}
