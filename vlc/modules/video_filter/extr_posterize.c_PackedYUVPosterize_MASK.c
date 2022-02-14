
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_6__ {int i_chroma; } ;
struct TYPE_8__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {void** p_pixels; int i_visible_lines; int i_pitch; int i_visible_pitch; } ;






 int FUNC_0 (void**,void**,void**,void**,void*,void*,void*,void*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2( picture_t *VAR_0, picture_t *VAR_1, int VAR_2 )
{
    uint8_t *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    uint8_t VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_3 = VAR_0->p[0].p_pixels;
    VAR_4 = VAR_3 + VAR_0->p[0].i_visible_lines
        * VAR_0->p[0].i_pitch;
    VAR_6 = VAR_1->p[0].p_pixels;

    while( VAR_3 < VAR_4 )
    {
        VAR_5 = VAR_3 + VAR_0->p[0].i_visible_pitch;
        while( VAR_3 < VAR_5 )
        {
            uint8_t VAR_11, VAR_12, VAR_13, VAR_14;

            switch( VAR_0->format.i_chroma )
            {
                case 131:
                    VAR_9 = *VAR_3++;
                    VAR_7 = *VAR_3++;
                    VAR_10 = *VAR_3++;
                    VAR_8 = *VAR_3++;
                    break;
                case 130:
                    VAR_10 = *VAR_3++;
                    VAR_7 = *VAR_3++;
                    VAR_9 = *VAR_3++;
                    VAR_8 = *VAR_3++;
                    break;
                case 129:
                    VAR_7 = *VAR_3++;
                    VAR_9 = *VAR_3++;
                    VAR_8 = *VAR_3++;
                    VAR_10 = *VAR_3++;
                    break;
                case 128:
                    VAR_7 = *VAR_3++;
                    VAR_10 = *VAR_3++;
                    VAR_8 = *VAR_3++;
                    VAR_9 = *VAR_3++;
                    break;
                default:
                    FUNC_1();
            }

            FUNC_0( &VAR_11, &VAR_12, &VAR_13,
                             &VAR_14, VAR_7, VAR_8, VAR_9, VAR_10, VAR_2 );

            switch( VAR_0->format.i_chroma )
            {
                case 131:
                    *VAR_6++ = VAR_13;
                    *VAR_6++ = VAR_11;
                    *VAR_6++ = VAR_14;
                    *VAR_6++ = VAR_12;
                    break;
                case 130:
                    *VAR_6++ = VAR_14;
                    *VAR_6++ = VAR_11;
                    *VAR_6++ = VAR_13;
                    *VAR_6++ = VAR_12;
                    break;
                case 129:
                    *VAR_6++ = VAR_11;
                    *VAR_6++ = VAR_13;
                    *VAR_6++ = VAR_12;
                    *VAR_6++ = VAR_14;
                    break;
                case 128:
                    *VAR_6++ = VAR_11;
                    *VAR_6++ = VAR_14;
                    *VAR_6++ = VAR_12;
                    *VAR_6++ = VAR_13;
                    break;
                default:
                    FUNC_1();
            }
        }
        VAR_3 += VAR_0->p[0].i_pitch - VAR_0->p[0].i_visible_pitch;
        VAR_6 += VAR_1->p[0].i_pitch
            - VAR_1->p[0].i_visible_pitch;
    }
}
