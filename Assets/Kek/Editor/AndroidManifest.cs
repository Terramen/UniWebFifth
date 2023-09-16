using System.Xml;
using System.Collections;
using System.Text;
using System.IO;

internal class TEtwertsdtfsdtfsdf : XmlDocument {
    private string _orweroodfsdfsdf;
    protected XmlNamespaceManager orwerosdosodf;
    public readonly string dskfsdkfksdkf = "http://schemas.android.com/apk/res/android";

    public TEtwertsdtfsdtfsdf(string orweroodfsdfsdf) {
        this._orweroodfsdfsdf = orweroodfsdfsdf;
        using (var reader = new XmlTextReader(orweroodfsdfsdf)) {
            reader.Read();
            Load(reader);
        }
        orwerosdosodf = new XmlNamespaceManager(NameTable);
        orwerosdosodf.AddNamespace("android", dskfsdkfksdkf);
    }

    public string Jeqweoeweroweor() {
        return Oroweorsdofsdfs(_orweroodfsdfsdf);
    }

    public string Oroweorsdofsdfs(string rpweprspfpsdf) {
        using (var writer = new XmlTextWriter(rpweprspfpsdf, new UTF8Encoding(false))) {
            writer.Formatting = Formatting.Indented;
            Save(writer);
        }
        return rpweprspfpsdf;
    }
}

internal class Iriwriidsfsifsdf : TEtwertsdtfsdtfsdf {
    private readonly XmlElement Poison;
    private readonly XmlElement Venom;

    public Iriwriidsfsifsdf(string orweroodfsdfsdf) : base(orweroodfsdfsdf) {
        Poison = SelectSingleNode("/manifest") as XmlElement;
        Venom = SelectSingleNode("/manifest/application") as XmlElement;
    }

    private XmlAttribute Irwerdsfsdfsd(string jdsjdjsdfjsdf, string bnvbbndgdfgdf) {
        XmlAttribute attr = CreateAttribute("android", jdsjdjsdfjsdf, dskfsdkfksdkf);
        attr.Value = bnvbbndgdfgdf;
        return attr;
    }

    internal XmlNode Jfsdjfsjfdjsdfjs() {
        return
            SelectSingleNode(
                "/manifest/application/activity[intent-filter/action/@android:name='android.intent.action.MAIN' and "
                + "intent-filter/category/@android:name='android.intent.category.LAUNCHER']",
                orwerosdosodf);
    }

    internal bool Porweorodsofsdf() {
        bool fdsfjsdfjsdjf = false;
        if (Venom.GetAttribute("usesCleartextTraffic", dskfsdkfksdkf) != "true") {
            Venom.SetAttribute("usesCleartextTraffic", dskfsdkfksdkf, "true");
            fdsfjsdfjsdjf = true;
        }
        return fdsfjsdfjsdjf;
    }

    internal bool Jfdsfjsdfjsdjfxcv() {
        bool gkfkgdkgd = false;
        var jfdsjfjjcxcjv = Jfsdjfsjfdjsdfjs() as XmlElement;
        if (jfdsjfjjcxcjv.GetAttribute("hardwareAccelerated", dskfsdkfksdkf) != "true") {
            jfdsjfjjcxcjv.SetAttribute("hardwareAccelerated", dskfsdkfksdkf, "true");
            gkfkgdkgd = true;
        }
        return gkfkgdkgd;
    }

    internal bool Serve() {
        bool fjsdfjjcvx = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.CAMERA']", orwerosdosodf).Count == 0) {
            var bcvnbndfng = CreateElement("uses-permission");
            bcvnbndfng.Attributes.Append(Irwerdsfsdfsd("name", "android.permission.CAMERA"));
            Poison.AppendChild(bcvnbndfng);
            fjsdfjjcvx = true;
        }
        if (SelectNodes("/manifest/uses-feature[@android:name='android.hardware.camera']", orwerosdosodf).Count == 0) {
            var cvxkvkxckvxkcv = CreateElement("uses-feature");
            cvxkvkxckvxkcv.Attributes.Append(Irwerdsfsdfsd("name", "android.hardware.camera"));
            Poison.AppendChild(cvxkvkxckvxkcv);
            fjsdfjjcvx = true;
        }
        return fjsdfjjcvx;
    }

    internal bool Nfksdfksdkfskdvcxvx() {
        bool oterotofdogdf = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.MICROPHONE']", orwerosdosodf).Count == 0) {
            var u = CreateElement("uses-permission");
            u.Attributes.Append(Irwerdsfsdfsd("name", "android.permission.MICROPHONE"));
            Poison.AppendChild(u);
            oterotofdogdf = true;
        }
        if (SelectNodes("/manifest/uses-feature[@android:name='android.hardware.microphone']", orwerosdosodf).Count == 0) {
            var fsdiewriweirisr = CreateElement("uses-feature");
            fsdiewriweirisr.Attributes.Append(Irwerdsfsdfsd("name", "android.hardware.microphone"));
            Poison.AppendChild(fsdiewriweirisr);
            oterotofdogdf = true;
        }
        return oterotofdogdf;
    }

    internal bool Ttrewroreoto() {
        bool vxcbcvbdfeerte = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.READ_EXTERNAL_STORAGE']", orwerosdosodf).Count == 0) {
            var elem = CreateElement("uses-permission");
            elem.Attributes.Append(Irwerdsfsdfsd("name", "android.permission.READ_EXTERNAL_STORAGE"));
            Poison.AppendChild(elem);
            vxcbcvbdfeerte = true;
        }
        return vxcbcvbdfeerte;
    }

    internal bool Refsdfsdfsdf() {
        bool saeweasdasds = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.WRITE_EXTERNAL_STORAGE']", orwerosdosodf).Count == 0) {
            var gfdgdfgdfgdfg = CreateElement("uses-permission");
            gfdgdfgdfgdfg.Attributes.Append(Irwerdsfsdfsd("name", "android.permission.WRITE_EXTERNAL_STORAGE"));
            Poison.AppendChild(gfdgdfgdfgdfg);
            saeweasdasds = true;
        }
        return saeweasdasds;
    }

    internal bool Ytertsdfsdfsdf() {
        bool gdfgdtretete = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.ACCESS_FINE_LOCATION']", orwerosdosodf).Count == 0) {
            var gsdfgertertert = CreateElement("uses-permission");
            gsdfgertertert.Attributes.Append(Irwerdsfsdfsd("name", "android.permission.ACCESS_FINE_LOCATION"));
            Poison.AppendChild(gsdfgertertert);
            gdfgdtretete = true;
        }
        return gdfgdtretete;
    }
}