
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pid_t ;
typedef int Unit ;
struct TYPE_6__ {scalar_t__ exec_command; scalar_t__ control_command; scalar_t__ control_command_id; int control_pid; scalar_t__ result; scalar_t__ deserialized_state; } ;
typedef scalar_t__ SwapState ;
typedef scalar_t__ SwapResult ;
typedef scalar_t__ SwapExecCommand ;
typedef TYPE_1__ Swap ;
typedef TYPE_1__ FDSet ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(Unit *VAR_1, const char *VAR_2, const char *VAR_3, FDSet *VAR_4) {
        Swap *VAR_5 = FUNC_0(VAR_1);

        FUNC_1(VAR_5);
        FUNC_1(VAR_4);

        if (FUNC_4(VAR_2, "state")) {
                SwapState VAR_6;

                VAR_6 = FUNC_7(VAR_3);
                if (VAR_6 < 0)
                        FUNC_2(VAR_1, "Failed to parse state value: %s", VAR_3);
                else
                        VAR_5->deserialized_state = VAR_6;
        } else if (FUNC_4(VAR_2, "result")) {
                SwapResult VAR_7;

                VAR_7 = FUNC_6(VAR_3);
                if (VAR_7 < 0)
                        FUNC_2(VAR_1, "Failed to parse result value: %s", VAR_3);
                else if (VAR_7 != VAR_0)
                        VAR_5->result = VAR_7;
        } else if (FUNC_4(VAR_2, "control-pid")) {
                pid_t VAR_8;

                if (FUNC_3(VAR_3, &VAR_8) < 0)
                        FUNC_2(VAR_1, "Failed to parse control-pid value: %s", VAR_3);
                else
                        VAR_5->control_pid = VAR_8;

        } else if (FUNC_4(VAR_2, "control-command")) {
                SwapExecCommand VAR_9;

                VAR_9 = FUNC_5(VAR_3);
                if (VAR_9 < 0)
                        FUNC_2(VAR_1, "Failed to parse exec-command value: %s", VAR_3);
                else {
                        VAR_5->control_command_id = VAR_9;
                        VAR_5->control_command = VAR_5->exec_command + VAR_9;
                }
        } else
                FUNC_2(VAR_1, "Unknown serialization key: %s", VAR_2);

        return 0;
}
