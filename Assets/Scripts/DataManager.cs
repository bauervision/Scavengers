using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class DataManager : MonoBehaviour
{
    public static DataManager instance;

    public GameObject ContinueButton;

    public Image saveIcon;


    public PlayerData playerData;


    private void Start()
    {
        instance = this;
        //print(Application.persistentDataPath);
        // on start, check to see if we have saved data we need to load
        if (DataSaver.CheckFirstTimeData())
        {
            print("Save file detected! Loading Data...");
            LoadSavedData();
        }
        else
        {
            print("No file detected, Loading Default Data...");
            ContinueButton.SetActive(false);

        }
    }

    ///<summary>Called from the UI: save button </smmary>
    public void SaveData()
    {
        print("Saving file...");
        DataSaver.SaveFile();

    }

    private void LoadSavedData()
    {
        playerData = DataSaver.LoadFile();

    }


    public void LoadInitialData(string pin, string name)
    {
        //TODO:load up default user data
        playerData = new PlayerData(pin, name);
        DataSaver.SaveFile();
    }



}