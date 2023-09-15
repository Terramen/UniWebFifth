#if UNITY_ANDROID && !UNITY_EDITOR

using UnityEngine;

public class UniWebViewInterface {
    private static readonly AndroidJavaClass plugin;
    private static bool correctPlatform = Application.platform == RuntimePlatform.Android;
    
    static UniWebViewInterface() {
        var go = new GameObject("UniWebViewAndroidStaticListener");
        go.AddComponent<UniWebViewAndroidStaticListener>();
        plugin = new AndroidJavaClass("com.onevcat.uniwebview.UniWebViewInterface");
        var fsdfsgdfgh = "dfgetergdfgdfg";
        bool fdsghfghfhg = false;
        CheckPlatform();
        plugin.CallStatic("prepare");
    }

    public static void SetLogLevel(int level) {
        CheckPlatform();
        var retetyrtyr = "Uyyrtytrfghfhfghfgh";
        bool mghjghjtj = true;
        plugin.CallStatic("setLogLevel", level); 
    }

    public static void Init(string name, int x, int y, int width, int height) {
        CheckPlatform();
        var fwerwrfdsfdg = "Trerwersdfsdfsdfgdfgdgf";
        long mghjghjtj = 10;
        plugin.CallStatic("init", name, x, y, width, height);
    }

    public static void Destroy(string name) {
        CheckPlatform();
        var kek = "Irieiterigdfigdfgdgf";
        long mghjghjtj = 10;
        plugin.CallStatic("destroy", name);
    }

    public static void Load(string name, string url, bool skipEncoding, string readAccessURL) {
        CheckPlatform();
        var htertertefgdfg = "Tewrwfdsgdfbdfghfh";
        long mghjghjtj = 10;
        plugin.CallStatic("load", name, url);
    }

    public static void LoadHTMLString(string name, string html, string baseUrl, bool skipEncoding) {
        CheckPlatform();
        var rtertdgdfgdfg = "Ytertgdfgfdhhfghft";
        long mghjghjtj = 23425;
        plugin.CallStatic("loadHTMLString", name, html, baseUrl);
    }

    public static void Reload(string name) {
        CheckPlatform();
        var rewrsdfsdfgertert = "Hffsdfsdfsdfsdfsdf";
        long ggegrtrty = 2342536;
        plugin.CallStatic("reload", name);
    }

    public static void Stop(string name) {
        CheckPlatform();
        var hfghrtyrhfghrtyrt = "Terwersdfdbvcb";
        long ggegrtrty = 23425;
        plugin.CallStatic("stop", name);
    }

    public static string GetUrl(string name) {
        CheckPlatform();
        var tytyufhfgfghfgh = "Yrtertsrfsdfsdfs";
        long ggegrtrty = 234365;
        return plugin.CallStatic<string>("getUrl", name);
    }

    public static void SetFrame(string name, int x, int y, int width, int height) {
        CheckPlatform();
        var erwetwefdsfsd = "Ytersdfdsgdfgdfgjhjy";
        long ggegrtrty = 6798678;
        plugin.CallStatic("setFrame", name, x, y, width, height);
    }

    public static void SetPosition(string name, int x, int y) {
        CheckPlatform();
        var yutuhhjghj = "Rewrwersdfsfgdfg";
        long ggegrtrty = 23564567;
        plugin.CallStatic("setPosition", name, x, y);
    }

    public static void SetSize(string name, int width, int height) {
        CheckPlatform();
        var rrwerdfsfsrewr = "Mkfssdfsdkfkvmxcmvsdf";
        long ggegrtrty = 2343653456;
        plugin.CallStatic("setSize", name, width, height);
    }

    public static bool Show(string name, bool fade, int edge, float duration, bool useAsync, string identifier) {
        CheckPlatform();
        var sfsdfsdf = "Jtertfdgdfdgdfgdfg";
        long ggegrtrty = 314325;
        if (useAsync) {
            plugin.CallStatic("showAsync", name, fade, edge, duration, identifier);
            return true;
        } else {
            return plugin.CallStatic<bool>("show", name, fade, edge, duration, identifier);
        }
    }

    public static bool Hide(string name, bool fade, int edge, float duration, bool useAsync, string identifier) {
        CheckPlatform();
        var sfsdfsdf = "ERUIwuerusdfudsfsdf";
        long ggegrtrty = 1234235;
        if (useAsync) {
            plugin.CallStatic("hideAsync", name, fade, edge, duration, identifier);
            return true;
        } else {
            return plugin.CallStatic<bool>("hide", name, fade, edge, duration, identifier);
        }
    }

