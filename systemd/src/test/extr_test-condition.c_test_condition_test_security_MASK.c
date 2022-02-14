
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Condition ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void) {
        Condition *VAR_1;

        VAR_1 = FUNC_2(VAR_0, "garbage oifdsjfoidsjoj", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == 0);
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "selinux", 0, 1);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) != FUNC_6());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "apparmor", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_5());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "tomoyo", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_8());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "ima", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_10());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "smack", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_7());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "audit", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_9());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "uefi-secureboot", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_4());
        FUNC_1(VAR_1);
}
