
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t i_pixel_pitch; int* p_pixels; size_t i_pitch; size_t i_visible_pitch; size_t i_visible_lines; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int,size_t) ;

void FUNC_1(picture_t *VAR_1, int32_t VAR_2, int32_t VAR_3, int32_t VAR_4, int32_t VAR_5, const char **VAR_6, bool VAR_7)
{
    plane_t *VAR_8 = &VAR_1->p[VAR_0];
    int32_t VAR_9 = VAR_1->p[VAR_0].i_pixel_pitch;

    uint8_t VAR_10;

    VAR_10 = ( VAR_8->p_pixels[ VAR_3 * VAR_8->i_pitch + VAR_2 ] >= 0x7F ) ? 0x00 : 0xFF;

    for( int32_t VAR_11 = 0; VAR_11 < VAR_5 ; VAR_11++ )
        for( int32_t VAR_12 = 0; VAR_12 < VAR_4; VAR_12++ ) {
            int32_t VAR_13 = ( VAR_12 + VAR_2 ) * VAR_9;
            int32_t VAR_14 = VAR_11 + VAR_3;
            if ( VAR_6[VAR_11][VAR_7?VAR_4-1-VAR_12:VAR_12] == 'o' ) {
                if ((VAR_13 < VAR_8->i_visible_pitch) && (VAR_14 < VAR_8->i_visible_lines) && (VAR_13 >= 0 ) && (VAR_14 >= 0))
                    FUNC_0( &VAR_8->p_pixels[ VAR_14 * VAR_8->i_pitch + VAR_13 ], VAR_10, VAR_8->i_pixel_pitch );
            }
            else if ( VAR_6[VAR_11][VAR_7?VAR_4-1-VAR_12:VAR_12] == '.' ) {
                if ((VAR_13 < VAR_8->i_visible_pitch) && (VAR_14 < VAR_8->i_visible_lines) && (VAR_13 >= 0 ) && (VAR_14 >= 0))
                    VAR_8->p_pixels[ VAR_14 * VAR_8->i_pitch + VAR_13 ] = VAR_8->p_pixels[ VAR_14 * VAR_8->i_pitch + VAR_13 ] / 2 + VAR_10 / 2;
            }
        }
}
