
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ i_width; scalar_t__ i_visible_width; scalar_t__ i_height; scalar_t__ i_visible_height; scalar_t__ i_y_offset; scalar_t__ i_x_offset; int i_chroma; } ;
typedef TYPE_2__ video_format_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int i_align; TYPE_1__* p_picture; int i_y; int i_x; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_14__ {int* p_pixels; int i_pitch; int i_pixel_pitch; } ;
typedef TYPE_4__ plane_t ;
typedef int fmt ;
struct TYPE_15__ {scalar_t__ w; scalar_t__ h; int** data; int const nb_colors; int y; int x; } ;
struct TYPE_11__ {TYPE_4__* p; } ;
typedef TYPE_5__ AVSubtitleRect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static subpicture_region_t *FUNC_4(AVSubtitleRect *VAR_3)
{
    if (VAR_3->w <= 0 || VAR_3->h <= 0)
        return ((void*)0);

    video_format_t VAR_4;
    FUNC_2(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.i_chroma = VAR_2;
    VAR_4.i_width =
    VAR_4.i_visible_width = VAR_3->w;
    VAR_4.i_height =
    VAR_4.i_visible_height = VAR_3->h;
    VAR_4.i_x_offset = 0;
    VAR_4.i_y_offset = 0;

    subpicture_region_t *VAR_5 = FUNC_3(&VAR_4);
    if (!VAR_5)
        return ((void*)0);

    VAR_5->i_x = VAR_3->x;
    VAR_5->i_y = VAR_3->y;
    VAR_5->i_align = VAR_1 | VAR_0;

    const plane_t *VAR_6 = &VAR_5->p_picture->p[0];
    for (int VAR_7 = 0; VAR_7 < VAR_3->h; VAR_7++) {
        for (int VAR_8 = 0; VAR_8 < VAR_3->w; VAR_8++) {

            const uint8_t VAR_9 = VAR_3->data[0][VAR_7 * VAR_3->w+VAR_8];
            FUNC_0(VAR_9 < VAR_3->nb_colors);

            uint32_t VAR_10;
            FUNC_1(&VAR_10, &VAR_3->data[1][4*VAR_9], 4);

            uint8_t *VAR_11 = &VAR_6->p_pixels[VAR_7 * VAR_6->i_pitch + VAR_8 * VAR_6->i_pixel_pitch];
            VAR_11[0] = (VAR_10 >> 16) & 0xff;
            VAR_11[1] = (VAR_10 >> 8) & 0xff;
            VAR_11[2] = (VAR_10 >> 0) & 0xff;
            VAR_11[3] = (VAR_10 >> 24) & 0xff;
        }
    }

    return VAR_5;
}
