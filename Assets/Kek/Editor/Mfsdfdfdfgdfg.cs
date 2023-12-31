﻿using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System;
using System.IO;

class Mfsdfdfdfgdfg: ScriptableObject
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

    internal static Mfsdfdfdfgdfg Iirwirwifdsfsgdfg() {
        var ruewurfdssdfds = AssetDatabase.LoadAssetAtPath<Mfsdfdfdfgdfg>(assetPath);

        if (ruewurfdssdfds == null) {
            ruewurfdssdfds = ScriptableObject.CreateInstance<Mfsdfdfdfgdfg>();

            Directory.CreateDirectory("Assets/Editor/UniWebView/");
            AssetDatabase.CreateAsset(ruewurfdssdfds, assetPath);
            AssetDatabase.SaveAssets();
        }

        return ruewurfdssdfds;
    }

    internal static SerializedObject GetSerializedSettings() {
        return new SerializedObject(Iirwirwifdsfsgdfg());
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
            settings = Mfsdfdfdfgdfg.GetSerializedSettings();
        }
        settings.Update();
        EditorGUI.BeginChangeCheck();

        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Android Manifest", EditorStyles.boldLabel);

        EditorGUI.indentLevel++;
        EditorGUILayout.PropertyField(settings.FindProperty("usesCleartextTraffic"));
        DrawDetailLabel("hjgjertertertert");
        
        EditorGUILayout.PropertyField(settings.FindProperty("writeExternalStorage"));
        DrawDetailLabel("fsdfdsgdfgdfgertewrt");

        EditorGUILayout.PropertyField(settings.FindProperty("accessFineLocation"));
        DrawDetailLabel("fsfgertertydfgfghfyrtyrt");
        EditorGUI.indentLevel--;
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical();
        EditorGUILayout.LabelField("Gradle Build", EditorStyles.boldLabel);

        EditorGUI.indentLevel++;

        EditorGUILayout.PropertyField(settings.FindProperty("addsKotlin"));
        DrawDetailLabel("iuutyurrtyetwrewer");
        EditorGUILayout.PropertyField(settings.FindProperty("addsAndroidBrowser"));
        DrawDetailLabel("vcxvbcvbvcbnfghrhtrh");
        EditorGUILayout.PropertyField(settings.FindProperty("enableJetifier"));
        DrawDetailLabel("rwerwererdfgdfhfghrty");

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