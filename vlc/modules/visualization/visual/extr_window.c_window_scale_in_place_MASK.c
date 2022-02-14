
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_buffer_size; int * pf_window_table; } ;
typedef TYPE_1__ window_context ;
typedef int int16_t ;



void FUNC_0( int16_t * VAR_0, window_context * VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_1->i_buffer_size; VAR_2++ )
    {
        VAR_0[VAR_2] *= VAR_1->pf_window_table[VAR_2];
    }
}
