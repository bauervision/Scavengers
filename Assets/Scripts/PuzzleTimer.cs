using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PuzzleTimer : MonoBehaviour
{
    public static PuzzleTimer instance;
    private Text timerText;
    private float startTime;
    public bool finished = false;
    public int timeMinutes;
    public int timeSeconds;

    private void Awake()
    {
        timerText = GameObject.Find("TimerText").GetComponent<Text>();
    }
    void Start()
    {
        instance = this;
    }

    public static void StartTimer()
    {
        instance.finished = false;
        instance.startTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {

        if (finished)
            return;


        float t = Time.time - startTime;
        timeMinutes = Mathf.FloorToInt(t / 60);
        timeSeconds = Mathf.FloorToInt(t % 60);

        timerText.text = string.Format("{0:00}:{1:00}", timeMinutes, timeSeconds);
    }

}
