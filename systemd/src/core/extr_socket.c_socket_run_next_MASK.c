
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ state; int control_pid; struct TYPE_11__* control_command; struct TYPE_11__* command_next; } ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(Socket *VAR_4) {
        int VAR_5;

        FUNC_1(VAR_4);
        FUNC_1(VAR_4->control_command);
        FUNC_1(VAR_4->control_command->command_next);

        FUNC_7(VAR_4);

        VAR_4->control_command = VAR_4->control_command->command_next;

        VAR_5 = FUNC_6(VAR_4, VAR_4->control_command, &VAR_4->control_pid);
        if (VAR_5 < 0)
                goto fail;

        return;

fail:
        FUNC_2(FUNC_0(VAR_4), VAR_5, "Failed to run next task: %m");

        if (VAR_4->state == VAR_2)
                FUNC_5(VAR_4, VAR_0);
        else if (VAR_4->state == VAR_3)
                FUNC_3(VAR_4, VAR_0);
        else
                FUNC_4(VAR_4, VAR_1, VAR_0);
}
