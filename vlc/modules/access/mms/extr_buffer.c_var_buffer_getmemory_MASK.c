
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_data; scalar_t__ p_data; scalar_t__ i_size; } ;
typedef TYPE_1__ var_buffer_t ;
typedef int int64_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (void*,scalar_t__,int) ;

int FUNC_2 ( var_buffer_t *VAR_0, void *VAR_1, int64_t VAR_2 )
{
    int VAR_3;

    VAR_3 = FUNC_0( VAR_2, VAR_0->i_size - VAR_0->i_data );
    if( VAR_3 > 0 && VAR_1 != ((void*)0))
    {
        FUNC_1( VAR_1, VAR_0->p_data + VAR_0->i_data , VAR_3 );
    }
    if( VAR_3 < 0 )
    {
        VAR_3 = 0;
    }
    VAR_0->i_data += VAR_3;
    return( VAR_3 );
}
