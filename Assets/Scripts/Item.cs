using UnityEngine;
using UnityEngine.UI;
using System.Collections;
public class Item : MonoBehaviour
{
    AudioSource _audioSource;
    public AudioClip _audioClip;
    public GameObject _particle;

    public enum ItemType { Main, Crystal1, Crystal2, Coin, Gem, Paddle, Chest, Potion, Jug, Halo, Horse, Bear, Ornament, Starfish };

    public ItemType myType;

    public bool willSpin = true;
    public float SpinRate = 1.0f;
    public bool SpinX = false;
    public bool SpinY = false;
    public bool SpinZ = true;


    private GameObject messagePanel;
    private Text messageText;

    private Color OffColor = new Color(0, 0, 0, 0);
    private Color OnColor = new Color(0, 0, 0, 0.7f);

    private Color TextStartColor = new Color(1, 1, 1, 1);
    private Color TextEndColor = new Color(0, 0, 0, 0);

    private Image messagePanelImage;

    private string[] gemText = new string[] { "Sweet a gem! Nice find!", "Another gem! Way to go!", "Gems are awesome!" };
    private string[] crystalText = new string[] { "Sweet! You found one of the Mountain Crystals! There is another somewhere...", "Great! You found both Mountain Crystals!" };
    private string[] messages = new string[]{
    "", "", "", "", "",
    "Hmm, I wonder if there is a boat anywhere...",
    "A mystery chest that contained...",
    "Your poisoning has been healed!",
    "All stamina issues have been resolved!",
    "You have enabled the Halo to help you locate this Mountain's blood!",
    "A small, hand carved wooden horse!  What a rare find!",
    "A child's stuffed bear, this is incredibly rare to find, well done!",
    "A very old, delicately carved ornament of some kind, you are an excellent scavenger!",
    "Hmm...I believe this is a starfish, we have not seen any these in decades!"
};

    private float fadeDuration = 2f;

    private void Awake()
    {
        if (GameObject.Find("NotifyPanel") != null)
        {
            messagePanelImage = GameObject.Find("NotifyPanel").GetComponent<Image>();
            messageText = GameObject.Find("NotifyText").GetComponent<Text>();
        }


    }
    void Start()
    {
        // locate required items
        _audioSource = GetComponent<AudioSource>();

        // hide this item by default if one of these categories
        if (myType == ItemType.Potion || myType == ItemType.Jug || myType == ItemType.Halo)
        {
            EnableThisObject(false);
        }
    }

    private void HandleMessageDisplay()
    {
        // turn everything on
        messagePanelImage.color = OnColor;
        messageText.color = TextStartColor;

        //if this is a gem, pull from
        if (myType == ItemType.Gem)
        {
            messageText.text = gemText[InteractionManager.instance.levelGemCount - 1];
        }
        else if (myType == ItemType.Crystal1 || myType == ItemType.Crystal2)
        {
            messageText.text = crystalText[InteractionManager.instance.levelBonusItemScore - 1];
        }
        else
        {
            messageText.text = messages[(int)myType];
        }

        // and begin to fade it out
        StartCoroutine(Fade());
    }


    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            _audioSource.PlayOneShot(_audioClip);

            // trigger item collected
            InteractionManager.SetItemFound((int)myType);

            EnableThisObject(true);

            // dont show the display in these cases
            if (myType != ItemType.Main && myType != ItemType.Coin)
            {
                HandleMessageDisplay();
            }
            else
            {
                Destroy(gameObject, _audioClip.length);
            }
        }
    }



    IEnumerator Fade()
    {
        yield return new WaitForSeconds(4f);
        float counter = 0f;
        while (counter < fadeDuration)
        {
            counter += Time.deltaTime;
            messageText.color = Color.Lerp(TextStartColor, TextEndColor, counter);
            messagePanelImage.color = Color.Lerp(OnColor, OffColor, counter);
            // destroy once we have done everything we need to do IF this is a gem
            if (myType == ItemType.Gem)
                Destroy(gameObject, _audioClip.length);
            else
            {
                EnableThisObject(false);
            }

            yield return null;
        }
    }
    private void EnableThisObject(bool state)
    {
        Renderer[] renderers = GetComponentsInChildren<Renderer>();
        foreach (Renderer r in renderers)
            r.enabled = state;
        // disable the collider right away
        gameObject.GetComponent<SphereCollider>().enabled = state;
    }

    private void Update()
    {
        //show this object only if we are poisoned
        if (myType == ItemType.Potion && InteractionManager.instance.speedReduced)
        {
            EnableThisObject(true);
        }

        //show this object only if we have stamina, but not if we're poisoned
        if (myType == ItemType.Jug && InteractionManager.instance.hasStamina && !InteractionManager.instance.speedReduced)
        {
            EnableThisObject(true);
        }

        // if this is a mystery chest
        if (myType == ItemType.Chest)
        {
            // randomize what is found
        }
        // if this is the paddle
        if (myType == ItemType.Paddle)
        {
            // tip player to find the boat to go to bonus island
        }

        if (myType == ItemType.Halo)
        {
            if (PuzzleTimer.instance.timeMinutes > 3)
            {
                EnableThisObject(true);
            }
        }

        if (willSpin)
        {
            var spinAmount = (SpinRate * 50) * Time.deltaTime;
            transform.Rotate(SpinX ? spinAmount : 0, SpinY ? spinAmount : 0, SpinZ ? spinAmount : 0);
        }
    }
}

