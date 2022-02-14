
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("abc\1", ((void*)0)));
        FUNC_0(FUNC_1("abc\x7f", ((void*)0)));
        FUNC_0(FUNC_1("abc\x7f", ((void*)0)));
        FUNC_0(FUNC_1("abc\t\x7f", "\t"));
        FUNC_0(FUNC_1("abc\t\x7f", "\t"));
        FUNC_0(FUNC_1("\x7f", "\t"));
        FUNC_0(FUNC_1("\x7f", "\t\a"));

        FUNC_0(!FUNC_1("abc\t\t", "\t"));
        FUNC_0(!FUNC_1("abc\t\t\a", "\t\a"));
        FUNC_0(!FUNC_1("a\ab\tc", "\t\a"));
}
