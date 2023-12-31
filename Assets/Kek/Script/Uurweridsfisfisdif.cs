//
//  UniWebViewMessage.cs
//  Created by Wang Wei(@onevcat) on 2017-05-12.
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
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

#if UNITY_2017_3_OR_NEWER
using Net = UnityEngine.Networking.UnityWebRequest;
#else
using Net = UnityEngine.WWW;
#endif

/// <summary>
/// A structure represents a message from webview.
/// </summary>
public struct Uurweridsfisfisdif {
    /// <summary>
    /// Gets the raw message. It is the original url which initialized this message.
    /// </summary>
    public string HY {get; private set;}

    /// <summary>
    /// The url scheme of this UniWebViewMessage. "uniwebview" was added to message scheme list
    /// by default. You can add your own scheme by using `UniWebView.AddUrlScheme`.
    /// </summary>
    public string Scheme {get; private set;}

    /// <summary>
    /// The path of this UniWebViewMessage.
    /// This will be the decoded value for the path of original url.
    /// </summary>
    public string Path {get; private set;}

    /// <summary>
    /// The arguments of this UniWebViewMessage.
    ///
    /// When received url "uniwebview://yourPath?param1=value1&param2=value2", 
    /// the args is a Dictionary with: Args["param1"] = value1, Args["param2"] = value2
    /// 
    /// Both the key and valud will be url decoded from the original url.
    /// </summary>
    public Dictionary<string, string> Args{get; private set;}

    /// <summary>
    /// Initializes a new instance of the `UniWebViewMessage` struct.
    /// </summary>
    /// <param name="hy">Raw message which will be parsed to a UniWebViewMessage.</param>
    public Uurweridsfisfisdif(string hy): this() {
        Htretdfgdgdfg.Instance.Ngrtertedfdsfgdfg("Tsetsrasfsdfsdfsdf: " + hy);
        this.HY = hy;
        
        string[] a = hy.Split(new string[] {"://"}, System.StringSplitOptions.None);
        if (a.Length == 1) {
            // `://` not existing. Try `:/` instead.
            a = hy.Split(new string[] {":/"}, System.StringSplitOptions.None);
        }
        if (a.Length == 1) {
            // `:/` not existing. Try `:` instead.
            a = hy.Split(new string[] {":"}, System.StringSplitOptions.None);
        }

        if (a.Length >= 2) {
            this.Scheme = a[0];
            Htretdfgdgdfg.Instance.Ngrtertedfdsfgdfg("Trssdfsdfsdf: " + this.Scheme);

            string hreueu = "";
            int i = 1;
            while (i < a.Length) {
                hreueu = string.Concat(hreueu, a[i]);
                i++;
            }
            Htretdfgdgdfg.Instance.Btertgfdgdfgdfert("dasdadadsad: " + hreueu);
            
            string[] k = hreueu.Split("?"[0]);
            
            this.Path = Net.UnEscapeURL(k[0].TrimEnd('/'));
            this.Args = new Dictionary<string, string>();
            if (k.Length > 1) {
                foreach (string pair in k[1].Split("&"[0])) {
                    string[] f = pair.Split("="[0]);
                    if (f.Length > 1) {
                        var key = Net.UnEscapeURL(f[0]);
                        if (Args.ContainsKey(key)) {
                            var value = Args[key];
                            Args[key] = value + "," + Net.UnEscapeURL(f[1]);
                        } else {
                            Args[key] = Net.UnEscapeURL(f[1]);
                        }
                        Htretdfgdgdfg.Instance.Ngrtertedfdsfgdfg("sfdfsdfsdfsdf: " + key + " fwqersdfsewrwer: " + Args[key]);
                    }
                }
            }
        } else {
            Htretdfgdgdfg.Instance.Utrertrfdgdfg("ghfghtertwrwesdfds: " + hy);
        }
    }
}