
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
typedef int filter_t ;
struct TYPE_5__ {int i_pitch; int i_visible_lines; int * p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2( filter_t *VAR_1, picture_t *VAR_2, picture_t *VAR_3,
               int VAR_4, int VAR_5 )
{
    FUNC_0(*VAR_1);
    FUNC_0(VAR_4);
    int VAR_6;


    for( VAR_6 = 0 ; VAR_6 < VAR_3->i_planes ; VAR_6++ )
    {
        uint8_t *VAR_7, *VAR_8, *VAR_9;

        VAR_7 = VAR_3->p[VAR_6].p_pixels;
        VAR_9 = VAR_2->p[VAR_6].p_pixels;
        VAR_8 = VAR_9 + VAR_2->p[VAR_6].i_pitch
                             * VAR_2->p[VAR_6].i_visible_lines;


        if( VAR_5 == 1 )
        {
            FUNC_1( VAR_9, VAR_7, VAR_3->p[VAR_6].i_pitch );
            VAR_7 += VAR_3->p[VAR_6].i_pitch;
            VAR_9 += VAR_2->p[VAR_6].i_pitch;
        }

        VAR_8 -= 2 * VAR_2->p[VAR_6].i_pitch;

        for( ; VAR_9 < VAR_8 ; )
        {
            FUNC_1( VAR_9, VAR_7, VAR_3->p[VAR_6].i_pitch );

            VAR_9 += VAR_2->p[VAR_6].i_pitch;

            FUNC_1( VAR_9, VAR_7, VAR_3->p[VAR_6].i_pitch );

            VAR_7 += 2 * VAR_3->p[VAR_6].i_pitch;
            VAR_9 += VAR_2->p[VAR_6].i_pitch;
        }

        FUNC_1( VAR_9, VAR_7, VAR_3->p[VAR_6].i_pitch );


        if( VAR_5 == 0 )
        {
            VAR_7 += VAR_3->p[VAR_6].i_pitch;
            VAR_9 += VAR_2->p[VAR_6].i_pitch;
            FUNC_1( VAR_9, VAR_7, VAR_3->p[VAR_6].i_pitch );
        }
    }
    return VAR_0;
}
