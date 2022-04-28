using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using UnityEngine.UI;

public class LSAR : MonoBehaviour
{
    InputField outputArea;

    // Start is called before the first frame update
    void Start()
    {
        outputArea = GameObject.Find("OutputArea").GetComponent<InputField>();
        GameObject.Find("GetButton").GetComponent<Button>().onClick.AddListener(GetData);
    }

    void GetData() => StartCoroutine(GetData_Coroutine());

    IEnumerator GetData_Coroutine()
    {
        outputArea.text = "Loading...";
        string url = "http://192.168.1.159:8080/api/rooms";
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            yield return request.SendWebRequest();
            if (request.isNetworkError || request.isHttpError)
            {
                outputArea.text = request.error;
            }
            else
            {
                outputArea.text = request.downloadHandler.text;
            }
        }
    }
}