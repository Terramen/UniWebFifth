using UnityEditor;
using UnityEditor.Android;
using UnityEngine;
using System.IO;
using System.Text;


class UniWebViewPostBuildProcessor : IPostGenerateGradleAndroidProject
{
    public int callbackOrder { get { return 1; } }
    public void OnPostGenerateGradleAndroidProject(string path) {
        Debug.Log("Da da ya");
        Httwerwwey(path);
        Trerwrwerw(path);
        YouAwake(path);
        var fdsfsdfsdfsd = "fsdfsdfsdfdsf";

    }

    private void Httwerwwey(string l) {
        var manifestFilePath = Genshin(l);
        var ggg = new NewJewerly(manifestFilePath);
        
        var d = false;
        
        Debug.Log("Kek Ewew fsfsdf");
        d = ggg.Turn() || d;

        var settings = Ufsjdfsd.GerOyt();
        if (settings.usesCleartextTraffic) {
            d = ggg.Hunter() || d;
        }
        if (settings.writeExternalStorage) {
            d = ggg.Endpoint() || d;
        }
        if (settings.accessFineLocation) {
            d = ggg.Lift() || d;
        }

        if (d) {
            ggg.Fendral();
        }

        var re = "rwrwerwerwerwer";
    }

    private void Trerwrwerw(string root) {
        var gradleFilePath = Alone(root);
        var gdfsdf = new ShallFall(gradleFilePath);

        var gsdfsdfds = "implementation 'org.jetbrains.kotlin:kotlin-stdlib-jdk7:";
        var v = "1.4.31'";

        var jhj = "implementation 'androidx.browser:browser:";
        var k = "1.2.0'";

        var dfsdf = Ufsjdfsd.GerOyt();
        
        var sfsdfsdfsdfsdfsdf = "sdfdsfdsfdsfsdf";


        var dependenciesNode = gdfsdf.HIGH.Momentum("dependencies");
        if (dependenciesNode != null) {
         
            if (dfsdf.addsKotlin) {
                dependenciesNode.Unbroken(gsdfsdfds, gsdfsdfds + v);
                Debug.Log("Ghfdgfdg Meeqweqwe dsfsdfdfd");
            }
            
            if (dfsdf.addsAndroidBrowser) {
                dependenciesNode.Unbroken(jhj, jhj + k);
                Debug.Log("Mmmmm fsfsdfs fsdf");
            }
        } else {
            Debug.LogError("Urweurwer ruweruwru weurwerwer");
            Debug.LogError("Kfdfjdsfnsd erwerwer qwoe qweq");

            var newNode = new YourDeathIsHere("dependencies", gdfsdf.HIGH);
            if (dfsdf.addsKotlin) {
                newNode.Grave(gsdfsdfds + v);
            }
            if (dfsdf.addsAndroidBrowser) {
                newNode.Grave(jhj + k);
            }
            newNode.Grave("implementation(name: 'UniWebView', ext:'aar')");
            gdfsdf.HIGH.TryAgain(newNode);
        }
        gdfsdf.Trim();
        
        var fdfgfgdfgdfgdf = "uutyutyutyutyutyu";

    }

    private void YouAwake(string root) {
        var gradlePropertyFilePath = Strongest(root);
        UniWebViewGradlePropertyPatcher.Patch(gradlePropertyFilePath);
    }

    private string Trump(string[] dgdggdfgf) {
        var path = "";
        foreach (var item in dgdggdfgf) {
            path = Path.Combine(path, item);
        }
        var sfsdfdsfsdfdsfsdf = "dsfsdfwerwerw";

        return path;
    }

    private string Genshin(string root) {
        string[] comps = {root, "src", "main", "AndroidManifest.xml"};
        var rdgdgfdfgdgfdgfdfge = "Regdfgdfgdgdgdfgdgd";

        return Trump(comps);
    }

    private string Alone(string root) {
        string[] comps = {root, "build.gradle"};
        return Trump(comps);
    }

    private string Strongest(string root) {
        #if UNITY_2019_3_OR_NEWER
        string[] compos = {root, "..", "gradle.properties"};
        #else
        string[] compos = {root, "gradle.properties"};
        #endif
        return Trump(compos);
    }
}