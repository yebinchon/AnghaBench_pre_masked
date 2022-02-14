
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*,int) ;
 int FUNC_1 (char*,int ,int ) ;

int FUNC_2(void) {
        FUNC_0("pidu[111]: xxx", "pidu", "111", "xxx", 11);
        FUNC_0("pidu: xxx", "pidu", ((void*)0), "xxx", 6);
        FUNC_0("pidu:  xxx", "pidu", ((void*)0), " xxx", 6);
        FUNC_0("pidu xxx", ((void*)0), ((void*)0), "pidu xxx", 0);
        FUNC_0("   pidu xxx", ((void*)0), ((void*)0), "   pidu xxx", 0);
        FUNC_0("", ((void*)0), ((void*)0), "", 0);
        FUNC_0("  ", ((void*)0), ((void*)0), "  ", 0);
        FUNC_0(":", "", ((void*)0), "", 1);
        FUNC_0(":  ", "", ((void*)0), " ", 2);
        FUNC_0(" :", "", ((void*)0), "", 2);
        FUNC_0("   pidu:", "pidu", ((void*)0), "", 8);
        FUNC_0("pidu:", "pidu", ((void*)0), "", 5);
        FUNC_0("pidu: ", "pidu", ((void*)0), "", 6);
        FUNC_0("pidu : ", ((void*)0), ((void*)0), "pidu : ", 0);

        FUNC_1("<>", 0, 0);
        FUNC_1("<>aaa", 0, 0);
        FUNC_1("<aaaa>", 0, 0);
        FUNC_1("<aaaa>aaa", 0, 0);
        FUNC_1(" <aaaa>", 0, 0);
        FUNC_1(" <aaaa>aaa", 0, 0);


        return 0;
}
