
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("foobar", "bar"));
        FUNC_0(FUNC_1("foobar", ""));
        FUNC_0(FUNC_1("foobar", "foobar"));
        FUNC_0(FUNC_1("", ""));

        FUNC_0(!FUNC_1("foobar", "foo"));
        FUNC_0(!FUNC_1("foobar", "foobarfoofoo"));
}
