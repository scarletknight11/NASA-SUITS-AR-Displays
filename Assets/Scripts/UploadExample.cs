using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Recolude;
using RecordAndPlay;

public class UploadExample : MonoBehaviour {

    [SerializeField]
    private RecoludeConfig config;

    [SerializeField]
    private Recording recording;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(ExampleUpload());
    }

    IEnumerator ExampleUpload()
    {
        var req = config.SaveRecording(recording);
        yield return req.Run();
        if (req.Error() == null)
        {
            Debug.LogFormat("Uploaded Recordings ID: {0}", req.RecordingID());
        }
    }
}
