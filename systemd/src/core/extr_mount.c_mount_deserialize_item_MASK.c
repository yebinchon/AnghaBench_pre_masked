
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const Unit ;
struct TYPE_3__ {scalar_t__ exec_command; scalar_t__ control_command; scalar_t__ control_command_id; int control_pid; int n_retry_umount; scalar_t__ reload_result; scalar_t__ result; int deserialized_state; } ;
typedef int MountState ;
typedef scalar_t__ MountResult ;
typedef scalar_t__ MountExecCommand ;
typedef TYPE_1__ Mount ;
typedef char const FDSet ;


 TYPE_1__* FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(Unit *VAR_1, const char *VAR_2, const char *VAR_3, FDSet *VAR_4) {
        Mount *VAR_5 = FUNC_0(VAR_1);
        int VAR_6;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (FUNC_8(VAR_2, "state")) {
                MountState VAR_7;

                if ((VAR_7 = FUNC_5(VAR_3)) < 0)
                        FUNC_2(VAR_1, "Failed to parse state value: %s", VAR_3);
                else
                        VAR_5->deserialized_state = VAR_7;

        } else if (FUNC_8(VAR_2, "result")) {
                MountResult VAR_8;

                VAR_8 = FUNC_4(VAR_3);
                if (VAR_8 < 0)
                        FUNC_2(VAR_1, "Failed to parse result value: %s", VAR_3);
                else if (VAR_8 != VAR_0)
                        VAR_5->result = VAR_8;

        } else if (FUNC_8(VAR_2, "reload-result")) {
                MountResult VAR_9;

                VAR_9 = FUNC_4(VAR_3);
                if (VAR_9 < 0)
                        FUNC_2(VAR_1, "Failed to parse reload result value: %s", VAR_3);
                else if (VAR_9 != VAR_0)
                        VAR_5->reload_result = VAR_9;

        } else if (FUNC_8(VAR_2, "n-retry-umount")) {

                VAR_6 = FUNC_7(VAR_3, &VAR_5->n_retry_umount);
                if (VAR_6 < 0)
                        FUNC_2(VAR_1, "Failed to parse n-retry-umount value: %s", VAR_3);

        } else if (FUNC_8(VAR_2, "control-pid")) {

                if (FUNC_6(VAR_3, &VAR_5->control_pid) < 0)
                        FUNC_2(VAR_1, "Failed to parse control-pid value: %s", VAR_3);

        } else if (FUNC_8(VAR_2, "control-command")) {
                MountExecCommand VAR_10;

                VAR_10 = FUNC_3(VAR_3);
                if (VAR_10 < 0)
                        FUNC_2(VAR_1, "Failed to parse exec-command value: %s", VAR_3);
                else {
                        VAR_5->control_command_id = VAR_10;
                        VAR_5->control_command = VAR_5->exec_command + VAR_10;
                }
        } else
                FUNC_2(VAR_1, "Unknown serialization key: %s", VAR_2);

        return 0;
}
