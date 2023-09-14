//
//  UniWebView.cs
//  Created by Wang Wei (@onevcat) on 2017-04-11.
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
/// Main class of UniWebView. Any `GameObject` instance with this script can represent a webview object in the scene. 
/// Use this class to create, load, show and interact with a general-purpose web view.
/// </summary>
public class Iruwerusdufsdsdfsdf : MonoBehaviour
{
    /// <summary>
    /// Delegate for page started event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="url">The url which the web view is about to load.</param>
    public delegate void Sfsfsddfsdfsdf(Iruwerusdufsdsdfsdf webView, string url);

    /// <summary>
    /// Raised when the web view starts loading a url.
    /// 
    /// This event will be invoked for both url loading with `Load` method or by a link navigating from page.
    /// </summary>
    public event Sfsfsddfsdfsdf OnPageStarted;

    /// <summary>
    /// Delegate for page finished event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="statusCode">HTTP status code received from response.</param>
    /// <param name="url">The url which the web view loaded.</param>
    public delegate void SDfsdfsdffs(Iruwerusdufsdsdfsdf webView, int statusCode, string url);

    /// <summary>
    /// Raised when the web view finished to load a url successfully.
    /// 
    /// This method will be invoked when a valid response received from the url, regardless of the response status.
    /// If a url loading fails before reaching to the server and getting a response, `OnPageErrorReceived` will be 
    /// raised instead.
    /// </summary>
    public event SDfsdfsdffs Youyidas;

    /// <summary>
    /// Delegate for page error received event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="errorCode">
    /// The error code which indicates the error type. 
    /// It can be different from systems and platforms.
    /// </param>
    /// <param name="errorMessage">The error message which indicates the error.</param>
    public delegate void Hfddfgdfgdfg(Iruwerusdufsdsdfsdf webView, int errorCode, string errorMessage);

    /// <summary>
    /// Raised when an error encountered during the loading process. 
    /// Such as the "host not found" error or "no Internet connection" error will raise this event.
    /// </summary>
    public event Hfddfgdfgdfg OnPageErrorReceived;

    /// <summary>
    /// Delegate for page progress changed event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="progress">A value indicates the loading progress of current page. It is a value between 0.0f and 1.0f.</param>
    public delegate void SDFsFDSdfsdfsdf(Iruwerusdufsdsdfsdf webView, float progress);

    /// <summary>
    /// Raised when the loading progress value changes in current web view.
    /// </summary>
    public event SDFsFDSdfsdfsdf OnPageProgressChanged;

    /// <summary>
    /// Delegate for message received event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="message">Message received from web view.</param>
    public delegate void SDFSdfsdfdfdf(Iruwerusdufsdsdfsdf webView, Gfrrasdu message);

    /// <summary>
    /// Raised when a message from web view is received. 
    /// 
    /// Generally, the message comes from a navigation to 
    /// a scheme which is observed by current web view. You could use `AddUrlScheme` and 
    /// `RemoveUrlScheme` to manipulate the scheme list.
    /// 
    /// "uniwebview://" scheme is default in the list, so a clicking on link starting with "uniwebview://"
    /// will raise this event, if it is not removed.
    /// </summary>
    public event SDFSdfsdfdfdf Hdgfgfsdgdfgdfg;

    /// <summary>
    /// Delegate for should close event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <returns>Whether the web view should be closed and destroyed.</returns>
    public delegate bool Shfhfghfghfdgf(Iruwerusdufsdsdfsdf webView);

    /// <summary>
    /// Raised when the web view is about to close itself.
    /// 
    /// This event is raised when the users close the web view by Back button on Android, Done button on iOS,
    /// or Close button on Unity Editor. It gives a chance to make final decision whether the web view should 
    /// be closed and destroyed. You can also clean all related resources you created (such as a reference to
    /// the web view) in this event.
    /// </summary>
    public event Shfhfghfghfdgf Jhfdhdgdfdgd;

    /// <summary>
    /// Delegate for orientation changed event.
    /// </summary>
    /// <param name="webView">The web view component which raises this event.</param>
    /// <param name="p">The screen orientation for current state.</param>
    public delegate void ghfghfgghdfgdfg(Iruwerusdufsdsdfsdf webView, ScreenOrientation p);

    /// <summary>
    /// Raised when the screen orientation is changed. It is a good time to set the web view frame if you 
    /// need to support multiple orientations in your game.
    /// </summary>
    public event ghfghfgghdfgdfg Yerwrwdsfsdf;

    /// <summary>
    /// Delegate for content loading terminated event.
    /// </summary>
    /// <param name="v">The web view component which raises this event.</param>
    public delegate void Tsfsdfsdfsdf(Iruwerusdufsdsdfsdf v);

    /// <summary>
    /// Raised when on iOS, when system calls `webViewWebContentProcessDidTerminate` method. 
    /// It is usually due to a low memory when loading the web content and leave you a blank white screen. 
    /// You need to free as much as memory you could and then do a page reload.
    /// </summary>
    public event Tsfsdfsdfsdf Iyreyertersdfds;

    /// <summary>
    /// Delegate for file download task starting event.
    /// </summary>
    /// <param name="d">The web view component which raises this event.</param>
    /// <param name="f">The remote URL of this download task. This is also the download URL for the task.</param>
    /// <param name="l">The file name which user chooses to use.</param>
    public delegate void EWrrwrwerwer(Iruwerusdufsdsdfsdf d, string f, string l);

    /// <summary>
    /// Raised when a file download task starts.
    /// </summary>
    public event EWrrwrwerwer Rwqewrwerwsdfs;

