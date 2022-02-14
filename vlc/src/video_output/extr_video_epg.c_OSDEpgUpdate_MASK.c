
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__ const* vlc_tick_t ;
struct TYPE_11__ {int i_width; int i_sar_num; int i_sar_den; int i_visible_width; int i_x_offset; int i_visible_height; int i_y_offset; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_10__ {int * p_sys; } ;
struct TYPE_12__ {int i_original_picture_width; int p_region; int i_original_picture_height; TYPE_1__ updater; } ;
typedef TYPE_4__ subpicture_t ;
typedef int epg_spu_updater_sys_t ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int *,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(subpicture_t *VAR_0,
                         const video_format_t *VAR_1,
                         const video_format_t *VAR_2,
                         vlc_tick_t VAR_3)
{
    epg_spu_updater_sys_t *VAR_4 = VAR_0->updater.p_sys;
    FUNC_0(VAR_1); FUNC_0(VAR_3);

    video_format_t VAR_5 = *VAR_2;
    VAR_5.i_width = VAR_5.i_width * VAR_5.i_sar_num / VAR_5.i_sar_den;
    VAR_5.i_visible_width = VAR_5.i_visible_width * VAR_5.i_sar_num / VAR_5.i_sar_den;
    VAR_5.i_x_offset = VAR_5.i_x_offset * VAR_5.i_sar_num / VAR_5.i_sar_den;

    VAR_0->i_original_picture_width = VAR_5.i_visible_width;
    VAR_0->i_original_picture_height = VAR_5.i_visible_height;

    VAR_0->p_region = FUNC_1(VAR_4,
                                        VAR_5.i_x_offset,
                                        VAR_5.i_y_offset,
                                        VAR_5.i_visible_width,
                                        VAR_5.i_visible_height);
}