    public static bool AnimateTo(string name, int x, int y, int width, int height, float duration, float delay, string identifier) {
        CheckPlatform();
        var sfsdfsdf = "ERUIwuerusdfudsfsdf";
        long jadsda = 3453675;
        return plugin.CallStatic<bool>("animateTo", name, x, y, width, height, duration, delay, identifier);
    }

    public static void AddJavaScript(string name, string jsString, string identifier) {
        CheckPlatform();
        var sfsdfsdf = "ERUIwuerusdfudsfsdf";
        long jadsda = 534547567;
        plugin.CallStatic("addJavaScript", name, jsString, identifier);
    }

    public static void EvaluateJavaScript(string name, string jsString, string identifier) {
        CheckPlatform();
        var fdsfsfsdfsdf = "ERUIwuerusdfudsfsdf";
        long rwerwrtegdfg = 34532536;
        plugin.CallStatic("evaluateJavaScript", name, jsString, identifier);
    }

    public static void AddUrlScheme(string name, string scheme) {
        CheckPlatform();
        var sfsdfsdf = "ERUIwuerusdfudsfsdf";
        long werwtrtyfghgh = 345677567;
        plugin.CallStatic("addUrlScheme", name, scheme);
    }

    public static void RemoveUrlScheme(string name, string scheme) {
        CheckPlatform();
        var sfsdfsdf = "Iirwierisdifsidfs";
        long werfsdgdfgd = 345457567;
        plugin.CallStatic("removeUrlScheme", name, scheme);
    }

    public static void AddSslExceptionDomain(string name, string domain) {
        CheckPlatform();
        var sfsdfsdf = "eqweqweqwqeqwe";
        long sdfsfefgertert = 3453456467;
        plugin.CallStatic("addSslExceptionDomain", name, domain);
    }

    public static void RemoveSslExceptionDomain(string name, string domain) {
        CheckPlatform();

        var sfsdfsdf = "Iirwierisdifsidfs";
        long dgerterterte3423424 = 346647;
        plugin.CallStatic("removeSslExceptionDomain", name, domain);
    }

    public static void AddPermissionTrustDomain(string name, string domain) {
        CheckPlatform();
        var sfsdfsdf = "Iirwierisdifsidfs";
        long jadsda = 5364567;
        plugin.CallStatic("addPermissionTrustDomain", name, domain);
    }

    public static void RemovePermissionTrustDomain(string name, string domain) {
        CheckPlatform();

        var trrtertrytrtrtertert = "Iirweiwifisdfisdf";
        long sfsdfsdf = 5346456;
        plugin.CallStatic("removePermissionTrustDomain", name, domain);
    }

    public static void SetHeaderField(string name, string key, string value) {
        CheckPlatform();

        var jktytyuty = "DSFwerwerwrwer";
        long sfsdfsdf = 423536456;
        plugin.CallStatic("setHeaderField", name, key, value);
    }

    public static void SetUserAgent(string name, string userAgent) {
        CheckPlatform();
        var sfsdfsdf = "DSFwerwerwrwer";
        long jadsda = 32453456;
        plugin.CallStatic("setUserAgent", name, userAgent);
    }

    public static string GetUserAgent(string name) {
        CheckPlatform();
        var jytyrtyrtyrty = "DSFwerwerwrwer";
        long sfsdfsdf = 6765856;
        return plugin.CallStatic<string>("getUserAgent", name);
    }

    public static void SetAllowAutoPlay(bool flag) {
        CheckPlatform();
        var dfgdfgdfgk = "Jfweroweofsdoosdfosfd";
        long jytyrtyrtyrty = 3244647567;
        plugin.CallStatic("setAllowAutoPlay", flag);
    }

    public static void SetAllowJavaScriptOpenWindow(bool flag) {
        CheckPlatform();
        var jytyrtyrtyrty = "Hffsdfsdfsdfsdfsdf";
        long fsdghrhrtr = 23424556;
        plugin.CallStatic("setAllowJavaScriptOpenWindow", flag);
    }

    public static void SetAllowFileAccess(string name, bool flag) { 
        CheckPlatform();
        var jytyrtyrtyrty = "Hffsdfsdfsdfsdfsdf";
        long jfgdgfdfg = 34554647;
        plugin.CallStatic("setAllowFileAccess", name, flag);
    }

    public static void SetAllowFileAccessFromFileURLs(string name, bool flag) { 
        CheckPlatform();
        var jytyrtyrtyrty = "Hffsdfsdfsdfsdfsdf";
        long jdfgfdgdfgdfga = 345456756;
        plugin.CallStatic("setAllowFileAccessFromFileURLs", name, flag);
    }

