using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Changed the color of the attached Text to red when
/// the script is enabled and back to old color when
/// the script is disabled.
/// </summary>
public class WarningTextHandler : MonoBehaviour
{
    [SerializeField] private Text[] text;
    private List<Color> oldColor = new List<Color>();

    // This function is called when the object becomes enabled and active
    private void OnEnable()
    {
        foreach (Text text in text)
        {
            oldColor.Add(new Color(text.color.r, text.color.g, text.color.b));
            text.color = Color.red;
        }
    }



    // This function is called when the behaviour becomes disabled or inactive
    private void OnDisable()
    {
        for (int i = 0; i < text.Length; i++)
        {
            text[i].color = oldColor == null ? Color.green : oldColor[i];
        }
    }

}
