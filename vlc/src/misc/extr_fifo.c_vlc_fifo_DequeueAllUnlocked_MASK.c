
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_3__ {scalar_t__ i_size; scalar_t__ i_depth; int * p_first; int ** pp_last; int lock; } ;
typedef TYPE_1__ block_fifo_t ;


 int FUNC_0 (int *) ;

block_t *FUNC_1(block_fifo_t *VAR_0)
{
    FUNC_0(&VAR_0->lock);

    block_t *VAR_1 = VAR_0->p_first;

    VAR_0->p_first = ((void*)0);
    VAR_0->pp_last = &VAR_0->p_first;
    VAR_0->i_depth = 0;
    VAR_0->i_size = 0;

    return VAR_1;
}
