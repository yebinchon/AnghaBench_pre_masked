
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int num; unsigned int den; } ;
struct TYPE_6__ {unsigned int num; unsigned int den; } ;
struct TYPE_7__ {unsigned int width; unsigned int height; TYPE_1__ sar; } ;
struct TYPE_9__ {TYPE_3__ zoom; TYPE_2__ display; } ;
typedef TYPE_4__ vout_display_cfg_t ;
typedef int video_orientation_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned *restrict VAR_0,
                                    unsigned *restrict VAR_1,
                                    unsigned VAR_2, unsigned VAR_3,
                                    unsigned VAR_4, unsigned VAR_5,
                                    video_orientation_t VAR_6,
                                    const vout_display_cfg_t *restrict VAR_7)
{
    *VAR_0 = VAR_7->display.width;
    *VAR_1 = VAR_7->display.height;


    if (*VAR_0 != 0 && *VAR_1 != 0)
        return;


    FUNC_1(VAR_4 > 0 && VAR_5 > 0);
    VAR_2 = (VAR_2 * VAR_4) / VAR_5;


    if (FUNC_0(VAR_6)) {
        unsigned VAR_8 = VAR_2;

        VAR_2 = VAR_3;
        VAR_3 = VAR_8;
    }

    if (VAR_7->display.sar.num > 0 && VAR_7->display.sar.den > 0)
        VAR_2 = (VAR_2 * VAR_7->display.sar.den) / VAR_7->display.sar.num;


    if (*VAR_0 != 0) {
        *VAR_1 = (*VAR_0 * VAR_3) / VAR_2;
        return;
    }


    if (*VAR_1 != 0) {
        *VAR_0 = (*VAR_1 * VAR_2) / VAR_3;
        return;
    }


    *VAR_0 = (VAR_2 * VAR_7->zoom.num) / VAR_7->zoom.den;
    *VAR_1 = (VAR_3 * VAR_7->zoom.num) / VAR_7->zoom.den;
}
