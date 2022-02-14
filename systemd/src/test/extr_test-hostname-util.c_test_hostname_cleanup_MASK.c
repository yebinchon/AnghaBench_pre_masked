
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(void) {
        char *VAR_0;

        VAR_0 = FUNC_3("foobar");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foobar"));
        VAR_0 = FUNC_3("foobar.com");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foobar.com"));
        VAR_0 = FUNC_3("foobar.com.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foobar.com"));
        VAR_0 = FUNC_3("foo-bar.-com-.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foo-bar.com"));
        VAR_0 = FUNC_3("foo-bar-.-com-.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foo-bar--com"));
        VAR_0 = FUNC_3("--foo-bar.-com");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foo-bar.com"));
        VAR_0 = FUNC_3("fooBAR");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "fooBAR"));
        VAR_0 = FUNC_3("fooBAR.com");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "fooBAR.com"));
        VAR_0 = FUNC_3("fooBAR.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "fooBAR"));
        VAR_0 = FUNC_3("fooBAR.com.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "fooBAR.com"));
        VAR_0 = FUNC_3("fööbar");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "fbar"));
        VAR_0 = FUNC_3("");
        FUNC_0(FUNC_2(FUNC_1(VAR_0)));
        VAR_0 = FUNC_3(".");
        FUNC_0(FUNC_2(FUNC_1(VAR_0)));
        VAR_0 = FUNC_3("..");
        FUNC_0(FUNC_2(FUNC_1(VAR_0)));
        VAR_0 = FUNC_3("foobar.");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foobar"));
        VAR_0 = FUNC_3(".foobar");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foobar"));
        VAR_0 = FUNC_3("foo..bar");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foo.bar"));
        VAR_0 = FUNC_3("foo.bar..");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "foo.bar"));
        VAR_0 = FUNC_3("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"));
        VAR_0 = FUNC_3("xxxx........xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
        FUNC_0(FUNC_4(FUNC_1(VAR_0), "xxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"));
}
