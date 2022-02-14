
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t i_pixel_pitch; size_t i_visible_pitch; size_t i_visible_lines; size_t i_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_5__ {size_t i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef size_t int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,size_t,size_t) ;

void FUNC_1(picture_t *VAR_3, int32_t VAR_4, int32_t VAR_5, int32_t VAR_6, int32_t VAR_7, uint8_t VAR_8, uint8_t VAR_9, uint8_t VAR_10 )
{
    uint8_t VAR_11;

    for( uint8_t VAR_12 = 0; VAR_12 < VAR_3->i_planes; VAR_12++ ) {
        plane_t *VAR_13 = &VAR_3->p[VAR_12];
        int32_t VAR_14 = VAR_3->p[VAR_12].i_pixel_pitch;

        if (VAR_12 == VAR_2)
            VAR_11 = VAR_8;
        else if (VAR_12 == VAR_0)
            VAR_11 = VAR_9;
        else if (VAR_12 == VAR_1)
            VAR_11 = VAR_10;

        int32_t VAR_15 = ( VAR_4 * VAR_13->i_visible_pitch / VAR_3->p[0].i_visible_pitch ) * VAR_14;
        int32_t VAR_16 = ( (VAR_4 + VAR_6) * VAR_13->i_visible_pitch / VAR_3->p[0].i_visible_pitch ) * VAR_14;
        int32_t VAR_17 = VAR_5 * VAR_13->i_visible_lines / VAR_3->p[0].i_visible_lines;
        int32_t VAR_18 = (VAR_5 + VAR_7) * VAR_13->i_visible_lines / VAR_3->p[0].i_visible_lines;


        FUNC_0( &VAR_13->p_pixels[VAR_17 * VAR_13->i_pitch + VAR_15], VAR_11, VAR_16 - VAR_15);


        for( int32_t VAR_19 = 1; VAR_19 < VAR_18 - VAR_17 - 1; VAR_19++ ) {
            FUNC_0( &VAR_13->p_pixels[ (VAR_17 + VAR_19) * VAR_13->i_pitch + VAR_15 ], VAR_11, VAR_13->i_pixel_pitch );
            FUNC_0( &VAR_13->p_pixels[(VAR_17 + VAR_19) * VAR_13->i_pitch + VAR_16 - 1], VAR_11, VAR_13->i_pixel_pitch );
        }


        FUNC_0( &VAR_13->p_pixels[(VAR_18 - 1) * VAR_13->i_pitch + VAR_15], VAR_11, VAR_16 - VAR_15);
    }
}
