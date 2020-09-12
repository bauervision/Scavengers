using UnityEngine;
using UnityEngine.UI;

public class Guide : MonoBehaviour
{

    private GameObject guideBook;

    private static Text guideUpdateText;
    private bool showGuide;

    private void Awake()
    {
        guideBook = GameObject.Find("Guide");
        guideUpdateText = GameObject.Find("GuideUpdate").GetComponent<Text>();

    }

    private void Start()
    {
        guideBook.SetActive(false);
    }

    public static void UpdateGuide(string message)
    {
        guideUpdateText.text = message;
    }


    private void Update()
    {
        guideBook.SetActive(showGuide);
        if (ControlFreak2.CF2Input.GetKeyDown(KeyCode.G))
        {
            showGuide = !showGuide;
        }


    }


}