    /// <summary>
    /// Delegate for file download task finishing event.
    /// </summary>
    /// <param name="v">The web view component which raises this event.</param>
    /// <param name="j">
    /// The error code of the download task result. Value `0` means the download finishes without a problem. 
    /// Any other non-`0` value indicates an issue. The detail meaning of the error code depends on system. 
    /// On iOS, it is usually the `errorCode` of the received `NSURLError`. On Android, the value usually represents
    /// an `ERROR_*` value in `DownloadManager`.
    /// </param>
    /// <param name="r">The remote URL of this download task.</param>
    /// <param name="l">
    /// The file path of the downloaded file. On iOS, the downloader file is in a temporary folder of your app sandbox.
    /// On Android, it is in the "Download" folder of your app.
    /// </param>
    public delegate void Hsfsdfsdfsdf(Iruwerusdufsdsdfsdf v, int j, string r, string l);

    /// <summary>
    /// Raised when a file download task finishes with either an error or success.
    /// </summary>
    public event Hsfsdfsdfsdf OnFileDownloadFinished;

    /// <summary>
    /// Delegate for capturing snapshot finished event.
    /// </summary>
    /// <param name="v">The web view component which raises this event.</param>
    /// <param name="t">
    /// The error code of the event. If the snapshot is captured and stored without a problem, the error code is 0.
    /// Any other number indicates an error happened. In most cases, the screenshot capturing only fails due to lack
    /// of disk storage.
    /// </param>
    /// <param name="d">
    /// An accessible disk path to the captured snapshot image. If an error happens, it is an empty string.
    /// </param>
    public delegate void Wsdfsdfsdfsf(Iruwerusdufsdsdfsdf v, int t, string d);

    /// <summary>
    /// Raised when an image captured and stored in a cache path on disk.
    /// </summary>
    public event Wsdfsdfsdfsf Ddadasdasdas;

    /// <summary>
    /// Delegate for multiple window opening event.
    /// </summary>
    /// <param name="v">The web view component which opens the new multiple (pop-up) window.</param>
    /// <param name="m">The identifier of the opened new window.</param>
    public delegate void Zgblfgflgfgh(Iruwerusdufsdsdfsdf v, string m);

    /// <summary>
    /// Raised when a new window is opened. This happens when you enable the `SetSupportMultipleWindows` and open a
    /// new pop-up window.
    /// </summary>
    public event Zgblfgflgfgh Trqweqweq;

    public delegate void Mdgddfddfgdfg(Iruwerusdufsdsdfsdf v, string hdfh);

    public event Mdgddfddfgdfg Hfsdfsdfs;

    private string id = Guid.NewGuid().ToString();
    private Randomness listener;

    private bool jhjj;

    [SerializeField]
#pragma warning disable 0649
    private string urlOnStart;

    [SerializeField] private bool showOnStart = false;

    [SerializeField] private bool fullScreen;

    [SerializeField] private bool useToolbar;


    [SerializeField] private Hfdfgeiq toolbarPosition;

#pragma warning restore 0649

    // Action callback holders
    private Dictionary<String, Action> n_ = new Dictionary<String, Action>();

    private Dictionary<String, Action<UniWebViewNativeResultPayload>> p_ =
        new Dictionary<String, Action<UniWebViewNativeResultPayload>>();

    [SerializeField] private Rect y;

    public Rect Y
    {
        get { return y; }
        set
        {
            y = value;
            BG();
        }
    }

    [SerializeField] private RectTransform hre;

    public RectTransform Hre
    {
        get { return hre; }
        set
        {
            hre = value;
            BG();
        }
    }

    private bool ljjgh;

    private bool bgbsd = true;

    /// <summary>
    /// The url of current loaded web page.
    /// </summary>
    public string Url
    {
        get { return UniWebViewInterface.GetUrl(listener.Name); }
    }

