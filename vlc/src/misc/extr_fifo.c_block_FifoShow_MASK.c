
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_3__ {int lock; int * p_first; } ;
typedef TYPE_1__ block_fifo_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

block_t *FUNC_3( block_fifo_t *VAR_0 )
{
    block_t *VAR_1;

    FUNC_1( &VAR_0->lock );
    FUNC_0(VAR_0->p_first != ((void*)0));
    VAR_1 = VAR_0->p_first;
    FUNC_2( &VAR_0->lock );

    return VAR_1;
}
