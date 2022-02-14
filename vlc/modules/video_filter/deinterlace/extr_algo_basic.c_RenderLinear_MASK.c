
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_9__ {int * p_sys; } ;
typedef TYPE_3__ filter_t ;
typedef int filter_sys_t ;
struct TYPE_7__ {int i_pitch; int i_visible_lines; int * p_pixels; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

int FUNC_4( filter_t *VAR_1,
                  picture_t *VAR_2, picture_t *VAR_3, int VAR_4, int VAR_5 )
{
    FUNC_2(VAR_4);
    int VAR_6;

    filter_sys_t *VAR_7 = VAR_1->p_sys;


    for( VAR_6 = 0 ; VAR_6 < VAR_3->i_planes ; VAR_6++ )
    {
        uint8_t *VAR_8, *VAR_9, *VAR_10;

        VAR_8 = VAR_3->p[VAR_6].p_pixels;
        VAR_10 = VAR_2->p[VAR_6].p_pixels;
        VAR_9 = VAR_10 + VAR_2->p[VAR_6].i_pitch
                             * VAR_2->p[VAR_6].i_visible_lines;


        if( VAR_5 == 1 )
        {
            FUNC_3( VAR_10, VAR_8, VAR_3->p[VAR_6].i_pitch );
            VAR_8 += VAR_3->p[VAR_6].i_pitch;
            VAR_10 += VAR_2->p[VAR_6].i_pitch;
        }

        VAR_9 -= 2 * VAR_2->p[VAR_6].i_pitch;

        for( ; VAR_10 < VAR_9 ; )
        {
            FUNC_3( VAR_10, VAR_8, VAR_3->p[VAR_6].i_pitch );

            VAR_10 += VAR_2->p[VAR_6].i_pitch;

            FUNC_1( VAR_10, VAR_8, VAR_8 + 2 * VAR_3->p[VAR_6].i_pitch,
                   VAR_3->p[VAR_6].i_pitch );

            VAR_8 += 2 * VAR_3->p[VAR_6].i_pitch;
            VAR_10 += VAR_2->p[VAR_6].i_pitch;
        }

        FUNC_3( VAR_10, VAR_8, VAR_3->p[VAR_6].i_pitch );


        if( VAR_5 == 0 )
        {
            VAR_8 += VAR_3->p[VAR_6].i_pitch;
            VAR_10 += VAR_2->p[VAR_6].i_pitch;
            FUNC_3( VAR_10, VAR_8, VAR_3->p[VAR_6].i_pitch );
        }
    }
    FUNC_0();
    return VAR_0;
}
