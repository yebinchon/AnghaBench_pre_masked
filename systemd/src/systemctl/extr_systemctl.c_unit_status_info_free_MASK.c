
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * exec; int * conditions; int listen; int triggers; int triggered_by; int dropin_paths; int documentation; } ;
typedef TYPE_1__ UnitStatusInfo ;
typedef int UnitCondition ;
typedef int ExecStatusInfo ;


 int FUNC_0 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(UnitStatusInfo *VAR_2) {
        ExecStatusInfo *VAR_3;
        UnitCondition *VAR_4;

        FUNC_2(VAR_2->documentation);
        FUNC_2(VAR_2->dropin_paths);
        FUNC_2(VAR_2->triggered_by);
        FUNC_2(VAR_2->triggers);
        FUNC_2(VAR_2->listen);

        while ((VAR_4 = VAR_2->conditions)) {
                FUNC_0(VAR_0, VAR_2->conditions, VAR_4);
                FUNC_3(VAR_4);
        }

        while ((VAR_3 = VAR_2->exec)) {
                FUNC_0(VAR_1, VAR_2->exec, VAR_3);
                FUNC_1(VAR_3);
        }
}
