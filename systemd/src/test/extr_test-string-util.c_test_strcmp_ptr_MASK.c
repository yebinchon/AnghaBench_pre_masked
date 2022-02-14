
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1(((void*)0), ((void*)0)) == 0);
        FUNC_0(FUNC_1("", ((void*)0)) > 0);
        FUNC_0(FUNC_1("foo", ((void*)0)) > 0);
        FUNC_0(FUNC_1(((void*)0), "") < 0);
        FUNC_0(FUNC_1(((void*)0), "bar") < 0);
        FUNC_0(FUNC_1("foo", "bar") > 0);
        FUNC_0(FUNC_1("bar", "baz") < 0);
        FUNC_0(FUNC_1("foo", "foo") == 0);
        FUNC_0(FUNC_1("", "") == 0);
}
