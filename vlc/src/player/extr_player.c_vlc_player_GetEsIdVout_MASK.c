
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track_priv {int vout_order; int * vout; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;


 struct vlc_player_track_priv* FUNC_0 (int *,int *) ;

vout_thread_t *
FUNC_1(vlc_player_t *VAR_0, vlc_es_id_t *VAR_1,
                       enum vlc_vout_order *VAR_2)
{
    struct vlc_player_track_priv *VAR_3 =
        FUNC_0(VAR_0, VAR_1);
    if (VAR_3)
    {
        if (VAR_2)
            *VAR_2 = VAR_3->vout_order;
        return VAR_3->vout;
    }
    return ((void*)0);
}
