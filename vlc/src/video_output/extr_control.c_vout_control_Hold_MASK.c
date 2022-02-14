
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_held; int lock; int wait_available; int is_waiting; } ;
typedef TYPE_1__ vout_control_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vout_control_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    while (VAR_0->is_held || !VAR_0->is_waiting)
        FUNC_0(&VAR_0->wait_available, &VAR_0->lock);
    VAR_0->is_held = 1;
    FUNC_2(&VAR_0->lock);
}
