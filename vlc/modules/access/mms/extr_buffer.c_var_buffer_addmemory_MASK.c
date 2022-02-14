
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_data; scalar_t__ i_size; scalar_t__ p_data; } ;
typedef TYPE_1__ var_buffer_t ;


 int FUNC_0 (scalar_t__,void*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2( var_buffer_t *VAR_0, void *VAR_1, int VAR_2 )
{

    if( VAR_0->i_data + VAR_2 >= VAR_0->i_size )
    {
        VAR_0->i_size += VAR_2 + 1024;
        VAR_0->p_data = FUNC_1( VAR_0->p_data, VAR_0->i_size );
    }

    FUNC_0( VAR_0->p_data + VAR_0->i_data, VAR_1, VAR_2 );
    VAR_0->i_data += VAR_2;
}
