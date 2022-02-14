
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__** data; } ;
typedef TYPE_2__ vlc_player_track_vector ;
typedef int vlc_player_t ;
struct vlc_player_track {int dummy; } ;
struct vlc_player_input {int dummy; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_4__ {struct vlc_player_track const t; } ;


 int FUNC_0 (int) ;
 struct vlc_player_input* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct vlc_player_input*,int) ;

const struct vlc_player_track *
FUNC_3(vlc_player_t *VAR_0, enum es_format_category_e VAR_1,
                      size_t VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_1(VAR_0);

    if (!VAR_3)
        return ((void*)0);
    vlc_player_track_vector *VAR_4 = FUNC_2(VAR_3, VAR_1);
    if (!VAR_4)
        return ((void*)0);
    FUNC_0(VAR_2 < VAR_4->size);
    return &VAR_4->data[VAR_2]->t;
}
