﻿using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoginManager : MonoBehaviour
{
    public GameObject initialScreen;
    public GameObject loginScreen;
    public GameObject createScreen;
    public GameObject characterScreen;
    public GameObject levelScreen;
    public GameObject characterSelectButton;
    public GameObject loadScreen;
    public Text characterSelectText;

    private string[] levels = new string[] { "Isle of Noob", "Mount Ego" };
    private string selectedLevel;

    private int characterChoice = -1;

    // Start is called before the first frame update
    void Start()
    {
        loginScreen.SetActive(false);
        createScreen.SetActive(false);
        characterScreen.SetActive(false);
        levelScreen.SetActive(false);
        loadScreen.SetActive(false);
    }

    public void ShowCreateScreen()
    {
        createScreen.SetActive(true);
        initialScreen.SetActive(false);
    }

    public void ReturnCharacterScreen()
    {
        characterScreen.SetActive(true);
        levelScreen.SetActive(false);
        loginScreen.SetActive(false);
        characterSelectButton.GetComponent<Button>().interactable = false;
        characterSelectText.text = "Select Character";
    }
    public void SelectCaden()
    {
        characterChoice = 0;
        characterSelectText.text = "Confirm Caden!";
        characterSelectButton.GetComponent<Button>().interactable = true;
    }

    public void SelectMiles()
    {
        characterChoice = 1;
        characterSelectText.text = "Confirm Miles!";
        characterSelectButton.GetComponent<Button>().interactable = true;
    }
    public void SelectLuke()
    {
        characterChoice = 2;
        characterSelectText.text = "Confirm Luke!";
        characterSelectButton.GetComponent<Button>().interactable = true;
    }

    public void ShowLoginScreen()
    {
        loginScreen.SetActive(true);
        initialScreen.SetActive(false);
    }

    public void ShowCharacterScreen()
    {
        characterScreen.SetActive(true);
        loginScreen.SetActive(false);
        characterSelectButton.GetComponent<Button>().interactable = false;
        characterSelectText.text = "Select Character";
    }

    public void ShowLevelScreen()
    {
        levelScreen.SetActive(true);
        characterScreen.SetActive(false);
    }

    public void LoadLevel_1()
    {
        selectedLevel = levels[0];
        print("Load level: " + selectedLevel);
        levelScreen.SetActive(false);
        loadScreen.SetActive(true);

        SceneManager.LoadScene("IsleOfNoob");
    }

    public void ShowInitialScreen()
    {
        initialScreen.SetActive(true);
        loginScreen.SetActive(false);
        createScreen.SetActive(false);
        characterScreen.SetActive(false);
        levelScreen.SetActive(false);
    }


}
