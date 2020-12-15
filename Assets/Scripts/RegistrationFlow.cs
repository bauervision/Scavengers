using System.Collections;
using System.Collections.Generic;
using Firebase;
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;

public class RegistrationFlow : MonoBehaviour
{
    public static RegistrationFlow instance;

    [SerializeField] private InputField _nameField = null;
    [SerializeField] private InputField _emailField = null;
    [SerializeField] private InputField _passwordField = null;
    [SerializeField] private InputField _passwordFieldConfirm = null;
    [SerializeField] private Button _registerUser = null;
    [SerializeField] private Button _loginUser = null;
    [SerializeField] private Text _newUserTitle = null;
    [SerializeField] public Text _emailFormText = null;
    [SerializeField] public Text _warningText = null;


    [SerializeField] private InputField _returningEmailField = null;
    [SerializeField] private InputField _returningPasswordField = null;

    public string Name => _nameField.text;
    private string Email => _emailField.text;
    private string Password => _passwordField.text;

    private string UserEmail => _returningEmailField.text;
    private string UserPassword => _returningPasswordField.text;

    public Color defaultColor = new Color(255, 255, 255);
    public Color goodColor = new Color(255, 255, 255);
    public Color highlightedColor = new Color(0, 200, 50);
    public Color redColor = new Color(255, 0, 0);

    private Color defaultTextColor;

    private bool nameGood, emailGood, passwordGood, confirmedGood, emailBad;



    public enum FormState { Name, Email, Password, PasswordsDontMatch, Ok, ExistingEmail };

    public static FormState myForm;

    public enum ReturningFormState { Email, Password, BadEmailOrPassword, Ok };

    public static ReturningFormState myReturningForm;

    public static string staticName;

    private static string previousEmail;

    private void Start()
    {
        instance = this;

        _nameField.onEndEdit.AddListener(HandleValueChanged);
        _emailField.onEndEdit.AddListener(HandleValueChanged);
        _passwordField.onEndEdit.AddListener(HandleValueChanged);
        _passwordFieldConfirm.onValueChanged.AddListener(HandleValueChanged);

        _returningEmailField.onEndEdit.AddListener(HandleValueChangedReturning);
        _returningPasswordField.onValueChanged.AddListener(HandleValueChangedReturning);

        _registerUser.onClick.AddListener(HandleRegisterUser);
        _registerUser.gameObject.SetActive(false);

        _loginUser.onClick.AddListener(HandleLoginUser);
        _loginUser.gameObject.SetActive(false);

        // grab the default color of the email text field
        defaultTextColor = _emailFormText.gameObject.GetComponent<Text>().color;
        _warningText.text = "";
    }

    public void HandleRegisterUser()
    {
        HandleFirebase.SendNewRegistration(Name, Email, Password);
    }

    public static void SuccessfulRegistration(string name)
    {
        print("Reg was succesful with user: " + name);
        LoginManager.instance.ShowCharacterScreenNew();
    }

    public static void FailedRegistration(string email)
    {
        instance._emailFormText.text = "Email already in use! Maybe log in?";
        myForm = FormState.ExistingEmail;
        // store the failed email
        previousEmail = email;

    }

    public void HandleLoginUser()
    {
        HandleFirebase.LoginReturningUser(UserEmail, UserPassword);
    }

    public static void SuccessfulLogin(Task<PlayerData> loadedData)
    {
        print("Login was succesful with user: " + loadedData.Result.name);
        myReturningForm = ReturningFormState.Ok;

    }

    public static void FailedLogin(string email)
    {
        print("Login failed for user: " + email);
        instance._warningText.text = "Email or Password error, please try again";
        instance._loginUser.gameObject.SetActive(false);
        myReturningForm = ReturningFormState.BadEmailOrPassword;
        previousEmail = email;
        instance.emailBad = true;

    }

    private void HandleValueChanged(string _)
    {
        ComputeState();
    }

    private void HandleValueChangedReturning(string _)
    {
        ComputeReturningState();
    }


