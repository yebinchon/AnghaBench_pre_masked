
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_5__ {void** p_pixels; int i_visible_lines; int i_pitch; int i_visible_pitch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void**,void**,void**,void**,void*,void*,void*,void*,int) ;

__attribute__((used)) static void FUNC_1( picture_t *VAR_3, picture_t *VAR_4,
                               int VAR_5 )
{
    uint8_t *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11,
            *VAR_12, *VAR_13;
    int VAR_14 = 0;

    VAR_6 = VAR_3->p[VAR_2].p_pixels;
    VAR_9 = VAR_6 + VAR_3->p[VAR_2].i_visible_lines
        * VAR_3->p[VAR_2].i_pitch;
    VAR_11 = VAR_4->p[VAR_2].p_pixels;


    while( VAR_6 < VAR_9 )
    {
        VAR_10 = VAR_6 + VAR_3->p[VAR_2].i_visible_pitch;

        VAR_7 = VAR_3->p[VAR_0].p_pixels
            + VAR_3->p[VAR_0].i_pitch * ( VAR_14 / 2 );
        VAR_12 = VAR_4->p[VAR_0].p_pixels
            + VAR_4->p[VAR_0].i_pitch * ( VAR_14 / 2 );

        VAR_8 = VAR_3->p[VAR_1].p_pixels
            + VAR_3->p[VAR_1].i_pitch * ( VAR_14 / 2 );
        VAR_13 = VAR_4->p[VAR_1].p_pixels
            + VAR_4->p[VAR_1].i_pitch * ( VAR_14 / 2 );

        while( VAR_6 < VAR_10 )
        {
            uint8_t VAR_15, VAR_16, VAR_17, VAR_18;
            uint8_t VAR_19, VAR_20, VAR_21, VAR_22;

            VAR_15 = *VAR_6++;
            VAR_16 = *VAR_6++;
            VAR_17 = *VAR_7++;
            VAR_18 = *VAR_8++;

            FUNC_0( &VAR_19, &VAR_20, &VAR_21,
                             &VAR_22, VAR_15, VAR_16, VAR_17, VAR_18, VAR_5 );

            *VAR_11++ = VAR_19;
            *VAR_11++ = VAR_20;
            *VAR_12++ = VAR_21;
            *VAR_13++ = VAR_22;
        }
        VAR_6 += VAR_3->p[VAR_2].i_pitch
            - VAR_3->p[VAR_2].i_visible_pitch;
        VAR_11 += VAR_4->p[VAR_2].i_pitch
            - VAR_4->p[VAR_2].i_visible_pitch;
        VAR_14++;
    }
}
