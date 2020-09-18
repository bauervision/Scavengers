using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class LoginManager : MonoBehaviour
{
    public static LoginManager instance;
    public GameObject initialScreen;
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
    public Slider progressBar;



    private string[] levels = new string[] { "Isle of Noob", "Mount Ego" };
    private string selectedLevel;

    private int characterChoice = -1;

    // Start is called before the first frame update
    void Start()
    {
        instance = this;
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
        initialScreen.SetActive(false);
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
        initialScreen.SetActive(false);
    }


    public void ShowCharacterScreen()
    {
        PlayerData currentPlayer = ManagePlayerData.thisPlayer;
        createScreen.SetActive(false);
        characterScreen.SetActive(true);
        loginScreen.SetActive(false);
        characterSelectButton.SetActive(false);
        characterSelectText.text = "Select Character";
        // set things based on the loaded data
        userTitle.text = $"Welcome back {currentPlayer.name}";
        currentData.text = $"{currentPlayer.XP}\n{currentPlayer.rankString}\n{currentPlayer.greatestItem}";

    }

    public void ShowLevelScreen()
    {
        levelScreen.SetActive(true);
        characterScreen.SetActive(false);
        characterScreenNew.SetActive(false);
    }

    public void LoadLevel_1()
    {
        selectedLevel = levels[0];
        print("Load level: " + selectedLevel);
        levelScreen.SetActive(false);
        loadScreen.SetActive(true);

        StartCoroutine(LoadScene());

    }

    IEnumerator LoadScene()
    {
        yield return null;

        //Begin to load the Scene you specify
        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync("Isle Of Noob");
        //Don't let the Scene activate until you allow it to
        asyncOperation.allowSceneActivation = false;

        //When the load is still in progress, output the Text and progress bar
        while (!asyncOperation.isDone)
        {
            //Output the current progress
            progressBar.value = asyncOperation.progress;

            // Check if the load has finished
            if (asyncOperation.progress >= 0.9f)
            {
                // hide the progress bar
                progressBar.gameObject.SetActive(false);
                // //Change the Text to show the Scene is ready
                // m_Text.text = "Press the space bar to continue";
                // //Wait to you press the space key to activate the Scene
                // if (Input.GetKeyDown(KeyCode.Space))
                //     //Activate the Scene
                asyncOperation.allowSceneActivation = true;
            }

            yield return null;
        }
    }
    public void ShowInitialScreen()
    {
        initialScreen.SetActive(true);
        loginScreen.SetActive(false);
        createScreen.SetActive(false);
        characterScreen.SetActive(false);
        characterScreenNew.SetActive(false);
        levelScreen.SetActive(false);
    }

    public void ShowCharacterScreenNew()
    {
        instance.createScreen.SetActive(false);
        instance.characterScreenNew.SetActive(true);
        instance.loginScreen.SetActive(false);
        instance.characterSelectButton.SetActive(false);

    }


}
