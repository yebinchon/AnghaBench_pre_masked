
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int teletext_menu; scalar_t__ teletext_enabled; } ;


 int FUNC_0 (int ) ;
 struct vlc_player_input* FUNC_1 (int *) ;

bool
FUNC_2(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 && VAR_1->teletext_enabled)
    {
        FUNC_0(VAR_1->teletext_menu);
        return 1;
    }
    return 0;
}
