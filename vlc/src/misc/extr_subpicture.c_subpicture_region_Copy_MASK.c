
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_picture; int p_text; int i_alpha; int i_align; int i_y; int i_x; int fmt; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_8__ {int i_planes; TYPE_1__* p; } ;
struct TYPE_7__ {int i_lines; int i_pitch; int p_pixels; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

subpicture_region_t* FUNC_4( subpicture_region_t *VAR_0 )
{
    if (!VAR_0)
        return ((void*)0);
    subpicture_region_t *VAR_1 = FUNC_1(&VAR_0->fmt);
    if (FUNC_3(!VAR_1))
        return ((void*)0);

    VAR_1->i_x = VAR_0->i_x;
    VAR_1->i_y = VAR_0->i_y;
    VAR_1->i_align = VAR_0->i_align;
    VAR_1->i_alpha = VAR_0->i_alpha;

    VAR_1->p_text = FUNC_2( VAR_0->p_text );


    for (int VAR_2 = 0; VAR_2 < VAR_0->p_picture->i_planes; VAR_2++)
        FUNC_0(VAR_1->p_picture->p[VAR_2].p_pixels,
               VAR_0->p_picture->p[VAR_2].p_pixels,
               VAR_0->p_picture->p[VAR_2].i_lines * VAR_0->p_picture->p[VAR_2].i_pitch);
    return VAR_1;
}
