
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_data; size_t i_size; int* p_data; } ;
typedef TYPE_1__ var_buffer_t ;
typedef int uint8_t ;


 int* FUNC_0 (int*,size_t) ;

void FUNC_1 ( var_buffer_t *VAR_0, uint8_t VAR_1 )
{

    if( VAR_0->i_data >= VAR_0->i_size )
    {
        VAR_0->i_size += 1024;
        VAR_0->p_data = FUNC_0( VAR_0->p_data, VAR_0->i_size );
    }
    VAR_0->p_data[VAR_0->i_data] = VAR_1&0xff;
    VAR_0->i_data++;
}
