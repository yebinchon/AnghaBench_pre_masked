
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

__attribute__((used)) static void FUNC_5(void) {
        Condition *VAR_1;

        VAR_1 = FUNC_2(VAR_0, "true", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_4());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "false", 0, 0);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) != FUNC_4());
        FUNC_1(VAR_1);

        VAR_1 = FUNC_2(VAR_0, "false", 0, 1);
        FUNC_0(*VAR_1);
        FUNC_0(FUNC_3(VAR_1) == FUNC_4());
        FUNC_1(VAR_1);
}
