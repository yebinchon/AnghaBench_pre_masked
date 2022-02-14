
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_5__ {size_t size; struct vlc_player_track_priv** data; } ;
typedef TYPE_2__ vlc_player_track_vector ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_4__ {int * es_id; } ;
struct vlc_player_track_priv {TYPE_1__ t; int * vout; } ;
struct vlc_player_input {int dummy; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 size_t FUNC_0 (int const*) ;



 struct vlc_player_input* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct vlc_player_input*,int) ;

vlc_es_id_t *
FUNC_3(vlc_player_t *VAR_0, vout_thread_t *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_1(VAR_0);

    if (!VAR_2)
        return ((void*)0);

    static const enum es_format_category_e VAR_3[] = {
        128, 129, 130
    };
    for (size_t VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); ++VAR_4)
    {
        enum es_format_category_e VAR_5 = VAR_3[VAR_4];
        vlc_player_track_vector *VAR_6 =
            FUNC_2(VAR_2, VAR_5);
        for (size_t VAR_7 = 0; VAR_7 < VAR_6->size; ++VAR_7)
        {
            struct vlc_player_track_priv *VAR_8 = VAR_6->data[VAR_7];
            if (VAR_8->vout == VAR_1)
                return VAR_8->t.es_id;
        }
    }
    return ((void*)0);
}
