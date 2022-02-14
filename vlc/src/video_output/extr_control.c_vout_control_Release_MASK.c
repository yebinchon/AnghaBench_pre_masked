
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_held; int lock; int wait_available; } ;
typedef TYPE_1__ vout_control_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(vout_control_t *VAR_0)
{
    FUNC_2(&VAR_0->lock);
    FUNC_0(VAR_0->is_held);
    VAR_0->is_held = 0;
    FUNC_1(&VAR_0->wait_available);
    FUNC_3(&VAR_0->lock);
}
