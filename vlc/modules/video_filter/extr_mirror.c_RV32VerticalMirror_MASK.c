
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_5__ {int i_visible_lines; int i_pitch; int i_visible_pitch; int * p_pixels; } ;



__attribute__((used)) static void FUNC_0( picture_t *VAR_0, picture_t *VAR_1,
                                 int VAR_2, bool VAR_3 )
{
    uint8_t *VAR_4, *VAR_5, *VAR_6;

    VAR_4 = VAR_0->p[VAR_2].p_pixels;
    VAR_5 = VAR_4 + VAR_0->p[VAR_2].i_visible_lines
        * VAR_0->p[VAR_2].i_pitch;
    VAR_6 = VAR_1->p[VAR_2].p_pixels;

    while( VAR_4 < VAR_5 )
    {
        uint32_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
        VAR_7 = (uint32_t*) VAR_4;
        VAR_8 = (uint32_t*) VAR_6;
        VAR_9 = VAR_7;
        VAR_10 = (uint32_t*) ( VAR_4 + VAR_0->p[VAR_2].i_visible_pitch) ;

        while( VAR_7 < VAR_10 )
        {

            if ( VAR_7 < VAR_9 + ( VAR_10 - VAR_9 ) / 2 )
            {
                if ( VAR_3 )
                {
                    *VAR_8++ = *VAR_7++;
                }
                else
                {
                    uint32_t *VAR_11 = VAR_10 - ( VAR_7 - VAR_9 );
                    VAR_7++;
                    *VAR_6++ = *VAR_11;
                }
            }
            else
            {
                if ( VAR_3 )
                {
                    uint32_t *VAR_12 = VAR_10 - ( VAR_7 - VAR_9 );
                    VAR_7++;
                    *VAR_6++ = *VAR_12;
                }
                else
                {
                    *VAR_8++ = *VAR_7++;
                }
            }
        }
        VAR_4 = (uint8_t*) VAR_7;
        VAR_6 = (uint8_t*) VAR_8;
        VAR_4 += VAR_0->p[VAR_2].i_pitch - VAR_0->p[VAR_2].i_visible_pitch;
        VAR_6 += VAR_1->p[VAR_2].i_pitch
            - VAR_1->p[VAR_2].i_visible_pitch;
    }
}
