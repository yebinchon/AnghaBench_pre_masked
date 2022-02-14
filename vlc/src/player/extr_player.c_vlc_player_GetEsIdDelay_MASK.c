
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track_priv {int delay; } ;
struct vlc_player_input {int dummy; } ;


 int VAR_0 ;
 struct vlc_player_input* FUNC_0 (int *) ;
 struct vlc_player_track_priv* FUNC_1 (struct vlc_player_input*,int *,int *) ;

vlc_tick_t
FUNC_2(vlc_player_t *VAR_1, vlc_es_id_t *VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_0(VAR_1);
    if (!VAR_3)
        return 0;

    struct vlc_player_track_priv *VAR_4 =
        FUNC_1(VAR_3, VAR_2, ((void*)0));
    return VAR_4 ? VAR_4->delay : VAR_0;
}
