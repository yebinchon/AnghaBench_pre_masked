
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_width; int i_height; scalar_t__ i_sar_num; scalar_t__ i_sar_den; } ;
typedef TYPE_1__ video_format_t ;



__attribute__((used)) static bool FUNC_0(const video_format_t *VAR_0)
{
    if (VAR_0->i_width == 0 || VAR_0->i_width > 8192 ||
        VAR_0->i_height == 0 || VAR_0->i_height > 8192)
        return 0;
    if (VAR_0->i_sar_num <= 0 || VAR_0->i_sar_den <= 0)
        return 0;
    return 1;
}
