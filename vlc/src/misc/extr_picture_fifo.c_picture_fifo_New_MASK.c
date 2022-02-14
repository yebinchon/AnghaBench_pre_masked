
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ picture_fifo_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

picture_fifo_t *FUNC_3(void)
{
    picture_fifo_t *VAR_0 = FUNC_1(sizeof(*VAR_0));
    if (!VAR_0)
        return ((void*)0);

    FUNC_2(&VAR_0->lock);
    FUNC_0(VAR_0);
    return VAR_0;
}
