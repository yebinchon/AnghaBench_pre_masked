
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_13__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_10__ {unsigned int i_pieces_nbr; } ;
struct TYPE_9__ {int i_auto_solve_speed; } ;
struct TYPE_14__ {scalar_t__ i_auto_solve_countdown_val; TYPE_4__* ps_pieces; TYPE_2__ s_allocated; TYPE_1__ s_current_param; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_12__ {scalar_t__ i_group_ID; int i_actual_mirror; TYPE_3__* ps_piece_in_plane; scalar_t__ i_actual_angle; int b_finished; } ;
struct TYPE_11__ {int i_original_y; int i_actual_y; int i_original_x; int i_actual_x; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,size_t) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3( filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    if ( VAR_1->s_current_param.i_auto_solve_speed < 500 )
        return;

    if ( --VAR_1->i_auto_solve_countdown_val > 0 )
        return;


    VAR_1->i_auto_solve_countdown_val = FUNC_0(VAR_1->s_current_param.i_auto_solve_speed);


    int32_t VAR_2 = ((unsigned)FUNC_2()) % VAR_1->s_allocated.i_pieces_nbr;


    for (uint32_t VAR_3 = 0; VAR_3 < VAR_1->s_allocated.i_pieces_nbr; VAR_3++) {
        int32_t VAR_4 = ( VAR_3 + VAR_2 ) % VAR_1->s_allocated.i_pieces_nbr;
        if ( !VAR_1->ps_pieces[VAR_4].b_finished ) {
            for (uint32_t VAR_5 = 0; VAR_5 < VAR_1->s_allocated.i_pieces_nbr; VAR_5++) {
                if ( VAR_1->ps_pieces[VAR_5].i_group_ID == VAR_1->ps_pieces[VAR_4].i_group_ID ) {
                    VAR_1->ps_pieces[VAR_5].i_actual_angle = 0;
                    VAR_1->ps_pieces[VAR_5].i_actual_mirror = +1;
                    VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_actual_x = VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_x;
                    VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_actual_y = VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_y;
                    FUNC_1( VAR_0, VAR_5 );
                }
            }
            break;
        }
    }
}
