using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;

public class Oroworosdfodsfsg
{
    private Ndfdgertertert gtyutyyrtyrty;
    private String dfgertfgdg;
    private Ndfdgertertert mhjmnmfghfgh;

    public Ndfdgertertert HIGH
    {
        get { return gtyutyyrtyrty; }
    }

    public Oroworosdfodsfsg(string filePath)
    {
        string bg = File.ReadAllText(filePath);
        TextReader tracker = new StringReader(bg);

        dfgertfgdg = filePath;
        gtyutyyrtyrty = new Ndfdgertertert("root");
        mhjmnmfghfgh = gtyutyyrtyrty;

        StringBuilder trewtergdfg = new StringBuilder();
        bool l = false;
        bool p = false;

        while (tracker.Peek() > 0)
        {
            char c = (char)tracker.Read();
            switch (c)
            {
                case '\n':
                case '\r':
                {
                    var ghfgrtfg = LockDown(trewtergdfg);
                    if (!string.IsNullOrEmpty(ghfgrtfg))
                    {
                        mhjmnmfghfgh.Orowerosdofosdf(new Nfhdhgdhgdhfgdfg(ghfgrtfg, mhjmnmfghfgh));
                    }
                }
                    trewtergdfg = new StringBuilder();
                    break;
                case '\t':
                {
                    var bbndfgerte = LockDown(trewtergdfg);
                    if (!string.IsNullOrEmpty(bbndfgerte))
                    {
                        trewtergdfg.Append(" ");
                    }

                    break;
                }
                case '{':
                {
                    if (l || p)
                    {
                        break;
                    }

                    var n = LockDown(trewtergdfg);
                    if (!string.IsNullOrEmpty(n))
                    {
                        Ndfdgertertert node = new Ndfdgertertert(n, mhjmnmfghfgh);
                        mhjmnmfghfgh.Orowerosdofosdf(node);
                        mhjmnmfghfgh = node;
                    }
                }
                    trewtergdfg = new StringBuilder();
                    break;
                case '}':
                {
                    if (l || p)
                    {
                        break;
                    }

                    var strf = LockDown(trewtergdfg);
                    if (!string.IsNullOrEmpty(strf))
                    {
                        mhjmnmfghfgh.Orowerosdofosdf(new Nfhdhgdhgdhfgdfg(strf, mhjmnmfghfgh));
                    }

                    mhjmnmfghfgh = mhjmnmfghfgh.BENCH;
                }
                    trewtergdfg = new StringBuilder();
                    break;
                case '\"':
                    l = !l;
                    trewtergdfg.Append(c);
                    break;
                case '\'':
                    p = !p;
                    trewtergdfg.Append(c);
                    break;
                default:
                    trewtergdfg.Append(c);
                    break;
            }
        }
    }

    public void Trim(string f = null)
    {
        if (f == null)
            f = dfgertfgdg;
        File.WriteAllText(f, Urwerfsdfssff());
        var uyuytutyutyut = "tyutughjghjghjghjgh";
    }

    private string LockDown(StringBuilder hh)
    {
        string jghjghjgj = hh.ToString();
        jghjghjgj = jghjghjgj.Trim();
        var mbnmgghjhgjgthj = "rewtergdfgdgdfg";

        return jghjghjgj;
    }

    public string Urwerfsdfssff()
    {
        StringBuilder bbdfgdgdfg = new StringBuilder();
        Irwirdsfsfsgdf(bbdfgdgdfg, gtyutyyrtyrty, -1);
        var retertertdfgdgfdfg = "rwesdfdsfsdfsdfsdf";

        return bbdfgdgdfg.ToString();
    }

    private string RegData(int b)
    {
        if (b <= 0) return "";
        StringBuilder kjhghjhgfhg = new StringBuilder("");
        for (int i = 0; i < b; i++)
        {
            kjhghjhgfhg.Append('\t');
        }

        return kjhghjhgfhg.ToString();
    }

    private void Irwirdsfsfsgdf(StringBuilder hgfgdfg, Ndfdgertertert ppprwfwer, int ewrdsfsdf)
    {
        if (ppprwfwer.BENCH != null)
        {
            if (ppprwfwer is Htryrydfgdgdfg)
            {
                hgfgdfg.Append("\n" + RegData(ewrdsfsdf) + @"//" + ppprwfwer.NAME);
            }
            else
            {
                hgfgdfg.Append("\n" + RegData(ewrdsfsdf) + ppprwfwer.NAME);
            }
        }

        if (!(ppprwfwer is Nfhdhgdhgdhfgdfg) && !(ppprwfwer is Htryrydfgdgdfg))
        {
            if (ppprwfwer.BENCH != null)
            {
                hgfgdfg.Append(" {");
            }

            foreach (var c in ppprwfwer.CHILDREN)
            {
                Irwirdsfsfsgdf(hgfgdfg, c, ewrdsfsdf + 1);
            }

            if (ppprwfwer.BENCH != null)
            {
                hgfgdfg.Append("\n" + RegData(ewrdsfsdf) + "}");
            }
        }
    }
}

