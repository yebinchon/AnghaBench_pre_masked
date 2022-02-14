
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {size_t i_top_shape; size_t i_btm_shape; size_t i_right_shape; size_t i_left_shape; scalar_t__ i_step_x_x; scalar_t__ i_step_y_x; scalar_t__ i_step_x_y; scalar_t__ i_step_y_y; TYPE_2__* ps_piece_in_plane; } ;
typedef TYPE_4__ piece_t ;
struct TYPE_18__ {scalar_t__ i_first_row_offset; scalar_t__ i_row_nbr; TYPE_6__* ps_piece_shape_row; } ;
typedef TYPE_5__ piece_shape_t ;
struct TYPE_19__ {scalar_t__ i_section_nbr; TYPE_3__* ps_row_section; } ;
typedef TYPE_6__ piece_shape_row_t ;
struct TYPE_20__ {TYPE_1__* p; } ;
typedef TYPE_7__ picture_t ;
typedef int int8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_21__ {TYPE_9__* p_sys; } ;
typedef TYPE_8__ filter_t ;
struct TYPE_22__ {scalar_t__ i_mouse_x; scalar_t__ i_mouse_y; int i_pointed_pce; TYPE_5__** ps_pieces_shapes; int * ps_pieces; int * ps_puzzle_array; } ;
typedef TYPE_9__ filter_sys_t ;
struct TYPE_16__ {size_t i_type; scalar_t__ i_width; } ;
struct TYPE_15__ {scalar_t__ i_actual_x; scalar_t__ i_actual_y; scalar_t__ i_original_x; scalar_t__ i_original_y; } ;
struct TYPE_14__ {scalar_t__ i_pitch; scalar_t__ i_pixel_pitch; scalar_t__ i_visible_lines; size_t* p_pixels; } ;


 int FUNC_0 (size_t*,size_t*,scalar_t__ const) ;

void FUNC_1( filter_t *VAR_0, picture_t *VAR_1, picture_t *VAR_2, uint8_t VAR_3, piece_t *VAR_4, uint32_t VAR_5)
{

    filter_sys_t *VAR_6 = VAR_0->p_sys;

    if ((VAR_6->ps_puzzle_array == ((void*)0)) || (VAR_6->ps_pieces == ((void*)0)) || (VAR_4 == ((void*)0)))
        return;

    const int32_t VAR_7 = VAR_1->p[VAR_3].i_pitch;
    const int32_t VAR_8 = VAR_2->p[VAR_3].i_pitch;
    const int32_t VAR_9 = VAR_1->p[VAR_3].i_pitch / VAR_1->p[VAR_3].i_pixel_pitch;
    const int32_t VAR_10 = VAR_2->p[VAR_3].i_pitch / VAR_2->p[VAR_3].i_pixel_pitch;
    const int32_t VAR_11 = VAR_2->p[VAR_3].i_pixel_pitch;
    const int32_t VAR_12 = VAR_1->p[VAR_3].i_visible_lines;
    const int32_t VAR_13 = VAR_2->p[VAR_3].i_visible_lines;
    uint8_t *VAR_14 = VAR_1->p[VAR_3].p_pixels;
    uint8_t *VAR_15 = VAR_2->p[VAR_3].p_pixels;

    const int32_t VAR_16 = VAR_4->ps_piece_in_plane[VAR_3].i_actual_x;
    const int32_t VAR_17 = VAR_4->ps_piece_in_plane[VAR_3].i_actual_y;
    const int32_t VAR_18 = VAR_4->ps_piece_in_plane[VAR_3].i_original_x;
    const int32_t VAR_19 = VAR_4->ps_piece_in_plane[VAR_3].i_original_y;

    piece_shape_t *VAR_20 = &VAR_6->ps_pieces_shapes[VAR_4->i_top_shape][VAR_3];
    piece_shape_t *VAR_21 = &VAR_6->ps_pieces_shapes[VAR_4->i_btm_shape][VAR_3];
    piece_shape_t *VAR_22 = &VAR_6->ps_pieces_shapes[VAR_4->i_right_shape][VAR_3];
    piece_shape_t *VAR_23 = &VAR_6->ps_pieces_shapes[VAR_4->i_left_shape][VAR_3];
    piece_shape_t *VAR_24;

    int32_t VAR_25 = VAR_20->i_first_row_offset;
    int32_t VAR_26 = VAR_21->i_first_row_offset + VAR_21->i_row_nbr - 1;

    for (int32_t VAR_27 = VAR_25; VAR_27 <= VAR_26; VAR_27++) {
        int32_t VAR_28 = VAR_19 + VAR_27;

        if ( ( VAR_28 >= 0 ) && ( VAR_28 < VAR_12 ) ) {
            int32_t VAR_29 = 0;


            for (int8_t VAR_30=0; VAR_30 < 4; VAR_30++) {
                switch ( VAR_30 )
                {
                  case 0:
                    VAR_24 = VAR_23;
                    break;
                  case 1:
                    VAR_24 = VAR_20;
                    break;
                  case 2:
                    VAR_24 = VAR_21;
                    break;
                  case 3:
                    VAR_24 = VAR_22;
                    break;
                }

                int32_t VAR_31 = VAR_27 - VAR_24->i_first_row_offset;

                if (VAR_31 <0 || VAR_31 >= VAR_24->i_row_nbr)
                    continue;

                piece_shape_row_t *VAR_32 = &VAR_24->ps_piece_shape_row[VAR_31];

                for (int32_t VAR_33 = 0; VAR_33 < VAR_32->i_section_nbr; VAR_33++) {
                    uint8_t VAR_34 = VAR_32->ps_row_section[VAR_33].i_type;
                    int32_t VAR_35 = VAR_32->ps_row_section[VAR_33].i_width;
                    if (VAR_34 == 0) {

                        for (int32_t VAR_36 = 0; VAR_36 < VAR_35; VAR_36++) {
                            int32_t VAR_37 = VAR_16 + (VAR_29 + VAR_36) * VAR_4->i_step_x_x + VAR_27 * VAR_4->i_step_y_x;
                            int32_t VAR_38 = VAR_17 + (VAR_29 + VAR_36) * VAR_4->i_step_x_y + VAR_27 * VAR_4->i_step_y_y;
                            int32_t VAR_39 = VAR_18 + (VAR_29 + VAR_36);

                            if ( VAR_37 < 0 || VAR_37 >= VAR_10
                                 || VAR_39 < 0 || VAR_39 >= VAR_9
                                 || VAR_38 < 0 || VAR_38 >= VAR_13 )
                                continue;

                            FUNC_0( VAR_15 + VAR_38 * VAR_8 + VAR_37 * VAR_11,
                                    VAR_14 + VAR_28 * VAR_7 + VAR_39 * VAR_11,
                                    VAR_11 );




                            if ((VAR_3 == 0) && (VAR_6->i_mouse_x == VAR_37 )
                                                && (VAR_6->i_mouse_y == VAR_38 ))
                                VAR_6->i_pointed_pce = VAR_5;
                        }
                    }
                    VAR_29 += VAR_35;
                }
            }
        }
    }

    return;
}