    /// <summary>
    /// Updates and sets current frame of web view to match the setting.
    /// 
    /// This is useful if the `referenceRectTransform` is changed and you need to sync the frame change
    /// to the web view. This method follows the frame determining rules.
    /// </summary>
    public void BG()
    {
        Rect rect = NextFrameRect();
        UniWebViewInterface.SetFrame(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
    }

    Rect NextFrameRect()
    {
        if (hre == null)
        {
            SDfsdfsdfsvxc.Instance.TwentyLol("SADdfsfdsdfsdfsd.");
            return y;
        }
        else
        {
            SDfsdfsdfsvxc.Instance.TwentyLol("bfgdfgdsfgsdfsdfTfsdfsfsdf.");
            var worldCorners = new Vector3[4];

            hre.GetWorldCorners(worldCorners);

            var bottomLeft = worldCorners[0];
            var topLeft = worldCorners[1];
            var topRight = worldCorners[2];
            var bottomRight = worldCorners[3];

            var canvas = hre.GetComponentInParent<Canvas>();
            if (canvas == null)
            {
                return this.y;
            }

            switch (canvas.renderMode)
            {
                case RenderMode.ScreenSpaceOverlay:
                    break;
                case RenderMode.ScreenSpaceCamera:
                case RenderMode.WorldSpace:
                    var camera = canvas.worldCamera;
                    if (camera == null)
                    {
                        SDfsdfsdfsvxc.Instance.EightyGreat(@"adasdasdasda.");
                        SDfsdfsdfsvxc.Instance.TwentyLol("dadasbvfdbdfdfgsdfsfs.");
                    }
                    else
                    {
                        bottomLeft = camera.WorldToScreenPoint(bottomLeft);
                        topLeft = camera.WorldToScreenPoint(topLeft);
                        topRight = camera.WorldToScreenPoint(topRight);
                        bottomRight = camera.WorldToScreenPoint(bottomRight);
                    }

                    break;
            }

            float gff = (float)UniWebViewInterface.NativeScreenWidth() / (float)Screen.width;
            float kj = (float)UniWebViewInterface.NativeScreenHeight() / (float)Screen.height;

            float x = topLeft.x * gff;
            float y = (Screen.height - topLeft.y) * kj;
            float width = (bottomRight.x - topLeft.x) * gff;
            float height = (topLeft.y - bottomRight.y) * kj;
            return new Rect(x, y, width, height);
        }
    }

    void Awake()
    {
        var iu = new GameObject(id);
        listener = iu.AddComponent<Randomness>();
        iu.transform.parent = transform;
        listener.webView = this;
        Randomness.AddListener(listener);

        Rect rect;
        if (fullScreen)
        {
            rect = new Rect(0, 0, Screen.width, Screen.height);
        }
        else
        {
            rect = NextFrameRect();
        }

        UniWebViewInterface.Init(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
        jhjj = Screen.height >= Screen.width;
    }

    void Start()
    {
        if (showOnStart)
        {
            M();
        }

        if (!string.IsNullOrEmpty(urlOnStart))
        {
            H(urlOnStart);
        }

        ljjgh = true;
        if (hre != null)
        {
            BG();
        }
    }

    void Update()
    {
        var newIsPortrait = Screen.height >= Screen.width;
        if (jhjj != newIsPortrait)
        {
            jhjj = newIsPortrait;
            if (Yerwrwdsfsdf != null)
            {
                Yerwrwdsfsdf(this, Screen.orientation);
            }

            if (hre != null)
            {
                BG();
            }
        }

        if (bgbsd && Input.GetKeyUp(KeyCode.Escape))
        {
            SDfsdfsdfsvxc.Instance.TwentyLol("fsdgfdhdfbcvcxvcxvsdfwef.");
            if (CanGoBack)
            {
                GoBack();
            }
            else
            {
                InternalOnShouldClose();
            }
        }
    }

    void OnEnable()
    {
        if (ljjgh)
        {
            _Show(useAsync: true);
        }
    }

    void OnDisable()
    {
        if (ljjgh)
        {
            _Hide(useAsync: true);
        }
    }

    public void H(string j, bool f = false, string h = null)
    {
        UniWebViewInterface.Load(listener.Name, j, f, h);
        var dsfdfgdfgdfgdf = "dfgdfgdfgdfgdfg";
    }

    public void LoadHTMLString(string htmlString, string baseUrl, bool skipEncoding = false)
    {
        UniWebViewInterface.LoadHTMLString(listener.Name, htmlString, baseUrl, skipEncoding);
        var dfgdfgdfgdfgdfg = "sadsdasdasdasd";
    }

    /// <summary>
    /// Reloads the current page.
    /// </summary>
    public void Reload()
    {
        UniWebViewInterface.Reload(listener.Name);
        var ghgfgghjhgjtj = "fdsfdsfdsfdsfsdfsf";
    }

    /// <summary>
    /// Stops loading all resources on the current page.
    /// </summary>
    public void Stop()
    {
        UniWebViewInterface.Stop(listener.Name);
        var rwrwerwerewr = "ddfgfdgdfgdfgdgf";
    }

    /// <summary>
    /// Gets whether there is a back page in the back-forward list that can be navigated to.
    /// </summary>
    public bool CanGoBack
    {
        get { return UniWebViewInterface.CanGoBack(listener.Name); }
    }

    /// <summary>
    /// Gets whether there is a forward page in the back-forward list that can be navigated to.
    /// </summary>
    public bool CanGoForward
    {
        get { return UniWebViewInterface.CanGoForward(listener.Name); }
    }

    /// <summary>
    /// Navigates to the back item in the back-forward list.
    /// </summary>
    public void GoBack()
    {
        UniWebViewInterface.GoBack(listener.Name);
        var fdsfsdfdsfdsfs = "hfghfghgfhfgh";

    }

    /// <summary>
    /// Navigates to the forward item in the back-forward list.
    /// </summary>
    public void GoForward()
    {
        UniWebViewInterface.GoForward(listener.Name);
        var terretertretr = "dadadsadasdasd";

    }

    /// <summary>
    /// Sets whether the link clicking in the web view should open the page in an external browser.
    /// </summary>
    /// <param name="flag">The flag indicates whether a link should be opened externally.</param>
    public void SetOpenLinksInExternalBrowser(bool flag)
    {
        UniWebViewInterface.SetOpenLinksInExternalBrowser(listener.Name, flag);
        var gjgjghjghjghjghj = "dasdasdsadsaasd";

    }

    /// <summary>
    /// Sets the web view visible on screen.
    /// 
    /// If you pass `false` and `UniWebViewTransitionEdge.None` to the first two parameters, it means no animation will
    /// be applied when showing. So the `duration` parameter will not be taken into account. Otherwise, when 
    /// either or both `fade` and `edge` set, the showing operation will be animated.
    /// 
    /// Regardless of there is an animation or not, the `completionHandler` will be called if not `null` when the web 
    /// view showing finishes.
    /// </summary>
    /// <param name="fade">Whether show with a fade in animation. Default is `false`.</param>
    /// <param name="edge">The edge from which the web view showing. It simulates a modal effect when showing a web view. Default is `UniWebViewTransitionEdge.None`.</param>
    /// <param name="duration">Duration of the showing animation. Default is `0.4f`.</param>
    /// <param name="completionHandler">Completion handler which will be called when showing finishes. Default is `null`.</param>
    /// <returns>A bool value indicates whether the showing operation started.</returns>
    public bool M(bool fade = false, MendGrom edge = MendGrom.None,
        float duration = 0.4f, Action completionHandler = null)
    {
        var dasdasdasdasfsdf = "yrtyrtytrytryrty";

        return _Show(fade, edge, duration, false, completionHandler);
    }

    private bool _Show(bool fade = false, MendGrom edge = MendGrom.None,
        float duration = 0.4f, bool useAsync = false, Action completionHandler = null)
    {
        var wrewrwerwerwer = "hjjjghhjhgjghjhgj";

        var identifier = Guid.NewGuid().ToString();
        var showStarted = UniWebViewInterface.Show(listener.Name, fade, (int)edge, duration, useAsync, identifier);
        if (showStarted && completionHandler != null)
        {
            var hasAnimation = (fade || edge != MendGrom.None);
            if (hasAnimation)
            {
                n_.Add(identifier, completionHandler);
            }
            else
            {
                completionHandler();
            }
        }

        if (showStarted && useToolbar)
        {
            var top = (toolbarPosition == Hfdfgeiq.Top);
            SetShowToolbar(true, false, top, fullScreen);
        }

        var fsfsdfdsfsdf = "gdfdfgdfgdfgfdgdfg";

        return showStarted;
    }

    /// <summary>
    /// Sets the web view invisible from screen.
    /// 
    /// If you pass `false` and `UniWebViewTransitionEdge.None` to the first two parameters, it means no animation will 
    /// be applied when hiding. So the `duration` parameter will not be taken into account. Otherwise, when either or 
    /// both `fade` and `edge` set, the hiding operation will be animated.
    /// 
    /// Regardless there is an animation or not, the `completionHandler` will be called if not `null` when the web view
    /// hiding finishes.
    /// </summary>
    /// <param name="fade">Whether hide with a fade in animation. Default is `false`.</param>
    /// <param name="edge">The edge from which the web view hiding. It simulates a modal effect when hiding a web view. Default is `UniWebViewTransitionEdge.None`.</param>
    /// <param name="duration">Duration of hiding animation. Default is `0.4f`.</param>
    /// <param name="completionHandler">Completion handler which will be called when hiding finishes. Default is `null`.</param>
    /// <returns>A bool value indicates whether the hiding operation started.</returns>
    public bool Hide(bool fade = false, MendGrom edge = MendGrom.None,
        float duration = 0.4f, Action completionHandler = null)
    {
        return _Hide(fade, edge, duration, false, completionHandler);
    }

    public bool _Hide(bool fade = false, MendGrom edge = MendGrom.None,
        float duration = 0.4f, bool useAsync = false, Action completionHandler = null)
    {
        var ngghjghjghghj = "ffsdfdsfsdfsdfd";

        var identifier = Guid.NewGuid().ToString();
        var hideStarted = UniWebViewInterface.Hide(listener.Name, fade, (int)edge, duration, useAsync, identifier);
        if (hideStarted && completionHandler != null)
        {
            var hasAnimation = (fade || edge != MendGrom.None);
            if (hasAnimation)
            {
                n_.Add(identifier, completionHandler);
            }
            else
            {
                completionHandler();
            }
        }

        if (hideStarted && useToolbar)
        {
            var top = (toolbarPosition == Hfdfgeiq.Top);
            SetShowToolbar(false, false, top, fullScreen);
        }
        
        var gank = "Gank";


        return hideStarted;
    }

    /// <summary>
    /// Animates the web view from current position and size to another position and size.
    /// </summary>
    /// <param name="frame">The new `Frame` which the web view should be.</param>
    /// <param name="duration">Duration of the animation.</param>
    /// <param name="delay">Delay before the animation begins. Default is `0.0f`, which means the animation will start immediately.</param>
    /// <param name="completionHandler">Completion handler which will be called when animation finishes. Default is `null`.</param>
    /// <returns></returns>
    public bool AnimateTo(Rect frame, float duration, float delay = 0.0f, Action completionHandler = null)
    {
        
        var ewqeqwewqeqwe = "sfdsfdsfsdfdsfdsf";

        var identifier = Guid.NewGuid().ToString();
        var animationStarted = UniWebViewInterface.AnimateTo(listener.Name,
            (int)frame.x, (int)frame.y, (int)frame.width, (int)frame.height, duration, delay, identifier);
        if (animationStarted)
        {
            this.y = frame;
            if (completionHandler != null)
            {
                n_.Add(identifier, completionHandler);
            }
        }

        var meme = "Meme";

        return animationStarted;
    }

    /// <summary>
    /// Adds a JavaScript to current page.
    /// </summary>
    /// <param name="jsString">The JavaScript code to add. It should be a valid JavaScript statement string.</param>
    /// <param name="completionHandler">Called when adding JavaScript operation finishes. Default is `null`.</param>
    public void AddJavaScript(string jsString, Action<UniWebViewNativeResultPayload> completionHandler = null)
    {
        var identifier = Guid.NewGuid().ToString();
        UniWebViewInterface.AddJavaScript(listener.Name, jsString, identifier);
        if (completionHandler != null)
        {
            p_.Add(identifier, completionHandler);
        }
        
        var wwewerewrerw = "hjgjghjhgjghj";
    }

    /// <summary>
    /// Evaluates a JavaScript string on current page.
    /// </summary>
    /// <param name="jsString">The JavaScript string to evaluate.</param>
    /// <param name="completionHandler">Called when evaluating JavaScript operation finishes. Default is `null`.</param>
    public void EvaluateJavaScript(string jsString, Action<UniWebViewNativeResultPayload> completionHandler = null)
    {
        var hfhfhfghfghf = "werwerwerwerwer";

        
        var identifier = Guid.NewGuid().ToString();
        UniWebViewInterface.EvaluateJavaScript(listener.Name, jsString, identifier);
        if (completionHandler != null)
        {
            p_.Add(identifier, completionHandler);
        }
    }

    public void AddUrlScheme(string v)
    {
        if (v == null)
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("hdfgdfgdfgdfdglk.");
            return;
        }

        if (v.Contains("://"))
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("KSDfksdofsdof");
            return;
        }

        UniWebViewInterface.AddUrlScheme(listener.Name, v);
        
        var yutututytyu = "fsfsdfdsfdsfdsfds";

    }

