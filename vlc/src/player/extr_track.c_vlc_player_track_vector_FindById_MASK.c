
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; struct vlc_player_track_priv** data; } ;
typedef TYPE_2__ vlc_player_track_vector ;
typedef int vlc_es_id_t ;
struct TYPE_4__ {int * es_id; } ;
struct vlc_player_track_priv {TYPE_1__ t; } ;



struct vlc_player_track_priv *
FUNC_0(vlc_player_track_vector *VAR_0, vlc_es_id_t *VAR_1,
                                 size_t *VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < VAR_0->size; ++VAR_3)
    {
        struct vlc_player_track_priv *VAR_4 = VAR_0->data[VAR_3];
        if (VAR_4->t.es_id == VAR_1)
        {
            if (VAR_2)
                *VAR_2 = VAR_3;
            return VAR_4;
        }
    }
    return ((void*)0);
}
