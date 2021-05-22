using System.Collections;
using System.Collections.Generic;
using UnityEngine;

    public class hololenstest : MonoBehaviour
    {

        public GameObject NoteTaking;
        public GameObject MythicalSun;
        public GameObject SpinBicolor;
        public GameObject CelectialGreen;
        public GameObject Darkstrawberry;
        public GameObject Emerald;
        public GameObject Bluemarine;
        public GameObject VitalSign;
        public GameObject Pulseengine;
        public GameObject Map;

        void Start()
        {
            NoteTaking.SetActive(false);
            MythicalSun.SetActive(false);
            SpinBicolor.SetActive(false);
            CelectialGreen.SetActive(false);
            Darkstrawberry.SetActive(false);
            Emerald.SetActive(false);
            Bluemarine.SetActive(false);
            VitalSign.SetActive(false);
            Pulseengine.SetActive(false);
            Map.SetActive(false);
        }

         public void On()
         {
            NoteTaking.SetActive(true);
            MythicalSun.SetActive(true);
            SpinBicolor.SetActive(true);
            CelectialGreen.SetActive(true);
            Darkstrawberry.SetActive(true);
            Emerald.SetActive(true);
            Bluemarine.SetActive(true);
            VitalSign.SetActive(true);
            Pulseengine.SetActive(false);
            Map.SetActive(true);
        }

        public void Off()
        {
            NoteTaking.SetActive(false);
            MythicalSun.SetActive(false);
            SpinBicolor.SetActive(false);
            CelectialGreen.SetActive(false);
            Darkstrawberry.SetActive(false);
            Emerald.SetActive(false);
            Bluemarine.SetActive(false);
            VitalSign.SetActive(false);
            Pulseengine.SetActive(false);
            Map.SetActive(false);
        }
    }