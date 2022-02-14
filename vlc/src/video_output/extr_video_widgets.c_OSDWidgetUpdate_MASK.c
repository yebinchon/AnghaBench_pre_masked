
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__ const* vlc_tick_t ;
struct TYPE_14__ {int i_width; int i_sar_num; int i_sar_den; int i_visible_width; int i_x_offset; int i_visible_height; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_13__ {TYPE_5__* p_sys; } ;
struct TYPE_15__ {int i_original_picture_width; int p_region; int i_original_picture_height; TYPE_1__ updater; } ;
typedef TYPE_4__ subpicture_t ;
struct TYPE_16__ {scalar_t__ type; int position; } ;
typedef TYPE_5__ osdwidget_spu_updater_sys_t ;


 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_3(subpicture_t *VAR_2,
                          const video_format_t *VAR_3,
                          const video_format_t *VAR_4,
                          vlc_tick_t VAR_5)
{
    osdwidget_spu_updater_sys_t *VAR_6 = VAR_2->updater.p_sys;
    FUNC_2(VAR_3); FUNC_2(VAR_5);

    video_format_t VAR_7 = *VAR_4;
    VAR_7.i_width = VAR_7.i_width * VAR_7.i_sar_num / VAR_7.i_sar_den;
    VAR_7.i_visible_width = VAR_7.i_visible_width * VAR_7.i_sar_num / VAR_7.i_sar_den;
    VAR_7.i_x_offset = VAR_7.i_x_offset * VAR_7.i_sar_num / VAR_7.i_sar_den;
    VAR_7.i_sar_num = 1;
    VAR_7.i_sar_den = 1;

    VAR_2->i_original_picture_width = VAR_7.i_visible_width;
    VAR_2->i_original_picture_height = VAR_7.i_visible_height;
    if (VAR_6->type == VAR_0 || VAR_6->type == VAR_1)
        VAR_2->p_region = FUNC_1(VAR_6->type, VAR_6->position, &VAR_7);
    else
        VAR_2->p_region = FUNC_0(VAR_6->type, &VAR_7);
}
