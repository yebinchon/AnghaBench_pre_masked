
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int wait; int p_first; } ;
typedef TYPE_1__ block_fifo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( block_fifo_t *VAR_0 )
{
    FUNC_0( VAR_0->p_first );
    FUNC_2( &VAR_0->wait );
    FUNC_3( &VAR_0->lock );
    FUNC_1( VAR_0 );
}
