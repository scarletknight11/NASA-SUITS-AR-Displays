using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour{

    public GameObject testtype;

    // Start is called before the first frame update
    void Start()
    {
        testtype.SetActive(false);
    }

    public void appear()
    {
        testtype.SetActive(true);
    }


}
