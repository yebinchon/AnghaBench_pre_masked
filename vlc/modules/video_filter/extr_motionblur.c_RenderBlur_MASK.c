
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int i_planes; TYPE_3__* p; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_13__ {TYPE_2__* p_tmp; int i_factor; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_11__ {int i_visible_pitch; int i_visible_lines; int const i_pitch; int * p_pixels; } ;
struct TYPE_10__ {TYPE_1__* p; } ;
struct TYPE_9__ {int const i_pitch; int * p_pixels; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( filter_sys_t *VAR_0, picture_t *VAR_1,
                        picture_t *VAR_2 )
{
    const int VAR_3 = FUNC_0( &VAR_0->i_factor );
    int VAR_4 = 128 - VAR_3;

    for( int VAR_5 = 0; VAR_5 < VAR_2->i_planes; VAR_5++ )
    {
        uint8_t *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
        const int VAR_11 = VAR_2->p[VAR_5].i_visible_pitch;
        const int VAR_12 = VAR_2->p[VAR_5].i_visible_lines;

        VAR_8 = VAR_2->p[VAR_5].p_pixels;
        VAR_7 = VAR_1->p[VAR_5].p_pixels;
        VAR_6 = VAR_0->p_tmp->p[VAR_5].p_pixels;
        VAR_9 = VAR_8 + VAR_2->p[VAR_5].i_pitch * VAR_12;
        while ( VAR_8 < VAR_9 )
        {
            VAR_10 = VAR_8 + VAR_11;

            while ( VAR_8 < VAR_10 )
            {
                *VAR_8++ = (((*VAR_6++) * VAR_3) +
                            ((*VAR_7++) * VAR_4)) >> 7;
            }

            VAR_6 += VAR_0->p_tmp->p[VAR_5].i_pitch - VAR_11;
            VAR_7 += VAR_1->p[VAR_5].i_pitch - VAR_11;
            VAR_8 += VAR_2->p[VAR_5].i_pitch - VAR_11;
        }
    }
}
