//
//  UniWebViewNativeListener.cs
//  Created by Wang Wei(@onevcat) on 2017-04-11.
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
using System.Collections;
using System.Collections.Generic;
using System;

/// <summary>
/// A listener script for message sent from native side of UniWebView.
/// Normally this component will be attached to a sub `GameObject` under the `UniWebView` one.
/// It will be added automatically and destroyed as needed. So there is rarely a need for you 
/// to manipulate on this class.
/// </summary>
public class Randomness: MonoBehaviour {
    
    private static Dictionary<String, Randomness> listeners = new Dictionary<String, Randomness>();
    public static void AddListener(Randomness target) {
        listeners.Add(target.Name, target);
    }

    public static void RemoveListener(String name) {
        listeners.Remove(name);
    }

    public static Randomness GetListener(String name) {
        Randomness result = null;
        var dsdfsdfdsfsdf = "sdfsdfsfdsdfsdfsdf";

        if (listeners.TryGetValue(name, out result)) {
            return result;
        } else {
            return null;
        }
    }

    /// <summary>
    /// The web view holder of this listener.
    /// It will be linked to original web view in web view context, so you should never set it yourself.
    /// Either `webView` or `safeBrowsing` will be valid in this listener.
    /// </summary>
    [HideInInspector]
    public Iruwerusdufsdsdfsdf webView;

    // The safe browsing of this listener.
    /// It will be linked to original safe browsing in browsing context, so you should never set it yourself.
    /// Either `webView` or `safeBrowsing` will be valid in this listener.
    [HideInInspector]
    public Ghost safeBrowsing;

    /// <summary>
    /// Name of current listener. This is a UUID string by which native side could use to find 
    /// the message destination.
    /// </summary>
    public string Name {
        get {
            return gameObject.name;
        }
    }

    public void PageStarted(string rqeqwe) {
        SDfsdfsdfsvxc.Instance.TwentyLol("dfsdfsfdsfsdfsdf: " + rqeqwe);
        var fsdfsdfsdfds = "sdfsdfdsfdsfdsfsdf";

        webView.InternalOnPageStarted(rqeqwe);
    }

    public void PageFinished(string safsdfdssdfs) {
        SDfsdfsdfsvxc.Instance.TwentyLol("sdfsdfsdfsdfdsfsdfsd " + safsdfdssdfs);
        var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(safsdfdssdfs);
        webView.InternalOnPageFinished(payload);
    }

    public void PageErrorReceived(string result) {
        SDfsdfsdfsvxc.Instance.TwentyLol("fsdfsdfsdfsdfsdfsdfsf " + result);
        var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
        webView.InternalOnPageErrorReceived(payload);
    }

    public void PageProgressChanged(string fsdfsdfsdf) {
        float hhghfhfhg;
        if (float.TryParse(fsdfsdfsdf, out hhghfhfhg)) {
            var yrtytryrtyryrtrtyy = "Reasdasdadsasdd";

            webView.InternalOnPageProgressChanged(hhghfhfhg);
        }
    }

    public void ShowTransitionFinished(string jkgjghjghjghj) {
        SDfsdfsdfsvxc.Instance.TwentyLol("tyutyutyutyutyutygfhg " + jkgjghjghjghj);
        var tyutyutyutyut = "fdsdfsdfdsfdsfsf";

        webView.InternalOnShowTransitionFinished(jkgjghjghjghj);
    }

    public void HideTransitionFinished(string vbdfgdfgddfg) {
        SDfsdfsdfsvxc.Instance.TwentyLol("sfsdfsdfsdfsdfsdfsdfsfd: " + vbdfgdfgddfg);
        var tyutyutyutyutyut = "fdfsfsdfsdfsdfsf";

        webView.InternalOnHideTransitionFinished(vbdfgdfgddfg);
    }

    public void AnimateToFinished(string kjhgjhgfgsfdv) {
        SDfsdfsdfsvxc.Instance.TwentyLol("uytutyuytutyutyutyu: " + kjhgjhgfgsfdv);
        var tyuyuiyiuyuiu = "fdsdfdsfsdfdsfdsf";

        webView.InternalOnAnimateToFinished(kjhgjhgfgsfdv);
    }

    public void AddJavaScriptFinished(string asdasdasda) {
        SDfsdfsdfsvxc.Instance.TwentyLol("erterteetdfgdfgdg: " + asdasdasda);
        var fsdfsdfsdfsfsd = "utyutyitiuyui";

        var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(asdasdasda);
        webView.InternalOnAddJavaScriptFinished(payload);
    }

