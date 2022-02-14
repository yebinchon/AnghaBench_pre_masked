
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( libvlc_media_player_t *VAR_1 )
{
    vlc_player_t *VAR_2 = VAR_1->player;
    FUNC_1(VAR_2);

    int VAR_3 = FUNC_0(VAR_1->player, VAR_0);

    FUNC_2(VAR_2);
    return VAR_3;
}
