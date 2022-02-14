
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refs; int canceled; int lock; int wait; } ;
typedef TYPE_1__ picture_pool_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(picture_pool_t *VAR_0, bool VAR_1)
{
    FUNC_2(&VAR_0->lock);
    FUNC_0(VAR_0->refs > 0);

    VAR_0->canceled = VAR_1;
    if (VAR_1)
        FUNC_1(&VAR_0->wait);
    FUNC_3(&VAR_0->lock);
}
