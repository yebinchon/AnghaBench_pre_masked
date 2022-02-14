
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ i_chroma; } ;
struct TYPE_7__ {TYPE_1__* p; TYPE_5__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_6__ {int* p_pixels; int i_visible_lines; int i_pitch; int i_visible_pitch; } ;


 int FUNC_0 (double) ;
 int FUNC_1 (TYPE_5__*,int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( picture_t *VAR_3, picture_t *VAR_4, int VAR_5 )
{



    uint8_t *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    bool VAR_10 = VAR_3->format.i_chroma == VAR_2;
    int VAR_11 = 0, VAR_12 = 1, VAR_13 = 2;

    FUNC_1( &VAR_4->format, &VAR_11, &VAR_12, &VAR_13 );

    VAR_6 = VAR_3->p[0].p_pixels;
    VAR_7 = VAR_6 + VAR_3->p[0].i_visible_lines
        * VAR_3->p[0].i_pitch;
    VAR_9 = VAR_4->p[0].p_pixels;



    uint8_t VAR_14 = (( ((int) ((1.40200 * 255.0 / 224.0) * (1<<10) + 0.5)) * (VAR_5 * 14)
                        + (1 << (10 - 1)) )) >> 10;
    uint8_t VAR_15 = (( - ((int) ((0.34414*255.0/224.0) * (1<<10) + 0.5)) * ( - VAR_5 / 6 )
                        - ((int) ((0.71414 * 255.0 / 224.0) * (1<<10) + 0.5)) * ( VAR_5 * 14 )
                        + (1 << (10 - 1)) )) >> 10;
    uint8_t VAR_16 = (( ((int) ((1.77200 * 255.0 / 224.0) * (1<<10) + 0.5)) * ( - VAR_5 / 6 )
                        + (1 << (10 - 1)) )) >> 10;

    while (VAR_6 < VAR_7)
    {
        VAR_8 = VAR_6 + VAR_3->p[0].i_visible_pitch;
        while (VAR_6 < VAR_8)
        {






            uint8_t VAR_17 = ((( 66 * VAR_6[VAR_11] + 129 * VAR_6[VAR_12] + 25
                      * VAR_6[VAR_13] + 128 ) >> 8 ) * ((int) ((255.0/219.0) * (1<<10) + 0.5)))
                      - (((( 66 * VAR_6[VAR_11] + 129 * VAR_6[VAR_12] + 25
                      * VAR_6[VAR_13] + 128 ) >> 8 )
                      * ((int) ((255.0 / 219.0) * (1<<10) + 0.5))) >> 2 ) + ( VAR_5 >> 2 );
            VAR_9[VAR_11] = FUNC_2(VAR_17 + VAR_14);
            VAR_9[VAR_12] = FUNC_2(VAR_17 + VAR_15);
            VAR_9[VAR_13] = FUNC_2(VAR_17 + VAR_16);
            VAR_6 += 3;
            VAR_9 += 3;

            if (VAR_10) {

            *VAR_9++ = *VAR_6++;
            }
        }

        VAR_6 += VAR_3->p[0].i_pitch - VAR_3->p[0].i_visible_pitch;
        VAR_9 += VAR_4->p[0].i_pitch
            - VAR_4->p[0].i_visible_pitch;
    }



}
