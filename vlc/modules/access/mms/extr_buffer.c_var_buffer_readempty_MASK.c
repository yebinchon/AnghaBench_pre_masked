
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_data; scalar_t__ i_size; } ;
typedef TYPE_1__ var_buffer_t ;



int FUNC_0( var_buffer_t *VAR_0 )
{
    return( ( VAR_0->i_data >= VAR_0->i_size ) ? 1 : 0 );
}
