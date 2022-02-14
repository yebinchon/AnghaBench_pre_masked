
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_length; int p_begin; int p_memory; } ;
typedef TYPE_1__ buffer_t ;


 int VAR_0 ;

int FUNC_0( buffer_t *VAR_1, int VAR_2 )
{
    VAR_1->i_length -= VAR_2;
    if( VAR_1->i_length == 0 )
    {

        VAR_1->p_begin = VAR_1->p_memory;
    }
    else
    {
        VAR_1->p_begin += VAR_2;
    }
    return VAR_0;
}
