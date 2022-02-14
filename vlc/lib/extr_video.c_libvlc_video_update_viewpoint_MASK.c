
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fov; int roll; int pitch; int yaw; } ;
typedef TYPE_1__ vlc_viewpoint_t ;
struct TYPE_8__ {int f_field_of_view; int f_roll; int f_pitch; int f_yaw; } ;
typedef TYPE_2__ libvlc_video_viewpoint_t ;
struct TYPE_9__ {int player; } ;
typedef TYPE_3__ libvlc_media_player_t ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;

int FUNC_1( libvlc_media_player_t *VAR_2,
                                   const libvlc_video_viewpoint_t *VAR_3,
                                   bool VAR_4 )
{
    vlc_viewpoint_t VAR_5 = {
        .yaw = VAR_3->f_yaw,
        .pitch = VAR_3->f_pitch,
        .roll = VAR_3->f_roll,
        .fov = VAR_3->f_field_of_view,
    };

    enum vlc_player_whence VAR_6 = VAR_4 ? VAR_0
                                               : VAR_1;
    FUNC_0(VAR_2->player, &VAR_5, VAR_6);


    return 0;
}
