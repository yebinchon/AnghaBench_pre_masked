
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int32_t ;
struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {TYPE_1__* ps_desk_planes; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_5__ {int i_pce_max_lines; int i_pce_max_width; } ;



int32_t FUNC_0( filter_t *VAR_0, int32_t VAR_1, bool VAR_2, uint8_t VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_0->p_sys;

    if (VAR_2 ^ (VAR_1 >= VAR_4->ps_desk_planes[VAR_3].i_pce_max_lines / 2))
        return ( VAR_1 * VAR_4->ps_desk_planes[VAR_3].i_pce_max_width) / VAR_4->ps_desk_planes[VAR_3].i_pce_max_lines;
    else
        return VAR_4->ps_desk_planes[VAR_3].i_pce_max_width - ( ( VAR_1 * VAR_4->ps_desk_planes[VAR_3].i_pce_max_width) / VAR_4->ps_desk_planes[VAR_3].i_pce_max_lines);
}
