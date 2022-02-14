
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_awh; } ;
typedef TYPE_1__ vout_display_sys_t ;
struct TYPE_8__ {unsigned int i_sar_num; unsigned int i_sar_den; unsigned int i_width; unsigned int i_height; int i_visible_height; int i_visible_width; } ;
typedef TYPE_2__ video_format_t ;


 int FUNC_0 (int ,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(vout_display_sys_t *VAR_0, video_format_t *VAR_1)
{
    unsigned int VAR_2, VAR_3;
    unsigned int VAR_4 = 1, VAR_5 = 1;
    video_format_t VAR_6;

    FUNC_1(&VAR_6, VAR_1);

    if (VAR_6.i_sar_num != 0 && VAR_6.i_sar_den != 0) {
        VAR_4 = VAR_6.i_sar_num;
        VAR_5 = VAR_6.i_sar_den;
    }
    VAR_2 = VAR_6.i_width;
    VAR_3 = VAR_6.i_height;

    FUNC_0(VAR_0->p_awh, VAR_2, VAR_3,
                                  VAR_6.i_visible_width,
                                  VAR_6.i_visible_height,
                                  VAR_4, VAR_5);
    return 0;
}