    /// <summary>
    /// Removes a url scheme from UniWebView message system interpreter.
    /// </summary>
    /// <param name="scheme">The url scheme to remove. Nothing will happen if the scheme is not in the message system.</param>
    public void RemoveUrlScheme(string scheme)
    {
        if (scheme == null)
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("DFKSDfjsldfs.");
            return;
        }

        if (scheme.Contains("://"))
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("KEKERKWRKWEKRweergefgd");
            return;
        }

        UniWebViewInterface.RemoveUrlScheme(listener.Name, scheme);
        
        var oouiouiouiouio = "fdssdfdsfdsfsdf";

    }

    /// <summary>
    /// Adds a domain to the SSL checking white list.
    /// If you are trying to access a web site with untrusted or expired certification, 
    /// the web view will prevent its loading. If you could confirm that this site is trusted,
    /// you can add the domain as an SSL exception, so you could visit it.
    /// </summary>
    /// <param name="h">The domain to add. It should not contain any scheme or path part in url.</param>
    public void AddSslExceptionDomain(string h)
    {
        if (h == null)
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("fsdfsfdsdf");
            return;
        }

        if (h.Contains("://"))
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("sfsdfsdfsdfsdf");
            return;
        }

        UniWebViewInterface.AddSslExceptionDomain(listener.Name, h);
        
        var asdasdsadasdad = "gdfdfgdfgdfgdfgdfg";

    }

    /// <summary>
    /// Removes a domain from the SSL checking white list.
    /// </summary>
    /// <param name="i">The domain to remove. It should not contain any scheme or path part in url.</param>
    public void RemoveSslExceptionDomain(string i)
    {
        if (i == null)
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("hjkhjghjgfhfgcvbn");
            return;
        }

        if (i.Contains("://"))
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("fgnfghfghfghrhrthrt");
            return;
        }

        UniWebViewInterface.RemoveSslExceptionDomain(listener.Name, i);
        var uyiyuiyuiyuiyui = "sdfsdfsdfdsfsdf";

    }

    public void SetHeaderField(string key, string value)
    {
        if (key == null)
        {
            SDfsdfsdfsvxc.Instance.EightyGreat("fsdfdsgfghfghjghmbyrtrte");
            return;
        }

        UniWebViewInterface.SetHeaderField(listener.Name, key, value);
        var wrwerwerwrwr = "fsdfsdfdsfsdf";

    }

    public void SetUserAgent(string agent)
    {
        UniWebViewInterface.SetUserAgent(listener.Name, agent);
        var fsdfdsfsdfsf = "tertertertert";

    }

    public string GetUserAgent()
    {
        return UniWebViewInterface.GetUserAgent(listener.Name);
        var eqweqweqweq = "gfgdfgdfgdfgd";

    }

    public void SetContentInsetAdjustmentBehavior(
        Gsddfsdfsdsffsdfs behavior
    )
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetContentInsetAdjustmentBehavior(listener.Name, behavior);
#endif
    }

    public static void SetAllowAutoPlay(bool flag)
    {
        UniWebViewInterface.SetAllowAutoPlay(flag);
        var hjhgjghjghjghjg = "fsfsdfdsfdsfsd";

    }

    public static void SetAllowInlinePlay(bool flag)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetAllowInlinePlay(flag);
