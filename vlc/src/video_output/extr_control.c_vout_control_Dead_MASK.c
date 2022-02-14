
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_dead; int lock; } ;
typedef TYPE_1__ vout_control_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(vout_control_t *VAR_0)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->is_dead = 1;
    FUNC_1(&VAR_0->lock);
}
