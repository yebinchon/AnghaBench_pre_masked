
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int wait_request; int cmd; int is_dead; } ;
typedef TYPE_1__ vout_control_t ;
typedef int vout_control_cmd_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vout_control_t *VAR_0, vout_control_cmd_t *VAR_1)
{
    FUNC_2(&VAR_0->lock);
    if (!VAR_0->is_dead) {
        FUNC_0(VAR_0->cmd, *VAR_1);
        FUNC_1(&VAR_0->wait_request);
    } else {
        FUNC_4(VAR_1);
    }
    FUNC_3(&VAR_0->lock);
}