    private void ComputeState()
    {
        if (!string.IsNullOrEmpty(_nameField.text))
        {
            myForm = FormState.Name;
            nameGood = true;
            _newUserTitle.text = $"Welcome {Name}!";
        }
        if (string.IsNullOrEmpty(_emailField.text))
        {
            if (emailBad)
            {
                if (previousEmail != Email)
                {
                    emailBad = false;
                    emailGood = true;
                    previousEmail = "";
                }

            }
            else
            {
                myForm = FormState.Email;
                emailGood = true;
            }

        }
        else if (string.IsNullOrEmpty(_passwordField.text))
        {
            myForm = FormState.Password;
            passwordGood = true;
        }
        else if (_passwordField.text != _passwordFieldConfirm.text)
        {
            myForm = FormState.PasswordsDontMatch;
        }
        else
        {
            myForm = FormState.Ok;
            confirmedGood = true;
            // unlock the create button
            _registerUser.gameObject.SetActive(true);
        }


    }

    private void ComputeReturningState()
    {
        if (!string.IsNullOrEmpty(_returningEmailField.text))
        {
            myReturningForm = ReturningFormState.Email;
            if (emailBad)
            {
                if (previousEmail != UserEmail)
                {
                    emailBad = false;
                    previousEmail = "";
                    _loginUser.gameObject.SetActive(true);
                }

            }
            else
            {
                myForm = FormState.Email;
                emailGood = true;
            }

        }
        if (!string.IsNullOrEmpty(_returningPasswordField.text))
        {
            myReturningForm = ReturningFormState.Password;
        }
        else
        {
            myReturningForm = ReturningFormState.Ok;
            _warningText.text = "";

            // unlock the login button
            _loginUser.gameObject.SetActive(true);
        }


    }



    private void TurnAllFieldsWhite()
    {
        _nameField.gameObject.GetComponent<Image>().color = nameGood ? goodColor : defaultColor;
        _emailField.gameObject.GetComponent<Image>().color = (emailGood) ? goodColor : (emailBad) ? redColor : defaultColor;
        _passwordField.gameObject.GetComponent<Image>().color = passwordGood ? goodColor : defaultColor;
        _passwordFieldConfirm.gameObject.GetComponent<Image>().color = confirmedGood ? goodColor : defaultColor;
    }




    void Update()
    {

        switch (myForm)
        {
            case FormState.Name:
                {
                    TurnAllFieldsWhite();
                    _nameField.gameObject.GetComponent<Image>().color = highlightedColor;
                    break;
                }
            case FormState.Email:
                {
                    staticName = Name;
                    TurnAllFieldsWhite();
                    _emailField.gameObject.GetComponent<Image>().color = highlightedColor;
                    break;
                }
            case FormState.Password: { TurnAllFieldsWhite(); _passwordField.gameObject.GetComponent<Image>().color = highlightedColor; break; }
            case FormState.PasswordsDontMatch: { TurnAllFieldsWhite(); _passwordFieldConfirm.gameObject.GetComponent<Image>().color = redColor; break; }
            case FormState.Ok: { TurnAllFieldsWhite(); break; }//unlock the submit button
            case FormState.ExistingEmail:
                {
                    TurnAllFieldsWhite();
                    emailBad = true;
                    _emailField.gameObject.GetComponent<Image>().color = redColor;
                    _emailFormText.gameObject.GetComponent<Text>().color = redColor;
                    // lock the user fromm resubmitting bad data
                    _registerUser.gameObject.SetActive(false);
                    break;
                }//unlock the submit button
        }


        switch (myReturningForm)
        {
            case ReturningFormState.Email:
                {

                    break;
                }
            case ReturningFormState.BadEmailOrPassword:
                {
                    _returningEmailField.gameObject.GetComponent<Image>().color = redColor;
                    _returningPasswordField.gameObject.GetComponent<Image>().color = redColor;
                    break;
                }
            case ReturningFormState.Password:
                {

                    break;
                }
            case ReturningFormState.Ok:
                {
                    _returningEmailField.gameObject.GetComponent<Image>().color = defaultColor;
                    _returningPasswordField.gameObject.GetComponent<Image>().color = defaultColor;
                    break;
                }
        }
    }
}
