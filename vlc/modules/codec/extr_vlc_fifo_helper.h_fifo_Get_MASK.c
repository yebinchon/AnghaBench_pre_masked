
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_depth; TYPE_2__* p_first; TYPE_2__** pp_last; } ;
typedef TYPE_1__ fifo_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ fifo_item_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline fifo_item_t *FUNC_1(fifo_t *VAR_0)
{
    fifo_item_t *VAR_1 = VAR_0->p_first;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_0->p_first = VAR_1->p_next;
    if (VAR_1->p_next == ((void*)0))
        VAR_0->pp_last = &VAR_0->p_first;
    VAR_1->p_next = ((void*)0);

    FUNC_0(VAR_0->i_depth > 0);
    VAR_0->i_depth--;

    return VAR_1;
}
