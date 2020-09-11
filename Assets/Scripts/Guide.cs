using UnityEngine;

public class Guide : MonoBehaviour
{

    private GameObject guideBook;
    private bool showGuide;

    private void Awake()
    {
        guideBook = GameObject.Find("Guide");

    }

    private void Start()
    {
        guideBook.SetActive(false);
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