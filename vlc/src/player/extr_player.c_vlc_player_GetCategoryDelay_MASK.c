
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int * cat_delays; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int VAR_1 ;
 struct vlc_player_input* FUNC_0 (int *) ;

vlc_tick_t
FUNC_1(vlc_player_t *VAR_2, enum es_format_category_e VAR_3)
{
    struct vlc_player_input *VAR_4 = FUNC_0(VAR_2);
    if (!VAR_4)
        return 0;

    if (VAR_3 != VAR_0 && VAR_3 != VAR_1)
        return 0;

    return VAR_4->cat_delays[VAR_3];
}
