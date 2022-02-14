
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int i_size; scalar_t__* p_elems; } ;
struct TYPE_5__ {scalar_t__ seltype; TYPE_1__ programs; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ VAR_0 ;

bool FUNC_0( demux_sys_t *VAR_1, uint16_t VAR_2 )
{
    if( VAR_1->seltype == VAR_0 )
        return 1;

    for(int VAR_3=0; VAR_3<VAR_1->programs.i_size; VAR_3++)
        if( VAR_1->programs.p_elems[VAR_3] == VAR_2 )
            return 1;

    return 0;
}
