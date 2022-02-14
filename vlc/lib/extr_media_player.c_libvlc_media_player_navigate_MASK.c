
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int map ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;
typedef enum vlc_player_nav { ____Placeholder_vlc_player_nav } vlc_player_nav ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *) ;

void FUNC_3( libvlc_media_player_t* VAR_0,
                                   unsigned VAR_1 )
{
    static const enum vlc_player_nav VAR_2[] =
    {
        133, 128, 132,
        131, 129, 130,
    };

    if( VAR_1 >= sizeof(VAR_2) / sizeof(VAR_2[0]) )
      return;

    vlc_player_t *VAR_3 = VAR_0->player;
    FUNC_0(VAR_3);

    FUNC_1(VAR_3, VAR_2[VAR_1]);

    FUNC_2(VAR_3);
}
