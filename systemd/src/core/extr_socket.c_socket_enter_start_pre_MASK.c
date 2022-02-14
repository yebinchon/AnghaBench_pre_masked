
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t control_command_id; int control_pid; scalar_t__ control_command; scalar_t__* exec_command; } ;
typedef TYPE_1__ Socket ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Socket *VAR_3) {
        int VAR_4;
        FUNC_1(VAR_3);

        FUNC_7(VAR_3);

        FUNC_8(FUNC_0(VAR_3));

        VAR_3->control_command_id = VAR_0;
        VAR_3->control_command = VAR_3->exec_command[VAR_0];

        if (VAR_3->control_command) {
                VAR_4 = FUNC_6(VAR_3, VAR_3->control_command, &VAR_3->control_pid);
                if (VAR_4 < 0) {
                        FUNC_2(FUNC_0(VAR_3), VAR_4, "Failed to run 'start-pre' task: %m");
                        goto fail;
                }

                FUNC_5(VAR_3, VAR_2);
        } else
                FUNC_4(VAR_3);

        return;

fail:
        FUNC_3(VAR_3, VAR_1);
}
