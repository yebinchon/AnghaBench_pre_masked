
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {int i_actual_angle; int i_actual_mirror; TYPE_2__* ps_piece_in_plane; } ;
typedef TYPE_3__ piece_t ;
typedef int int8_t ;
typedef size_t int32_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_8__ {int i_rotate; } ;
struct TYPE_12__ {TYPE_1__ s_current_param; TYPE_3__* ps_pieces; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_9__ {size_t i_actual_y; size_t i_actual_x; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,size_t) ;

void FUNC_2( filter_t *VAR_0, int32_t VAR_1, int8_t VAR_2, int32_t VAR_3, int32_t VAR_4, bool VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_0->p_sys;
    piece_t *VAR_7 = &VAR_6->ps_pieces[VAR_1];

    if ( VAR_6->s_current_param.i_rotate == 0 )
        return;

    if ( VAR_6->s_current_param.i_rotate == 1 && (VAR_2 != 2) )
        return;

    for ( uint8_t VAR_8=0; VAR_8 < FUNC_0( VAR_2 ); VAR_8++) {
        int32_t VAR_9, VAR_10;


        if ( VAR_2 > 0 ) {
            VAR_7->i_actual_angle++;
            VAR_7->i_actual_angle &= 0x03;

            VAR_9 = -( VAR_4 - VAR_7->ps_piece_in_plane[0].i_actual_y ) + VAR_3;
            VAR_10 = +( VAR_3 - VAR_7->ps_piece_in_plane[0].i_actual_x ) + VAR_4;
        }
        else {
            VAR_7->i_actual_angle--;
            VAR_7->i_actual_angle &= 0x03;

            VAR_9 = +( VAR_4 - VAR_7->ps_piece_in_plane[0].i_actual_y ) + VAR_3;
            VAR_10 = -( VAR_3 - VAR_7->ps_piece_in_plane[0].i_actual_x ) + VAR_4;
        }

        VAR_7->ps_piece_in_plane[0].i_actual_x = VAR_9;
        VAR_7->ps_piece_in_plane[0].i_actual_y = VAR_10;

        if ( VAR_7->i_actual_angle == 0 && VAR_6->s_current_param.i_rotate == 3 && !VAR_5 ) {
            VAR_7->ps_piece_in_plane[0].i_actual_x = 2 * VAR_3 - VAR_7->ps_piece_in_plane[0].i_actual_x;
            VAR_7->i_actual_mirror *= -1;
        }
        FUNC_1( VAR_0, VAR_1 );
    }
}
