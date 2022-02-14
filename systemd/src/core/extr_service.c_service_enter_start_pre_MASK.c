
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t control_command_id; int control_pid; int timeout_start_usec; scalar_t__ control_command; scalar_t__* exec_command; } ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(Service *VAR_7) {
        int VAR_8;

        FUNC_1(VAR_7);

        FUNC_8(VAR_7);

        VAR_7->control_command = VAR_7->exec_command[VAR_4];
        if (VAR_7->control_command) {

                VAR_8 = FUNC_3(VAR_7);
                if (VAR_8 < 0)
                        goto fail;

                VAR_7->control_command_id = VAR_4;

                VAR_8 = FUNC_7(VAR_7,
                                  VAR_7->control_command,
                                  VAR_7->timeout_start_usec,
                                  VAR_1|VAR_0|VAR_3|VAR_2,
                                  &VAR_7->control_pid);
                if (VAR_8 < 0)
                        goto fail;

                FUNC_6(VAR_7, VAR_6);
        } else
                FUNC_5(VAR_7);

        return;

fail:
        FUNC_2(FUNC_0(VAR_7), VAR_8, "Failed to run 'start-pre' task: %m");
        FUNC_4(VAR_7, VAR_5, 1);
}
