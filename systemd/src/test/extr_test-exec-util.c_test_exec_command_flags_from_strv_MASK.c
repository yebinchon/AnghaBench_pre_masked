
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExecCommandFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 char** FUNC_1 (char*,char*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char**,int *) ;

__attribute__((used)) static void FUNC_4(void) {
        ExecCommandFlags VAR_6 = 0;
        char **VAR_7 = FUNC_1("no-env-expand", "no-setuid", "ignore-failure");
        char **VAR_8 = FUNC_1("no-env-expand", "no-setuid", "nonexistent-option", "ignore-failure");
        int VAR_9;

        VAR_9 = FUNC_3(VAR_7, &VAR_6);

        FUNC_2(VAR_9 == 0);
        FUNC_2(FUNC_0(VAR_6, VAR_4));
        FUNC_2(FUNC_0(VAR_6, VAR_5));
        FUNC_2(FUNC_0(VAR_6, VAR_3));
        FUNC_2(!FUNC_0(VAR_6, VAR_1));
        FUNC_2(!FUNC_0(VAR_6, VAR_2));

        VAR_9 = FUNC_3(VAR_8, &VAR_6);

        FUNC_2(VAR_9 == -VAR_0);
}
