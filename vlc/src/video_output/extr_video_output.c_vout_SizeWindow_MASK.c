
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {TYPE_8__* p; } ;
typedef TYPE_7__ vout_thread_t ;
struct TYPE_15__ {unsigned int right; unsigned int left; unsigned int bottom; unsigned int top; } ;
struct TYPE_14__ {unsigned int width; unsigned int height; } ;
struct TYPE_13__ {unsigned int num; unsigned int den; } ;
struct TYPE_16__ {int mode; TYPE_4__ border; TYPE_3__ window; TYPE_2__ ratio; } ;
struct TYPE_12__ {unsigned int num; unsigned int den; } ;
struct TYPE_17__ {TYPE_5__ crop; TYPE_1__ dar; } ;
struct TYPE_19__ {int display_cfg; TYPE_6__ source; } ;
typedef TYPE_8__ vout_thread_sys_t ;
struct TYPE_20__ {unsigned int i_visible_width; unsigned int i_visible_height; unsigned int i_sar_num; int orientation; } ;
typedef TYPE_9__ video_format_t ;






 int FUNC_0 (unsigned int*,unsigned int*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (unsigned int*,unsigned int*,unsigned int,unsigned int,unsigned int,unsigned int,int ,int *) ;

__attribute__((used)) static void FUNC_2(vout_thread_t *VAR_0,
                            const video_format_t *VAR_1,
                            unsigned *restrict VAR_2,
                            unsigned *restrict VAR_3)
{
    vout_thread_sys_t *VAR_4 = VAR_0->p;
    unsigned VAR_5 = VAR_1->i_visible_width;
    unsigned VAR_6 = VAR_1->i_visible_height;
    unsigned VAR_7 = VAR_1->i_sar_num;
    unsigned VAR_8 = VAR_1->i_sar_num;

    switch (VAR_4->source.crop.mode) {
        case 130:
            if (VAR_4->source.dar.num > 0 && VAR_4->source.dar.den > 0) {
                unsigned VAR_9 = VAR_4->source.dar.num * VAR_6;
                unsigned VAR_10 = VAR_4->source.dar.den * VAR_5;

                FUNC_0(&VAR_7, &VAR_8, VAR_9, VAR_10, 0);
            }
            break;

        case 129: {
            unsigned VAR_11 = VAR_4->source.crop.ratio.num;
            unsigned VAR_12 = VAR_4->source.crop.ratio.den;

            if (VAR_5 * VAR_12 > VAR_6 * VAR_11)
                VAR_5 = VAR_6 * VAR_11 / VAR_12;
            else
                VAR_6 = VAR_5 * VAR_12 / VAR_11;
            break;
        }

        case 128:
            VAR_5 = VAR_4->source.crop.window.width;
            VAR_6 = VAR_4->source.crop.window.height;
            break;

        case 131:
            VAR_5 = VAR_4->source.crop.border.right - VAR_4->source.crop.border.left;
            VAR_6 = VAR_4->source.crop.border.bottom - VAR_4->source.crop.border.top;
            break;
    }


    FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8,
                            VAR_1->orientation,
                            &VAR_4->display_cfg);
}
