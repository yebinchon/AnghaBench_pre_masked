
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int player; int player_listener; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;

bool
FUNC_7(vlc_playlist_t *VAR_3, vlc_object_t *VAR_4)
{
    VAR_3->player = FUNC_4(VAR_4, VAR_0,
                                      &VAR_2, VAR_3);
    if (FUNC_0(!VAR_3->player))
        return 0;

    FUNC_3(VAR_3->player);

    FUNC_6(VAR_3);
    VAR_3->player_listener = FUNC_1(VAR_3->player,
                                                       &VAR_1,
                                                       VAR_3);
    FUNC_5(VAR_3->player);
    if (FUNC_0(!VAR_3->player_listener))
    {
        FUNC_2(VAR_3->player);
        return 0;
    }
    return 1;
}
