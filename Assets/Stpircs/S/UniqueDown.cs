using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

public class UniqueDown : MonoBehaviour
{
    private bool isSpinning = false;
    private float _spinSpeed = 800f; // Adjust this value to control the spin speed
    private Dictionary<float, int> atwm; // Scores for each section
    private int currentSection = 0;
    private int ts = 0;

    private float _offset = 5f;

    private float _sector = 22.5f;

    private float _angle;

    [SerializeField] private RectTransform _spinnerTr;
    private bool _isWorking;

    [SerializeField] private TMP_Text _coins;
    private const int JACKPOT_WIN = 2000;
    private const int BET_COUNT = 100;

    [SerializeField] private GameObject _panel;

    [SerializeField] private AudioSource _source;



    private void Awake()
    {
        atwm = new Dictionary<float, int>
        {
            { 0f, 400 },
            { 22.5f, 30 },
            { 45f, 90 },
            { 67.5f, 150 },
            { 90f, JACKPOT_WIN },
            { 112.5f, 500 },
            { 135f, 70 },
            { 157.5f, 200 },
            { 180f, 400 },
            { 202.5f, 30 },
            { 225f, 90 },
            { 247.5f, 150 },
            { 270f, JACKPOT_WIN },
            { 295.5f, 10 },
            { 315f, 70 },
            { 337.5f, 60 },
            { 360f, 400 }
        };
    }

    public void SBC()
    {
        if (!_isWorking)
        {
            StartCoroutine(SW());
        }
    }

    private IEnumerator SW()
    {
        _isWorking = true;
        if (int.Parse(_coins.text) < BET_COUNT)
        {
            _isWorking = false;
            yield break;
        }
        СС(-BET_COUNT);
        var spinTime = (float) Random.Range(4, 10);
        var spinSpeed = _spinSpeed;
        var tick = _spinSpeed / spinTime;
        while (spinTime > 0)
        {
            spinTime -= Time.deltaTime;
            spinSpeed = Mathf.Max(0f, spinSpeed - tick * Time.deltaTime);
            _spinnerTr.Rotate(Vector3.back * spinSpeed * Time.deltaTime);
            yield return null;
        }

        _angle = 360 - _spinnerTr.rotation.eulerAngles.z;
        _angle += _offset;
        var ostatok = _angle % _sector;
        _angle -= ostatok;
        _isWorking = false;
        СС(GetWinByAngle(_angle));
    }

    private void СС(int с)
    {
        var coin = int.Parse(_coins.text);
        coin += с;
        _coins.text = coin.ToString();
    }

    private int GetWinByAngle(float angle)
    {
        if (atwm.TryGetValue(angle, out var winValue))
        {
            if (winValue == JACKPOT_WIN)
            {
                StartCoroutine(PanelActivator());
            }
            return winValue;
        }
        
        return -1;
    }

    private IEnumerator PanelActivator()
    {
        _panel.SetActive(true);
        yield return new WaitForSeconds(_source.clip.length);
        _panel.SetActive(false);
    }
}
