
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_buffer_size; int * pf_window_table; } ;
typedef TYPE_1__ window_context ;


 int FUNC_0 (int *) ;

void FUNC_1( window_context * VAR_0 )
{
    if( VAR_0->pf_window_table )
    {
        FUNC_0( VAR_0->pf_window_table );
        VAR_0->pf_window_table = ((void*)0);
        VAR_0->i_buffer_size = 0;
    }
}
