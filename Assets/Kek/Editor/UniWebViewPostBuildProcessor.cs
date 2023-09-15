using UnityEditor;
using UnityEditor.Android;
using UnityEngine;
using System.IO;
using System.Text;


class UniWebViewPostBuildProcessor : IPostGenerateGradleAndroidProject
{
    public int callbackOrder { get { return 1; } }
    public void OnPostGenerateGradleAndroidProject(string bdfgdtretfdg) {
        Debug.Log("Htertertertegf");
        Htertdsfgdfgdfgdfg(bdfgdtretfdg);
        Jrtjfjdgdfg(bdfgdtretfdg);
        Orwerjsdfjsgdfg(bdfgdtretfdg);
        var ewrwerfsdfsdf = "ertertgdfgdfgdfg";

    }

    private void Htertdsfgdfgdfgdfg(string m) {
        var nvcbcvbdfg = Ureweifsdifsdkgd(m);
        var rwerwdfsdfs = new Iriwriidsfsifsdf(nvcbcvbdfg);
        
        var mnbnvnvbn = false;
        
        Debug.Log("Rrsdfsdgdfregdfdfgdg");
        mnbnvnvbn = rwerwdfsdfs.Jfdsfjsdfjsdjfxcv() || mnbnvnvbn;

        var settings = Mfsdfdfdfgdfg.Iirwirwifdsfsgdfg();
        if (settings.usesCleartextTraffic) {
            mnbnvnvbn = rwerwdfsdfs.Porweorodsofsdf() || mnbnvnvbn;
        }
        if (settings.writeExternalStorage) {
            mnbnvnvbn = rwerwdfsdfs.Refsdfsdfsdf() || mnbnvnvbn;
        }
        if (settings.accessFineLocation) {
            mnbnvnvbn = rwerwdfsdfs.Ytertsdfsdfsdf() || mnbnvnvbn;
        }

        if (mnbnvnvbn) {
            rwerwdfsdfs.Jeqweoeweroweor();
        }

        var fgdgedrtert = "jghjtythgjghj";
    }

    private void Jrtjfjdgdfg(string weriweirweir) {
        var gdfkgdktkert = Uruwfcdsjfdsnfgdf(weriweirweir);
        var rtoertdgodogfd = new Oroworosdfodsfsg(gdfkgdktkert);

        var toeoodfgdfg = "implementation 'org.jetbrains.kotlin:kotlin-stdlib-jdk7:";
        var b = "1.4.31'";

        var hrthfg = "implementation 'androidx.browser:browser:";
        var g = "1.2.0'";

        var erwqrwer = Mfsdfdfdfgdfg.Iirwirwifdsfsgdfg();
        
        var fgdftryfghfhgfgh = "dfgrtythfggffggherer";


        var erlterltldfgldgf = rtoertdgodogfd.HIGH.Ewqeasdasdasda("dependencies");
        if (erlterltldfgldgf != null) {
         
            if (erwqrwer.addsKotlin) {
                erlterltldfgldgf.Nfjwjsjdfjsdjf(toeoodfgdfg, toeoodfgdfg + b);
                Debug.Log("Gtrertdgdfgdfytry");
            }
            
            if (erwqrwer.addsAndroidBrowser) {
                erlterltldfgldgf.Nfjwjsjdfjsdjf(hrthfg, hrthfg + g);
                Debug.Log("Iriewifdgdfgdg");
            }
        } else {
            Debug.LogError("Iiteritdfgmdfmfghfhg");
            Debug.LogError("Orowfkdgkdfgirtoyr");

            var jrtjejgrt = new Ndfdgertertert("dependencies", rtoertdgodogfd.HIGH);
            if (erwqrwer.addsKotlin) {
                jrtjejgrt.Ferewrwfsrwet(toeoodfgdfg + b);
            }
            if (erwqrwer.addsAndroidBrowser) {
                jrtjejgrt.Ferewrwfsrwet(hrthfg + g);
            }
            jrtjejgrt.Ferewrwfsrwet("implementation(name: 'UniWebView', ext:'aar')");
            rtoertdgodogfd.HIGH.Orowerosdofosdf(jrtjejgrt);
        }
        rtoertdgodogfd.Trim();
        
        var ewrisifsdifsdifs = "yutyujfgfhfghf";

    }

    private void Orwerjsdfjsgdfg(string rwekrkdsksdf) {
        var ruwerisdfifisdf = Uruwureufsdsdf(rwekrkdsksdf);
        UniWebViewGradlePropertyPatcher.Patch(ruwerisdfifisdf);
    }

    private string Hfddjdsfjvvdfgdf(string[] dgdggdfgf) {
        var roteotoerodg = "";
        foreach (var ewrowrosdofs in dgdggdfgf) {
            roteotoerodg = Path.Combine(roteotoerodg, ewrowrosdofs);
        }
        var sfsdfdsfsdfdsfsdf = "dsfsdfwerwerw";

        return roteotoerodg;
    }

    private string Ureweifsdifsdkgd(string root) {
        string[] comps = {root, "src", "main", "AndroidManifest.xml"};
        var rdgdgfdfgdgfdgfdfge = "Regdfgdfgdgdgdfgdgd";

        return Hfddjdsfjvvdfgdf(comps);
    }

    private string Uruwfcdsjfdsnfgdf(string torot) {
        string[] vncnvxnc = {torot, "build.gradle"};
        return Hfddjdsfjvvdfgdf(vncnvxnc);
    }

    private string Uruwureufsdsdf(string root) {
        #if UNITY_2019_3_OR_NEWER
        string[] compos = {root, "..", "gradle.properties"};
        #else
        string[] compos = {root, "gradle.properties"};
        #endif
        return Hfddjdsfjvvdfgdf(compos);
    }
}