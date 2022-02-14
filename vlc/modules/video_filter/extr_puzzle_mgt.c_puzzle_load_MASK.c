
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_19__ {scalar_t__ i_cols; scalar_t__ i_rows; scalar_t__ i_rotate; TYPE_2__* ps_pieces; } ;
typedef TYPE_7__ save_game_t ;
typedef int int32_t ;
struct TYPE_20__ {TYPE_9__* p_sys; } ;
typedef TYPE_8__ filter_t ;
struct TYPE_17__ {scalar_t__ i_rows; scalar_t__ i_rotate; size_t i_pieces_nbr; int i_cols; } ;
struct TYPE_16__ {scalar_t__ i_cols; } ;
struct TYPE_21__ {TYPE_3__* ps_pieces; TYPE_5__ s_allocated; TYPE_6__* ps_desk_planes; TYPE_4__ s_current_param; } ;
typedef TYPE_9__ filter_sys_t ;
struct TYPE_18__ {int i_border_width; int i_border_lines; scalar_t__ i_lines; scalar_t__ i_width; } ;
struct TYPE_15__ {scalar_t__ i_original_row; scalar_t__ i_original_col; int i_top_shape; int i_btm_shape; int i_right_shape; int i_left_shape; size_t i_group_ID; int b_finished; TYPE_1__* ps_piece_in_plane; int i_actual_mirror; int i_actual_angle; } ;
struct TYPE_14__ {scalar_t__ i_original_row; scalar_t__ i_original_col; float f_pos_x; float f_pos_y; int i_top_shape; int i_btm_shape; int i_right_shape; int i_left_shape; int i_actual_mirror; int i_actual_angle; } ;
struct TYPE_13__ {int i_actual_x; int i_actual_y; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_8__*,size_t) ;
 int FUNC_1 () ;

