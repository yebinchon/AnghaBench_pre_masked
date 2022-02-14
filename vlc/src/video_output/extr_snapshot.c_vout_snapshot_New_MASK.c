
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_available; int * picture; scalar_t__ request_count; int wait; int lock; } ;
typedef TYPE_1__ vout_snapshot_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

vout_snapshot_t *FUNC_4(void)
{
    vout_snapshot_t *VAR_0 = FUNC_0(sizeof (*VAR_0));
    if (FUNC_1(VAR_0 == ((void*)0)))
        return ((void*)0);

    FUNC_3(&VAR_0->lock);
    FUNC_2(&VAR_0->wait);

    VAR_0->is_available = 1;
    VAR_0->request_count = 0;
    VAR_0->picture = ((void*)0);
    return VAR_0;
}
