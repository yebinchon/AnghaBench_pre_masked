
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Manager ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,char const*,int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int **) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(Manager *VAR_1) {
        const char *VAR_2 = "/tmp/test-path_directorynotempty/";
        Unit *VAR_3 = ((void*)0);

        FUNC_1(*VAR_1);

        FUNC_1(FUNC_0(VAR_2, VAR_0) < 0);

        FUNC_1(FUNC_3(VAR_1, "path-directorynotempty.path", ((void*)0), &VAR_3) >= 0);
        FUNC_1(FUNC_7(VAR_3) >= 0);


        FUNC_1(FUNC_0(VAR_2, VAR_0) < 0);

        FUNC_1(FUNC_4(VAR_2, 0755) >= 0);
        FUNC_1(FUNC_6(FUNC_5(VAR_2, "test_file")) >= 0);

        FUNC_2(VAR_1, VAR_3, VAR_2, ((void*)0));
}
