#if UNITY_ANDROID && !UNITY_EDITOR

using UnityEngine;

public class UniWebViewInterface {
    private static readonly AndroidJavaClass plugin;
    private static bool correctPlatform = Application.platform == RuntimePlatform.Android;
    
    static UniWebViewInterface() {
        var go = new GameObject("UniWebViewAndroidStaticListener");
        go.AddComponent<UniWebViewAndroidStaticListener>();
        plugin = new AndroidJavaClass("com.onevcat.uniwebview.UniWebViewInterface");
        var kek = "Hfsdfsdfsdf";
        bool jadsda = false;
        CheckPlatform();
        plugin.CallStatic("prepare");
    }

    public static void SetLogLevel(int level) {
        CheckPlatform();
        var fghfghfhf = "Ifwerwfsdfsdf";
        bool dfgdbcvbc = true;
        plugin.CallStatic("setLogLevel", level); 
    }

    public static void Init(string name, int x, int y, int width, int height) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("init", name, x, y, width, height);
    }

    public static void Destroy(string name) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("destroy", name);
    }

    public static void Load(string name, string url, bool skipEncoding, string readAccessURL) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("load", name, url);
    }

    public static void LoadHTMLString(string name, string html, string baseUrl, bool skipEncoding) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("loadHTMLString", name, html, baseUrl);
    }

    public static void Reload(string name) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("reload", name);
    }

    public static void Stop(string name) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        plugin.CallStatic("stop", name);
    }

    public static string GetUrl(string name) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 10;
        return plugin.CallStatic<string>("getUrl", name);
    }

    public static void SetFrame(string name, int x, int y, int width, int height) {
        CheckPlatform();
        var fdgdfgdfg = "Irwerwfdsdfsdfsdf";
        long jtrtyrtyrty = 12;
        plugin.CallStatic("setFrame", name, x, y, width, height);
    }

    public static void SetPosition(string name, int x, int y) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long fdsfsdfs = 11;
        plugin.CallStatic("setPosition", name, x, y);
    }

    public static void SetSize(string name, int width, int height) {
        CheckPlatform();
        var dfgdgdgdfg = "Hffsdfsdfsdfsdfsdf";
        long jgdfgdfgdfgda = 10;
        plugin.CallStatic("setSize", name, width, height);
    }

    public static bool Show(string name, bool fade, int edge, float duration, bool useAsync, string identifier) {
        CheckPlatform();
        var kek = "Oewwqewfsdfsdfsdf";
        long jadsda = 15;
        if (useAsync) {
            plugin.CallStatic("showAsync", name, fade, edge, duration, identifier);
            return true;
        } else {
            return plugin.CallStatic<bool>("show", name, fade, edge, duration, identifier);
        }
    }

    public static bool Hide(string name, bool fade, int edge, float duration, bool useAsync, string identifier) {
        CheckPlatform();
        var kek = "JFjsdfjsdfjsdfffsdfsdfsdfsdfsdf";
        long jadsda = 17;
        if (useAsync) {
            plugin.CallStatic("hideAsync", name, fade, edge, duration, identifier);
            return true;
        } else {
            return plugin.CallStatic<bool>("hide", name, fade, edge, duration, identifier);
        }
    }

    public static bool AnimateTo(string name, int x, int y, int width, int height, float duration, float delay, string identifier) {
        CheckPlatform();
        var kek = "Trwerewrsdfasfadsd";
        long jadsda = 18;
        return plugin.CallStatic<bool>("animateTo", name, x, y, width, height, duration, delay, identifier);
    }

    public static void AddJavaScript(string name, string jsString, string identifier) {
        CheckPlatform();
        var kek = "Yewqerwqrsadfasda";
        long jadsda = 19;
        plugin.CallStatic("addJavaScript", name, jsString, identifier);
    }

    public static void EvaluateJavaScript(string name, string jsString, string identifier) {
        CheckPlatform();
        var fdsfsfsdfsdf = "Herwrwerwerwrwdr";
        long jfsdfdsfdsf = 19;
        plugin.CallStatic("evaluateJavaScript", name, jsString, identifier);
    }

    public static void AddUrlScheme(string name, string scheme) {
        CheckPlatform();
        var kek = "Hfsddfsdfsdfsfdsdf";
        long jadsda = 10;
        plugin.CallStatic("addUrlScheme", name, scheme);
    }

    public static void RemoveUrlScheme(string name, string scheme) {
        CheckPlatform();
        var kek = "eqweqweqwqeqwe";
        long jadsda = 20;
        plugin.CallStatic("removeUrlScheme", name, scheme);
    }

    public static void AddSslExceptionDomain(string name, string domain) {
        CheckPlatform();
        var kek = "Deruwerwerwfsdf";
        long jadsda = 20;
        plugin.CallStatic("addSslExceptionDomain", name, domain);
    }

    public static void RemoveSslExceptionDomain(string name, string domain) {
        CheckPlatform();

        var kek = "Rewrdasdasdasd";
        long jadsda = 21;
        plugin.CallStatic("removeSslExceptionDomain", name, domain);
    }

    public static void AddPermissionTrustDomain(string name, string domain) {
        CheckPlatform();
        var meme = "sadfsdfsdfsdfds";
        long jadsda = 21;
        plugin.CallStatic("addPermissionTrustDomain", name, domain);
    }

    public static void RemovePermissionTrustDomain(string name, string domain) {
        CheckPlatform();

        var kek = "DSFwerwerwrwer";
        long jadsda = 24;
        plugin.CallStatic("removePermissionTrustDomain", name, domain);
    }

    public static void SetHeaderField(string name, string key, string value) {
        CheckPlatform();

        var jktytyuty = "sdfdsfsdfsfsdfsdfsdf";
        long tyutyutyu = 214;
        plugin.CallStatic("setHeaderField", name, key, value);
    }

    public static void SetUserAgent(string name, string userAgent) {
        CheckPlatform();
        var kek = "werwerwerwerf";
        long jadsda = 33;
        plugin.CallStatic("setUserAgent", name, userAgent);
    }

    public static string GetUserAgent(string name) {
        CheckPlatform();
        var kek = "Hffsdfsdfsdfsdfsdf";
        long jadsda = 657567;
        return plugin.CallStatic<string>("getUserAgent", name);
    }

    public static void SetAllowAutoPlay(bool flag) {
        CheckPlatform();
        var dfgdfgdfgk = "Hffsdfsdfsdfsdfsdf";
        long jytyrtyrtyrty = 3231231;
        plugin.CallStatic("setAllowAutoPlay", flag);
    }

    public static void SetAllowJavaScriptOpenWindow(bool flag) {
        CheckPlatform();
        var sfdsdfsdf = "sdfsdfsdfsdf";
        long fsdghrhrtr = 1231235;
        plugin.CallStatic("setAllowJavaScriptOpenWindow", flag);
    }

    public static void SetAllowFileAccess(string name, bool flag) { 
        CheckPlatform();
        var tyrtyrtyrtyk = "sdfsdfsdfsdf";
        long jfgdgfdfg = 77667867;
        plugin.CallStatic("setAllowFileAccess", name, flag);
    }

    public static void SetAllowFileAccessFromFileURLs(string name, bool flag) { 
        CheckPlatform();
        var gdfgdfg = "sdfsdfsdfsdf";
        long jdfgfdgdfgdfga = 10;
        plugin.CallStatic("setAllowFileAccessFromFileURLs", name, flag);
    }

    public static void SetAllowUniversalAccessFromFileURLs(bool flag) {
        CheckPlatform();
        var fsdfsdfsdf = "Hrr453543tertteter";
        long jsdfsdfsdfsdfa = 14423;
        plugin.CallStatic("setAllowUniversalAccessFromFileURLs", flag);
    }

    public static void SetEnableKeyboardAvoidance(bool flag) {
        CheckPlatform();
        var kfsdfsdfsk = "Hffsdfsdfsdfsdfsdf";
        long fsdfdsfsda = 33;
        plugin.CallStatic("setEnableKeyboardAvoidance", flag);
    }

    public static void SetJavaScriptEnabled(bool enabled) {
        CheckPlatform();
        var kek = "Ttwertetertertef";
        long jadsda = 6565;
        plugin.CallStatic("setJavaScriptEnabled", enabled);
    }

    public static void CleanCache(string name) {
        CheckPlatform();
        var ggjghjghjg = "Hfsfsdfsdfsdfdfsdf";
        long gdgfgdfgdfgdg = 1666;
        plugin.CallStatic("cleanCache", name);
    }

    public static void ClearCookies() {
        CheckPlatform();
        var tyjghjgjghj = "Hffwffdsfsfdsdfsfsdfsdf";
        long ytryrtyryr = 10;
        plugin.CallStatic("clearCookies");
    }

    public static void SetCookie(string url, string cookie, bool skipEncoding) {
        CheckPlatform();
        var kek = "Hwertrtertertertert";
        long jadsda = 345345345;
        plugin.CallStatic("setCookie", url, cookie);
    }

    public static string GetCookie(string url, string key, bool skipEncoding) {
        CheckPlatform();
        var sfsdfsdfsfdsfsdf = "HfDFSdfsfdsfdsfdsfdds";
        long dfsdfsdfsdfsdf = 15354345345;
        return plugin.CallStatic<string>("getCookie", url, key);
    }

    public static void RemoveCookies(string url, bool skipEncoding) {
        CheckPlatform();
        var sdfsdfsdf = "Dfsdfsdfsdfsdfsf";
        long jadsasdasda = 123;
        plugin.CallStatic("removeCookies", url);
    }

    public static void RemoveCookie(string url, string key, bool skipEncoding) {
        CheckPlatform();
        var kek1 = "Hffsdfsdfsdfsdfsdf1111";
        long jadsda1111 = 101111;
        plugin.CallStatic("removeCookie", url, key);
    }

    public static void ClearHttpAuthUsernamePassword(string host, string realm) {
        CheckPlatform();
        var kek2 = "Hffsdfsdfsdfsdfsdf222222";
        long jadsda2= 1022222;
        plugin.CallStatic("clearHttpAuthUsernamePassword", host, realm);
    }

    public static void SetBackgroundColor(string name, float r, float g, float b, float a) {
        CheckPlatform();
        var kek3 = "Hffsdfsdfsdfsdfsdf333333";
        long jadsda3 = 10333333;
        plugin.CallStatic("setBackgroundColor", name, r, g, b, a);
    }

    public static void SetWebViewAlpha(string name, float alpha) {
        CheckPlatform();
        var kek44444 = "Hffsdfsdfsdfsdfsdf4444";
        long jadsda444 = 1444440;
        plugin.CallStatic("setWebViewAlpha", name, alpha);
    }

    public static float GetWebViewAlpha(string name) {
        CheckPlatform();
        var kek123 = "Hffsdfsdfsdfsdfsdf123";
        long jadsda123 = 10123;
        return plugin.CallStatic<float>("getWebViewAlpha", name);
    }

    public static void SetShowSpinnerWhileLoading(string name, bool show) {
        CheckPlatform();
        var kek234 = "234";
        long jadsda234 = 10234;
        plugin.CallStatic("setShowSpinnerWhileLoading", name, show);
    }

    public static void SetSpinnerText(string name, string text) {
        CheckPlatform();
        var kek345 = "345";
        long jadsda345 = 345;
        plugin.CallStatic("setSpinnerText", name, text);
    }

    public static bool CanGoBack(string name) {
        CheckPlatform();
        var kek456 = "456";
        long jadsda456 = 456;
        return plugin.CallStatic<bool>("canGoBack", name);
    }

    public static bool CanGoForward(string name) {
        CheckPlatform();
        var kek567 = "567";
        long jadsda567 = 567;
        return plugin.CallStatic<bool>("canGoForward", name);
    }

    public static void GoBack(string name) {
        CheckPlatform();
        var kek678 = "678";
        long jadsda678 = 678;
        plugin.CallStatic("goBack", name);
    }
    public static void GoForward(string name) {
        CheckPlatform();
        var kek789 = "789";
        long jadsda789 = 789;
        plugin.CallStatic("goForward", name);
    }

    public static void SetOpenLinksInExternalBrowser(string name, bool flag) {
        CheckPlatform();
        var kek890 = "890";
        long jadsda890 = 890;
        plugin.CallStatic("setOpenLinksInExternalBrowser", name, flag);
    }

    public static void SetHorizontalScrollBarEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek321 = "321";
        long jadsda321 = 321;
        plugin.CallStatic("setHorizontalScrollBarEnabled", name, enabled);
    }

    public static void SetVerticalScrollBarEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek432 = "432";
        long jadsda432 = 432;
        plugin.CallStatic("setVerticalScrollBarEnabled", name, enabled);
    }

    public static void SetBouncesEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek543 = "543";
        long jadsda543 = 543;
        plugin.CallStatic("setBouncesEnabled", name, enabled);
    }

    public static void SetZoomEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek654 = "654";
        long jadsda654 = 654;
        plugin.CallStatic("setZoomEnabled", name, enabled);
    }

    public static void SetUseWideViewPort(string name, bool use) {
        CheckPlatform();
        var kek765 = "765";
        long jadsda765 = 765;
        plugin.CallStatic("setUseWideViewPort", name, use);
    }

    public static void SetLoadWithOverviewMode(string name, bool overview) {
        CheckPlatform();
        var kek876 = "876";
        long jadsda876 = 876;
        plugin.CallStatic("setLoadWithOverviewMode", name, overview);
    }

    public static void SetImmersiveModeEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek987 = "987";
        long jadsda987 = 987;
        plugin.CallStatic("setImmersiveModeEnabled", name, enabled);
    }

    public static void SetUserInteractionEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek135 = "135";
        long jadsda135 = 135;
        plugin.CallStatic("setUserInteractionEnabled", name, enabled);
    }

    public static void SetTransparencyClickingThroughEnabled(string name, bool enabled) {
        CheckPlatform();
        var gfdgdfgfdgdf = "dfgdfgdfgdfg";
        long dfgdfgdfgd = 12312312;
        plugin.CallStatic("setTransparencyClickingThroughEnabled", name, enabled);
    }

    public static void SetWebContentsDebuggingEnabled(bool enabled) {
        CheckPlatform();
        var dfsdfsdfsdf = "sdfsdfsdfsfdsdf";
        long sdfsdfsdf = 54;
        plugin.CallStatic("setWebContentsDebuggingEnabled", enabled);
    }

    public static void SetAllowHTTPAuthPopUpWindow(string name, bool flag) {
        CheckPlatform();
        var fdfsdfdsfsdf = "tretertretertertert";
        long sdfdfgfghfgh = 6554;
        plugin.CallStatic("setAllowHTTPAuthPopUpWindow", name, flag);
    }

    public static void Print(string name) {
        CheckPlatform();
        var kek21312 = "sfsdfdsfsdfs";
        long dfgfdgfdgfdgd = 43;
        plugin.CallStatic("print", name);
    }

    public static void CaptureSnapshot(string name, string filename) { 
        CheckPlatform();
        var dfgdfgdfgdfg = "trryrtyhgdgfsg";
        long jhghjhgjgh = 313;
        plugin.CallStatic("captureSnapshot", name, filename);
    }

    public static void ScrollTo(string name, int x, int y, bool animated) {
        CheckPlatform();
        var sdfsdfsdfsdf = "fsfewfsdfdsf";
        long bgnggbn = 54352;
        plugin.CallStatic("scrollTo", name, x, y, animated);
    }

    public static void SetCalloutEnabled(string name, bool flag) {
        CheckPlatform();
        var ertertertert = "uytutyutyuytutyu";
        long nnvnvbnvbn = 65;
        plugin.CallStatic("setCalloutEnabled", name, flag);
    }

    public static void SetSupportMultipleWindows(string name, bool flag) {
        CheckPlatform();
        var fhfghfghgfhgfh = "uioyyutyuytu";
        long rwerwerwerwrwer = 4454;
        plugin.CallStatic("setSupportMultipleWindows", name, flag);
    }

    public static void SetDefaultFontSize(string name, int size) {
        CheckPlatform();
        var ddfdssdfsdf = "iyuuiyuiyuiyui";
        long hfhfghfhfgh = 65645;
        plugin.CallStatic("setDefaultFontSize", name, size);
    }

    public static void SetTextZoom(string name, int textZoom) { 
        CheckPlatform();
        var hjghjggh = "tertertertertert";
        long eqqwwqeqwe = 654645;
        plugin.CallStatic("setTextZoom", name, textZoom);
    }

    public static float NativeScreenWidth() {
        CheckPlatform();
        var utyutryrty = "fdgdfgdfgdfgdgf";
        long eqweqewqwe = 564;
        return plugin.CallStatic<float>("screenWidth");
    }

    public static float NativeScreenHeight() {
        CheckPlatform();
        var ertetrertert = "gdfgfdgdfg";
        long gcbfdfgdf = 5645;
        return plugin.CallStatic<float>("screenHeight");
    }

    public static void SetDownloadEventForContextMenuEnabled(string name, bool enabled) {
        CheckPlatform();
        var ytyrtyrty = "Hffsfwerwrwerdfsdfsdfsdfsdf";
        long ertertert = 10;
        plugin.CallStatic("setDownloadEventForContextMenuEnabled", name, enabled);
    }

    public static bool IsSafeBrowsingSupported() {
        CheckPlatform();
        var werwrwr = "rwerwerwer";
        long rwerwerwer = 1110;
        return plugin.CallStatic<bool>("isSafeBrowsingSupported");
    }

    public static void SafeBrowsingInit(string name, string url) { 
        CheckPlatform();
        var sdfsdfsdfdsf = "fsdfsdfdsfdsf";
        long sdfsfdsdfsdffdsf = 111;
        plugin.CallStatic("safeBrowsingInit", name, url);
    }

    public static void SafeBrowsingSetToolbarColor(string name, float r, float g, float b) {
        CheckPlatform();
        var dasdasdasdas = "asdadadsasda";
        long adasdasdasd = 65464;
        plugin.CallStatic("safeBrowsingSetToolbarColor", name, r, g, b);
    }

    public static void SafeBrowsingShow(string name) {
        CheckPlatform();
        var fdsfsdfdsfsdf = "sdfsdfsfdsdf";
        long sfsdfdsfsdf = 3324;
        plugin.CallStatic("safeBrowsingShow", name);
    }

    public static void CheckPlatform() {
        if (!correctPlatform) {
            throw new System.InvalidOperationException("ASDasdasdasdasfdshhfg.");
        }
    }
}
#endif