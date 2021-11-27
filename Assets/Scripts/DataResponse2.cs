using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DataResponse2
{
    public string _id { get; set; }
    public double time { get; set; }
    public string timer { get; set; }
    public System.DateTime started_at { get; set; }
    public string emu1 { get; set; }
    public string emu2 { get; set; }
    public double o2_supply_pressure1 { get; set; }
    public double o2_supply_pressure2 { get; set; }
    public string ev1_supply { get; set; }
    public string ev2_supply { get; set; }
    public string ev2_waste { get; set; }
    public string emu1_02 { get; set; }
    public string emu2_02 { get; set; }
    public int oxygen_supp_out1 { get; set; }
    public int oxygen_supp_out2 { get; set; }
    public string O2_vent { get; set; }
    public string depress_pump { get; set; }
    public int __v { get; set; }
}