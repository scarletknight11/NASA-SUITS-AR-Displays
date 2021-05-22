using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class database_menu_script : MonoBehaviour
{
    public void GoToRegister()
    {
        SceneManager.LoadScene(1); // Scene #1 is the Register page. To change the order of the scenes, go to the Build settings.
    }
}
