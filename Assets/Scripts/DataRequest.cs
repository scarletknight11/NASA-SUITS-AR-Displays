using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DataRequest : MonoBehaviour
{
   string url = "http://localhost:3000/api/simulation/state";
    
   Text timer; 
   
   Text heart_bpm;
   Text p_sub;
   Text p_suit;
   Text t_sub;
   Text v_fan;
   Text p_o2;
   Text rate_o2;
   Text batteryPercent;
   Text battery_out;
   Text cap_battery;
   Text t_battery;
   Text p_h2o_g;
   Text p_h2o_l;
   Text p_sop;
   Text rate_sop;
   Text t_oxygenPrimary;
   Text t_oxygenSec;
   Text ox_primary;
   Text ox_secondary;
   Text t_oxygen;
   Text cap_water;
   Text t_water;
 
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

        }else
        {
            var data = JsonConvert.DeserializeObject<DataResponse>(request.downloadHandler.text);

            timer = GameObject.Find("timer").GetComponent<Text>();
            timer.text = "EVA Time: "+(data.timer.ToString()) + "";

            heart_bpm = GameObject.Find("heart_bpm").GetComponent<Text>();
            heart_bpm.text = "Heart Rate: " + (data.heart_bpm.ToString()) + " BPM";

            p_sub = GameObject.Find("p_sub").GetComponent<Text>();
            p_sub.text = "External Pressure: "+(data.p_sub.ToString()) + " PSIA";

            p_suit = GameObject.Find("p_suit").GetComponent<Text>();
            p_suit.text = "Suit Pressure: "+(data.p_suit.ToString()) + " PSID";

            t_sub = GameObject.Find("t_sub").GetComponent<Text>();
            t_sub.text = "External Temp: "+(data.t_sub.ToString()) + "F";

            v_fan = GameObject.Find("v_fan").GetComponent<Text>();
            v_fan.text = "Fan: "+(data.v_fan.ToString()) + " RPM ";

            p_o2 = GameObject.Find("p_o2").GetComponent<Text>();
            p_o2.text = "OYX Pressure: "+(data.p_o2.ToString()) + " PSIA";

            rate_o2 = GameObject.Find("rate_o2").GetComponent<Text>();
            rate_o2.text = "OYX Rate: "+(data.rate_o2.ToString()) + " PSI/MIN";

            batteryPercent = GameObject.Find("batteryPercent").GetComponent<Text>();
            batteryPercent.text = "Battery: "+(data.batteryPercent.ToString()) + "%";

            battery_out = GameObject.Find("battery_out").GetComponent<Text>();
            battery_out.text = (data.battery_out.ToString()) + "% Battery";

            cap_battery = GameObject.Find("cap_battery").GetComponent<Text>();
            cap_battery.text = "Battery Capacity: "+(data.cap_battery.ToString()) + "AMP-HR";

            t_battery = GameObject.Find("t_battery").GetComponent<Text>();
            t_battery.text = "Battery Time Left: "+(data.t_battery.ToString()) + "";

            p_h2o_g = GameObject.Find("p_h2o_g").GetComponent<Text>();
            p_h2o_g.text = "H20 Gas Pressure: "+(data.p_h2o_g.ToString()) + " PSIA";

            p_h2o_l = GameObject.Find("p_h2o_l").GetComponent<Text>();
            p_h2o_l.text = "H20 Liquid Pressure: "+(data.p_h2o_l.ToString()) + " PSIA";

            p_sop = GameObject.Find("p_sop").GetComponent<Text>();
            p_sop.text = "Secondary OYX Pressure: "+(data.p_sop.ToString()) + " PSIA";

            rate_sop = GameObject.Find("rate_sop").GetComponent<Text>();
            rate_sop.text = "Secondary OYX Rate: "+(data.rate_sop.ToString()) + " PSI/MIN";

            t_oxygenPrimary = GameObject.Find("t_oxygenPrimary").GetComponent<Text>();
            t_oxygenPrimary.text = "Primary OYX "+(data.t_oxygenPrimary.ToString()) + "%";

            t_oxygenSec = GameObject.Find("t_oxygenSec").GetComponent<Text>();
            t_oxygenSec.text = "Secondary OYX "+(data.t_oxygenSec.ToString()) + "%";

            ox_primary = GameObject.Find("ox_primary").GetComponent<Text>();
            ox_primary.text = "Primary OYX "+(data.ox_primary.ToString()) + "%";

            ox_secondary = GameObject.Find("ox_secondary").GetComponent<Text>();
            ox_secondary.text = "Secondary OYX "+(data.ox_secondary.ToString()) + "%";

            t_oxygen = GameObject.Find("t_oxygen").GetComponent<Text>();
            t_oxygen.text = "Primary OYX Time: "+(data.t_oxygen.ToString()) + "";

            cap_water = GameObject.Find("cap_water").GetComponent<Text>();
            cap_water.text = "Water Left: "+(data.cap_water.ToString()) + "%";

            t_water = GameObject.Find("t_water").GetComponent<Text>();
            t_water.text = "H20 Time: "+(data.t_water.ToString()) + "";

            
        }

    }
}
