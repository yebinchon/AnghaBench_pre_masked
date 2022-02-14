
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1("", VAR_0);
        FUNC_1("foo", FUNC_0("foo"));
        FUNC_1("foo bar foo", FUNC_0("foo", "bar", "foo"));
        FUNC_1("\"foo bar\" foo", FUNC_0("foo bar", "foo"));
        FUNC_1("\xc3\x80", FUNC_0("\xc3\x80"));
        FUNC_1("\xc3\x7f", FUNC_0("\xc3\x7f"));
}
