
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned int num; unsigned int den; } ;
struct TYPE_8__ {unsigned int num; unsigned int den; } ;
struct TYPE_9__ {unsigned int width; unsigned int height; TYPE_1__ sar; } ;
struct TYPE_11__ {TYPE_3__ zoom; TYPE_2__ display; } ;
typedef TYPE_4__ vout_display_cfg_t ;
struct TYPE_12__ {unsigned int i_visible_height; unsigned int i_sar_den; unsigned int i_visible_width; unsigned int i_sar_num; int orientation; } ;
typedef TYPE_5__ video_format_t ;
typedef unsigned int int64_t ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(unsigned *VAR_0, unsigned *VAR_1,
                                        const video_format_t *VAR_2,
                                        const vout_display_cfg_t *VAR_3)
{
    if (VAR_3->display.width != 0 && VAR_3->display.height != 0) {
        *VAR_0 = VAR_3->display.width;
        *VAR_1 = VAR_3->display.height;
    } else if (VAR_3->display.width != 0) {
        *VAR_0 = VAR_3->display.width;
        *VAR_1 = (int64_t)VAR_2->i_visible_height * VAR_2->i_sar_den * VAR_3->display.width * VAR_3->display.sar.num /
            VAR_2->i_visible_width / VAR_2->i_sar_num / VAR_3->display.sar.den;
    } else if (VAR_3->display.height != 0) {
        *VAR_0 = (int64_t)VAR_2->i_visible_width * VAR_2->i_sar_num * VAR_3->display.height * VAR_3->display.sar.den /
            VAR_2->i_visible_height / VAR_2->i_sar_den / VAR_3->display.sar.num;
        *VAR_1 = VAR_3->display.height;
    } else if (VAR_2->i_sar_num >= VAR_2->i_sar_den) {
        *VAR_0 = (int64_t)VAR_2->i_visible_width * VAR_2->i_sar_num * VAR_3->display.sar.den / VAR_2->i_sar_den / VAR_3->display.sar.num;
        *VAR_1 = VAR_2->i_visible_height;
    } else {
        *VAR_0 = VAR_2->i_visible_width;
        *VAR_1 = (int64_t)VAR_2->i_visible_height * VAR_2->i_sar_den * VAR_3->display.sar.num / VAR_2->i_sar_num / VAR_3->display.sar.den;
    }

    *VAR_0 = *VAR_0 * VAR_3->zoom.num / VAR_3->zoom.den;
    *VAR_1 = *VAR_1 * VAR_3->zoom.num / VAR_3->zoom.den;

    if (FUNC_0(VAR_2->orientation)) {

        unsigned VAR_4 = *VAR_0;
        *VAR_0 = *VAR_1;
        *VAR_1 = VAR_4;
    }
}
