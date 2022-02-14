
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {unsigned int width; unsigned int height; unsigned int x; unsigned int y; } ;
typedef TYPE_4__ vout_display_place_t ;
struct TYPE_15__ {unsigned int num; unsigned int const den; } ;
struct TYPE_17__ {unsigned int width; unsigned int height; TYPE_1__ sar; } ;
struct TYPE_16__ {int horizontal; int vertical; } ;
struct TYPE_19__ {TYPE_3__ display; TYPE_2__ align; scalar_t__ is_display_filled; } ;
typedef TYPE_5__ vout_display_cfg_t ;
struct TYPE_20__ {unsigned int i_visible_width; unsigned int i_visible_height; unsigned int i_sar_den; unsigned int const i_sar_num; scalar_t__ projection_mode; } ;
typedef TYPE_6__ video_format_t ;
typedef unsigned int int64_t ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_6__ const*) ;
 int FUNC_2 (unsigned int*,unsigned int*,TYPE_6__ const*,TYPE_5__*) ;

void FUNC_3(vout_display_place_t *VAR_1,
                               const video_format_t *VAR_2,
                               const vout_display_cfg_t *VAR_3)
{

    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    if (VAR_3->display.width == 0 || VAR_3->display.height == 0)
        return;


    unsigned VAR_4;
    unsigned VAR_5;

    video_format_t VAR_6;
    FUNC_1(&VAR_6, VAR_2);
    VAR_2 = &VAR_6;

    if (VAR_3->is_display_filled) {
        VAR_4 = VAR_3->display.width;
        VAR_5 = VAR_3->display.height;
    } else {
        vout_display_cfg_t VAR_7 = *VAR_3;

        VAR_7.display.width = 0;
        VAR_7.display.height = 0;
        FUNC_2(&VAR_4, &VAR_5,
                                           VAR_2, &VAR_7);
    }

    const unsigned VAR_8 = VAR_2->i_visible_width;
    const unsigned VAR_9 = VAR_2->i_visible_height;

    const int64_t VAR_10 = (int64_t)VAR_9 * VAR_4 * VAR_3->display.sar.num * VAR_2->i_sar_den / (VAR_8 * VAR_2->i_sar_num * VAR_3->display.sar.den);

    const int64_t VAR_11 = (int64_t)VAR_8 * VAR_5 * VAR_3->display.sar.den * VAR_2->i_sar_num / (VAR_9 * VAR_2->i_sar_den * VAR_3->display.sar.num);

    if (VAR_2->projection_mode == VAR_0) {

        if (VAR_11 <= VAR_3->display.width) {
            VAR_1->width = VAR_11;
            VAR_1->height = VAR_5;
        } else {
            VAR_1->width = VAR_4;
            VAR_1->height = VAR_10;
        }
    } else {


        VAR_1->width = VAR_4;
        VAR_1->height = VAR_5;
    }


    switch (VAR_3->align.horizontal) {
    case 130:
        VAR_1->x = 0;
        break;
    case 129:
        VAR_1->x = VAR_3->display.width - VAR_1->width;
        break;
    default:
        VAR_1->x = ((int)VAR_3->display.width - (int)VAR_1->width) / 2;
        break;
    }

    switch (VAR_3->align.vertical) {
    case 128:
        VAR_1->y = 0;
        break;
    case 131:
        VAR_1->y = VAR_3->display.height - VAR_1->height;
        break;
    default:
        VAR_1->y = ((int)VAR_3->display.height - (int)VAR_1->height) / 2;
        break;
    }
}
