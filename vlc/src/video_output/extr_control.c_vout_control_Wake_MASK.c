
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int can_sleep; int lock; int wait_request; } ;
typedef TYPE_1__ vout_control_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vout_control_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    VAR_0->can_sleep = 0;
    FUNC_0(&VAR_0->wait_request);
    FUNC_2(&VAR_0->lock);
}
