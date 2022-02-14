
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(void) {
        FUNC_0(FUNC_1(((void*)0)) == ((void*)0));
        FUNC_0(FUNC_2(FUNC_1("a/b/c"), "c"));
        FUNC_0(FUNC_2(FUNC_1("a/b/c/"), "c/"));
        FUNC_0(FUNC_2(FUNC_1("/"), "/"));
        FUNC_0(FUNC_2(FUNC_1("//"), "/"));
        FUNC_0(FUNC_2(FUNC_1("///"), "/"));
        FUNC_0(FUNC_2(FUNC_1("."), "."));
        FUNC_0(FUNC_2(FUNC_1("./."), "."));
        FUNC_0(FUNC_2(FUNC_1("././"), "./"));
        FUNC_0(FUNC_2(FUNC_1("././/"), ".//"));
        FUNC_0(FUNC_2(FUNC_1("/foo/a"), "a"));
        FUNC_0(FUNC_2(FUNC_1("/foo/a/"), "a/"));
        FUNC_0(FUNC_2(FUNC_1(""), ""));
        FUNC_0(FUNC_2(FUNC_1("a"), "a"));
        FUNC_0(FUNC_2(FUNC_1("a/"), "a/"));
        FUNC_0(FUNC_2(FUNC_1("/a"), "a"));
        FUNC_0(FUNC_2(FUNC_1("/a/"), "a/"));
}
