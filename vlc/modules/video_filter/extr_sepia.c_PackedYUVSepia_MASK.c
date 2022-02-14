
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int i_chroma; } ;
struct TYPE_8__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {int* p_pixels; int i_visible_lines; int i_pitch; int i_visible_pitch; } ;


 int FUNC_0 (int ,int*,int*,int*) ;

__attribute__((used)) static void FUNC_1( picture_t *VAR_0, picture_t *VAR_1,
                           int VAR_2 )
{
    uint8_t *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    int VAR_7 = 1, VAR_8 = 2, VAR_9 = 0;

    FUNC_0( VAR_1->format.i_chroma,
                        &VAR_7, &VAR_8, &VAR_9 );


    const uint8_t VAR_10 = 128 - VAR_2 / 6;
    const uint8_t VAR_11 = 128 + VAR_2 / 14;

    VAR_3 = VAR_0->p[0].p_pixels;
    VAR_4 = VAR_3 + VAR_0->p[0].i_visible_lines
        * VAR_0->p[0].i_pitch;
    VAR_6 = VAR_1->p[0].p_pixels;

    {
        while( VAR_3 < VAR_4 )
        {
            VAR_5 = VAR_3 + VAR_0->p[0].i_visible_pitch;
            while( VAR_3 < VAR_5 )
            {

                VAR_6[VAR_7] =
                    VAR_3[VAR_7] - (VAR_3[VAR_7] >> 2) + (VAR_2 >> 2);
                VAR_6[VAR_7 + 2] =
                    VAR_3[VAR_7 + 2] - (VAR_3[VAR_7 + 2] >> 2)
                    + (VAR_2 >> 2);
                VAR_6[VAR_8] = VAR_10;
                VAR_6[VAR_9] = VAR_11;
                VAR_3 += 4;
                VAR_6 += 4;
            }
            VAR_3 += VAR_0->p[0].i_pitch - VAR_0->p[0].i_visible_pitch;
            VAR_6 += VAR_1->p[0].i_pitch
                - VAR_1->p[0].i_visible_pitch;
        }
    }
}
