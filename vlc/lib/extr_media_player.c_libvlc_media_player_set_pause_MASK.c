
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6( libvlc_media_player_t *VAR_0, int VAR_1 )
{
    vlc_player_t *VAR_2 = VAR_0->player;
    FUNC_1(VAR_2);

    if (VAR_1)
    {
        if (FUNC_0(VAR_2))
            FUNC_2(VAR_2);
        else
            FUNC_4(VAR_2);
    }
    else
    {
        FUNC_3(VAR_2);
    }

    FUNC_5(VAR_2);
}
