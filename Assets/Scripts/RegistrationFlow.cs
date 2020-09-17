using System.Collections;
using System.Collections.Generic;
using Firebase;
using UnityEngine;
using UnityEngine.UI;

public class RegistrationFlow : MonoBehaviour
{
    [SerializeField] private InputField _nameField;
    [SerializeField] private InputField _emailField;
    [SerializeField] private InputField _passwordField;
    [SerializeField] private InputField _passwordFieldConfirm;
    [SerializeField] private Button _registerUser;
    [SerializeField] private Text _newUserTitle;

    public string Name => _nameField.text;
    private string Email => _emailField.text;
    private string Password => _passwordField.text;

    public Color defaultColor = new Color(255, 255, 255);
    public Color goodColor = new Color(255, 255, 255);
    public Color highlightedColor = new Color(0, 200, 50);
    public Color redColor = new Color(255, 0, 0);

    private bool nameGood, emailGood, passwordGood, confirmedGood;



    private enum FormState { Name, Email, Password, PasswordsDontMatch, Ok };

    private FormState myForm;

    public static string staticName;

    private void Start()
    {
        //_nameField.onValueChanged.AddListener(HandleValueChanged);
        _nameField.onEndEdit.AddListener(HandleValueChanged);
        //_emailField.onValueChanged.AddListener(HandleValueChanged);
        _emailField.onEndEdit.AddListener(HandleValueChanged);
        _passwordField.onEndEdit.AddListener(HandleValueChanged);
        _passwordFieldConfirm.onValueChanged.AddListener(HandleValueChanged);

        _registerUser.onClick.AddListener(HandleRegisterUser);
        _registerUser.gameObject.SetActive(false);
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

    public static void FailedRegistration(string name)
    {
        print("Reg failed for user: " + name);

    }

    private void HandleValueChanged(string _)
    {
        ComputeState();
    }


    private void ComputeState()
    {
        if (string.IsNullOrEmpty(_nameField.text))
        {
            myForm = FormState.Name;

        }
        if (string.IsNullOrEmpty(_emailField.text))
        {
            if (_nameField.text != null)
            {
                nameGood = true;
                _newUserTitle.text = $"Welcome {Name}!";
            }

            myForm = FormState.Email;
            emailGood = true;
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


    private void TurnAllFieldsWhite()
    {
        _nameField.gameObject.GetComponent<Image>().color = nameGood ? goodColor : defaultColor;
        _emailField.gameObject.GetComponent<Image>().color = emailGood ? goodColor : defaultColor;
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
        }
    }
}
