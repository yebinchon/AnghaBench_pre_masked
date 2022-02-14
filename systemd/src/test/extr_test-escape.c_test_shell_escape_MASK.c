
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("", "", "");
        FUNC_0("\\", "", "\\\\");
        FUNC_0("foobar", "", "foobar");
        FUNC_0("foobar", "o", "f\\o\\obar");
        FUNC_0("foo:bar,baz", ",:", "foo\\:bar\\,baz");
}
