
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int control_pid; int * control_command; int control_command_id; int group; int user; } ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(Socket *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_3);

        VAR_4 = FUNC_7(VAR_3);
        if (VAR_4 < 0) {
                FUNC_3(FUNC_0(VAR_3), VAR_4, "Failed to listen on sockets: %m");
                goto fail;
        }

        if (!FUNC_2(VAR_3->user) || !FUNC_2(VAR_3->group)) {

                FUNC_9(VAR_3);
                VAR_3->control_command_id = VAR_0;
                VAR_3->control_command = ((void*)0);

                VAR_4 = FUNC_4(VAR_3, &VAR_3->control_pid);
                if (VAR_4 < 0) {
                        FUNC_3(FUNC_0(VAR_3), VAR_4, "Failed to fork 'start-chown' task: %m");
                        goto fail;
                }

                FUNC_8(VAR_3, VAR_2);
        } else
                FUNC_5(VAR_3);

        return;

fail:
        FUNC_6(VAR_3, VAR_1);
}
