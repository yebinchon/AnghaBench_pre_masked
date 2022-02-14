
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track {char* name; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct vlc_player_track* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,char const*,char const*) ;

void
FUNC_6(vlc_player_t *VAR_0, vlc_es_id_t *VAR_1, bool VAR_2)
{
    enum es_format_category_e VAR_3 = FUNC_3(VAR_1);
    const struct vlc_player_track *VAR_4 = FUNC_4(VAR_0, VAR_1);
    if (!VAR_4 && VAR_2)
        return;

    const char *VAR_5 = FUNC_2(VAR_3);
    FUNC_1(VAR_5);
    const char *VAR_6 = VAR_2 ? VAR_4->name : FUNC_0("N/A");
    FUNC_5(VAR_0, FUNC_0("%s track: %s"), VAR_5, VAR_6);
}
