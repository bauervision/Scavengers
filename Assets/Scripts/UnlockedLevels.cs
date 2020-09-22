using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UnlockedLevels : IEnumerable<Level>
{
    public List<Level> availableLevels;

    public UnlockedLevels()
    {
        this.availableLevels = new List<Level>();
        Level firstLevel = new Level("Isle of Noob");
        this.availableLevels.Add(firstLevel);

    }

    public IEnumerator<Level> GetEnumerator()
    {
        return availableLevels.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return availableLevels.GetEnumerator();
    }

}