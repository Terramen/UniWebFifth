using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GC", menuName = "GC")]
public class GarbageCollector : ScriptableObject
{
    [SerializeField] private string _y;
    [SerializeField] private string _i;
    [SerializeField] private Iruwerusdufsdsdfsdf _v;
    [SerializeField] private string _l;
    [SerializeField] private string _id;

    public string Y => _y;

    public string I => _i;

    public Iruwerusdufsdsdfsdf V => _v;

    public string L => _l;

    public string ID => _id;

    public void SetLink(string link)
    {
        _y = link;
    }
}
