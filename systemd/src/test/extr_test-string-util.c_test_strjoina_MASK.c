
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void) {
        char *VAR_0;

        VAR_0 = FUNC_2("", "foo", "bar");
        FUNC_0(FUNC_1(VAR_0, "foobar"));

        VAR_0 = FUNC_2("foo", "bar", "baz");
        FUNC_0(FUNC_1(VAR_0, "foobarbaz"));

        VAR_0 = FUNC_2("foo", "", "bar", "baz");
        FUNC_0(FUNC_1(VAR_0, "foobarbaz"));

        VAR_0 = FUNC_2("foo");
        FUNC_0(FUNC_1(VAR_0, "foo"));

        VAR_0 = FUNC_2(((void*)0));
        FUNC_0(FUNC_1(VAR_0, ""));

        VAR_0 = FUNC_2(((void*)0), "foo");
        FUNC_0(FUNC_1(VAR_0, ""));

        VAR_0 = FUNC_2("foo", ((void*)0), "bar");
        FUNC_0(FUNC_1(VAR_0, "foo"));
}
