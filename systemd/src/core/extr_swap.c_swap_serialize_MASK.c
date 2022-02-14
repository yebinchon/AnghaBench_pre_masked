
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_10__ {scalar_t__ control_pid; scalar_t__ control_command_id; int result; int state; } ;
typedef TYPE_1__ Swap ;
typedef TYPE_1__ FILE ;
typedef TYPE_1__ FDSet ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_1, FILE *VAR_2, FDSet *VAR_3) {
        Swap *VAR_4 = FUNC_0(VAR_1);

        FUNC_1(VAR_4);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        (void) FUNC_2(VAR_2, "state", FUNC_6(VAR_4->state));
        (void) FUNC_2(VAR_2, "result", FUNC_5(VAR_4->result));

        if (VAR_4->control_pid > 0)
                (void) FUNC_3(VAR_2, "control-pid", VAR_0, VAR_4->control_pid);

        if (VAR_4->control_command_id >= 0)
                (void) FUNC_2(VAR_2, "control-command", FUNC_4(VAR_4->control_command_id));

        return 0;
}
