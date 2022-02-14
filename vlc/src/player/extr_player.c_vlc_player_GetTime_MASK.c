
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int dummy; } ;


 int VAR_0 ;
 struct vlc_player_input* FUNC_0 (int *) ;
 int FUNC_1 (struct vlc_player_input*) ;

vlc_tick_t
FUNC_2(vlc_player_t *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_1);

    if (!VAR_2)
        return VAR_0;

    return FUNC_1(VAR_2);
}
