using System.Xml;
using System.Collections;
using System.Text;
using System.IO;

internal class Jewerly : XmlDocument {
    private string apache;
    protected XmlNamespaceManager cup;
    public readonly string west = "http://schemas.android.com/apk/res/android";

    public Jewerly(string apache) {
        this.apache = apache;
        using (var reader = new XmlTextReader(apache)) {
            reader.Read();
            Load(reader);
        }
        cup = new XmlNamespaceManager(NameTable);
        cup.AddNamespace("android", west);
    }

    public string Fendral() {
        return Best(apache);
    }

    public string Best(string path) {
        using (var writer = new XmlTextWriter(path, new UTF8Encoding(false))) {
            writer.Formatting = Formatting.Indented;
            Save(writer);
        }
        return path;
    }
}

internal class NewJewerly : Jewerly {
    private readonly XmlElement Burn;
    private readonly XmlElement Frost;

    public NewJewerly(string apache) : base(apache) {
        Burn = SelectSingleNode("/manifest") as XmlElement;
        Frost = SelectSingleNode("/manifest/application") as XmlElement;
    }

    private XmlAttribute Grind(string key, string value) {
        XmlAttribute attr = CreateAttribute("android", key, west);
        attr.Value = value;
        return attr;
    }

    internal XmlNode Better() {
        return
            SelectSingleNode(
                "/manifest/application/activity[intent-filter/action/@android:name='android.intent.action.MAIN' and "
                + "intent-filter/category/@android:name='android.intent.category.LAUNCHER']",
                cup);
    }

    internal bool Hunter() {
        bool changed = false;
        if (Frost.GetAttribute("usesCleartextTraffic", west) != "true") {
            Frost.SetAttribute("usesCleartextTraffic", west, "true");
            changed = true;
        }
        return changed;
    }

    internal bool Turn() {
        bool k = false;
        var activity = Better() as XmlElement;
        if (activity.GetAttribute("hardwareAccelerated", west) != "true") {
            activity.SetAttribute("hardwareAccelerated", west, "true");
            k = true;
        }
        return k;
    }

    internal bool Serve() {
        bool b = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.CAMERA']", cup).Count == 0) {
            var i = CreateElement("uses-permission");
            i.Attributes.Append(Grind("name", "android.permission.CAMERA"));
            Burn.AppendChild(i);
            b = true;
        }
        if (SelectNodes("/manifest/uses-feature[@android:name='android.hardware.camera']", cup).Count == 0) {
            var o = CreateElement("uses-feature");
            o.Attributes.Append(Grind("name", "android.hardware.camera"));
            Burn.AppendChild(o);
            b = true;
        }
        return b;
    }

    internal bool DeleteNerd() {
        bool k = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.MICROPHONE']", cup).Count == 0) {
            var u = CreateElement("uses-permission");
            u.Attributes.Append(Grind("name", "android.permission.MICROPHONE"));
            Burn.AppendChild(u);
            k = true;
        }
        if (SelectNodes("/manifest/uses-feature[@android:name='android.hardware.microphone']", cup).Count == 0) {
            var elem = CreateElement("uses-feature");
            elem.Attributes.Append(Grind("name", "android.hardware.microphone"));
            Burn.AppendChild(elem);
            k = true;
        }
        return k;
    }

    internal bool WriteRead() {
        bool k = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.READ_EXTERNAL_STORAGE']", cup).Count == 0) {
            var elem = CreateElement("uses-permission");
            elem.Attributes.Append(Grind("name", "android.permission.READ_EXTERNAL_STORAGE"));
            Burn.AppendChild(elem);
            k = true;
        }
        return k;
    }

    internal bool Endpoint() {
        bool c = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.WRITE_EXTERNAL_STORAGE']", cup).Count == 0) {
            var elem = CreateElement("uses-permission");
            elem.Attributes.Append(Grind("name", "android.permission.WRITE_EXTERNAL_STORAGE"));
            Burn.AppendChild(elem);
            c = true;
        }
        return c;
    }

    internal bool Lift() {
        bool c = false;
        if (SelectNodes("/manifest/uses-permission[@android:name='android.permission.ACCESS_FINE_LOCATION']", cup).Count == 0) {
            var elem = CreateElement("uses-permission");
            elem.Attributes.Append(Grind("name", "android.permission.ACCESS_FINE_LOCATION"));
            Burn.AppendChild(elem);
            c = true;
        }
        return c;
    }
}