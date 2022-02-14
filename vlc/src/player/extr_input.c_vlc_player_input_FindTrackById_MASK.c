
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_track_vector ;
typedef int vlc_es_id_t ;
struct vlc_player_track_priv {int dummy; } ;
struct vlc_player_input {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct vlc_player_input*,int ) ;
 struct vlc_player_track_priv* FUNC_2 (int *,int *,size_t*) ;

struct vlc_player_track_priv *
FUNC_3(struct vlc_player_input *VAR_0, vlc_es_id_t *VAR_1,
                               size_t *VAR_2)
{
    vlc_player_track_vector *VAR_3 =
        FUNC_1(VAR_0, FUNC_0(VAR_1));
    return VAR_3 ? FUNC_2(VAR_3, VAR_1, VAR_2) : ((void*)0);
}
