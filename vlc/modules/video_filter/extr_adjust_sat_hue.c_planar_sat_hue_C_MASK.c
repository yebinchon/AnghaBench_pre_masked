
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_5__ {int i_visible_lines; int i_pitch; int i_visible_pitch; int * p_pixels; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

int FUNC_2( picture_t * VAR_3, picture_t * VAR_4, int VAR_5, int VAR_6,
                         int VAR_7, int VAR_8, int VAR_9 )
{
    uint8_t *VAR_10, *VAR_11, *VAR_12, *VAR_13;
    uint8_t *VAR_14, *VAR_15;

    VAR_10 = VAR_3->p[VAR_0].p_pixels;
    VAR_11 = VAR_3->p[VAR_2].p_pixels;
    VAR_12 = VAR_10 + VAR_3->p[VAR_0].i_visible_lines
                      * VAR_3->p[VAR_0].i_pitch - 8;

    VAR_14 = VAR_4->p[VAR_0].p_pixels;
    VAR_15 = VAR_4->p[VAR_2].p_pixels;

    uint8_t VAR_16, VAR_17;

    for( ; VAR_10 < VAR_12 ; )
    {
        VAR_13 = VAR_10 + VAR_3->p[VAR_0].i_visible_pitch - 8;

        for( ; VAR_10 < VAR_13 ; )
        {

            FUNC_0( FUNC_1( 8 ) );
        }

        VAR_13 += 8;

        for( ; VAR_10 < VAR_13 ; )
        {
            FUNC_1( 8 );
        }

        VAR_10 += VAR_3->p[VAR_0].i_pitch
                - VAR_3->p[VAR_0].i_visible_pitch;
        VAR_11 += VAR_3->p[VAR_2].i_pitch
                - VAR_3->p[VAR_2].i_visible_pitch;
        VAR_14 += VAR_4->p[VAR_0].i_pitch
                - VAR_4->p[VAR_0].i_visible_pitch;
        VAR_15 += VAR_4->p[VAR_2].i_pitch
                    - VAR_4->p[VAR_2].i_visible_pitch;
    }

    return VAR_1;
}
