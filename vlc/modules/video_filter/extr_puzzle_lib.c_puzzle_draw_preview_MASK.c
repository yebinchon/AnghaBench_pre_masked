
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_13__ {size_t i_planes; TYPE_1__* p; } ;
typedef TYPE_4__ picture_t ;
typedef int int32_t ;
struct TYPE_14__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_12__ {int i_preview_size; } ;
struct TYPE_15__ {int i_preview_pos; TYPE_3__ s_current_param; TYPE_2__* ps_desk_planes; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_11__ {int i_width; int i_lines; } ;
struct TYPE_10__ {int i_visible_lines; int i_pixel_pitch; int i_pitch; size_t* p_pixels; } ;


 int FUNC_0 (size_t*,size_t*,int) ;

void FUNC_1( filter_t *VAR_0, picture_t *VAR_1, picture_t *VAR_2)
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;

    for( uint8_t VAR_4 = 0; VAR_4 < VAR_2->i_planes; VAR_4++ ) {
        int32_t VAR_5 = 0;
        int32_t VAR_6 = VAR_3->ps_desk_planes[VAR_4].i_width * VAR_3->s_current_param.i_preview_size / 100;
        int32_t VAR_7 = VAR_2->p[VAR_4].i_visible_lines * VAR_3->s_current_param.i_preview_size / 100;
        int32_t VAR_8 = VAR_2->p[VAR_4].i_pixel_pitch;

        const int32_t VAR_9 = VAR_1->p[VAR_4].i_pitch;
        const int32_t VAR_10 = VAR_2->p[VAR_4].i_pitch;

        uint8_t *VAR_11 = VAR_1->p[VAR_4].p_pixels;
        uint8_t *VAR_12 = VAR_2->p[VAR_4].p_pixels;

        switch ( VAR_3->i_preview_pos ) {
        case 0:
            VAR_5 = 0;
            break;
        case 1:
            VAR_5 =
                (VAR_3->ps_desk_planes[VAR_4].i_width - 1 - VAR_6) * VAR_8;
            break;
        case 2:
            VAR_5 =
                (VAR_3->ps_desk_planes[VAR_4].i_width - 1 - VAR_6) * VAR_8
                + ((int32_t) ( VAR_3->ps_desk_planes[VAR_4].i_lines - 1 - VAR_7 )) * VAR_10;
            break;
        case 3:
            VAR_5 = ((int32_t) ( VAR_3->ps_desk_planes[VAR_4].i_lines - 1 - VAR_7 )) * VAR_10;
            break;
        default:
            VAR_5 = 0;
            break;
        }

        for ( int32_t VAR_13 = 0; VAR_13 < VAR_7; VAR_13++ )
            for ( int32_t VAR_14 = 0; VAR_14 < VAR_6; VAR_14++ )
                FUNC_0( &VAR_12[ VAR_13 * VAR_10 + VAR_14 * VAR_8 + VAR_5 ],
                        &VAR_11[ ( VAR_13 * 100 / VAR_3->s_current_param.i_preview_size ) * VAR_9
                                + ( VAR_14 * 100 / VAR_3->s_current_param.i_preview_size ) * VAR_8 ],
                        VAR_8 );
    }
}
