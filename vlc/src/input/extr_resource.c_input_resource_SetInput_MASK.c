
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_3__ {scalar_t__ i_vout; scalar_t__ p_vout_free; scalar_t__* pp_vout; int lock; int * p_input; } ;
typedef TYPE_1__ input_resource_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( input_resource_t *VAR_0, input_thread_t *VAR_1 )
{
    FUNC_1( &VAR_0->lock );

    if( VAR_0->p_input && !VAR_1 )
        FUNC_0( VAR_0->i_vout == 0 || VAR_0->p_vout_free == VAR_0->pp_vout[0] );


    VAR_0->p_input = VAR_1;

    FUNC_2( &VAR_0->lock );
}
