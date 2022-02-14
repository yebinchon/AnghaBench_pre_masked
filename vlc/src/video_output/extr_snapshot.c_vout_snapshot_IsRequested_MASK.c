
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ request_count; int lock; } ;
typedef TYPE_1__ vout_snapshot_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(vout_snapshot_t *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return 0;

    bool VAR_1 = 0;
    if (!FUNC_0(&VAR_0->lock)) {
        VAR_1 = VAR_0->request_count > 0;
        FUNC_1(&VAR_0->lock);
    }
    return VAR_1;
}
