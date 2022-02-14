
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_3__ {int lock; int * first; } ;
typedef TYPE_1__ picture_fifo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

picture_t *FUNC_3(picture_fifo_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    picture_t *VAR_1 = VAR_0->first;
    if (VAR_1)
        FUNC_0(VAR_1);
    FUNC_2(&VAR_0->lock);

    return VAR_1;
}
