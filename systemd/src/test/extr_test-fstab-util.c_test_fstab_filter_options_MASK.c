
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("opt=0", "opt\0x-opt\0", 1, "opt", "0", "");
        FUNC_0("opt=0", "x-opt\0opt\0", 1, "opt", "0", "");
        FUNC_0("opt", "opt\0x-opt\0", 1, "opt", ((void*)0), "");
        FUNC_0("opt", "x-opt\0opt\0", 1, "opt", ((void*)0), "");
        FUNC_0("x-opt", "x-opt\0opt\0", 1, "x-opt", ((void*)0), "");

        FUNC_0("opt=0,other", "opt\0x-opt\0", 1, "opt", "0", "other");
        FUNC_0("opt=0,other", "x-opt\0opt\0", 1, "opt", "0", "other");
        FUNC_0("opt,other", "opt\0x-opt\0", 1, "opt", ((void*)0), "other");
        FUNC_0("opt,other", "x-opt\0opt\0", 1, "opt", ((void*)0), "other");
        FUNC_0("x-opt,other", "opt\0x-opt\0", 1, "x-opt", ((void*)0), "other");

        FUNC_0("opto=0,other", "opt\0x-opt\0", 0, ((void*)0), ((void*)0), ((void*)0));
        FUNC_0("opto,other", "opt\0x-opt\0", 0, ((void*)0), ((void*)0), ((void*)0));
        FUNC_0("x-opto,other", "opt\0x-opt\0", 0, ((void*)0), ((void*)0), ((void*)0));

        FUNC_0("first,opt=0", "opt\0x-opt\0", 1, "opt", "0", "first");
        FUNC_0("first=1,opt=0", "opt\0x-opt\0", 1, "opt", "0", "first=1");
        FUNC_0("first,opt=", "opt\0x-opt\0", 1, "opt", "", "first");
        FUNC_0("first=1,opt", "opt\0x-opt\0", 1, "opt", ((void*)0), "first=1");
        FUNC_0("first=1,x-opt", "opt\0x-opt\0", 1, "x-opt", ((void*)0), "first=1");

        FUNC_0("first,opt=0,last=1", "opt\0x-opt\0", 1, "opt", "0", "first,last=1");
        FUNC_0("first=1,opt=0,last=2", "x-opt\0opt\0", 1, "opt", "0", "first=1,last=2");
        FUNC_0("first,opt,last", "opt\0", 1, "opt", ((void*)0), "first,last");
        FUNC_0("first=1,opt,last", "x-opt\0opt\0", 1, "opt", ((void*)0), "first=1,last");
        FUNC_0("first=,opt,last", "opt\0noopt\0", 1, "opt", ((void*)0), "first=,last");


        FUNC_0("first,opt=0,noopt=1,last=1", "opt\0noopt\0", 1, "noopt", "1", "first,last=1");
        FUNC_0("first=1,opt=0,last=2,opt=1", "opt\0", 1, "opt", "1", "first=1,last=2");
        FUNC_0("x-opt=0,x-opt=1", "opt\0x-opt\0", 1, "x-opt", "1", "");
        FUNC_0("opt=0,x-opt=1", "opt\0x-opt\0", 1, "x-opt", "1", "");


        FUNC_0("opt=0;", "opt\0", 1, "opt", "0;", "");
        FUNC_0("opt;=0", "x-opt\0opt\0noopt\0x-noopt\0", 0, ((void*)0), ((void*)0), ((void*)0));
        FUNC_0("opt;", "opt\0x-opt\0", 0, ((void*)0), ((void*)0), ((void*)0));


        FUNC_0("opt=0 ", "opt\0", 1, "opt", "0 ", "");
        FUNC_0("opt =0", "x-opt\0opt\0noopt\0x-noopt\0", 0, ((void*)0), ((void*)0), ((void*)0));
        FUNC_0(" opt ", "opt\0x-opt\0", 0, ((void*)0), ((void*)0), ((void*)0));


        FUNC_0(((void*)0), "opt\0", 0, ((void*)0), ((void*)0), "");
        FUNC_0("", "opt\0", 0, ((void*)0), ((void*)0), "");
}