void FUNC_2( filter_t *VAR_1, save_game_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;

    if (VAR_3->s_current_param.i_cols != VAR_2->i_cols
        || VAR_3->s_allocated.i_rows != VAR_2->i_rows
        || VAR_3->s_allocated.i_rotate != VAR_2->i_rotate)
        return;

    int32_t VAR_4 = VAR_3->ps_desk_planes[0].i_border_width;
    int32_t VAR_5 = VAR_3->ps_desk_planes[0].i_border_lines;

    for (uint32_t VAR_6=0; VAR_6 < VAR_3->s_allocated.i_pieces_nbr; VAR_6++) {
       for (uint32_t VAR_7=0; VAR_7 < VAR_3->s_allocated.i_pieces_nbr; VAR_7++)
            if ( VAR_3->ps_pieces[VAR_7].i_original_row == VAR_2->ps_pieces[VAR_6].i_original_row
                && VAR_3->ps_pieces[VAR_7].i_original_col == VAR_2->ps_pieces[VAR_6].i_original_col )
            {
                VAR_3->ps_pieces[VAR_7].ps_piece_in_plane[0].i_actual_x = VAR_4
                        + ((float)VAR_3->ps_desk_planes[0].i_width - 2 * VAR_4)
                        * VAR_2->ps_pieces[VAR_6].f_pos_x;
                VAR_3->ps_pieces[VAR_7].ps_piece_in_plane[0].i_actual_y = VAR_5
                        + ((float)VAR_3->ps_desk_planes[0].i_lines - 2 * VAR_5)
                        * VAR_2->ps_pieces[VAR_6].f_pos_y;

                VAR_3->ps_pieces[VAR_7].i_top_shape = VAR_2->ps_pieces[VAR_6].i_top_shape;
                VAR_3->ps_pieces[VAR_7].i_btm_shape = VAR_2->ps_pieces[VAR_6].i_btm_shape;
                VAR_3->ps_pieces[VAR_7].i_right_shape = VAR_2->ps_pieces[VAR_6].i_right_shape;
                VAR_3->ps_pieces[VAR_7].i_left_shape = VAR_2->ps_pieces[VAR_6].i_left_shape;
                VAR_3->ps_pieces[VAR_7].i_actual_angle = VAR_2->ps_pieces[VAR_6].i_actual_angle;
                VAR_3->ps_pieces[VAR_7].i_actual_mirror = VAR_2->ps_pieces[VAR_6].i_actual_mirror;
                VAR_3->ps_pieces[VAR_7].i_group_ID = VAR_6;
                VAR_3->ps_pieces[VAR_7].b_finished = 0;

                VAR_3->ps_pieces[VAR_7].ps_piece_in_plane[0].i_actual_x = VAR_4 + ((float)VAR_3->ps_desk_planes[0].i_width
                                                                        - 2*VAR_4) * VAR_2->ps_pieces[VAR_6].f_pos_x;
                VAR_3->ps_pieces[VAR_7].ps_piece_in_plane[0].i_actual_y = VAR_5 + ((float)VAR_3->ps_desk_planes[0].i_lines
                                                                        - 2*VAR_5) * VAR_2->ps_pieces[VAR_6].f_pos_y;
                FUNC_0( VAR_1, VAR_7 );

                break;
            }
    }

    for (uint32_t VAR_8=0; VAR_8 < VAR_3->s_allocated.i_pieces_nbr; VAR_8++) {

        uint32_t VAR_9 = 0;
        uint32_t VAR_10 = 6;
        uint32_t VAR_11 = 2;
        uint32_t VAR_12 = 4;

        uint32_t VAR_13 = 0;
        for (int32_t VAR_14 = 0; VAR_14 < VAR_3->s_allocated.i_rows; VAR_14++)
            for (int32_t VAR_15 = 0; VAR_15 < VAR_3->s_allocated.i_cols; VAR_15++) {
                if (VAR_3->ps_pieces[VAR_8].i_original_row == VAR_3->ps_pieces[VAR_13].i_original_row) {
                    if (VAR_3->ps_pieces[VAR_8].i_original_col == VAR_3->ps_pieces[VAR_13].i_original_col - 1)
                        VAR_10 = VAR_13;
                    else if (VAR_3->ps_pieces[VAR_8].i_original_col == VAR_3->ps_pieces[VAR_13].i_original_col + 1)
                        VAR_9 = VAR_13;
                }
                else if (VAR_3->ps_pieces[VAR_8].i_original_col == VAR_3->ps_pieces[VAR_13].i_original_col) {
                    if (VAR_3->ps_pieces[VAR_8].i_original_row == VAR_3->ps_pieces[VAR_13].i_original_row - 1)
                        VAR_12 = VAR_13;
                    else if (VAR_3->ps_pieces[VAR_8].i_original_row == VAR_3->ps_pieces[VAR_13].i_original_row + 1)
                        VAR_11 = VAR_13;
                }
                VAR_13++;
            }

        if ((VAR_3->ps_pieces[VAR_8].i_left_shape == 0) && (VAR_3->ps_pieces[VAR_8].i_original_col != 0)) {
            VAR_3->ps_pieces[VAR_9].i_right_shape = 6 + 8 + 8*(( (unsigned) FUNC_1()) % ( VAR_0 ) ) + (FUNC_1() & 0x01);
            VAR_3->ps_pieces[VAR_8].i_left_shape = (VAR_3->ps_pieces[VAR_9].i_right_shape - 6 ) ^ 0x01;
        }

        if ((VAR_3->ps_pieces[VAR_8].i_right_shape == 6) && (VAR_3->ps_pieces[VAR_8].i_original_col != VAR_3->s_allocated.i_cols-1)) {
            VAR_3->ps_pieces[VAR_8].i_right_shape = 6 + 8 + 8*(( (unsigned) FUNC_1()) % ( VAR_0 ) ) + (FUNC_1() & 0x01);
            VAR_3->ps_pieces[VAR_10].i_left_shape = (VAR_3->ps_pieces[VAR_8].i_right_shape - 6 ) ^ 0x01;
        }

        if ((VAR_3->ps_pieces[VAR_8].i_top_shape == 2) && (VAR_3->ps_pieces[VAR_8].i_original_row != 0)) {
            VAR_3->ps_pieces[VAR_11].i_btm_shape = 4 + 8 + 8*(( (unsigned) FUNC_1()) % ( VAR_0 ) ) + (FUNC_1() & 0x01);
            VAR_3->ps_pieces[VAR_8].i_top_shape = (VAR_3->ps_pieces[VAR_11].i_btm_shape - 2 ) ^ 0x01;
        }

        if ((VAR_3->ps_pieces[VAR_8].i_btm_shape == 4) && (VAR_3->ps_pieces[VAR_8].i_original_row != VAR_3->s_allocated.i_rows-1)) {
            VAR_3->ps_pieces[VAR_8].i_btm_shape = 4 + 8 + 8*(( (unsigned) FUNC_1()) % ( VAR_0 ) ) + (FUNC_1() & 0x01);
            VAR_3->ps_pieces[VAR_12].i_top_shape = (VAR_3->ps_pieces[VAR_8].i_btm_shape - 2 ) ^ 0x01;
        }

    }
}
