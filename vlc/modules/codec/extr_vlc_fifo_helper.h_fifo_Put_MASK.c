
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_depth; TYPE_2__** pp_last; } ;
typedef TYPE_1__ fifo_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ fifo_item_t ;



__attribute__((used)) static inline void FUNC_0(fifo_t *VAR_0, fifo_item_t *VAR_1)
{
    *(VAR_0->pp_last) = VAR_1;

    while (VAR_1 != ((void*)0))
    {
        VAR_0->pp_last = &VAR_1->p_next;
        VAR_0->i_depth++;

        VAR_1 = VAR_1->p_next;
    }
}
