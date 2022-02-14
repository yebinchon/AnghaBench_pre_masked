
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_size; int lock; } ;
typedef TYPE_1__ block_fifo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

size_t FUNC_2 (block_fifo_t *VAR_0)
{
    size_t VAR_1;

    FUNC_0 (&VAR_0->lock);
    VAR_1 = VAR_0->i_size;
    FUNC_1 (&VAR_0->lock);
    return VAR_1;
}
