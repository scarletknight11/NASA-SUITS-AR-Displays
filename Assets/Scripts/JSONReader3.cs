using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;

public class JSONReader3 : MonoBehaviour {

    InputField outputArea;

    void Start() {
        outputArea = GameObject.Find("OutputArea").GetComponent<InputField>();
        StartCoroutine(GetData_Coroutine());
    }

    IEnumerator GetData_Coroutine()
    {
        outputArea.text = "Loading...";
        string uri = "http://localhost:3000/api/simulation/state";
        using (UnityWebRequest request = UnityWebRequest.Get(uri))
        {
            yield return request.SendWebRequest();
            if (request.isNetworkError || request.isHttpError)
                outputArea.text = request.error;
            else
                outputArea.text = request.downloadHandler.text;
        }
    }
}
 
  
