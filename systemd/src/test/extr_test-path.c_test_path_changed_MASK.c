
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Manager ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int *,int **) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(Manager *VAR_0) {
        const char *VAR_1 = "/tmp/test-path_changed";
        FILE *VAR_2;
        Unit *VAR_3 = ((void*)0);

        FUNC_0(*VAR_0);

        FUNC_0(FUNC_5(VAR_1) >= 0);

        FUNC_0(FUNC_4(VAR_0, "path-changed.path", ((void*)0), &VAR_3) >= 0);
        FUNC_0(FUNC_6(VAR_3) >= 0);

        VAR_2 = FUNC_3(VAR_1, "w");
        FUNC_0(*VAR_2);
        FUNC_2(VAR_2);

        FUNC_1(VAR_0, VAR_3, VAR_1, ((void*)0));
}
