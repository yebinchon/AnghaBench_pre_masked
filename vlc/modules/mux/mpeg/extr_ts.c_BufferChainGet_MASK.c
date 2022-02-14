
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_first; TYPE_2__** pp_last; int i_depth; } ;
typedef TYPE_1__ sout_buffer_chain_t ;
struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_2__ block_t ;



__attribute__((used)) static inline block_t *FUNC_0( sout_buffer_chain_t *VAR_0 )
{
    block_t *VAR_1 = VAR_0->p_first;

    if( VAR_1 )
    {
        VAR_0->i_depth--;
        VAR_0->p_first = VAR_1->p_next;

        if( VAR_0->p_first == ((void*)0) )
        {
            VAR_0->pp_last = &VAR_0->p_first;
        }

        VAR_1->p_next = ((void*)0);
    }
    return VAR_1;
}
