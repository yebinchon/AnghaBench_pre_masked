
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int i_pitch; int i_visible_lines; int i_visible_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int *,int const*,int ) ;

__attribute__((used)) static void FUNC_1(plane_t *restrict VAR_0, const plane_t *restrict VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->p_pixels;
    uint8_t *restrict VAR_3 = VAR_0->p_pixels;

    VAR_3 += VAR_0->i_pitch * VAR_0->i_visible_lines;
    for (int VAR_4 = 0; VAR_4 < VAR_0->i_visible_lines; VAR_4++) {
        VAR_3 -= VAR_0->i_pitch;
        FUNC_0(VAR_3, VAR_2, VAR_0->i_visible_pitch);
        VAR_2 += VAR_1->i_pitch;
    }
}
