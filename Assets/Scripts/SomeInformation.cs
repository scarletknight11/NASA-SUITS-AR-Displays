using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SomeInformation : MonoBehaviour
{
    string text = "";
    private TextMesh mesh = null;


    // Start is called before the first frame update
    void Start()
    {
        mesh = gameObject.GetComponent<TextMesh>();
        Office365DataHub.Manager.Instance.GetSomeInformation("https://www.microsoft.com", OnGetSomeInformationCompleted);
    }


    // Update is called once per frame
    void Update()
    {
        if (mesh != null)
        {
            mesh.text = text;
        }
    }
    private void OnGetSomeInformationCompleted(string result)
    {
        if (result.Length > 100)
        {
            text = result.Substring(0, 100);
        } 
        else
        {
            text = result;
        }
    }

}
