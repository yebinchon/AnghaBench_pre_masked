
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ result; size_t control_command_id; int control_pid; int timeout_stop_usec; scalar_t__ control_command; scalar_t__* exec_command; } ;
typedef scalar_t__ ServiceResult ;
typedef TYPE_1__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Service *VAR_10, ServiceResult VAR_11) {
        int VAR_12;

        FUNC_1(VAR_10);

        if (VAR_10->result == VAR_9)
                VAR_10->result = VAR_11;

        FUNC_6(VAR_10);
        (void) FUNC_7(FUNC_0(VAR_10));

        VAR_10->control_command = VAR_10->exec_command[VAR_5];
        if (VAR_10->control_command) {
                VAR_10->control_command_id = VAR_5;

                VAR_12 = FUNC_5(VAR_10,
                                  VAR_10->control_command,
                                  VAR_10->timeout_stop_usec,
                                  VAR_1|VAR_0|VAR_3|VAR_4|VAR_2,
                                  &VAR_10->control_pid);
                if (VAR_12 < 0)
                        goto fail;

                FUNC_4(VAR_10, VAR_7);
        } else
                FUNC_3(VAR_10, VAR_8, VAR_9);

        return;

fail:
        FUNC_2(FUNC_0(VAR_10), VAR_12, "Failed to run 'stop' task: %m");
        FUNC_3(VAR_10, VAR_8, VAR_6);
}
