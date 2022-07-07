using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Provides methods to handle toggles for all texts inside telemetry canvas
/// </summary>
public class TelemetryTextControl : MonoBehaviour
{
    [SerializeField] private GameObject[] toggledTexts;

    public void ToggleFold()
    {
        if (toggledTexts != null)
        {
            foreach (GameObject text in toggledTexts)
            {
                text.SetActive(!text.activeSelf);
            }
        }
    }
}
