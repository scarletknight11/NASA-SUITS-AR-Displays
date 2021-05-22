using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using LitJson;

public class Reader : MonoBehaviour {


    // Start is called before the first frame update
    IEnumerable Start() {
        WWW www = new WWW("http://localhost:3000/api/simulation/state");
        yield return www;

        TelemetryData valid = JsonUtility.FromJson<TelemetryData>(www.text);
        Debug.Log(valid.heartBPM);

        string readers = JsonUtility.ToJson(valid);
        Debug.Log(valid.id);

    }

    public class TelemetryData
    {
        public float heartBPM;
        public float psub;
        public float psuit;
        public float tsub;
        public float batterypercent;
        public int batteryout;
        public int capbattery;
        public float toxygenprimary;
        public int toxygensec;
        public int oxsecondary;
        public float capwater;
        public string id;
    }
}
