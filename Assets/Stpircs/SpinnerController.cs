using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;

public class SpinnerController : MonoBehaviour
{
    public Transform spinner; // The transform of the spinner GameObject.
    public int numberOfSections = 6; // Number of sections in your roulette wheel.
    public float spinDuration = 5f; // Duration of the spin in seconds.
    public float[] _da;

    private const int _minBet = 100;
    private const int _maxBet = 2000;
    private const int _stepBet = 100;


    public TMP_Text winText;
    public TMP_Text balanceText;
    public TMP_Text betText;

    public TMP_Text bigWinText;

    public GameObject winPanel;


    private bool isSpinning = false;

    private void Start()
    {
        _da = new[] { 11f, 0.5f, 3.5f, 5.5f, 1.1f, 2f };
        // Ensure the spinner is initially stopped.
        StopSpinner();
    }

    public void SpinPressed()
    {
        if (!isSpinning)
        {
            // Start spinning when the space key is pressed.
            StartCoroutine(SpinRouletteWheel());
        }
    }

    IEnumerator SpinRouletteWheel()
    {
        isSpinning = true;
        
        var bet = int.Parse(betText.text);
        BetCoins(bet);

        // Randomly select a winning section.
        int winningSection = Random.Range(0, numberOfSections);

        // Calculate the total spin angle for the selected section.
        float sectionAngle = 360f / numberOfSections;
        float targetAngle = 360f * 10f + winningSection * sectionAngle; // Spin multiple times for effect.

        // Calculate the angular speed (degrees per second) to reach the target angle in the specified duration.
        float angularSpeed = targetAngle / spinDuration;

        float accumulatedAngle = 0f;

        // Spin the roulette wheel.
        while (accumulatedAngle < targetAngle)
        {
            float deltaAngle = angularSpeed * Time.deltaTime;
            spinner.Rotate(0f, 0f, deltaAngle);
            accumulatedAngle += deltaAngle;
            yield return null;
        }

        // Ensure the wheel ends up exactly at the target angle.
        spinner.rotation = Quaternion.Euler(0f, 0f, targetAngle);

        // Display the winning section or perform any other actions here.
        Debug.Log(" The winning section is: " + winningSection);

        Debug.Log("The winning section is: " + _da[winningSection]);

        var win = _da[winningSection];

        CalculateWin(win);
        
        Debug.Log(win == _da[0]);
        if (win == _da[0])
        {
            winPanel.SetActive(true);
            bigWinText.text = winText.text + "$";
        }

        StartCoroutine(StartCooldown());
    }

    private void StopSpinner()
    {
        // Ensure the spinner is stopped initially.
        spinner.rotation = Quaternion.identity;
    }

    private IEnumerator StartCooldown()
    {
        yield return new WaitForSeconds(0.5f);
        isSpinning = false;
    }

    private void CalculateWin(float winK)
    {
        var bet = int.Parse(betText.text);
        var balance = float.Parse(balanceText.text);

        var win = bet * winK;
        balance += win;
        balanceText.text = balance.ToString(CultureInfo.CurrentCulture);
        winText.text = win.ToString(CultureInfo.CurrentCulture);
    }

    private void BetCoins(float count)
    {
        var balance = float.Parse(balanceText.text);
        balance -= count;
        balanceText.text = balance.ToString(CultureInfo.CurrentCulture);
    }

    public void ChangeBet(int step)
    {
        var bet = int.Parse(betText.text);
        bet += step;
        if (bet > _maxBet || bet < _minBet) return;

        betText.text = bet.ToString();
    }

    public void WinPanelActivation()
    {
        winPanel.SetActive(false);
    }
}
