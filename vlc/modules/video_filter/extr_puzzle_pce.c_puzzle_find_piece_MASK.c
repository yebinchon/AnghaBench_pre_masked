
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {scalar_t__ i_min_x; scalar_t__ i_max_x; scalar_t__ i_min_y; scalar_t__ i_max_y; } ;
typedef TYPE_2__ piece_t ;
typedef scalar_t__ int32_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_6__ {size_t i_pieces_nbr; } ;
struct TYPE_9__ {TYPE_2__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_4__ filter_sys_t ;



int FUNC_0( filter_t *VAR_0, int32_t VAR_1, int32_t VAR_2, int32_t VAR_3) {
    filter_sys_t *VAR_4 = VAR_0->p_sys;

    for (uint32_t VAR_5 = 0; VAR_5 < VAR_4->s_allocated.i_pieces_nbr; VAR_5++) {
        piece_t *VAR_6 = &VAR_4->ps_pieces[VAR_5];
        if (( VAR_6->i_min_x <= VAR_1 ) &&
            ( VAR_6->i_max_x >= VAR_1 ) &&
            ( VAR_6->i_min_y <= VAR_2 ) &&
            ( VAR_6->i_max_y >= VAR_2 ) &&
            ( (int32_t)VAR_5 != VAR_3 ) )
        {
            return VAR_5;
        }
    }
    return -1;
}
