
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track {int dummy; } ;
struct vlc_player_track_priv {struct vlc_player_track const t; } ;


 struct vlc_player_track_priv* FUNC_0 (int *,int *) ;

const struct vlc_player_track *
FUNC_1(vlc_player_t *VAR_0, vlc_es_id_t *VAR_1)
{
    struct vlc_player_track_priv *VAR_2 =
        FUNC_0(VAR_0, VAR_1);
    return VAR_2 ? &VAR_2->t : ((void*)0);
}
