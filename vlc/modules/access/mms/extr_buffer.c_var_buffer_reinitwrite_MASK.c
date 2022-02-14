
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_size; void* p_data; scalar_t__ i_data; } ;
typedef TYPE_1__ var_buffer_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

int FUNC_2( var_buffer_t *VAR_0, int VAR_1 )
{
    VAR_0->i_data = 0;
    if( VAR_0->i_size < VAR_1 )
    {
        VAR_0->i_size = VAR_1;
        FUNC_0( VAR_0->p_data );
        VAR_0->p_data = FUNC_1( VAR_0->i_size );
    }
    if( !VAR_0->p_data )
    {
        VAR_0->i_size = ( VAR_1 > 0 ) ? VAR_1 : 2048;
        VAR_0->p_data = FUNC_1( VAR_0->i_size );
    }
    return VAR_0->p_data ? 0 : -1;
}
