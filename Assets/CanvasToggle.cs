using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Simple class containing a method to toggle a gameobject.
/// </summary>
public class CanvasToggle : MonoBehaviour
{
    public GameObject Canvas;
    
    public void ToggleDisplay()
    {
        if(Canvas != null)
        {
            Canvas.SetActive(!Canvas.activeSelf);
        } 
    }
}
