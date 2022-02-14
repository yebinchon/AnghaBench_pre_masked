
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {size_t i_pieces_nbr; } ;
struct TYPE_5__ {TYPE_1__ s_allocated; } ;
typedef TYPE_2__ filter_sys_t ;



bool FUNC_0( filter_sys_t *VAR_0, int32_t *VAR_1 )
{
    for( uint32_t VAR_2 = 0; VAR_2 < VAR_0->s_allocated.i_pieces_nbr; VAR_2++ )
        if( (int32_t)VAR_2 != VAR_1[VAR_2] )
            return 0;

    return 1;
}