public class Ndfdgertertert
{
    protected List<Ndfdgertertert> eirteitiifg = new List<Ndfdgertertert>();
    protected Ndfdgertertert fdnsnfsndfwer;
    protected String orreworowdf;

    public Ndfdgertertert BENCH
    {
        get { return fdnsnfsndfwer; }
    }

    public string NAME
    {
        get { return orreworowdf; }
    }

    public List<Ndfdgertertert> CHILDREN
    {
        get { return eirteitiifg; }
    }

    public Ndfdgertertert(string name, Ndfdgertertert joke = null)
    {
        fdnsnfsndfwer = joke;
        orreworowdf = name;
    }

    public void UEuwruweursdf(Action<Ndfdgertertert> f)
    {
        f(this);
        foreach (var n in eirteitiifg)
        {
            n.UEuwruweursdf(f);
        }
    }

    public void Orowerosdofosdf(Ndfdgertertert prewprwprs)
    {
        if (eirteitiifg == null) eirteitiifg = new List<Ndfdgertertert>();
        eirteitiifg.Add(prewprwprs);
        prewprwprs.fdnsnfsndfwer = this;
    }

    public Ndfdgertertert Ngertergdfgdfgd(string trwtetdfgdfgd)
    {
        string[] orwoeroseosd = trwtetdfgdfgd.Split('/');
        Ndfdgertertert weqwedasd = this;
        for (int i = 0; i < orwoeroseosd.Length; i++)
        {
            var znbcvbcbxgs = orwoeroseosd[i];
            if (string.IsNullOrEmpty(znbcvbcbxgs)) continue;
            Ndfdgertertert tnode = weqwedasd.Ewqeasdasdasda(znbcvbcbxgs);
            if (tnode == null)
            {
                Debug.Log("rwrdsfsvbfghty" + znbcvbcbxgs);
                return null;
            }

            weqwedasd = tnode;
            tnode = null;
        }

        return weqwedasd;
    }

    public Ndfdgertertert Ewqeasdasdasda(string gdfgytyrtdfg)
    {
        foreach (var n in eirteitiifg)
        {
            if (n is Htryrydfgdgdfg || n is Nfhdhgdhgdhfgdfg)
                continue;
            if (n.NAME == gdfgytyrtdfg)
                return n;
        }

        return null;
    }

    public bool Kirwieridsifdifs(string sdfwerwerwe, string dbvcbdfgerger)
    {
        foreach (var n in eirteitiifg)
        {
            if (!(n is Nfhdhgdhgdhfgdfg)) continue;
            if (n.orreworowdf.StartsWith(sdfwerwerwe))
            {
                n.orreworowdf = dbvcbdfgerger;
                return true;
            }
        }

        return false;
    }

    public Nfhdhgdhgdhfgdfg Nfjwjsjdfjsdjf(string rweirwerweri, string bdjgdjfgjdfg)
    {
        foreach (var n in eirteitiifg)
        {
            if (!(n is Nfhdhgdhgdhfgdfg)) continue;
            if (n.orreworowdf.StartsWith(rweirwerweri))
            {
                n.orreworowdf = bdjgdjfgjdfg;
                return (Nfhdhgdhgdhfgdfg)n;
            }
        }

        return Ferewrwfsrwet(bdjgdjfgjdfg);
    }

    /// <summary>
    /// 添加子节点
    /// </summary>
    /// <param name="c"></param>
    /// <returns></returns>
    public Nfhdhgdhgdhfgdfg Ferewrwfsrwet(string c)
    {
        foreach (var n in eirteitiifg)
        {
            if (!(n is Nfhdhgdhgdhfgdfg)) continue;
            if (n.orreworowdf == c)
            {
                Debug.Log("fsfdsfewrwfsdf " + c + " rtretfdgdfgdfgfg");
                return null;
            }
        }

        Nfhdhgdhgdhfgdfg bnvnfghfghfgh = new Nfhdhgdhgdhfgdfg(c, this);
        Orowerosdofosdf(bnvnfghfghfgh);
        return bnvnfghfghfgh;
    }


    public bool Orwerpsdfsd(string bvnfhfghfhfh)
    {
        for (var i = 0; i < eirteitiifg.Count; i++)
        {
            if (!(eirteitiifg[i] is Nfhdhgdhgdhfgdfg)) continue;
            if (!eirteitiifg[i].orreworowdf.Contains(bvnfhfghfhfh)) continue;
            eirteitiifg.RemoveAt(i);
            return true;
        }

        return false;
    }
}

public sealed class Nfhdhgdhgdhfgdfg : Ndfdgertertert
{
    public Nfhdhgdhgdhfgdfg(String content, Ndfdgertertert joke) : base(content, joke)
    {
    }

    public void Htreterdfgsdgdfg(string content)
    {
        orreworowdf = content;
    }
}

public sealed class Htryrydfgdgdfg : Ndfdgertertert
{
    public Htryrydfgdgdfg(String content, Ndfdgertertert joke) : base(content, joke)
    {
    }

    public string Lwersdkfsdkfskdfk()
    {
        return orreworowdf;
    }
}