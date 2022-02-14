
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_sar_num; int i_sar_den; scalar_t__ i_x_offset; scalar_t__ i_y_offset; scalar_t__ i_visible_width; scalar_t__ i_visible_height; } ;
typedef TYPE_1__ video_format_t ;



__attribute__((used)) static bool FUNC_0(video_format_t *VAR_0,
                                     const video_format_t *VAR_1)
{
    return VAR_0->i_sar_num * VAR_1->i_sar_den == VAR_0->i_sar_den * VAR_1->i_sar_num &&
           VAR_0->i_x_offset == VAR_1->i_x_offset &&
           VAR_0->i_y_offset == VAR_1->i_y_offset &&
           VAR_0->i_visible_width == VAR_1->i_visible_width &&
           VAR_0->i_visible_height == VAR_1->i_visible_height;
}
