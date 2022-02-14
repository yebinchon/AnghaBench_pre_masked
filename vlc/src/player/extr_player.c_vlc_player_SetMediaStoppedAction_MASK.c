
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int media_stopped_action; } ;
typedef TYPE_1__ vlc_player_t ;
typedef enum vlc_player_media_stopped_action { ____Placeholder_vlc_player_media_stopped_action } vlc_player_media_stopped_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(vlc_player_t *VAR_2,
                                 enum vlc_player_media_stopped_action VAR_3)
{
    FUNC_2(VAR_2);
    VAR_2->media_stopped_action = VAR_3;
    FUNC_0(VAR_2, "play-and-pause",
                VAR_3 == VAR_0);
    FUNC_1(VAR_2, VAR_1, VAR_3);
}
