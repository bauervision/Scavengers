using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Level
{
    // is this level available to play?
    public bool available;

    // highest score in this level
    public int highScore;

    // have we found the 2 bonus crystals?
    public bool foundCrystal1;
    public bool foundCrystal2;
    // name of the level
    public string name;

}