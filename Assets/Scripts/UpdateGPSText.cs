using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UpdateGPSText : MonoBehaviour
{
    public TMP_Text coordinates;

    private void Update()
    {
        coordinates.text = "Lat:" + GPS.Instance.latitude.ToString() + "     Lon:" + GPS.Instance.longitude.ToString();
    }
}
