
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_buffer; struct TYPE_5__* p_next; } ;
typedef TYPE_1__ block_t ;
struct TYPE_6__ {scalar_t__ i_depth; scalar_t__ i_size; TYPE_1__* p_first; TYPE_1__** pp_last; int lock; } ;
typedef TYPE_2__ block_fifo_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

block_t *FUNC_2(block_fifo_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);

    block_t *VAR_1 = VAR_0->p_first;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_0->p_first = VAR_1->p_next;
    if (VAR_1->p_next == ((void*)0))
        VAR_0->pp_last = &VAR_0->p_first;
    VAR_1->p_next = ((void*)0);

    FUNC_0(VAR_0->i_depth > 0);
    VAR_0->i_depth--;
    FUNC_0(VAR_0->i_size >= VAR_1->i_buffer);
    VAR_0->i_size -= VAR_1->i_buffer;

    return VAR_1;
}
