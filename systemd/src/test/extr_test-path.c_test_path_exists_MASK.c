
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Manager ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int **) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(Manager *VAR_0) {
        const char *VAR_1 = "/tmp/test-path_exists";
        Unit *VAR_2 = ((void*)0);

        FUNC_0(*VAR_0);

        FUNC_0(FUNC_2(VAR_0, "path-exists.path", ((void*)0), &VAR_2) >= 0);
        FUNC_0(FUNC_4(VAR_2) >= 0);

        FUNC_0(FUNC_3(VAR_1) >= 0);

        FUNC_1(VAR_0, VAR_2, VAR_1, ((void*)0));
}
