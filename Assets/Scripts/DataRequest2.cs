using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DataRequest2 : MonoBehaviour
{
    string url = "http://localhost:3000/api/simulation/uiastate";

    Text timer;

    Text emu1;
    Text emu2;
    Text o2_supply_pressure1;
    Text o2_supply_pressure2;
    Text ev1_supply;
    Text ev2_supply;
    Text ev2_waste;
    Text emu1_02;
    Text emu2_02;
    Text oxygen_supp_out1;
    Text oxygen_supp_out2;
    Text O2_vent;


    // Update is called once per frame
    void Update()
    {
        StartCoroutine(MakeDataRequest());
    }
    IEnumerator MakeDataRequest()
    {
        UnityWebRequest request = UnityWebRequest.Get(url);
        yield return request.SendWebRequest();

        if (request.isNetworkError || request.isHttpError)
        {
            Debug.Log("networking error");
        }
        else
        {
            var data = JsonConvert.DeserializeObject<DataResponse2>(request.downloadHandler.text);

            timer = GameObject.Find("timer").GetComponent<Text>();
            timer.text = "EVA Time: " + (data.timer.ToString()) + "";

            emu1 = GameObject.Find("emu1").GetComponent<Text>();
            emu1.text = "EMU1: " + (data.emu1.ToString());

            emu2 = GameObject.Find("emu2").GetComponent<Text>();
            emu2.text = "EMU2: " + (data.emu2.ToString());

            o2_supply_pressure1 = GameObject.Find("o2_supply_pressure1").GetComponent<Text>();
            o2_supply_pressure1.text = "EMU1 OR PRESSURE: " + (data.o2_supply_pressure1.ToString()) + "psi";

            o2_supply_pressure2 = GameObject.Find("o2_supply_pressure2").GetComponent<Text>();
            o2_supply_pressure2.text = "EMU2 OR PRESSURE: " + (data.o2_supply_pressure2.ToString()) + "psi";

            ev1_supply = GameObject.Find("ev1_supply").GetComponent<Text>();
            ev1_supply.text = "EMU2 OR PRESSURE: " + (data.ev1_supply.ToString()) + "psi";

            ev2_supply = GameObject.Find("ev2_supply").GetComponent<Text>();
            ev2_supply.text = "EMU2 OR PRESSURE: " + (data.ev2_supply.ToString()) + "psi";




        }
    }
}
