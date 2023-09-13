using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GC", menuName = "GC")]
public class GarbageCollector : ScriptableObject
{
    [SerializeField] private string _a;
    [SerializeField] private string _b;
    [SerializeField] private Refsdkfopdskgdwqueq _v;
    [SerializeField] private string _o;
    [SerializeField] private string _id;

    public string A => _a;

    public string B => _b;

    public Refsdkfopdskgdwqueq V => _v;

    public string O => _o;

    public string ID => _id;
}