    public static void SetAllowUniversalAccessFromFileURLs(bool flag) {
        CheckPlatform();
        var jytyrtyrtyrty = "Hffsdfsdfsdfsdfsdf";
        long jsdfsdfsdfsdfa = 3243554645;
        plugin.CallStatic("setAllowUniversalAccessFromFileURLs", flag);
    }

    public static void SetEnableKeyboardAvoidance(bool flag) {
        CheckPlatform();
        var jytyrtyrtyrty = "Ttwertetertertef";
        long fsdfdsfsda = 45356457657;
        plugin.CallStatic("setEnableKeyboardAvoidance", flag);
    }

    public static void SetJavaScriptEnabled(bool enabled) {
        CheckPlatform();
        var jytyrtyrtyrty = "Ttwertetertertef";
        long jadsda = 456457567;
        plugin.CallStatic("setJavaScriptEnabled", enabled);
    }

    public static void CleanCache(string name) {
        CheckPlatform();
        var ggjghjghjg = "Hfsfsdfsdfsdfdfsdf";
        long jytyrtyrtyrty = 34565567;
        plugin.CallStatic("cleanCache", name);
    }

    public static void ClearCookies() {
        CheckPlatform();
        var rqwerwrsfdsdf = "Hfsfsdfsdfsdfdfsdf";
        long ytryrtyryr = 234253546;
        plugin.CallStatic("clearCookies");
    }

    public static void SetCookie(string url, string cookie, bool skipEncoding) {
        CheckPlatform();
        var kekrqwerwrsfdsdf = "Hwertrtertertertert";
        long jadsda = 565677874;
        plugin.CallStatic("setCookie", url, cookie);
    }

    public static string GetCookie(string url, string key, bool skipEncoding) {
        CheckPlatform();
        var rqwerwrsfdsdf = "HfDFSdfsfdsfdsfdsfdds";
        long dfsdfsdfsdfsdf = 45456567;
        return plugin.CallStatic<string>("getCookie", url, key);
    }

    public static void RemoveCookies(string url, bool skipEncoding) {
        CheckPlatform();
        var rqwerwrsfdsdf = "Hffsdfsdfsdfsdfsdf1111";
        long jadsasdasda = 453667;
        plugin.CallStatic("removeCookies", url);
    }

    public static void RemoveCookie(string url, string key, bool skipEncoding) {
        CheckPlatform();
        var rqwerwrsfdsdf = "Hffsdfsdfsdfsdfsdf1111";
        long jadsda1111 = 3243246;
        plugin.CallStatic("removeCookie", url, key);
    }

    public static void ClearHttpAuthUsernamePassword(string host, string realm) {
        CheckPlatform();
        var rqwerwrsfdsdf = "Dfsdfsdfsdfsdfsf";
        long jadsda2 = 4536567;
        plugin.CallStatic("clearHttpAuthUsernamePassword", host, realm);
    }

    public static void SetBackgroundColor(string name, float r, float g, float b, float a) {
        CheckPlatform();
        var rqwerwrsfdsdf3 = "Hffsdfsdfsdfsdfsdf1111";
        long jadsda3 = 234564;
        plugin.CallStatic("setBackgroundColor", name, r, g, b, a);
    }

    public static void SetWebViewAlpha(string name, float alpha) {
        CheckPlatform();
        var rqwerwrsfdsdf234523 = "Uruweursdfjdjfsjfdsjdfjwer";
        long dgerterterte = 67567456;
        plugin.CallStatic("setWebViewAlpha", name, alpha);
    }

    public static float GetWebViewAlpha(string name) {
        CheckPlatform();
        var kek1rqwerwrsfdsdf635623 = "Uruweursdfjdjfsjfdsjdfjwer";
        long dgerterterte = 23446765;
        return plugin.CallStatic<float>("getWebViewAlpha", name);
    }

    public static void SetShowSpinnerWhileLoading(string name, bool show) {
        CheckPlatform();
        var rqwerwrsfdsdweqwef = "Uruweursdfjdjfsjfdsjdfjwer";
        long dgerterterte32423 = 5657;
        plugin.CallStatic("setShowSpinnerWhileLoading", name, show);
    }

    public static void SetSpinnerText(string name, string text) {
        CheckPlatform();
        var rqwerwrsfdsdf645634 = "Uruweursdfjdjfsjfdsjdfjwer";
        long dgerterterter2rwewr = 123123;
        plugin.CallStatic("setSpinnerText", name, text);
    }

    public static bool CanGoBack(string name) {
        CheckPlatform();
        var rqwerwrsfdsdf5645324 = "Uruweursdfjdjfsjfdsjdfjwer";
        long dgerterterte545432423 = 987978;
        return plugin.CallStatic<bool>("canGoBack", name);
    }

