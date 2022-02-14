
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
struct TYPE_10__ {int b_finished; int i_actual_mirror; size_t i_group_ID; scalar_t__ i_OTy; TYPE_2__* ps_piece_in_plane; scalar_t__ i_OLx; scalar_t__ i_TLy; scalar_t__ i_TLx; scalar_t__ i_TRy; scalar_t__ i_ORx; scalar_t__ i_TRx; } ;
typedef TYPE_3__ piece_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {size_t i_pieces_nbr; } ;
struct TYPE_12__ {size_t i_solve_acc_loop; scalar_t__ i_done_count; scalar_t__ i_tmp_done_count; int b_finished; scalar_t__ i_magnet_accuracy; TYPE_3__* ps_pieces; TYPE_1__ s_allocated; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_9__ {scalar_t__ i_actual_y; scalar_t__ i_actual_x; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,size_t) ;

void FUNC_2( filter_t *VAR_0) {
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    VAR_1->i_solve_acc_loop++;
    if (VAR_1->i_solve_acc_loop >= VAR_1->s_allocated.i_pieces_nbr) {
        VAR_1->i_done_count = VAR_1->i_tmp_done_count;
        VAR_1->i_tmp_done_count = 0;
        VAR_1->i_solve_acc_loop = 0;
        VAR_1->b_finished = (VAR_1->i_done_count == VAR_1->s_allocated.i_pieces_nbr);
    }

    piece_t *VAR_2 = &VAR_1->ps_pieces[VAR_1->i_solve_acc_loop];

    VAR_2->b_finished = 0;
    if ( VAR_2->i_actual_mirror == 1
         && FUNC_0( VAR_2->i_TRx - VAR_2->i_ORx ) < VAR_1->i_magnet_accuracy
         && FUNC_0( VAR_2->i_TRy - VAR_2->i_OTy ) < VAR_1->i_magnet_accuracy
         && FUNC_0( VAR_2->i_TLx - VAR_2->i_OLx ) < VAR_1->i_magnet_accuracy
         && FUNC_0( VAR_2->i_TLy - VAR_2->i_OTy ) < VAR_1->i_magnet_accuracy )
    {
        uint32_t VAR_3 = VAR_2->i_group_ID;
        VAR_1->i_tmp_done_count++;

        for ( uint32_t VAR_4 = 0; VAR_4 < VAR_1->s_allocated.i_pieces_nbr; VAR_4++) {
            VAR_2 = &VAR_1->ps_pieces[VAR_4];
            if ( ( VAR_2->i_group_ID == VAR_3 ) && ( !VAR_2->b_finished ) ) {
                VAR_2->ps_piece_in_plane[0].i_actual_x = VAR_2->i_OLx;
                VAR_2->ps_piece_in_plane[0].i_actual_y = VAR_2->i_OTy;
                VAR_2->i_actual_mirror = +1;
                FUNC_1( VAR_0, VAR_4 );
                VAR_2->b_finished = 1;
            }
        }
    }
}
