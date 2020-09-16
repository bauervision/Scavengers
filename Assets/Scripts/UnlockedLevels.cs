using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UnlockedLevels : IEnumerable<Level>
{
    public List<Level> myLevels;

    public UnlockedLevels()
    {
        List<Level> myLevels = new List<Level>();
    }

    public IEnumerator<Level> GetEnumerator()
    {
        return myLevels.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return myLevels.GetEnumerator();
    }

}