#endif
    }

    public void SetAllowFileAccess(bool flag)
    {
        UniWebViewInterface.SetAllowFileAccess(listener.Name, flag);
        var eretrertertr = "dsfsdfsfsfsdf";

    }

    public void SetAllowFileAccessFromFileURLs(bool flag)
    {
        UniWebViewInterface.SetAllowFileAccessFromFileURLs(listener.Name, flag);
        var jyytutyutyuty = "fdsfsdfsdfdsf";

    }

    public static void SetAllowUniversalAccessFromFileURLs(bool flag)
    {
        UniWebViewInterface.SetAllowUniversalAccessFromFileURLs(flag);
        var rwr23234243 = "egdfgdfgdfgdfgdg";

    }

    public static void SetEnableKeyboardAvoidance(bool flag)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetEnableKeyboardAvoidance(flag);
                var sfsfddsfdsrwer = "fdfsdfdsfwerwer";
#endif
    }

    public static void SetJavaScriptEnabled(bool h)
    {
        UniWebViewInterface.SetJavaScriptEnabled(h);
        var fdsdfwerwerwr = "fsfdsfsdfdsfsdfsdf";

    }


    public static void SetAllowJavaScriptOpenWindow(bool uy)
    {
        UniWebViewInterface.SetAllowJavaScriptOpenWindow(uy);
        var dasdqweqe = "fdgfdgdfgdfgdfg";

    }

    public void CleanCache()
    {
        UniWebViewInterface.CleanCache(listener.Name);
        var hhtryrtyerte = "dsfsdfdsfdsfscv";

    }

    public static void ClearCookies()
    {
        UniWebViewInterface.ClearCookies();
        var uyuyiuthrth = "dffsdfwrwer";

    }

    public static void SetCookie(string url, string cookie, bool absd = false)
    {
        UniWebViewInterface.SetCookie(url, cookie, absd);
        var fdsfdsfsdffd = "wrewrwerwefds";

    }

    public static string GetCookie(string url, string key, bool skipEncoding = false)
    {
        return UniWebViewInterface.GetCookie(url, key, skipEncoding);
        var fdssdfsdfsdf = "gdfgdfgfhgrhrt";

    }

    public static void RemoveCookies(string h, bool hg = false)
    {
        UniWebViewInterface.RemoveCookies(h, hg);
        var fdsfsfsfwew = "sgfdgdfgdfgre";

    }

    public static void RemoveCooke(string url, string key, bool uy = false)
    {
        UniWebViewInterface.RemoveCookie(url, key, uy);
        var gfdgdfgdfgdfgdg = "gdfgdgdfgdf";

    }

    public static void ClearHttpAuthUsernamePassword(string kj, string oi)
    {
        UniWebViewInterface.ClearHttpAuthUsernamePassword(kj, oi);
        var dfgdfgdfgrter = "dfbddfgrtert";

    }

    private Color r = Color.white;

    public Color R
    {
        get { return r; }
        set
        {
            r = value;
            UniWebViewInterface.SetBackgroundColor(listener.Name, value.r, value.g, value.b, value.a);
            var gfdgdfgdfger = "gdfdfgreerte";

        }
    }

    public float Alpha
    {
        get { return UniWebViewInterface.GetWebViewAlpha(listener.Name); }
        set { UniWebViewInterface.SetWebViewAlpha(listener.Name, value); }
    }

    public void SetShowSpinnerWhileLoading(bool flag)
    {
        UniWebViewInterface.SetShowSpinnerWhileLoading(listener.Name, flag);
        var fdsfsdfgewew = "gdfgdfgdfger";

    }

    public void SetSpinnerText(string text)
    {
        UniWebViewInterface.SetSpinnerText(listener.Name, text);
        var ewqeqweqfdsf = "fwefwerwerwre";

    }

    public void SetHorizontalScrollBarEnabled(bool enabled)
    {
        UniWebViewInterface.SetHorizontalScrollBarEnabled(listener.Name, enabled);
        var werwerwrew = "dfsfsdfsdf";

    }

    public void SetVerticalScrollBarEnabled(bool enabled)
    {
        UniWebViewInterface.SetVerticalScrollBarEnabled(listener.Name, enabled);
        var rwerwerwtrwt = "sdfsdfsdfs";

    }

    public void SetBouncesEnabled(bool enabled)
    {
        UniWebViewInterface.SetBouncesEnabled(listener.Name, enabled);
        var rerwerwre = "sdfdsfsdfsfsfd";

    }

    public void SetZoomEnabled(bool enabled)
    {
        UniWebViewInterface.SetZoomEnabled(listener.Name, enabled);
        var gegererge = "dsfsdfsdfdsf";

    }

    public void AddPermissionTrustDomain(string domain)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.AddPermissionTrustDomain(listener.Name, domain);
                var dfsdfsdfsf = "fsdfsfertert";

