
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int i_pitch; int i_lines; int * p_pixels; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_6__ {int i_height; int i_visible_height; int i_chroma; } ;
struct TYPE_8__ {int i_planes; TYPE_1__ format; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(picture_t *VAR_1, uint32_t VAR_2)
{

    int VAR_3 = FUNC_0(VAR_2);
    int VAR_4 = FUNC_0(VAR_3 / 2);

    VAR_1->p->i_pitch = VAR_3;


    for (int VAR_5 = 1; VAR_5 < VAR_1->i_planes; VAR_5++)
    {
        const plane_t *VAR_6 = &VAR_1->p[VAR_5-1];
        plane_t *VAR_7 = &VAR_1->p[VAR_5];

        VAR_7->p_pixels = VAR_6->p_pixels + VAR_6->i_lines * VAR_6->i_pitch;
        VAR_7->i_pitch = VAR_4;
        VAR_7->i_lines = VAR_1->format.i_height / 2;




        int VAR_8 = VAR_1->format.i_visible_height / 2;
        if (VAR_8 < VAR_7->i_lines)
            FUNC_1(&VAR_7->p_pixels[VAR_8 * VAR_7->i_pitch], 127, (VAR_7->i_lines - VAR_8) * VAR_7->i_pitch);
    }

    if (FUNC_3(VAR_1->format.i_chroma,
                                      VAR_0))
        FUNC_2( VAR_1 );
}
