
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t int32_t ;
struct TYPE_21__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_19__ {size_t i_rows; size_t i_cols; scalar_t__ i_shape_size; size_t i_planes; } ;
struct TYPE_15__ {scalar_t__ b_advanced; } ;
struct TYPE_22__ {size_t* pi_order; TYPE_6__* ps_pieces; TYPE_3__* ps_desk_planes; TYPE_2__*** ps_puzzle_array; TYPE_5__ s_allocated; TYPE_1__ s_current_param; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_20__ {size_t i_original_row; size_t i_original_col; int i_top_shape; int i_btm_shape; int i_right_shape; int b_overlap; int i_actual_mirror; int b_finished; size_t i_group_ID; TYPE_4__* ps_piece_in_plane; scalar_t__ i_OBy; scalar_t__ i_ORx; scalar_t__ i_OTy; scalar_t__ i_OLx; scalar_t__ i_actual_angle; scalar_t__ i_left_shape; } ;
struct TYPE_18__ {scalar_t__ i_lines; scalar_t__ i_original_y; scalar_t__ i_width; scalar_t__ i_original_x; scalar_t__ i_actual_y; scalar_t__ i_actual_x; } ;
struct TYPE_17__ {int i_pce_max_width; int i_pce_max_lines; size_t i_width; size_t i_lines; } ;
struct TYPE_16__ {scalar_t__ i_y; scalar_t__ i_x; scalar_t__ i_lines; scalar_t__ i_width; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,size_t) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 () ;

int FUNC_6( filter_t *VAR_2)
{
    int VAR_3 = FUNC_0( VAR_2);
    if (VAR_3 != VAR_1)
        return VAR_3;

    filter_sys_t *VAR_4 = VAR_2->p_sys;


    VAR_3 = FUNC_4( VAR_2 );
    if (VAR_3 != VAR_1)
        return VAR_3;

    int32_t VAR_5 = 0;
    for (int32_t VAR_6 = 0; VAR_6 < VAR_4->s_allocated.i_rows; VAR_6++) {
        for (int32_t VAR_7 = 0; VAR_7 < VAR_4->s_allocated.i_cols; VAR_7++) {
            int32_t VAR_8 = VAR_6;
            int32_t VAR_9 = VAR_7;

            if (VAR_4->pi_order != ((void*)0)) {
                VAR_8 = VAR_4->pi_order[VAR_5] / (VAR_4->s_allocated.i_cols);
                VAR_9 = VAR_4->pi_order[VAR_5] % (VAR_4->s_allocated.i_cols);
            }

            VAR_4->ps_pieces[VAR_5].i_original_row = VAR_8;
            VAR_4->ps_pieces[VAR_5].i_original_col = VAR_9;


            VAR_4->ps_pieces[VAR_5].i_left_shape = 0;
            VAR_4->ps_pieces[VAR_5].i_top_shape = 2;
            VAR_4->ps_pieces[VAR_5].i_btm_shape = 4;
            VAR_4->ps_pieces[VAR_5].i_right_shape = 6;

            if (VAR_4->s_allocated.i_shape_size > 0) {

                if (VAR_8 < VAR_4->s_allocated.i_rows - 1)
                    VAR_4->ps_pieces[VAR_5].i_btm_shape = 4 + 8 + 8*(( (unsigned) FUNC_5()) % ( VAR_0 ) ) + (FUNC_5() & 0x01);

                if (VAR_9 < VAR_4->s_allocated.i_cols - 1)
                    VAR_4->ps_pieces[VAR_5].i_right_shape = 6 + 8 + 8*(( (unsigned) FUNC_5()) % ( VAR_0 ) ) + (FUNC_5() & 0x01);
            }


            VAR_4->ps_pieces[VAR_5].i_actual_angle = 0;
            VAR_4->ps_pieces[VAR_5].b_overlap = 0;
            VAR_4->ps_pieces[VAR_5].i_actual_mirror = +1;
            VAR_4->ps_pieces[VAR_5].b_finished = ((VAR_9 == VAR_7) && (VAR_8 == VAR_6));
            VAR_4->ps_pieces[VAR_5].i_group_ID = VAR_5;


            int32_t VAR_10 = 0;
            int32_t VAR_11 = 0;
            if (VAR_4->s_current_param.b_advanced) {
                VAR_10 = (( (unsigned) FUNC_5()) % ( VAR_4->ps_desk_planes[0].i_pce_max_width + 1 ) ) - (int32_t) VAR_4->ps_desk_planes[0].i_pce_max_width / 2;
                VAR_11 = (( (unsigned) FUNC_5()) % ( VAR_4->ps_desk_planes[0].i_pce_max_lines + 1 ) ) - (int32_t) VAR_4->ps_desk_planes[0].i_pce_max_lines / 2;
            }


            if (VAR_4->ps_puzzle_array != ((void*)0)) {
                for (uint8_t VAR_12 = 0; VAR_12 < VAR_4->s_allocated.i_planes; VAR_12++) {

                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_width = VAR_4->ps_puzzle_array[VAR_6][VAR_7][VAR_12].i_width;
                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_lines = VAR_4->ps_puzzle_array[VAR_6][VAR_7][VAR_12].i_lines;
                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_original_x = VAR_4->ps_puzzle_array[VAR_8][VAR_9][VAR_12].i_x;
                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_original_y = VAR_4->ps_puzzle_array[VAR_8][VAR_9][VAR_12].i_y;
                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_actual_x = VAR_4->ps_puzzle_array[VAR_6][VAR_7][VAR_12].i_x + VAR_10 *
                        VAR_4->ps_desk_planes[VAR_12].i_width / VAR_4->ps_desk_planes[0].i_width;
                    VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[VAR_12].i_actual_y = VAR_4->ps_puzzle_array[VAR_6][VAR_7][VAR_12].i_y + VAR_11 *
                        VAR_4->ps_desk_planes[VAR_12].i_lines / VAR_4->ps_desk_planes[0].i_lines;

                    if (VAR_12 == 0) {

                        VAR_4->ps_pieces[VAR_5].i_OLx = VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_x;
                        VAR_4->ps_pieces[VAR_5].i_OTy = VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_y;
                        VAR_4->ps_pieces[VAR_5].i_ORx = VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_x + VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_width - 1;
                        VAR_4->ps_pieces[VAR_5].i_OBy = VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_original_y + VAR_4->ps_pieces[VAR_5].ps_piece_in_plane[0].i_lines - 1;

                        FUNC_1( VAR_2, VAR_5 );
                    }
                }
            }
            VAR_5++;
        }
    }


    FUNC_3( VAR_2);


    FUNC_2( VAR_2);

    return VAR_1;
}
