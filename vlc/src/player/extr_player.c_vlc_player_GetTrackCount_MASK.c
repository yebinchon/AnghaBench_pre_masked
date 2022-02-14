
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; } ;
typedef TYPE_1__ vlc_player_track_vector ;
typedef int vlc_player_t ;
struct vlc_player_input {int dummy; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 struct vlc_player_input* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct vlc_player_input*,int) ;

size_t
FUNC_2(vlc_player_t *VAR_0, enum es_format_category_e VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_0);

    if (!VAR_2)
        return 0;
    vlc_player_track_vector *VAR_3 = FUNC_1(VAR_2, VAR_1);
    if (!VAR_3)
        return 0;
    return VAR_3->size;
}
