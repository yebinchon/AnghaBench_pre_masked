
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* p_next; scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {int i_size; int i_depth; TYPE_1__** pp_last; int lock; } ;
typedef TYPE_2__ block_fifo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(block_fifo_t *VAR_0, block_t *VAR_1)
{
    FUNC_2(&VAR_0->lock);
    FUNC_0(*(VAR_0->pp_last) == ((void*)0));

    *(VAR_0->pp_last) = VAR_1;

    while (VAR_1 != ((void*)0))
    {
        VAR_0->pp_last = &VAR_1->p_next;
        VAR_0->i_depth++;
        VAR_0->i_size += VAR_1->i_buffer;

        VAR_1 = VAR_1->p_next;
    }

    FUNC_1(VAR_0);
}
