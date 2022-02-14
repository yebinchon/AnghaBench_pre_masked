
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

void FUNC_5( libvlc_media_player_t *VAR_5, int VAR_6 )
{
    vlc_player_t *VAR_7 = VAR_5->player;
    FUNC_1(VAR_7);

    if (VAR_6 == 0)
        FUNC_3(VAR_7, 0);
    else if (VAR_6 > 0)
    {
        if (VAR_6 >= 1000)
        {
            bool VAR_8 = VAR_6 == VAR_3
                       || VAR_6 == VAR_1
                       || VAR_6 == VAR_4
                       || VAR_6 == VAR_0
                       || VAR_6 == VAR_2;
            if (!VAR_8)
            {
                FUNC_0("Invalid key action");
                return;
            }
        }
        FUNC_3(VAR_7, 1);
        FUNC_2(VAR_7, VAR_6);
    }
    else
    {
        FUNC_0("Invalid page number");
        return;
    }

    FUNC_4(VAR_7);
}
