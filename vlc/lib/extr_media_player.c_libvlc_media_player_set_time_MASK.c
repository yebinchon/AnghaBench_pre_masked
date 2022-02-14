
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_t ;
typedef int libvlc_time_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef enum vlc_player_seek_speed { ____Placeholder_vlc_player_seek_speed } vlc_player_seek_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4( libvlc_media_player_t *VAR_3,
                                   libvlc_time_t VAR_4, bool VAR_5 )
{
    vlc_tick_t VAR_6 = FUNC_0(VAR_4);

    vlc_player_t *VAR_7 = VAR_3->player;
    FUNC_1(VAR_7);

    enum vlc_player_seek_speed VAR_8 = VAR_5 ? VAR_0
                                              : VAR_1;
    FUNC_2(VAR_7, VAR_6, VAR_8, VAR_2);

    FUNC_3(VAR_7);


    return 0;
}