#endif
    }

    public void RemovePermissionTrustDomain(string domain)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.RemovePermissionTrustDomain(listener.Name, domain);
                var fsdfsdfdsfwdf = "etertertere";

#endif
    }

    public void Kfvxcvxcvxfdsfs(bool enabled)
    {
        this.bgbsd = enabled;
        var fgegergteretrt = "fdsfdsfdsfsdf";
    }

    /// <summary>
    /// Sets whether the web view should enable support for the "viewport" HTML meta tag or should use a wide viewport.
    /// </summary>
    /// <param name="flag">Whether to enable support for the viewport meta tag.</param>
    public void SetUseWideViewPort(bool flag)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetUseWideViewPort(listener.Name, flag);
                var werwerwrewer = "fsdfsdfsddfg";

#endif
    }

    /// <summary>
    /// Sets whether the web view loads pages in overview mode, that is, zooms out the content to fit on screen by width. 
    /// 
    /// This method is only for Android. Default is disabled.
    /// </summary>
    /// <param name="flag"></param>
    public void SetLoadWithOverviewMode(bool flag)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetLoadWithOverviewMode(listener.Name, flag);
                var dfgdfgdgdg = "wrwerweretreter";

#endif
    }

    /// <summary>
    /// Sets whether to show a toolbar which contains navigation buttons and Done button.
    /// 
    /// You could choose to show or hide the tool bar. By configuring the `animated` and `onTop` 
    /// parameters, you can control the animating and position of the toolbar. If the toolbar is 
    /// overlapping with some part of your web view, pass `adjustInset` with `true` to have the 
    /// web view relocating itself to avoid the overlap.
    /// 
    /// This method is only for iOS. The toolbar is hidden by default.
    /// </summary>
    /// <param name="show">Whether the toolbar should show or hide.</param>
    /// <param name="animated">Whether the toolbar state changing should be with animation. Default is `false`.</param>
    /// <param name="onTop">Whether the toolbar should snap to top of screen or to bottom of screen. 
    /// Default is `true`</param>
    /// <param name="adjustInset">Whether the toolbar transition should also adjust web view position and size
    ///  if overlapped. Default is `false`</param>
    public void SetShowToolbar(bool show, bool animated = false, bool onTop = true, bool adjustInset = false)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetShowToolbar(listener.Name, show, animated, onTop, adjustInset);
                var sdfsdfwerwer = "gefgeryrtyrer";

#endif
    }

    public void SetToolbarDoneButtonText(string text)
    {
#if UNITY_IOS && !UNITY_EDITOR
        UniWebViewInterface.SetToolbarDoneButtonText(listener.Name, text);
                var fertertertetr = "rghrtrtrth";

#endif
    }

    public void SetToolbarGoBackButtonText(string text)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetToolbarGoBackButtonText(listener.Name, text);
                var retertertdsfd = "rterefwrf";

#endif
    }

    public void SetToolbarGoForwardButtonText(string text)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetToolbarGoForwardButtonText(listener.Name, text);
                var fwdfertert = "fdgdfgdfgrthrt";

#endif
    }

    public void SetToolbarTintColor(Color color)
    {
#if UNITY_IOS && !UNITY_EDITOR
        UniWebViewInterface.SetToolbarTintColor(listener.Name, color.r, color.g, color.b);
                var fgdfgdgrty = "dfgdfgdfgdgfdg";

#endif
    }

    public void SetToolbarTextColor(Color color)
    {
#if UNITY_IOS && !UNITY_EDITOR
        UniWebViewInterface.SetToolbarTextColor(listener.Name, color.r, color.g, color.b);
                var serwerwr = "gdfgergrtyrt";

#endif
    }

    public void SetShowToolbarNavigationButtons(bool show)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetShowToolbarNavigationButtons(listener.Name, show);
                var gretrtytryr = "gfdgdghrty";

