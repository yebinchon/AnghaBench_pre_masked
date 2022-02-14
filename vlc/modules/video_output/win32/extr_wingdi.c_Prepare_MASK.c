
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int i_pic_pitch; int p_pic_buffer; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int * vlc_tick_t ;
typedef int subpicture_t ;
typedef int picture_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(vout_display_t *VAR_0, picture_t *VAR_1, subpicture_t *VAR_2,
                    vlc_tick_t VAR_3)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    vout_display_sys_t *VAR_4 = VAR_0->sys;
    picture_t VAR_5 = *VAR_1;
    FUNC_2(&VAR_5, VAR_4->p_pic_buffer, VAR_4->i_pic_pitch);
    FUNC_1(&VAR_5, VAR_1);
}
