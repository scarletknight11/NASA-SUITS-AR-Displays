using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Handles the deactivation and activation after
/// getting the IP adress from input field.
/// Activates telemetry canvas and buttons.
/// Deactivates input canvas.
/// </summary>
public class UpdateIPAndToggle : MonoBehaviour
{
    [SerializeField] private DataRequest dataRequest;
    [SerializeField] private GameObject telemetryCanvas;
    [SerializeField] private GameObject inputCanvas;
    [SerializeField] private GameObject[] buttons;

    public void UpdateIpAddress(string ip)
    {
        if (dataRequest != null && telemetryCanvas != null &&
            inputCanvas != null && buttons != null)
        {
            dataRequest.UpdateUrl(ip);
            telemetryCanvas.SetActive(true);
            inputCanvas.SetActive(false);
            foreach( GameObject button in buttons)
            {
                button.SetActive(true);
            }
        } 
        else
        {
            Debug.Log("Not all game objects are properly attached to this script");
        }
    }
}