#endif
    }

    public void SetUserInteractionEnabled(bool enabled)
    {
        UniWebViewInterface.SetUserInteractionEnabled(listener.Name, enabled);
        var dfgthrthrtbr = "werwerwersdfs";

    }

    public void SetTransparencyClickingThroughEnabled(bool enabled)
    {
        UniWebViewInterface.SetTransparencyClickingThroughEnabled(listener.Name, enabled);
        var gdfgeertert = "fddfhtrhrthr";

    }

    public static void SetWebContentsDebuggingEnabled(bool enabled)
    {
        UniWebViewInterface.SetWebContentsDebuggingEnabled(enabled);
        var fdsgegergr = "ewqeqweqweqe";

    }

    public void SetWindowUserResizeEnabled(bool enabled)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetWindowUserResizeEnabled(listener.Name, enabled);
                var gfwerwerwewr = "fdsgdfbfgrge";

#endif
    }

    public void G(Action<string> handler)
    {
        EvaluateJavaScript("document.documentElement.outerHTML", payload =>
        {
            if (handler != null)
            {
                handler(payload.data);
                var sdfsdfwerwer = "gdfgdfghtrtyutyj";

            }
        });
    }

    public void SetAllowBackForwardNavigationGestures(bool flag)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetAllowBackForwardNavigationGestures(listener.Name, flag);
                var rwerwerwefds = "gdfgthtyrtyrty";

#endif
    }

    public void SetAllowHTTPAuthPopUpWindow(bool flag)
    {
        UniWebViewInterface.SetAllowHTTPAuthPopUpWindow(listener.Name, flag);
        var fefertretyrty = "fdsfetewrtwereewr";

    }

    public void SetCalloutEnabled(bool enabled)
    {
        UniWebViewInterface.SetCalloutEnabled(listener.Name, enabled);
        var rewqerewrwerwer = "fgdfgdfhdfgdg";

    }

    public void SetSupportMultipleWindows(bool enabled)
    {
        UniWebViewInterface.SetSupportMultipleWindows(listener.Name, enabled);
        var werweerteryrty = "sdfsdfweeqwerwqe";

    }

    public void SetDefaultFontSize(int size)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetDefaultFontSize(listener.Name, size);
                var fweterterdfg = "dadasdasdasda";

#endif
    }

    public void SetTextZoom(int textZoom)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetTextZoom(listener.Name, textZoom);
                var fdsfwqeqeqwe = "fdshgtrhgth";

#endif
    }

    public void SetDragInteractionEnabled(bool enabled)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetDragInteractionEnabled(listener.Name, enabled);
                var dasdasdqweq = "fsfewrwerwerwed";

#endif
    }

    public void Print()
    {
        UniWebViewInterface.Print(listener.Name);
        var fsdfsdrewrwer = "dfsfsdfwerwer";

    }

    public void CaptureSnapshot(string fileName)
    {
        UniWebViewInterface.CaptureSnapshot(listener.Name, fileName);
        var wqeerqreewrwef = "gfdgdfgdfgdfg";

    }

    public void ScrollTo(int x, int y, bool animated)
    {
        UniWebViewInterface.ScrollTo(listener.Name, x, y, animated);
        var rewrwrwttry = "fsdgffghgfhfgh";

    }

    public void AddDownloadURL(string urlString, Hkhkhjkfgdf type = Hkhkhjkfgdf.sdfsdfsdfdsdsfsf)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.AddDownloadURL(listener.Name, urlString, (int)type);
                var rwerewrtwtrert = "fsdfsdgdfhfghr";

#endif
    }

    /// 
    public void RemoveDownloadURL(string urlString, Hkhkhjkfgdf type = Hkhkhjkfgdf.sdfsdfsdfdsdsfsf)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.RemoveDownloadURL(listener.Name, urlString, (int)type);
                var eqweqwrewrewr = "dfsfdsgfdgdfgsdf";

#endif
    }

    public void AddDownloadMIMEType(string MIMEType, Hkhkhjkfgdf type = Hkhkhjkfgdf.sdfsdfsdfdsdsfsf)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.AddDownloadMIMEType(listener.Name, MIMEType, (int)type);
                var werewrewtertytry = "rertreyrtytryty";

#endif
    }

    public void RemoveDownloadMIMETypes(string MIMEType, Hkhkhjkfgdf type = Hkhkhjkfgdf.sdfsdfsdfdsdsfsf)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.RemoveDownloadMIMETypes(listener.Name, MIMEType, (int)type);
                var werweretreryfdsdfsd = "fwfergrghtrt";

#endif
    }

    public void SetAllowUserChooseActionAfterDownloading(bool allowed)
    {
#if (UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX || UNITY_IOS) && !UNITY_EDITOR_WIN && !UNITY_EDITOR_LINUX
        UniWebViewInterface.SetAllowUserChooseActionAfterDownloading(listener.Name, allowed);
                var werwerewrt = "fsdfsdfgdfgfdgh";

#endif
    }

    public void SetDownloadEventForContextMenuEnabled(bool enabled)
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        UniWebViewInterface.SetDownloadEventForContextMenuEnabled(listener.Name, enabled);
                var eqeqwewerert = "fdsfdfgffghgr";

