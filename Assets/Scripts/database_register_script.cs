using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class database_register_script : MonoBehaviour
{
    public InputField usernameField;
    public InputField passwordField;

    public Button submitButton;

    public void CallRegister()
    {
        StartCoroutine(Register());
    }

    IEnumerator Register()
    {
        WWWForm form = new WWWForm();
        form.AddField("username", usernameField.text);
        form.AddField("password", passwordField.text);
        WWW www = new WWW("http://localhost/sqlconnect/register.php", form);
        yield return www;

        if (www.text == "0")
        {
            Debug.Log("User created successfully.");
            UnityEngine.SceneManagement.SceneManager.LoadScene(0); // go back to the menu
        }
        else
        {
            Debug.Log("User creation failed. Error #" + www.text + " Username: " + usernameField.text + ". Password: " + passwordField.text + ".");
        }
    }

    public void VerifyInputs()
    {
        submitButton.interactable = (usernameField.text.Length >= 8 && passwordField.text.Length >= 8);
    }
}
