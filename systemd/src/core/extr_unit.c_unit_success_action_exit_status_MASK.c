
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ success_action_exit_status; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(Unit *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);



        if (VAR_1->success_action_exit_status >= 0)
                return VAR_1->success_action_exit_status;

        VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 == -VAR_0)
                return 255;

        return VAR_2;
}
