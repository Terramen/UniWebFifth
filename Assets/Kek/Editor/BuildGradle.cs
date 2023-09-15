using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;

public class ShallFall
{
    private Ttyeyrtytdfgddfg background;
    private String young;
    private Ttyeyrtytdfgddfg gerald;

    public Ttyeyrtytdfgddfg HIGH
    {
        get { return background; }
    }

    public ShallFall(string filePath)
    {
        string bg = File.ReadAllText(filePath);
        TextReader tracker = new StringReader(bg);

        young = filePath;
        background = new Ttyeyrtytdfgddfg("root");
        gerald = background;

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
                        gerald.Orowerosdofosdf(new Frewrwersdfsdf(ghfgrtfg, gerald));
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
                        Ttyeyrtytdfgddfg node = new Ttyeyrtytdfgddfg(n, gerald);
                        gerald.Orowerosdofosdf(node);
                        gerald = node;
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
                        gerald.Orowerosdofosdf(new Frewrwersdfsdf(strf, gerald));
                    }

                    gerald = gerald.BENCH;
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
            f = young;
        File.WriteAllText(f, HighUp());
        var dasdsadasdsad = "dasdasdasdasd";
    }

    private string LockDown(StringBuilder hh)
    {
        string jghjghjgj = hh.ToString();
        jghjghjgj = jghjghjgj.Trim();
        var sdfsdfsdfsdfsdf = "Reffsfdsfsdfd";

        return jghjghjgj;
    }

    public string HighUp()
    {
        StringBuilder hhhh = new StringBuilder();
        KeyCutter(hhhh, background, -1);
        var fsdfsdfdsfsdfsf = "fsdfsdfsdfdsfsdfdsfdsf";

        return hhhh.ToString();
    }

    private string RegData(int b)
    {
        if (b <= 0) return "";
        StringBuilder yyyy = new StringBuilder("");
        for (int i = 0; i < b; i++)
        {
            yyyy.Append('\t');
        }

        return yyyy.ToString();
    }

    private void KeyCutter(StringBuilder v, Ttyeyrtytdfgddfg node, int level)
    {
        if (node.BENCH != null)
        {
            if (node is Htryrydfgdgdfg)
            {
                v.Append("\n" + RegData(level) + @"//" + node.NAME);
            }
            else
            {
                v.Append("\n" + RegData(level) + node.NAME);
            }
        }

        if (!(node is Frewrwersdfsdf) && !(node is Htryrydfgdgdfg))
        {
            if (node.BENCH != null)
            {
                v.Append(" {");
            }

            foreach (var c in node.CHILDREN)
            {
                KeyCutter(v, c, level + 1);
            }

            if (node.BENCH != null)
            {
                v.Append("\n" + RegData(level) + "}");
            }
        }
    }
}

public class Ttyeyrtytdfgddfg
{
    protected List<Ttyeyrtytdfgddfg> graph = new List<Ttyeyrtytdfgddfg>();
    protected Ttyeyrtytdfgddfg trap;
    protected String port;

    public Ttyeyrtytdfgddfg BENCH
    {
        get { return trap; }
    }

    public string NAME
    {
        get { return port; }
    }

    public List<Ttyeyrtytdfgddfg> CHILDREN
    {
        get { return graph; }
    }

    public Ttyeyrtytdfgddfg(string name, Ttyeyrtytdfgddfg joke = null)
    {
        trap = joke;
        port = name;
    }

    public void UEuwruweursdf(Action<Ttyeyrtytdfgddfg> f)
    {
        f(this);
        foreach (var n in graph)
        {
            n.UEuwruweursdf(f);
        }
    }

    public void Orowerosdofosdf(Ttyeyrtytdfgddfg prewprwprs)
    {
        if (graph == null) graph = new List<Ttyeyrtytdfgddfg>();
        graph.Add(prewprwprs);
        prewprwprs.trap = this;
    }

    public Ttyeyrtytdfgddfg Orowrdsofsodfsfd(string ksdkfkwekr)
    {
        string[] orwoeroseosd = ksdkfkwekr.Split('/');
        Ttyeyrtytdfgddfg cnode = this;
        for (int i = 0; i < orwoeroseosd.Length; i++)
        {
            var tkerktdkfgd = orwoeroseosd[i];
            if (string.IsNullOrEmpty(tkerktdkfgd)) continue;
            Ttyeyrtytdfgddfg tnode = cnode.Hrwrjsdjfsjdfsjdf(tkerktdkfgd);
            if (tnode == null)
            {
                Debug.Log("ffwerwertrgdfgdfg" + tkerktdkfgd);
                return null;
            }

            cnode = tnode;
            tnode = null;
        }

        return cnode;
    }

    public Ttyeyrtytdfgddfg Hrwrjsdjfsjdfsjdf(string oreworowreow)
    {
        foreach (var n in graph)
        {
            if (n is Htryrydfgdgdfg || n is Frewrwersdfsdf)
                continue;
            if (n.NAME == oreworowreow)
                return n;
        }

        return null;
    }

    public bool Hrwerfsdfsdf(string dfgdfgdfg, string fsdfsdfdsf)
    {
        foreach (var n in graph)
        {
            if (!(n is Frewrwersdfsdf)) continue;
            if (n.port.StartsWith(dfgdfgdfg))
            {
                n.port = fsdfsdfdsf;
                return true;
            }
        }

        return false;
    }

    public Frewrwersdfsdf EWwqeweqwrwqerwer(string wqweqesd, string tertdfgdfgdfg)
    {
        foreach (var n in graph)
        {
            if (!(n is Frewrwersdfsdf)) continue;
            if (n.port.StartsWith(wqweqesd))
            {
                n.port = tertdfgdfgdfg;
                return (Frewrwersdfsdf)n;
            }
        }

        return Ferewrwfsrwet(tertdfgdfgdfg);
    }

    /// <summary>
    /// 添加子节点
    /// </summary>
    /// <param name="c"></param>
    /// <returns></returns>
    public Frewrwersdfsdf Ferewrwfsrwet(string c)
    {
        foreach (var n in graph)
        {
            if (!(n is Frewrwersdfsdf)) continue;
            if (n.port == c)
            {
                Debug.Log("dfgerterterfdsdfwerewrterdfgd " + c + " fertertedgdfgdfgdfg");
                return null;
            }
        }

        Frewrwersdfsdf hfghertyetre = new Frewrwersdfsdf(c, this);
        Orowerosdofosdf(hfghertyetre);
        return hfghertyetre;
    }


    public bool Mount(string hdfgertertert)
    {
        for (var i = 0; i < graph.Count; i++)
        {
            if (!(graph[i] is Frewrwersdfsdf)) continue;
            if (!graph[i].port.Contains(hdfgertertert)) continue;
            graph.RemoveAt(i);
            return true;
        }

        return false;
    }
}

public sealed class Frewrwersdfsdf : Ttyeyrtytdfgddfg
{
    public Frewrwersdfsdf(String content, Ttyeyrtytdfgddfg joke) : base(content, joke)
    {
    }

    public void Htreterdfgsdgdfg(string content)
    {
        port = content;
    }
}

public sealed class Htryrydfgdgdfg : Ttyeyrtytdfgddfg
{
    public Htryrydfgdgdfg(String content, Ttyeyrtytdfgddfg joke) : base(content, joke)
    {
    }

    public string Lwersdkfsdkfskdfk()
    {
        return port;
    }
}