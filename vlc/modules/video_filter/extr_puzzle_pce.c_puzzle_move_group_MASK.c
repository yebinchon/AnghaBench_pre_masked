
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_10__ {size_t i_group_ID; int b_finished; TYPE_2__* ps_piece_in_plane; } ;
typedef TYPE_3__ piece_t ;
typedef size_t int32_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {size_t i_pieces_nbr; } ;
struct TYPE_12__ {TYPE_3__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_9__ {int i_actual_y; int i_actual_x; } ;


 int FUNC_0 (TYPE_4__*,size_t) ;

void FUNC_1( filter_t *VAR_0, int32_t VAR_1, int32_t VAR_2, int32_t VAR_3)
{
    filter_sys_t *VAR_4 = VAR_0->p_sys;
    uint32_t VAR_5 = VAR_4->ps_pieces[VAR_1].i_group_ID;
    for (uint32_t VAR_6 = 0; VAR_6 < VAR_4->s_allocated.i_pieces_nbr; VAR_6++) {
        piece_t *VAR_7 = &VAR_4->ps_pieces[VAR_6];
        if (VAR_7->i_group_ID == VAR_5) {
            VAR_7->b_finished = 0;
            VAR_7->ps_piece_in_plane[0].i_actual_x += VAR_2;
            VAR_7->ps_piece_in_plane[0].i_actual_y += VAR_3;

            FUNC_0( VAR_0, VAR_6 );
        }
    }
}
