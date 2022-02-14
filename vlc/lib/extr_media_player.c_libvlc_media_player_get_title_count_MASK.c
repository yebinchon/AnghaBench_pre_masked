
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_title_list ;
typedef int vlc_player_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4( libvlc_media_player_t *VAR_0 )
{
    vlc_player_t *VAR_1 = VAR_0->player;
    FUNC_1(VAR_1);

    vlc_player_title_list *VAR_2 = FUNC_0(VAR_1);
    int VAR_3 = VAR_2 ? (int) FUNC_3(VAR_2) : -1;

    FUNC_2(VAR_1);
    return VAR_3;
}
