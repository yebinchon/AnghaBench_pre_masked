
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_size; } ;
struct TYPE_5__ {int wait_available; int wait_request; int lock; TYPE_3__ cmd; } ;
typedef TYPE_1__ vout_control_t ;
typedef int vout_control_cmd_t ;


 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vout_control_t *VAR_0)
{

    for (int VAR_1 = 0; VAR_1 < VAR_0->cmd.i_size; VAR_1++) {
        vout_control_cmd_t VAR_2 = FUNC_1(VAR_0->cmd, VAR_1);
        FUNC_4(&VAR_2);
    }
    FUNC_0(VAR_0->cmd);

    FUNC_3(&VAR_0->lock);
    FUNC_2(&VAR_0->wait_request);
    FUNC_2(&VAR_0->wait_available);
}
