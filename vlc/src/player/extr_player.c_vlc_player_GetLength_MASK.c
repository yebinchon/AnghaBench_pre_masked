
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int length; } ;


 int VAR_0 ;
 struct vlc_player_input* FUNC_0 (int *) ;

vlc_tick_t
FUNC_1(vlc_player_t *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_1);
    return VAR_2 ? VAR_2->length : VAR_0;
}
