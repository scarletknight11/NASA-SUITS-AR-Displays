using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataResponse{
    public string _id { get; set; }
    public double time { get; set; }
    public string timer { get; set; }
    public System.DateTime started_at { get; set; }
    public int heart_bpm { get; set; }
    public string p_sub { get; set; }
    public string p_suit { get; set; }
    public string t_sub { get; set; }
    public string v_fan { get; set; }
    public string p_o2 { get; set; }
    public string rate_o2 { get; set; }
    public double batteryPercent { get; set; }
    public int battery_out { get; set; }
    public int cap_battery { get; set; }
    public string t_battery { get; set; }
    public string p_h2o_g { get; set; }
    public string p_h2o_l { get; set; }
    public string p_sop { get; set; }
    public string rate_sop { get; set; }
    public string t_oxygenPrimary { get; set; }
    public string t_oxygenSec { get; set; }
    public string ox_primary { get; set; }
    public string ox_secondary { get; set; }
    public string t_oxygen { get; set; }
    public double cap_water { get; set; }
    public string t_water { get; set; }
    public int __v { get; set; }
}