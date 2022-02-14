
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_display_height; int i_display_width; int b_sub_invalid; TYPE_2__* p_window; TYPE_1__* p_sub_window; } ;
typedef TYPE_3__ vout_display_sys_t ;
struct TYPE_10__ {int i_visible_width; int i_visible_height; int i_width; int i_height; int i_sar_num; int i_sar_den; scalar_t__ i_y_offset; scalar_t__ i_x_offset; } ;
typedef TYPE_4__ video_format_t ;
struct TYPE_8__ {int i_angle; int fmt; } ;
struct TYPE_7__ {TYPE_4__ fmt; } ;


 int FUNC_0 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_1(vout_display_sys_t *VAR_0)
{
    video_format_t *VAR_1;
    video_format_t VAR_2;
    int VAR_3, VAR_4;
    int VAR_5, VAR_6;
    int VAR_7, VAR_8;
    double VAR_9;

    if (!VAR_0->p_sub_window)
        return;
    VAR_1 = &VAR_0->p_sub_window->fmt;

    FUNC_0(&VAR_2, &VAR_0->p_window->fmt);

    if (VAR_2.i_visible_width == 0 || VAR_2.i_visible_height == 0) {
        VAR_5 = VAR_2.i_width;
        VAR_6 = VAR_2.i_height;
    } else {
        VAR_5 = VAR_2.i_visible_width;
        VAR_6 = VAR_2.i_visible_height;
    }

    if (VAR_2.i_sar_num > 0 && VAR_2.i_sar_den > 0) {
        if (VAR_2.i_sar_num >= VAR_2.i_sar_den)
            VAR_5 = VAR_5 * VAR_2.i_sar_num / VAR_2.i_sar_den;
        else
            VAR_6 = VAR_6 * VAR_2.i_sar_den / VAR_2.i_sar_num;
    }

    if (VAR_0->p_window->i_angle == 90 || VAR_0->p_window->i_angle == 180) {
        VAR_7 = VAR_0->i_display_height;
        VAR_8 = VAR_0->i_display_width;
        VAR_9 = VAR_6 / (double) VAR_5;
    } else {
        VAR_7 = VAR_0->i_display_width;
        VAR_8 = VAR_0->i_display_height;
        VAR_9 = VAR_5 / (double) VAR_6;
    }

    if (VAR_7 / VAR_9 < VAR_8) {
        VAR_3 = VAR_7;
        VAR_4 = VAR_7 / VAR_9;
    } else {
        VAR_3 = VAR_8 * VAR_9;
        VAR_4 = VAR_8;
    }


    if (VAR_3 * VAR_4 < VAR_5 * VAR_6) {
        VAR_3 = VAR_5;
        VAR_4 = VAR_6;
    }

    VAR_1->i_width =
    VAR_1->i_visible_width = VAR_3;
    VAR_1->i_height =
    VAR_1->i_visible_height = VAR_4;
    VAR_1->i_x_offset = 0;
    VAR_1->i_y_offset = 0;
    VAR_1->i_sar_num = 1;
    VAR_1->i_sar_den = 1;
    VAR_0->b_sub_invalid = 1;
}
