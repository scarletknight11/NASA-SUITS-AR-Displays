using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class DataRequest : MonoBehaviour
{
    string url = "http://localhost:8080/api/simulationstate/1";

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

    public GameObject heartwarner;
    public GameObject psubwarning;
    public GameObject fanwarning;
    public GameObject po2;
    public GameObject rateo2;
    public GameObject batterycapwarning;
    public GameObject ph20gwarning;
    public GameObject ph20lwarning;
    public GameObject psopwarning;
    public GameObject ratesopwarning;
    public GameObject waterwarning;

    /// <summary>
    /// Modifies the url with a given new ip address
    /// </summary>
    /// <param name="ip">new ip address for url</param>
    public void UpdateUrl(string ip)
    {
        url = $"http://{ip}:8080/api/simulationstate/1";
    }

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
            var data = JsonConvert.DeserializeObject<DataResponse>(request.downloadHandler.text);

            GameObject temp;
            temp = GameObject.Find("timer");

            if (temp != null)
            {
                timer = temp.GetComponent<Text>();
                timer.text = "EVA Time: " + (data.timer.ToString()) + "";
            }

            temp = GameObject.Find("heart_bpm");
            if (temp != null)
            {
                heart_bpm = temp.GetComponent<Text>();
                heart_bpm.text = "Heart Rate: " + (data.heart_bpm.ToString()) + " BPM";
            }

            temp = GameObject.Find("p_sub");
            if (temp != null)
            {
                p_sub = temp.GetComponent<Text>();
                p_sub.text = "External Pressure: " + (data.p_sub.ToString()) + " PSIA";
            }

            temp = GameObject.Find("p_suit");
            if (temp != null)
            {
                p_suit = temp.GetComponent<Text>();
                p_suit.text = "Suit Pressure: " + (data.p_suit.ToString()) + " PSID";
            }

            temp = GameObject.Find("t_sub");
            if (temp != null)
            {
                t_sub = temp.GetComponent<Text>();
                t_sub.text = "External Temp: " + (data.t_sub.ToString()) + "F";
            }

            temp = GameObject.Find("v_fan");
            if (temp != null)
            {
                v_fan = temp.GetComponent<Text>();
                v_fan.text = "Fan: " + (data.v_fan.ToString()) + " RPM ";
            }

            temp = GameObject.Find("p_o2");
            if (temp != null)
            {
                p_o2 = temp.GetComponent<Text>();
                p_o2.text = "OYX Pressure: " + (data.p_o2.ToString()) + " PSIA";
            }

            temp = GameObject.Find("rate_o2");
            if (temp != null)
            {
                rate_o2 = temp.GetComponent<Text>();
                rate_o2.text = "OYX Rate: " + (data.rate_o2.ToString()) + " PSI/MIN";
            }

            temp = GameObject.Find("batteryPercent");
            if (temp != null)
            {
                batteryPercent = temp.GetComponent<Text>();
                string percentage = data.batteryPercent.ToString();
                batteryPercent.text = "Battery: " + (percentage.Substring(0, System.Math.Min(8, percentage.Length)) + "%");
            }

            temp = GameObject.Find("battery_out");
            if (temp != null)
            {
                battery_out = temp.GetComponent<Text>();
                battery_out.text = (data.battery_out.ToString()) + "% Battery";
            }

            temp = GameObject.Find("cap_battery");
            if (temp != null)
            {
                cap_battery = temp.GetComponent<Text>();
                cap_battery.text = "Battery Capacity: " + (data.cap_battery.ToString()) + "AMP-HR";
            }

            temp = GameObject.Find("t_battery");
            if (temp != null)
            {
                t_battery = temp.GetComponent<Text>();
                t_battery.text = "Battery Time Left: " + (data.t_battery.ToString()) + "";
            }

            temp = GameObject.Find("p_h2o_g");
            if (temp != null)
            {
                p_h2o_g = temp.GetComponent<Text>();
                p_h2o_g.text = "H20 Gas Pressure: " + (data.p_h2o_g.ToString()) + " PSIA";
            }

            temp = GameObject.Find("p_h2o_l");
            if (temp != null)
            {
                p_h2o_l = temp.GetComponent<Text>();
                p_h2o_l.text = "H20 Liquid Pressure: " + (data.p_h2o_l.ToString()) + " PSIA";
            }

            temp = GameObject.Find("p_sop");
            if (temp != null)
            {
                p_sop = temp.GetComponent<Text>();
                p_sop.text = "Secondary OYX Pressure: " + (data.p_sop.ToString()) + " PSIA";
            }

            temp = GameObject.Find("rate_sop");
            if (temp != null)
            {
                rate_sop = temp.GetComponent<Text>();
                rate_sop.text = "Secondary OYX Rate: " + (data.rate_sop.ToString()) + " PSI/MIN";
            }

            /*            t_oxygenPrimary = GameObject.Find("t_oxygenPrimary").GetComponent<Text>();
                        t_oxygenPrimary.text = "Primary OYX " + (data.t_oxygenPrimary.ToString()) + "%";*/

            /*   t_oxygenSec = GameObject.Find("t_oxygenSec").GetComponent<Text>();
               t_oxygenSec.text = "Secondary OYX " + (data.t_oxygenSec.ToString()) + "%";*/

            temp = GameObject.Find("ox_primary");
            if (temp != null)
            {
                ox_primary = temp.GetComponent<Text>();
                ox_primary.text = "Primary OYX " + (data.ox_primary.ToString()) + "%";
            }

            temp = GameObject.Find("ox_secondary");
            if (temp != null)
            {
                ox_secondary = temp.GetComponent<Text>();
                ox_secondary.text = "Secondary OYX " + (data.ox_secondary.ToString()) + "%";
            }

            temp = GameObject.Find("t_oxygen");
            if (temp != null)
            {
                t_oxygen = temp.GetComponent<Text>();
                t_oxygen.text = "Primary OYX Time: " + (data.t_oxygen.ToString()) + "";
            }

            temp = GameObject.Find("cap_water");
            if (temp != null)
            {
                cap_water = temp.GetComponent<Text>();
                cap_water.text = "Water Left: " + (data.cap_water.ToString()) + "%";
            }

            temp = GameObject.Find("t_water");
            if (temp != null)
            {
                t_water = temp.GetComponent<Text>();
                t_water.text = "H20 Time: " + (data.t_water.ToString()) + ""; 
            }

            // Warnings
            if (data.heart_bpm < 80 || data.heart_bpm > 100) {
                heartwarner.SetActive(true);
            }

            if (data.p_sub < 2 || data.p_sub > 4) {
                psubwarning.SetActive(true);
            }

            if (data.v_fan < 10000 || data.v_fan > 40000) {
                fanwarning.SetActive(true);
            }

            if (data.p_o2 < 750.0 || data.p_o2 > 950.0) {
                po2.SetActive(true);
            }

            if (data.rate_o2 < 0.5 || data.rate_o2 > 1.0) {
                rateo2.SetActive(true);
            }

            /*if (data.cap_battery < 0.0 || data.cap_battery > 30.0) {
                batterycapwarning.SetActive(true);
            }*/

            if (data.p_h2o_g < 14.0 || data.p_h2o_g > 16.0) {
                ph20gwarning.SetActive(true);
            }

            if (data.p_h2o_l < 14.0 || data.p_h2o_l > 16.0) {
                ph20lwarning.SetActive(true);
            }

            if (data.p_sop < 750.0 || data.p_sop > 950.0) {
                psopwarning.SetActive(true);
            }

            if (data.rate_sop < 0.5 || data.rate_sop > 1.0) {
                ratesopwarning.SetActive(true);
            }
        }
    }
}