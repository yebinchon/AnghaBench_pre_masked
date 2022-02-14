
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int i_cols; int i_rows; TYPE_4__* ps_pieces; int i_rotate; } ;
typedef TYPE_6__ save_game_t ;
typedef size_t int32_t ;
struct TYPE_18__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ filter_t ;
struct TYPE_12__ {int i_cols; int i_rows; int i_rotate; } ;
struct TYPE_19__ {TYPE_5__* ps_pieces; TYPE_3__* ps_desk_planes; TYPE_1__ s_allocated; } ;
typedef TYPE_8__ filter_sys_t ;
struct TYPE_16__ {int i_actual_mirror; int i_actual_angle; TYPE_2__* ps_piece_in_plane; int i_left_shape; int i_right_shape; int i_btm_shape; int i_top_shape; int i_original_col; int i_original_row; } ;
struct TYPE_15__ {float f_pos_x; float f_pos_y; int i_actual_mirror; int i_actual_angle; int i_left_shape; int i_right_shape; int i_btm_shape; int i_top_shape; int i_original_col; int i_original_row; } ;
struct TYPE_14__ {size_t i_border_width; size_t i_border_lines; scalar_t__ i_lines; scalar_t__ i_width; } ;
struct TYPE_13__ {float i_actual_x; float i_actual_y; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*) ;

save_game_t* FUNC_2(filter_t *VAR_0)
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;

    save_game_t *VAR_2 = FUNC_0(1, sizeof(*VAR_2));
    if (!VAR_2)
        return ((void*)0);

    VAR_2->i_cols = VAR_1->s_allocated.i_cols;
    VAR_2->i_rows = VAR_1->s_allocated.i_rows;
    VAR_2->i_rotate = VAR_1->s_allocated.i_rotate;

    VAR_2->ps_pieces = FUNC_0( VAR_2->i_cols * VAR_2->i_rows , sizeof(*VAR_2->ps_pieces));
    if (!VAR_2->ps_pieces) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    int32_t VAR_3 = VAR_1->ps_desk_planes[0].i_border_width;
    int32_t VAR_4 = VAR_1->ps_desk_planes[0].i_border_lines;

    for (int32_t VAR_5 = 0; VAR_5 < VAR_2->i_cols * VAR_2->i_rows; VAR_5++) {
        VAR_2->ps_pieces[VAR_5].i_original_row = VAR_1->ps_pieces[VAR_5].i_original_row;
        VAR_2->ps_pieces[VAR_5].i_original_col = VAR_1->ps_pieces[VAR_5].i_original_col;
        VAR_2->ps_pieces[VAR_5].i_top_shape = VAR_1->ps_pieces[VAR_5].i_top_shape;
        VAR_2->ps_pieces[VAR_5].i_btm_shape = VAR_1->ps_pieces[VAR_5].i_btm_shape;
        VAR_2->ps_pieces[VAR_5].i_right_shape = VAR_1->ps_pieces[VAR_5].i_right_shape;
        VAR_2->ps_pieces[VAR_5].i_left_shape = VAR_1->ps_pieces[VAR_5].i_left_shape;
        VAR_2->ps_pieces[VAR_5].f_pos_x =(VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_actual_x - VAR_3 ) / ((float)VAR_1->ps_desk_planes[0].i_width - 2*VAR_3);
        VAR_2->ps_pieces[VAR_5].f_pos_y =(VAR_1->ps_pieces[VAR_5].ps_piece_in_plane[0].i_actual_y - VAR_4 ) / ((float)VAR_1->ps_desk_planes[0].i_lines - 2*VAR_4);
        VAR_2->ps_pieces[VAR_5].i_actual_angle = VAR_1->ps_pieces[VAR_5].i_actual_angle;
        VAR_2->ps_pieces[VAR_5].i_actual_mirror = VAR_1->ps_pieces[VAR_5].i_actual_mirror;
    }

    return VAR_2;
}
