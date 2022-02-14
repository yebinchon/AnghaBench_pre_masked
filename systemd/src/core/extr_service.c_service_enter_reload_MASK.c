
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t control_command_id; int reload_result; int control_pid; int timeout_start_usec; scalar_t__ control_command; scalar_t__* exec_command; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Service *VAR_8) {
        int VAR_9;

        FUNC_1(VAR_8);

        FUNC_6(VAR_8);
        VAR_8->reload_result = VAR_7;

        VAR_8->control_command = VAR_8->exec_command[VAR_4];
        if (VAR_8->control_command) {
                VAR_8->control_command_id = VAR_4;

                VAR_9 = FUNC_5(VAR_8,
                                  VAR_8->control_command,
                                  VAR_8->timeout_start_usec,
                                  VAR_1|VAR_0|VAR_3|VAR_2,
                                  &VAR_8->control_pid);
                if (VAR_9 < 0)
                        goto fail;

                FUNC_4(VAR_8, VAR_6);
        } else
                FUNC_3(VAR_8, VAR_7);

        return;

fail:
        FUNC_2(FUNC_0(VAR_8), VAR_9, "Failed to run 'reload' task: %m");
        VAR_8->reload_result = VAR_5;
        FUNC_3(VAR_8, VAR_7);
}
