
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_available; int lock; int wait; } ;
typedef TYPE_1__ vout_snapshot_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(vout_snapshot_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_1(&VAR_0->lock);

    VAR_0->is_available = 0;

    FUNC_0(&VAR_0->wait);
    FUNC_2(&VAR_0->lock);
}