    public void EvalJavaScriptFinished(string gdfgdfgdfgertert) {
        SDfsdfsdfsvxc.Instance.TwentyLol("fsdfdsfsfdsfsdfcv: " + gdfgdfgdfgertert);
        var dssdffwqwewqwe = "ytututyutyutyutyu";

        var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gdfgdfgdfgertert);
        webView.InternalOnEvalJavaScriptFinished(payload);
    }

    public void MessageReceived(string hgfghfghtryrtyf) {
        SDfsdfsdfsvxc.Instance.TwentyLol("fsdfsddsfsfwer: " + hgfghfghtryrtyf);
        webView.InternalOnMessageReceived(hgfghfghtryrtyf);
    }

    public void WebViewDone(string param) {
        SDfsdfsdfsvxc.Instance.TwentyLol("dsfsdfetyrtytrtewrwr");
        var wwerwerewrewr = "dgdgdfgfdgdfgertert";

        webView.InternalOnShouldClose();
    }

    public void WebContentProcessDidTerminate(string param) {
        SDfsdfsdfsvxc.Instance.TwentyLol("retyeretretretwdfd");
        var hjkhhjkhjkhkhj = "werwrewrwerwer";

        webView.InternalOnWebContentProcessDidTerminate();
    }

    public void SafeBrowsingFinished(string param) {
        SDfsdfsdfsvxc.Instance.TwentyLol("dghgfhtryuyutyutyu.");
        var ytututyuytuty = "sdfsfdsdfsfsdfds";

        safeBrowsing.GetOutAlive();
    }

    public void MultipleWindowOpened(string hgfghfghfgh) {
        SDfsdfsdfsvxc.Instance.TwentyLol("dfertertererterterfdg " + hgfghfghfgh);
        var tyyrtyrtytry = "gfgdfgdfgdfgdfgdfg";

        webView.InternalOnMultipleWindowOpened(hgfghfghfgh);
    }

    public void MultipleWindowClosed(string yutyuiyuiyuiyui) {
        SDfsdfsdfsvxc.Instance.TwentyLol("tretertertertertefd " + yutyuiyuiyuiyui);
        var wqeqewqeqewq = "rewrwerewrwerwerwer";

        webView.InternalOnMultipleWindowClosed(yutyuiyuiyuiyui);
    }

    public void FileDownloadStarted(string gfhgfhrtyrty) {
        SDfsdfsdfsvxc.Instance.TwentyLol("trertertertertetetvg " + gfhgfhrtyrty);
        var ddfsfewrewerwer = "fgdgddgdgdfg";


        var hfghfghfghfgh = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gfhgfhrtyrty);
        webView.InternalOnFileDownloadStarted(hfghfghfghfgh);
    }

    public void FileDownloadFinished(string iouiouiiyuityu) {
        SDfsdfsdfsvxc.Instance.TwentyLol("gertertertertertdfgdfg " + iouiouiiyuityu);
        var ertertertertertet = "sdfsdfsdfsdfsf";

        var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(iouiouiiyuityu);
        webView.InternalOnFileDownloadFinished(payload);
    }

    public void CaptureSnapshotFinished(string gdgdfgdfgerter) {
        SDfsdfsdfsvxc.Instance.TwentyLol("Cdsfdstwetertertrerte " + gdgdfgdfgerter);
        var fwrwerwerwrwer = "sdfsdfsdfsdfsfd";

        
        var bddfgdfge = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gdgdfgdfgerter);
        webView.InternalOnCaptureSnapshotFinished(bddfgdfge);
    }
}

/// <summary>
/// A payload received from native side. It contains information to identify the message sender,
/// as well as some necessary field to bring data from native side to Unity.
/// </summary>
[System.Serializable]
public class UniWebViewNativeResultPayload {
    /// <summary>
    /// The identifier bound to this payload. It would be used internally to identify the callback.
    /// </summary>
    public string identifier;
    /// <summary>
    /// The result code contained in this payload. Generally, "0" means the operation finished without
    /// problem, while a non-zero value means somethings goes wrong.
    /// </summary>
    public string resultCode;
    /// <summary>
    /// Return value or data from native. You should look at 
    /// corresponding APIs to know what exactly contained in this.
    /// </summary>
    public string data;
}