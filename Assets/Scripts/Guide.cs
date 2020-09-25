using UnityEngine;
using UnityEngine.UI;

public class Guide : MonoBehaviour
{

    private GameObject guideBook;
    private GameObject profilePage;

    private static Text guideUpdateText;
    private bool showGuide;
    private bool showProfile;

    private void Awake()
    {
        guideBook = GameObject.Find("Guide");
        profilePage = GameObject.Find("ProfilePage");
        guideUpdateText = GameObject.Find("GuideUpdate").GetComponent<Text>();

    }

    private void Start()
    {
        guideBook.SetActive(false);
        profilePage.SetActive(false);
    }

    public static void UpdateGuide(string message)
    {
        guideUpdateText.text = message;
    }


    private void Update()
    {
        guideBook.SetActive(showGuide);
        profilePage.SetActive(showProfile);
        if (ControlFreak2.CF2Input.GetKeyDown(KeyCode.G))
            showGuide = !showGuide;

        if (ControlFreak2.CF2Input.GetKeyDown(KeyCode.H))
            showProfile = !showProfile;

    }


}