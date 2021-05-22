using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;

public class SphereController : MonoBehaviour, IMixedRealityFocusHandler 
{

    DictationHandler dictation;
    public TextMesh textDisplay;

    // Start is called before the first frame update
    void Start()
    {
        dictation = GetComponent<DictationHandler>();
    }

    public void DictationHypothesis(string text)
    {
        Debug.Log($"DictationResult: {text}");
        textDisplay.text = text;
    }

    public void DictationResult(string text)
    {
        Debug.Log($"DictationResult: {text}");
        textDisplay.text = text;
    }

    public void DictationCompleted(string text)
    {
        Debug.Log($"DictationResult: {text}");
        textDisplay.text = text;
    }

    public void DictationError(string text)
    {
        Debug.Log($"DictationResult: {text}");
        textDisplay.text = text;
    }

    public void OnFocusEnter(FocusEventData eventData)
    {
        if (dictation != null)
        {
            dictation.StartRecording();
            textDisplay.text = "Dictation starting";
        }
    }

    public void OnFocusExit(FocusEventData eventData)
    {
        if (dictation != null)
        {
            dictation.StopRecording();
            textDisplay.text = "Dictation stopped";
        }
    }

    public void ChangeColor()
    {
        Debug.Log("Command received to change color");
        textDisplay.text = "Command received to change color";
    }

    public void ChangeColorAction(BaseInputEventData data)
    {
        Debug.Log("Action started to change color");
        textDisplay.text = "Action started to change color";
    }
}
