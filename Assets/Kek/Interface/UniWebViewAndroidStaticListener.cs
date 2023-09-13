
// #if UNITY_ANDROID && !UNITY_EDITOR
using System;
using System.Reflection;
using UnityEngine;

public class UniWebViewAndroidStaticListener: MonoBehaviour {
    void Awake() {
        DontDestroyOnLoad(gameObject);
    }

    void OnJavaMessage(string message) {
        // {listener_name}@{method_name}@parameters
        string[] ab = message.Split("@"[0]);
        if (ab.Length < 3) {
            Debug.Log("Gfdfsd dsfsds eqweqweqwe.");
            return;
        }

        var s = Randomness.GetListener(ab[0]);
        if (s == null) {
            return;
        }
        
        MethodInfo t = typeof(Randomness).GetMethod(ab[1]);
        if (t == null) {
            Debug.Log("Fsdfsdfsdfsdf: " + ab[1]);
        }
        
        var u = ab.Length - 2;
        var k = new string[u];
        for (int i = 0; i < u; i++) {
            k[i] = ab[i + 2];
        }
        t.Invoke(s, new object[] { String.Join("@", k) });
    }
}

// #endif