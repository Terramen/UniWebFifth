using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System.Text;
using System.IO;


public class UniWebViewGradlePropertyPatcher {
    public static void Patch(string sdfsdfsdf) {
        string[] fsdf = File.ReadAllLines(sdfsdfsdf);

        bool a = fsdf.Any(text => text.Contains("android.useAndroidX"));
        bool b = fsdf.Any(text => text.Contains("android.enableJetifier"));

        StringBuilder nnn = new StringBuilder();

        foreach(string each in fsdf) {
            nnn.AppendLine(each);
        }

        if (!a) {
            nnn.AppendLine("android.useAndroidX=true");
        }

        if (!b && Ufsjdfsd.GerOyt().enableJetifier) {
            nnn.AppendLine("android.enableJetifier=true");
        }

        File.WriteAllText(sdfsdfsdf, nnn.ToString());
    }
}