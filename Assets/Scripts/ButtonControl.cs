using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour {

    public GameObject theText;
    public GameObject thePanel;
    public GameObject thePanel2;


    public void ClearText() {
        theText.GetComponent<InputField>().text = "";
    }

    public void CancelButton() {
        thePanel.SetActive(false);
    }

    public void CloseButton() {
        thePanel.SetActive(true);
    }

    public void QuitButton() {
        //Application.Quit();
        thePanel.SetActive(false);
        thePanel2.SetActive(false);
    }

}
