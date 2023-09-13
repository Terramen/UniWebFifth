using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System;
using System.IO;

class Ufsjdfsd: ScriptableObject
{
    const string assetPath = "Assets/Editor/UniWebView/settings.asset";

    [SerializeField]
    internal bool usesCleartextTraffic = false;

    [SerializeField]
    internal bool writeExternalStorage = false;

    [SerializeField]
    internal bool accessFineLocation = false;

    [SerializeField]
    internal bool addsKotlin = true;

    [SerializeField]
    internal bool addsAndroidBrowser = true;

    [SerializeField]
    internal bool enableJetifier = true;

    internal static Ufsjdfsd GerOyt() {
        var settings = AssetDatabase.LoadAssetAtPath<Ufsjdfsd>(assetPath);

        if (settings == null) {
            settings = ScriptableObject.CreateInstance<Ufsjdfsd>();

            Directory.CreateDirectory("Assets/Editor/UniWebView/");
            AssetDatabase.CreateAsset(settings, assetPath);
            AssetDatabase.SaveAssets();
        }

        return settings;
    }

    internal static SerializedObject GetSerializedSettings() {
        return new SerializedObject(GerOyt());
    }
}

static class UniWebViewSettingsProvider {
    static SerializedObject settings;

    #if UNITY_2018_3_OR_NEWER
    private class Provider : SettingsProvider {
        public Provider(string path, SettingsScope scope = SettingsScope.User): base(path, scope) {}
        public override void OnGUI(string searchContext) {
            DrawPref();
        }
    }
    [SettingsProvider]
    static SettingsProvider UniWebViewPref() {
        return new Provider("Preferences/UniWebView");
    }
    #else
    [PreferenceItem("UniWebView")]
    #endif
    static void DrawPref() {
        EditorGUIUtility.labelWidth = 320;
        if (settings == null) {
            settings = Ufsjdfsd.GetSerializedSettings();
        }
        settings.Update();
        EditorGUI.BeginChangeCheck();

        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Android Manifest", EditorStyles.boldLabel);

        EditorGUI.indentLevel++;
        EditorGUILayout.PropertyField(settings.FindProperty("usesCleartextTraffic"));
        DrawDetailLabel("fsfsdfsdfdsfdsfsfsd");
        
        EditorGUILayout.PropertyField(settings.FindProperty("writeExternalStorage"));
        DrawDetailLabel("uykyjthhfgnbffghfg");

        EditorGUILayout.PropertyField(settings.FindProperty("accessFineLocation"));
        DrawDetailLabel("hmnvbndfhggergdfgfsgdfg");
        EditorGUI.indentLevel--;
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Gradle Build", EditorStyles.boldLabel);

        EditorGUI.indentLevel++;

        EditorGUILayout.PropertyField(settings.FindProperty("addsKotlin"));
        DrawDetailLabel("dfgdfhgfhjghjtyrtht");
        EditorGUILayout.PropertyField(settings.FindProperty("addsAndroidBrowser"));
        DrawDetailLabel("erterteyrtuytyfdgdfg");
        EditorGUILayout.PropertyField(settings.FindProperty("enableJetifier"));
        DrawDetailLabel("hjghjhkuyityutyyurtyrthfdhdfgh");

        EditorGUILayout.EndVertical();
        
        if (EditorGUI.EndChangeCheck()) {
            settings.ApplyModifiedProperties();
            AssetDatabase.SaveAssets();
        }
        EditorGUIUtility.labelWidth = 0;
    }

    static void DrawDetailLabel(string text) {
        EditorGUI.indentLevel++;
        EditorGUILayout.LabelField(text, EditorStyles.miniLabel);
        EditorGUI.indentLevel--;
    }
}