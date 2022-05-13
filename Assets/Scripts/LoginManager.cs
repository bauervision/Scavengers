using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class LoginManager : MonoBehaviour
{
    public static LoginManager instance;
    public GameObject initialScreen;
    public GameObject accountOptions;
    public GameObject loginScreen;
    public GameObject createScreen;
    public GameObject characterScreen;
    public GameObject characterScreenNew;
    public GameObject levelScreen;
    public GameObject characterSelectButton;
    public GameObject loadScreen;


    public Text userTitle;

    public Text characterSelectText;
    public Text currentData;

    private int characterChoice = -1;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;
        // check to see if we have a logged in user
        initialScreen.SetActive(true);
        loginScreen.SetActive(false);
        createScreen.SetActive(false);
        characterScreen.SetActive(false);
        characterScreenNew.SetActive(false);
        levelScreen.SetActive(false);
        loadScreen.SetActive(false);
        characterSelectButton.SetActive(false);

    }

    public void ShowCreateScreen()
    {
        createScreen.SetActive(true);
        accountOptions.SetActive(false);
    }

    public void ReturnCharacterScreen()
    {
        characterScreen.SetActive(true);
        levelScreen.SetActive(false);
        loginScreen.SetActive(false);
        characterSelectButton.SetActive(false);
        characterSelectText.text = "Select Character";
    }
    public void SelectCaden()
    {
        characterChoice = 0;
        characterSelectText.text = "Confirm Caden!";
        characterSelectButton.SetActive(true);
    }

    public void SelectMiles()
    {
        characterChoice = 1;
        characterSelectText.text = "Confirm Miles!";
        characterSelectButton.SetActive(true);
    }
    public void SelectLuke()
    {
        characterChoice = 2;
        characterSelectText.text = "Confirm Luke!";
        characterSelectButton.SetActive(true);
    }

    public void ShowLoginScreen()
    {
        loginScreen.SetActive(true);
        accountOptions.SetActive(false);
    }


    public void ShowCharacterScreen(PlayerData loggedInPlayerData)
    {

        if (loggedInPlayerData != null)
        {
            PlayerData currentPlayer = loggedInPlayerData;
            createScreen.SetActive(false);
            characterScreen.SetActive(true);
            loginScreen.SetActive(false);
            characterSelectButton.SetActive(false);
            characterSelectText.text = "Select Character";
            // set things based on the loaded data
            userTitle.text = $"Welcome back {currentPlayer.name}";
            currentData.text = $"{currentPlayer.XP}\n{currentPlayer.rankString}\n{currentPlayer.greatestItem}";
        }
        else
        {
            Debug.LogError("PlayerData = NULL");
        }


    }

    public void ShowLevelScreen()
    {
        levelScreen.SetActive(true);
        LevelLoader.instance.SetAvailableLevels();// trigger the available levels look up from player data
        characterScreen.SetActive(false);
        characterScreenNew.SetActive(false);
    }

    public static void LoadLevel()
    {
        instance.levelScreen.SetActive(false);
        instance.loadScreen.SetActive(true);
    }


    public void ShowaccountOptions()
    {
        accountOptions.SetActive(true);
        loginScreen.SetActive(false);
        createScreen.SetActive(false);
        characterScreen.SetActive(false);
        characterScreenNew.SetActive(false);
        levelScreen.SetActive(false);
    }

    public void ShowInitialScreen()
    {
        instance.initialScreen.SetActive(true);
        instance.accountOptions.SetActive(true);
        instance.loginScreen.SetActive(false);
        instance.createScreen.SetActive(false);
        instance.characterScreen.SetActive(false);
        instance.characterScreenNew.SetActive(false);
        instance.levelScreen.SetActive(false);
    }
    public static void AfterSignout()
    {
        instance.initialScreen.SetActive(true);
        instance.accountOptions.SetActive(true);
        instance.loginScreen.SetActive(false);
        instance.createScreen.SetActive(false);
        instance.characterScreen.SetActive(false);
        instance.characterScreenNew.SetActive(false);
        instance.levelScreen.SetActive(false);
    }

    public void ShowCharacterScreenNew()
    {
        // if (HandleFirebase.instance.thisPlayer != null)
        // {
        //print("thisPlayer = " + HandleFirebase.instance.thisPlayer.name);
        instance.createScreen.SetActive(false);
        instance.characterScreenNew.SetActive(true);
        instance.loginScreen.SetActive(false);
        instance.characterSelectButton.SetActive(false);
        // }
        // else
        // {
        //     Debug.LogError("thisPlayer = NULL");
        // }


    }


}
