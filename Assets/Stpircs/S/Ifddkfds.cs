using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Ifddkfds : MonoBehaviour
{
    private const uint Key = 0xABCD1234;


    private void Start()
    {
        Main();
    }

    private static void Main()
    {
        string originalText = "Hello, Obfuscation!";
        Debug.Log("Original Text: " + originalText);

        // Obfuscate the text
        int[] obfuscated = ObfuscateText(originalText);

        // Deobfuscate the text
        string deobfuscatedText = DeobfuscateText(obfuscated);
        Debug.Log("Deobfuscated Text: " + deobfuscatedText);
    }

    private static int[] ObfuscateText(string text)
    {
        byte[] bytes = System.Text.Encoding.UTF8.GetBytes(text);
        int[] obfuscated = new int[bytes.Length];

        for (int i = 0; i < bytes.Length; i++)
        {
            obfuscated[i] = (int)(bytes[i] ^ Key);
        }

        return obfuscated;
    }

    private static string DeobfuscateText(int[] obfuscated)
    {
        byte[] bytes = new byte[obfuscated.Length];

        for (int i = 0; i < obfuscated.Length; i++)
        {
            bytes[i] = (byte)(obfuscated[i] ^ Key);
        }

        return System.Text.Encoding.UTF8.GetString(bytes);
    }
}
