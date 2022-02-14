
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


typedef size_t uint8_t ;
struct TYPE_12__ {int i_actual_angle; size_t i_step_x_x; size_t i_actual_mirror; size_t i_step_x_y; int i_step_y_y; int i_step_y_x; size_t i_TLx; size_t i_TLy; size_t i_TRx; size_t i_TRy; size_t i_BRx; size_t i_BRy; size_t i_BLx; size_t i_BLy; int i_max_x; int i_min_x; int i_max_y; int i_min_y; int i_center_x; int i_center_y; size_t i_group_ID; int b_overlap; TYPE_3__* ps_piece_in_plane; } ;
typedef TYPE_4__ piece_t ;
typedef size_t int32_t ;
struct TYPE_13__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_9__ {size_t i_planes; } ;
struct TYPE_14__ {int* pi_group_qty; TYPE_2__* ps_desk_planes; TYPE_1__ s_allocated; TYPE_4__* ps_pieces; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_11__ {int i_actual_x; int i_actual_y; size_t i_width; size_t i_lines; } ;
struct TYPE_10__ {int i_width; int i_lines; } ;


 size_t VAR_0 ;
 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,void*) ;
 size_t FUNC_2 (TYPE_5__*,int,int,size_t) ;

void FUNC_3( filter_t *VAR_1, int32_t VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;
    piece_t *VAR_4 = &VAR_3->ps_pieces[VAR_2];

    switch ( VAR_4->i_actual_angle)
    {
      case 0:
        VAR_4->i_step_x_x = VAR_4->i_actual_mirror;
        VAR_4->i_step_x_y = 0;
        VAR_4->i_step_y_y = 1;
        VAR_4->i_step_y_x = 0;
        break;
      case 1:
        VAR_4->i_step_x_x = 0;
        VAR_4->i_step_x_y = -VAR_4->i_actual_mirror;
        VAR_4->i_step_y_y = 0;
        VAR_4->i_step_y_x = 1;
        break;
      case 2:
        VAR_4->i_step_x_x = -VAR_4->i_actual_mirror;
        VAR_4->i_step_x_y = 0;
        VAR_4->i_step_y_y = -1;
        VAR_4->i_step_y_x = 0;
        break;
      case 3:
        VAR_4->i_step_x_x = 0;
        VAR_4->i_step_x_y = VAR_4->i_actual_mirror;
        VAR_4->i_step_y_y = 0;
        VAR_4->i_step_y_x = -1;
        break;
    }


    for (uint8_t VAR_5 = 1; VAR_5 < VAR_3->s_allocated.i_planes; VAR_5++) {
        VAR_4->ps_piece_in_plane[VAR_5].i_actual_x =
            VAR_4->ps_piece_in_plane[0].i_actual_x * VAR_3->ps_desk_planes[VAR_5].i_width / VAR_3->ps_desk_planes[0].i_width;
        VAR_4->ps_piece_in_plane[VAR_5].i_actual_y =
            VAR_4->ps_piece_in_plane[0].i_actual_y * VAR_3->ps_desk_planes[VAR_5].i_lines / VAR_3->ps_desk_planes[0].i_lines;
    }


    int32_t VAR_6 = VAR_4->ps_piece_in_plane[0].i_width;
    int32_t VAR_7 = VAR_4->ps_piece_in_plane[0].i_lines;

    VAR_4->i_TLx = VAR_4->ps_piece_in_plane[0].i_actual_x;
    VAR_4->i_TLy = VAR_4->ps_piece_in_plane[0].i_actual_y;
    VAR_4->i_TRx = VAR_4->i_TLx + ( VAR_6 - 1 ) * VAR_4->i_step_x_x;
    VAR_4->i_TRy = VAR_4->i_TLy + ( VAR_6 - 1 ) * VAR_4->i_step_x_y;
    VAR_4->i_BRx = VAR_4->i_TLx + ( VAR_6 - 1 ) * VAR_4->i_step_x_x + ( VAR_7 - 1 ) * VAR_4->i_step_y_x;
    VAR_4->i_BRy = VAR_4->i_TLy + ( VAR_6 - 1 ) * VAR_4->i_step_x_y + ( VAR_7 - 1 ) * VAR_4->i_step_y_y;
    VAR_4->i_BLx = VAR_4->i_TLx + ( VAR_7 - 1 ) * VAR_4->i_step_y_x;
    VAR_4->i_BLy = VAR_4->i_TLy + ( VAR_7 - 1 ) * VAR_4->i_step_y_y;

    VAR_4->i_max_x = FUNC_0( FUNC_0( VAR_4->i_TLx, VAR_4->i_TRx ), FUNC_0( VAR_4->i_BLx, VAR_4->i_BRx ) );
    VAR_4->i_min_x = FUNC_1( FUNC_1( VAR_4->i_TLx, VAR_4->i_TRx ), FUNC_1( VAR_4->i_BLx, VAR_4->i_BRx ) );
    VAR_4->i_max_y = FUNC_0( FUNC_0( VAR_4->i_TLy, VAR_4->i_TRy ), FUNC_0( VAR_4->i_BLy, VAR_4->i_BRy ) );
    VAR_4->i_min_y = FUNC_1( FUNC_1( VAR_4->i_TLy, VAR_4->i_TRy ), FUNC_1( VAR_4->i_BLy, VAR_4->i_BRy ) );

    VAR_4->i_center_x = ( VAR_4->i_max_x + VAR_4->i_min_x ) / 2;
    VAR_4->i_center_y = ( VAR_4->i_max_y + VAR_4->i_min_y ) / 2;

    int32_t VAR_8 = FUNC_2( VAR_1, VAR_4->i_center_x, VAR_4->i_center_y, VAR_2);

    if ( ( VAR_8 != VAR_0 ) && ( VAR_3->pi_group_qty[VAR_4->i_group_ID] == 1 ) )
        VAR_4->b_overlap = 1;
}
