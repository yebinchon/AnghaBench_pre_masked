
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int VAR_1 ;

int FUNC_3 (void)
{
    (void)FUNC_2 (VAR_1, ((void*)0), VAR_0, 0);
    FUNC_0 ("This should not be modified 1234",
            "This should not be modified 1234");

    FUNC_0 ("R&eacute;mi&nbsp;Fran&ccedil;ois&nbsp;&amp;&nbsp;&Eacute;mile",
            "Rémi François & Émile");
    FUNC_0 ("R&#233;mi&nbsp;Fran&#231;ois&nbsp;&amp;&nbsp;&#201;mile",
            "Rémi François & Émile");
    FUNC_0 ("R&#xe9;mi&nbsp;Fran&#xe7;ois&nbsp;&amp;&nbsp;&#xc9;mile",
            "Rémi François & Émile");
    FUNC_0 ("R&#xE9;mi&nbsp;Fran&#xE7;ois&nbsp;&amp;&nbsp;&#xC9;mile",
            "Rémi François & Émile");

    FUNC_0 ("", "");


    FUNC_0 ("&<\"'", "&<\"'");
    FUNC_0 ("&oelig", "&oelig");

    FUNC_1 ("", "");
    FUNC_1 ("a'àc\"çe&én<ño>ö1:", "a&#39;àc&quot;çe&amp;én&lt;ño&gt;ö1:");
    FUNC_1 ("\xC2\x81\xC2\x85", "&#129;\xC2\x85");
    FUNC_1 (" \t\r\n", " \t\r\n");

    return 0;
}
