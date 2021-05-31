using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;


public class DataManager : MonoBehaviour {

    public PlayerData data;

    public string file = "player.txt";

    public void Save()
    {
        string json = JsonUtility.ToJson(data);
        WriteToFile(file, json);
    }

    public void Load()
    {
        data = new PlayerData();
        //string json = ReadFromFile(file);
        //JsonUtility.FromJsonOverwrite(json, data);
    }

    private void WriteToFile(string fileName, string json)
    {
        string path = GetFilePath(fileName);
        FileStream filestream = new FileStream(path, FileMode.Create);

        using (StreamWriter writer = new StreamWriter(filestream))
        {
            writer.Write(json);
        }
    }

    //private void ReadFromFile(string fileName)
    //{
    //    string path = GetFilePath(fileName);
    //    if (File.Exists(path))
    //    {
    //        using (StreamReader reader = new StreamReader(path))
    //        {
    //            string json = reader.ReadToEnd();
    //            return json;
    //        }
    //    }
    //    else
    //        Debug.LogWarning("File not found!");
        
    //    //return "";
    //}

    private string GetFilePath(string fileName)
    {
        return Application.persistentDataPath + "/" + fileName;
    }

}
