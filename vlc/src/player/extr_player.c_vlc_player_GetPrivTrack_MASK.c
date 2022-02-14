
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_track_vector ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track_priv {int dummy; } ;
struct vlc_player_input {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vlc_player_input* FUNC_1 (int *) ;
 int * FUNC_2 (struct vlc_player_input*,int ) ;
 struct vlc_player_track_priv* FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static struct vlc_player_track_priv *
FUNC_4(vlc_player_t *VAR_0, vlc_es_id_t *VAR_1)

{
    struct vlc_player_input *VAR_2 = FUNC_1(VAR_0);

    if (!VAR_2)
        return ((void*)0);
    vlc_player_track_vector *VAR_3 =
        FUNC_2(VAR_2, FUNC_0(VAR_1));
    if (!VAR_3)
        return ((void*)0);
    return FUNC_3(VAR_3, VAR_1, ((void*)0));
}
