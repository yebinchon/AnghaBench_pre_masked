
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_4__ {int i_visible_pitch; int i_pitch; int i_visible_lines; int * p_pixels; } ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_1(picture_t *VAR_0, const uint8_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0->i_planes; ++VAR_2)
    {
        uint8_t *VAR_3 = VAR_0->p[VAR_2].p_pixels;

        if (VAR_0->p[VAR_2].i_visible_pitch == VAR_0->p[VAR_2].i_pitch)
        {

            uint32_t VAR_4 = VAR_0->p[VAR_2].i_pitch * VAR_0->p[VAR_2].i_visible_lines;
            FUNC_0(VAR_3, VAR_1, VAR_4);
            VAR_1 += VAR_4;
            continue;
        }

        for (int VAR_5 = 0; VAR_5 < VAR_0->p[VAR_2].i_visible_lines; VAR_5++)
        {
            FUNC_0(VAR_3, VAR_1, VAR_0->p[VAR_2].i_visible_pitch);
            VAR_1 += VAR_0->p[VAR_2].i_visible_pitch;
            VAR_3 += VAR_0->p[VAR_2].i_pitch;
        }
    }
}
