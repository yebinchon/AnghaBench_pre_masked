
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_visible_height; unsigned int i_sar_den; unsigned int i_sar_num; unsigned int i_visible_width; } ;
typedef TYPE_1__ video_format_t ;
typedef unsigned int uint64_t ;



__attribute__((used)) static void FUNC_0(int *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3,
                                 const video_format_t *VAR_4,
                                 unsigned VAR_5, unsigned VAR_6)
{
    unsigned VAR_7 = (uint64_t)VAR_4->i_visible_height * VAR_5 * VAR_4->i_sar_den / VAR_6 / VAR_4->i_sar_num;
    unsigned VAR_8 = (uint64_t)VAR_4->i_visible_width * VAR_6 * VAR_4->i_sar_num / VAR_5 / VAR_4->i_sar_den;

    if (VAR_7 < VAR_4->i_visible_width) {
        *VAR_0 = (VAR_4->i_visible_width - VAR_7) / 2;
        *VAR_1 = 0;
        *VAR_2 = *VAR_0 + VAR_7;
        *VAR_3 = *VAR_1 + VAR_4->i_visible_height;
    } else {
        *VAR_0 = 0;
        *VAR_1 = (VAR_4->i_visible_height - VAR_8) / 2;
        *VAR_2 = *VAR_0 + VAR_4->i_visible_width;
        *VAR_3 = *VAR_1 + VAR_8;
    }
}
