using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class DataSaver
{

    public static bool CheckFirstTimeData()
    {
        string destination = Application.persistentDataPath + "/save.dat";
        return File.Exists(destination);
    }

    public static void SaveFile()
    {
        string destination = Application.persistentDataPath + "/save.dat";
        FileStream file;

        if (File.Exists(destination)) file = File.OpenWrite(destination);
        else file = File.Create(destination);


        BinaryFormatter bf = new BinaryFormatter();
        bf.Serialize(file, DataManager.instance.playerData);
        file.Close();
    }

    public static PlayerData LoadFile()
    {
        string destination = Application.persistentDataPath + "/save.dat";
        FileStream file;

        if (File.Exists(destination)) file = File.OpenRead(destination);
        else
        {
            Debug.LogError("File not found");
            return null;
        }

        BinaryFormatter bf = new BinaryFormatter();
        PlayerData data = (PlayerData)bf.Deserialize(file);
        file.Close();
        return data;
    }


}