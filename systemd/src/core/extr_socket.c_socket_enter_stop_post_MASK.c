
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ result; size_t control_command_id; int control_pid; scalar_t__ control_command; scalar_t__* exec_command; } ;
typedef scalar_t__ SocketResult ;
typedef TYPE_1__ Socket ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Socket *VAR_5, SocketResult VAR_6) {
        int VAR_7;
        FUNC_1(VAR_5);

        if (VAR_5->result == VAR_4)
                VAR_5->result = VAR_6;

        FUNC_6(VAR_5);
        VAR_5->control_command_id = VAR_0;
        VAR_5->control_command = VAR_5->exec_command[VAR_0];

        if (VAR_5->control_command) {
                VAR_7 = FUNC_5(VAR_5, VAR_5->control_command, &VAR_5->control_pid);
                if (VAR_7 < 0)
                        goto fail;

                FUNC_4(VAR_5, VAR_3);
        } else
                FUNC_3(VAR_5, VAR_2, VAR_4);

        return;

fail:
        FUNC_2(FUNC_0(VAR_5), VAR_7, "Failed to run 'stop-post' task: %m");
        FUNC_3(VAR_5, VAR_2, VAR_1);
}
