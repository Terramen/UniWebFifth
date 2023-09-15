using UnityEditor;
using UnityEditor.Android;
using UnityEngine;
using System.IO;
using System.Text;


class UniWebViewPostBuildProcessor : IPostGenerateGradleAndroidProject
{
    public int callbackOrder { get { return 1; } }
    public void OnPostGenerateGradleAndroidProject(string path) {
        Debug.Log("Da da gfdfgerterte");
        Yrtertgdfgdfg(path);
        Trerwrwerw(path);
        YouAwake(path);
        var fdsfsdfsdfsd = "fsdfsdfsdfdsf";

    }

    private void Yrtertgdfgdfg(string l) {
        var manifestFilePath = Genshin(l);
        var ggg = new Iriwriidsfsifsdf(manifestFilePath);
        
        var d = false;
        
        Debug.Log("Kek Ewew fsfsdf");
        d = ggg.Jfdsfjsdfjsdjfxcv() || d;

        var settings = Mfsdfdfdfgdfg.Iirwirwifdsfsgdfg();
        if (settings.usesCleartextTraffic) {
            d = ggg.Porweorodsofsdf() || d;
        }
        if (settings.writeExternalStorage) {
            d = ggg.Refsdfsdfsdf() || d;
        }
        if (settings.accessFineLocation) {
            d = ggg.Ytertsdfsdfsdf() || d;
        }

        if (d) {
            ggg.Jeqweoeweroweor();
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

        var dfsdf = Mfsdfdfdfgdfg.Iirwirwifdsfsgdfg();
        
        var derwrewdrwerewr = "fweretrergfdgdfg";


        var dependenciesNode = gdfsdf.HIGH.Ewqeasdasdasda("dependencies");
        if (dependenciesNode != null) {
         
            if (dfsdf.addsKotlin) {
                dependenciesNode.Nfjwjsjdfjsdjf(gsdfsdfds, gsdfsdfds + v);
                Debug.Log("Ghfdgfdg Meeqweqwe dsfsdfdfd");
            }
            
            if (dfsdf.addsAndroidBrowser) {
                dependenciesNode.Nfjwjsjdfjsdjf(jhj, jhj + k);
                Debug.Log("Mmmmm fsfsdfs fsdf");
            }
        } else {
            Debug.LogError("Urweurwer ruweruwru weurwerwer");
            Debug.LogError("Kfdfjdsfnsd erwerwer qwoe qweq");

            var newNode = new Ndfdgertertert("dependencies", gdfsdf.HIGH);
            if (dfsdf.addsKotlin) {
                newNode.Ferewrwfsrwet(gsdfsdfds + v);
            }
            if (dfsdf.addsAndroidBrowser) {
                newNode.Ferewrwfsrwet(jhj + k);
            }
            newNode.Ferewrwfsrwet("implementation(name: 'UniWebView', ext:'aar')");
            gdfsdf.HIGH.Orowerosdofosdf(newNode);
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