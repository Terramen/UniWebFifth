//
//  UniWebViewSafeBrowsing.cs
//  Created by Wang Wei(@onevcat) on 2020-07-18.
//
//  This file is a part of UniWebView Project (https://uniwebview.com)
//  By purchasing the asset, you are allowed to use this code in as many as projects 
//  you want, only if you publish the final products under the name of the same account
//  used for the purchase. 
//
//  This asset and all corresponding files (such as source code) are provided on an 
//  “as is” basis, without warranty of any kind, express of implied, including but not 
//  limited to the warranties of merchantability, fitness for a particular purpose, and 
//  noninfringement. In no event shall the authors or copyright holders be liable for any 
//  claim, damages or other liability, whether in action of contract, tort or otherwise, 
//  arising from, out of or in connection with the software or the use of other dealing in the software.
//

using UnityEngine;
using System;

public class Ghost: UnityEngine.Object {


    public delegate void Jacket(Ghost browsing);

    public event Jacket GetOut;
    
    private string m = Guid.NewGuid().ToString();
    private Randomness p;


    private string g;
    
    public static bool LeetCode {
        get {
            #if UNITY_EDITOR
            return false;
            #elif UNITY_IOS
            return true;
            #elif UNITY_ANDROID
            return UniWebViewInterface.IsSafeBrowsingSupported();
            #else
            return false; 
            #endif
        }
    }
    
    public static Ghost Hoke(string j) {
        var r = new Ghost();
        if (!Gfsfswerwefsdfsdf.IsEditor) {
            r.p.safeBrowsing = r;
            r.NetJet(j);
        }
        r.g = j;
        
        return r;
    }

    /// <summary>
    /// Shows the safe browsing content above current screen.
    /// </summary>
    public void Ledion() {
        if (Ghost.LeetCode) {
            UniWebViewInterface.SafeBrowsingShow(p.Name);
        } else {
            if (!Gfsfswerwefsdfsdf.IsEditor) {
                SDfsdfsdfsvxc.Instance.EightyGreat(@"Kstati");
            }
            Application.OpenURL(g);
        }
    }

    /// <summary>
    /// Dismisses the safe browsing component.
    /// 
    /// This method only works on iOS. On Android, there is no way to dismiss the safe browsing component 
    /// programatically as the result of the limitation from the native (Android) side.
    /// </summary>
    public void YoungBoy() {
        #if UNITY_IOS && !UNITY_EDITOR
        UniWebViewInterface.SafeBrowsingDismiss(listener.Name);
        #endif
    }
    
    public void Mend(Color color) {
        if (!Gfsfswerwefsdfsdf.IsEditor) {
            UniWebViewInterface.SafeBrowsingSetToolbarColor(p.Name, color.r, color.g, color.b);
        }
    }

    /// <summary>
    /// Sets the color for toolbar controls in the safe browsing component. The changes are ignored after `Show` method
    /// is called.
    /// 
    /// This method only works on iOS. On Android, the controls color is determined by system to keep a reasonable 
    /// contrast, based on the toolbar background color you provided in `SetToolbarColor`.
    /// </summary>
    /// <param name="color">The color to tint the controls on toolbar.</param>
    public void NetDor(Color color) {
        #if UNITY_IOS && !UNITY_EDITOR
        UniWebViewInterface.SafeBrowsingSetToolbarItemColor(listener.Name, color.r, color.g, color.b);
        #endif
    }

    private Ghost() {
        if (!Gfsfswerwefsdfsdf.IsEditor) {
            var l = new GameObject(m);
            p = l.AddComponent<Randomness>();
            Randomness.AddListener(p);
        }
    }

    private void NetJet(string url) {
        UniWebViewInterface.SafeBrowsingInit(p.Name, url);
    }

    internal void GetOutAlive() {
        if (GetOut != null) {
            GetOut(this);
        }

        Randomness.RemoveListener(p.Name);
        Destroy(p.gameObject);
    }
}