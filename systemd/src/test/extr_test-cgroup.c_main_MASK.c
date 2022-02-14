
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *,char**) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,char*,int ,char*,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char**) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (char*,char**,char**) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;

int FUNC_17(int VAR_1, char *VAR_2[]) {
        char *VAR_3;
        char *VAR_4, *VAR_5;

        FUNC_0(FUNC_2(VAR_0, "/test-a") == 0);
        FUNC_0(FUNC_2(VAR_0, "/test-a") == 0);
        FUNC_0(FUNC_2(VAR_0, "/test-b") == 0);
        FUNC_0(FUNC_2(VAR_0, "/test-b/test-c") == 0);
        FUNC_0(FUNC_3(VAR_0, "/test-b", 0) == 0);

        FUNC_0(FUNC_9(VAR_0, FUNC_14(), &VAR_3) == 0);
        FUNC_0(FUNC_16(VAR_3, "/test-b"));
        FUNC_13(VAR_3);

        FUNC_0(FUNC_1(VAR_0, "/test-a", 0) == 0);

        FUNC_0(FUNC_9(VAR_0, FUNC_14(), &VAR_3) == 0);
        FUNC_0(FUNC_15(VAR_3, "/test-a"));
        FUNC_13(VAR_3);

        FUNC_0(FUNC_3(VAR_0, "/test-b/test-d", 0) == 0);

        FUNC_0(FUNC_9(VAR_0, FUNC_14(), &VAR_3) == 0);
        FUNC_0(FUNC_15(VAR_3, "/test-b/test-d"));
        FUNC_13(VAR_3);

        FUNC_0(FUNC_4(VAR_0, "/test-b/test-d", ((void*)0), &VAR_3) == 0);
        FUNC_0(FUNC_15(VAR_3, "/sys/fs/cgroup/systemd/test-b/test-d"));
        FUNC_13(VAR_3);

        FUNC_0(FUNC_5(VAR_0, "/test-a") > 0);
        FUNC_0(FUNC_5(VAR_0, "/test-b") > 0);
        FUNC_0(FUNC_6(VAR_0, "/test-a") > 0);
        FUNC_0(FUNC_6(VAR_0, "/test-b") == 0);

        FUNC_0(FUNC_7(VAR_0, "/test-a", 0, 0, ((void*)0), ((void*)0), ((void*)0)) == 0);
        FUNC_0(FUNC_7(VAR_0, "/test-b", 0, 0, ((void*)0), ((void*)0), ((void*)0)) > 0);

        FUNC_0(FUNC_8(VAR_0, "/test-b", VAR_0, "/test-a", 0) > 0);

        FUNC_0(FUNC_6(VAR_0, "/test-a") == 0);
        FUNC_0(FUNC_6(VAR_0, "/test-b") > 0);

        FUNC_0(FUNC_7(VAR_0, "/test-a", 0, 0, ((void*)0), ((void*)0), ((void*)0)) > 0);
        FUNC_0(FUNC_7(VAR_0, "/test-b", 0, 0, ((void*)0), ((void*)0), ((void*)0)) == 0);

        FUNC_12(VAR_0, "/", 0);

        FUNC_0(FUNC_10(VAR_0, "/test-b") < 0);
        FUNC_0(FUNC_10(VAR_0, "/test-a") >= 0);

        FUNC_0(FUNC_11("foobar:/", &VAR_4, &VAR_5) == 0);
        FUNC_0(FUNC_16(VAR_4, "foobar"));
        FUNC_0(FUNC_16(VAR_5, "/"));
        FUNC_13(VAR_4);
        FUNC_13(VAR_5);

        FUNC_0(FUNC_11("foobar:", &VAR_4, &VAR_5) < 0);
        FUNC_0(FUNC_11("foobar:asdfd", &VAR_4, &VAR_5) < 0);
        FUNC_0(FUNC_11(":///", &VAR_4, &VAR_5) < 0);
        FUNC_0(FUNC_11(":", &VAR_4, &VAR_5) < 0);
        FUNC_0(FUNC_11("", &VAR_4, &VAR_5) < 0);
        FUNC_0(FUNC_11("fo/obar:/", &VAR_4, &VAR_5) < 0);

        FUNC_0(FUNC_11("/", &VAR_4, &VAR_5) >= 0);
        FUNC_0(VAR_4 == ((void*)0));
        FUNC_0(FUNC_16(VAR_5, "/"));
        FUNC_13(VAR_5);

        FUNC_0(FUNC_11("foo", &VAR_4, &VAR_5) >= 0);
        FUNC_0(FUNC_16(VAR_4, "foo"));
        FUNC_0(VAR_5 == ((void*)0));
        FUNC_13(VAR_4);

        return 0;
}
