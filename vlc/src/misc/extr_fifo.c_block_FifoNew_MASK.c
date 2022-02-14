
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_size; scalar_t__ i_depth; int * p_first; int ** pp_last; int wait; int lock; } ;
typedef TYPE_1__ block_fifo_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

block_fifo_t *FUNC_3( void )
{
    block_fifo_t *VAR_0 = FUNC_0( sizeof( block_fifo_t ) );
    if( !VAR_0 )
        return ((void*)0);

    FUNC_2( &VAR_0->lock );
    FUNC_1( &VAR_0->wait );
    VAR_0->p_first = ((void*)0);
    VAR_0->pp_last = &VAR_0->p_first;
    VAR_0->i_depth = VAR_0->i_size = 0;

    return VAR_0;
}