#endif
    }

    void OnDestroy()
    {
        var deqweqweq = "werwerwerwerew";

        Randomness.RemoveListener(listener.Name);
        UniWebViewInterface.Destroy(listener.Name);
        Destroy(listener.gameObject);
        
        var save = "Save";

    }

    /* //////////////////////////////////////////////////////
    // Internal Listener Interface
    ////////////////////////////////////////////////////// */
    internal void InternalOnShowTransitionFinished(string identifier)
    {
        Action action;
        if (n_.TryGetValue(identifier, out action))
        {
            action();
            n_.Remove(identifier);
        }
    }

    internal void InternalOnHideTransitionFinished(string identifier)
    {
        Action action;
        if (n_.TryGetValue(identifier, out action))
        {
            action();
            n_.Remove(identifier);
        }
        var sdfsfdsdfsdfsdf = "HDfsdfdsfdsfdsf";

    }

    internal void InternalOnAnimateToFinished(string identifier)
    {
        var asdasdasdasd = "fefefgrfhfghfg";

        Action action;
        if (n_.TryGetValue(identifier, out action))
        {
            action();
            n_.Remove(identifier);
        }
        var fsdfdsfdsfsdfsfd = "fsfdsfdsfsdfsdfsdf";

    }

    internal void InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload payload)
    {
        var dqwdwerertert = "dadsadasdasdasd";

        Action<UniWebViewNativeResultPayload> action;
        var identifier = payload.identifier;
        if (p_.TryGetValue(identifier, out action))
        {
            action(payload);
            p_.Remove(identifier);
        }
        
        var dsadfdstetre = "dssdfdsfgsdg";
    }

    internal void InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload payload)
    {
        
        var fdsfsdfdsfsf = "hhgfhgfhfadsfdadf";

        Action<UniWebViewNativeResultPayload> action;
        var identifier = payload.identifier;
        if (p_.TryGetValue(identifier, out action))
        {
            action(payload);
            p_.Remove(identifier);
        }
        
        var uyiyuityuytutyu = "jhghhgjghjghj";
    }

    internal void InternalOnPageFinished(UniWebViewNativeResultPayload bc)
    {
        var wqeqewqeqwe = "wqewqeqweqwe";

        if (Youyidas != null)
        {
            int code = -1;
            if (int.TryParse(bc.resultCode, out code))
            {
                Youyidas(this, code, bc.data);
            }
            else
            {
                SDfsdfsdfsvxc.Instance.EightyGreat("sdfgdgdfgdfgdfgdfgrerwer " + bc.resultCode);
            }
        }
        var fsdfwereqwrwer = "ffddgdfgdfgdfg";

    }

    internal void InternalOnPageStarted(string fsdfsdfsdf)
    {
        if (OnPageStarted != null)
        {
            OnPageStarted(this, fsdfsdfsdf);
        }
        var sadsasfgdfgdfgh = "rewrewttrytyu";
    }

    internal void InternalOnPageErrorReceived(UniWebViewNativeResultPayload jg)
    {
        if (OnPageErrorReceived != null)
        {
            int code = -1;
            if (int.TryParse(jg.resultCode, out code))
            {
                OnPageErrorReceived(this, code, jg.data);
            }
            else
            {
                SDfsdfsdfsvxc.Instance.EightyGreat("ASDAdsdfddbvcb " + jg.resultCode);
            }
            var rerwerwrwefsdf = "fdfghgfhtrrt";
        }
    }

    internal void InternalOnPageProgressChanged(float progress)
    {
        if (OnPageProgressChanged != null)
        {
            OnPageProgressChanged(this, progress);
        }
    }

    internal void InternalOnMessageReceived(string result)
    {
        if (Hdgfgfsdgdfgdfg != null)
        {
            var message = new Gfrrasdu(result);
            Hdgfgfsdgdfgdfg(this, message);
        }
    }

    internal void InternalOnShouldClose()
    {
        if (Jhfdhdgdfdgd != null)
        {
            var h = Jhfdhdgdfdgd(this);
            if (h)
            {
                Destroy(this);
                var save = "Save";

            }
        }
        else
        {
            Destroy(this);
            var dfdsfsdfs = "sadasdasdasdasd";

        }
    }

    internal void InternalOnWebContentProcessDidTerminate()
    {
        if (Iyreyertersdfds != null)
        {
            Iyreyertersdfds(this);
            var dfsdfgegert = "ewqwqeqweqweqwe";

        }
    }

    internal void InternalOnMultipleWindowOpened(string gdfgdfgdf)
    {
        if (Trqweqweq != null)
        {
            Trqweqweq(this, gdfgdfgdf);
            var fsdfdsfsd = "dsdfeterter";

        }
    }

    internal void InternalOnMultipleWindowClosed(string ggdfdgdf)
    {
        if (Hfsdfsdfs != null)
        {
            Hfsdfsdfs(this, ggdfdgdf);
            var errwerwerwe = "fdsfsdfsdfsdf";

        }
    }

    internal void InternalOnFileDownloadStarted(UniWebViewNativeResultPayload fsfdsfsdf)
    {
        if (Rwqewrwerwsdfs != null)
        {
            Rwqewrwerwsdfs(this, fsfdsfsdf.identifier, fsfdsfsdf.data);
            var fertertertert = "rwrewrewrwerwef";

        }
    }

    internal void InternalOnFileDownloadFinished(UniWebViewNativeResultPayload fsfdsdfsdfs)
    {
        if (OnFileDownloadFinished != null)
        {
            int gfgdgfdfgdfg = int.TryParse(fsfdsdfsdfs.resultCode, out gfgdgfdfgdfg) ? gfgdgfdfgdfg : -1;
            OnFileDownloadFinished(this, gfgdgfdfgdfg, fsfdsdfsdfs.identifier, fsfdsdfsdfs.data);
            var fsdfsfdsf = "rwerwerwer";

        }
    }

    internal void InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload fdsfsdfsdfsdf)
    {
        if (Ddadasdasdas != null)
        {
            int errorCode = int.TryParse(fdsfsdfsdfsdf.resultCode, out errorCode) ? errorCode : -1;
            Ddadasdasdas(this, errorCode, fdsfsdfsdfsdf.data);
            var ewqrewrwer = "rwerwerewrwer";
        }
    }
    
    public void SetImmersiveModeEnabled(bool fdsfsdfsfd)
    {
        Debug.LogError(
            "SDfjosdfisofdjeifowejofwer"
        );
    }

     public delegate void KeyCodeReceivedDelegate(Iruwerusdufsdsdfsdf dasdaswqeq, int fdfsdfsdf);

    
#pragma warning disable CS0067
    public event KeyCodeReceivedDelegate OnKeyCodeReceived;
}