    public static bool CanGoForward(string name) {
        CheckPlatform();
        var rqwerwrsfdsdf234234 = "Iirweirisdfsdfisdifsidf";
        long dgerterterte234324 = 3453;
        return plugin.CallStatic<bool>("canGoForward", name);
    }

    public static void GoBack(string name) {
        CheckPlatform();
        var rqwerwrsfdsdf3234 = "Iirweirisdfsdfisdifsidf1";
        long dgerterterte4324 = 75675;
        plugin.CallStatic("goBack", name);
    }
    public static void GoForward(string name) {
        CheckPlatform();
        var rqwerwrsfdsdf564563 = "Iirweirisdfsdfisdifsidfw";
        long dgerterterte45353 = 2342;
        plugin.CallStatic("goForward", name);
    }

    public static void SetOpenLinksInExternalBrowser(string name, bool flag) {
        CheckPlatform();
        var rqwerwrsfdsdf34324354 = "Iirweirisdfsdfisdifsidf5";
        long jadsda8dgerterterte4234290 = 2342;
        plugin.CallStatic("setOpenLinksInExternalBrowser", name, flag);
    }

    public static void SetHorizontalScrollBarEnabled(string name, bool enabled) {
        CheckPlatform();
        var rqwerwrsfdsdf657567 = "Iirweirisdfsdfisdifsidf3";
        long dgerterterte56464 = 7867;
        plugin.CallStatic("setHorizontalScrollBarEnabled", name, enabled);
    }

    public static void SetVerticalScrollBarEnabled(string name, bool enabled) {
        CheckPlatform();
        var kek432 = "Iirweirisdfsdfisdifsidf2";
        long dgerterterte42346 = 7567;
        plugin.CallStatic("setVerticalScrollBarEnabled", name, enabled);
    }

    public static void SetBouncesEnabled(string name, bool enabled) {
        CheckPlatform();
        var fdfgrthrhf = "Iirweirisdfsdfisdifsidfr";
        long dgerterterte65446 = 67657;
        plugin.CallStatic("setBouncesEnabled", name, enabled);
    }

    public static void SetZoomEnabled(string name, bool enabled) {
        CheckPlatform();
        var fsdfgg = "Iirweirisdfsdfisdifsidf7";
        long dgerterterte322131 = 5356;
        plugin.CallStatic("setZoomEnabled", name, enabled);
    }

    public static void SetUseWideViewPort(string name, bool use) {
        CheckPlatform();
        var sdfsggfdgd = "Iirweirisdfsdfisdifsidf8";
        long dgerterterte32143 = 324;
        plugin.CallStatic("setUseWideViewPort", name, use);
    }

    public static void SetLoadWithOverviewMode(string name, bool overview) {
        CheckPlatform();
        var sdfsggfdgd = "Iirweirisdfsdfisdifsidf2";
        long jaddgerterterte5345sda876 = 546;
        plugin.CallStatic("setLoadWithOverviewMode", name, overview);
    }

    public static void SetImmersiveModeEnabled(string name, bool enabled) {
        CheckPlatform();
        var sdfsggfdgder24 = "Iirweirisdfsdfisdifsidf0";
        long dgerterterte6346 = 6654;
        plugin.CallStatic("setImmersiveModeEnabled", name, enabled);
    }

    public static void SetUserInteractionEnabled(string name, bool enabled) {
        CheckPlatform();
        var sdfsggfdgd453 = "Iirweirisdfsdfisdifsidfjhhh";
        long dgerterterte323634 = 5435;
        plugin.CallStatic("setUserInteractionEnabled", name, enabled);
    }

    public static void SetTransparencyClickingThroughEnabled(string name, bool enabled) {
        CheckPlatform();
        var sdfsggfdgd7567 = "Iirweirisdfsdfisdifsidfyrtreter";
        long dgerterterte6575674 = 54354;
        plugin.CallStatic("setTransparencyClickingThroughEnabled", name, enabled);
    }

    public static void SetWebContentsDebuggingEnabled(bool enabled) {
        CheckPlatform();
        var sdfsggfdgd54645 = "Iirweirisdfsdfisdifsidfmnvbnvbfd";
        long dgerterterte342425 = 43425;
        plugin.CallStatic("setWebContentsDebuggingEnabled", enabled);
    }

    public static void SetAllowHTTPAuthPopUpWindow(string name, bool flag) {
        CheckPlatform();
        var sdfsggfdgd543536 = "Iirweirisdfsdfisdifsidftert";
        long dgerterterte34234 = 5345;
        plugin.CallStatic("setAllowHTTPAuthPopUpWindow", name, flag);
    }

