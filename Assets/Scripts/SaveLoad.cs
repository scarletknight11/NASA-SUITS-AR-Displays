using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SaveLoad : MonoBehaviour {

    public string theText;
    public GameObject ourNote;
    public GameObject placeHolder;
    public GameObject saveAnim;

    void Start() {
        theText = PlayerPrefs.GetString("NoteContents");
        placeHolder.GetComponent<InputField>().text = theText;
    }

    public void SaveNote() {
        theText = ourNote.GetComponent<Text>().text;
        PlayerPrefs.SetString("NoteContents", theText);
        StartCoroutine(SaveTextRoll());
    }

    IEnumerator SaveTextRoll() {
        saveAnim.GetComponent<Animator>().Play("SavedText anim");
        yield return new WaitForSeconds(1);
        saveAnim.GetComponent<Animator>().Play("New Animation");

    }

}
