
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_sar_num; int i_sar_den; int i_visible_width; } ;
typedef TYPE_1__ video_format_t ;
typedef int int64_t ;



__attribute__((used)) static unsigned FUNC_0(const video_format_t *VAR_0)
{
    if (VAR_0->i_sar_num > 0 && VAR_0->i_sar_den > 0)
    {
        return (int64_t)VAR_0->i_sar_num *
               (int64_t)VAR_0->i_visible_width / VAR_0->i_sar_den;
    }
    else return VAR_0->i_visible_width;
}