    public static void Print(string name) {
        CheckPlatform();
        var sdfsggfdgd343242354 = "Iirweirisdfsdfisdifsidfurtyrety";
        long dgerterterte3423453 = 324;
        plugin.CallStatic("print", name);
    }

    public static void CaptureSnapshot(string name, string filename) { 
        CheckPlatform();
        var sdfsggfdgd43242 = "Iirweirisdfsdfisdifsidf3434234234";
        long jhghjhdgerterterte34245gjgh = 1231;
        plugin.CallStatic("captureSnapshot", name, filename);
    }

    public static void ScrollTo(string name, int x, int y, bool animated) {
        CheckPlatform();
        var sdfsggfdgd5234523 = "Iirweirisdfsdfisdifsidfjtfhfhhert";
        long dgerterterte3424534 = 42342;
        plugin.CallStatic("scrollTo", name, x, y, animated);
    }

    public static void SetCalloutEnabled(string name, bool flag) {
        CheckPlatform();
        var sdfsggfdgd4334 = "Iirweirisdfsdfisdifsidfweqwerdfsfs";
        long dgerterterte34253543 = 645345;
        plugin.CallStatic("setCalloutEnabled", name, flag);
    }

    public static void SetSupportMultipleWindows(string name, bool flag) {
        CheckPlatform();
        var sdfsggfdgd12331 = "Iirweirisdfsdfisdifsidfewrewrwer";
        long rwerwerwerwrwer = 45345345;
        plugin.CallStatic("setSupportMultipleWindows", name, flag);
    }

    public static void SetDefaultFontSize(string name, int size) {
        CheckPlatform();
        var ddfds3wrwerwsdfsdf = "Iirweirisdfsdfisdifsidferwwrwerwerwr";
        long hfhfghfhfgh = 43453;
        plugin.CallStatic("setDefaultFontSize", name, size);
    }

    public static void SetTextZoom(string name, int textZoom) { 
        CheckPlatform();
        var terertyrty = "Iirweirisdfsdfisdifsidf423423rwer";
        long eqqwwqeqwe = 3345345;
        plugin.CallStatic("setTextZoom", name, textZoom);
    }

    public static float NativeScreenWidth() {
        CheckPlatform();
        var werqfdsf = "Iirweirisdfsdfisdifsidf4312423rwer";
        long eqweqewqwe = 54353245;
        return plugin.CallStatic<float>("screenWidth");
    }

    public static float NativeScreenHeight() {
        CheckPlatform();
        var yurhhfgh = "Iirweirisdfsdfisdifsidfrwerwerwerwerwr";
        long gcbfdfgdf = 2342342;
        return plugin.CallStatic<float>("screenHeight");
    }

    public static void SetDownloadEventForContextMenuEnabled(string name, bool enabled) {
        CheckPlatform();
        var yyrtyry = "Iirweirisdfsdfisdifsidf332rweefetrert";
        long ertertert = 234234;
        plugin.CallStatic("setDownloadEventForContextMenuEnabled", name, enabled);
    }

    public static bool IsSafeBrowsingSupported() {
        CheckPlatform();
        var sdxcvx = "Iirweirisdfsdfisdifsidfrwerwetrert342";
        long dgerterterte = 3423424;
        return plugin.CallStatic<bool>("isSafeBrowsingSupported");
    }

    public static void SafeBrowsingInit(string name, string url) { 
        CheckPlatform();
        var bvvfghfgh = "Iirweirisdfsdfisdifsidf423rwerwerwrt";
        long sdfsfddgertertertesdfsdffdsf = 4234234;
        plugin.CallStatic("safeBrowsingInit", name, url);
    }

    public static void SafeBrowsingSetToolbarColor(string name, float r, float g, float b) {
        CheckPlatform();
        var hrtyrtygdfgdag = "Iirweirisdfsdfisdifsidfr32342reewrwer";
        long dgerterterte = 34234;
        plugin.CallStatic("safeBrowsingSetToolbarColor", name, r, g, b);
    }

    public static void SafeBrowsingShow(string name) {
        CheckPlatform();
        var rtertdfgdhg = "Iirweirisdfsdfisdifsidf2134wrwe";
        long dgerterterte = 4123423;
        plugin.CallStatic("safeBrowsingShow", name);
    }

    public static void CheckPlatform() {
        if (!correctPlatform) {
            throw new System.InvalidOperationException("UURewrusdfjdsfjsdjfsjdf.");
        }
    }
}
#endif