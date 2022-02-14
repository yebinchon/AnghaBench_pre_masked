
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
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(Service *VAR_11, ServiceResult VAR_12) {
        int VAR_13;
        FUNC_1(VAR_11);

        if (VAR_11->result == VAR_10)
                VAR_11->result = VAR_12;

        FUNC_6(VAR_11);
        (void) FUNC_7(FUNC_0(VAR_11));

        VAR_11->control_command = VAR_11->exec_command[VAR_6];
        if (VAR_11->control_command) {
                VAR_11->control_command_id = VAR_6;

                VAR_13 = FUNC_5(VAR_11,
                                  VAR_11->control_command,
                                  VAR_11->timeout_stop_usec,
                                  VAR_1|VAR_0|VAR_2|VAR_4|VAR_5|VAR_3,
                                  &VAR_11->control_pid);
                if (VAR_13 < 0)
                        goto fail;

                FUNC_4(VAR_11, VAR_9);
        } else
                FUNC_3(VAR_11, VAR_8, VAR_10);

        return;

fail:
        FUNC_2(FUNC_0(VAR_11), VAR_13, "Failed to run 'stop-post' task: %m");
        FUNC_3(VAR_11, VAR_8, VAR_7);
}
