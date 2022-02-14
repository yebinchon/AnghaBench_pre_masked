
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_track {scalar_t__ selected; } ;
typedef int lua_State ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 struct vlc_player_track* FUNC_0 (int *,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct vlc_player_track const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vlc_player_track const*) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1,
                                       enum es_format_category_e VAR_2,
                                       int VAR_3)
{
    vlc_player_t *VAR_4 = FUNC_5(VAR_1);

    FUNC_1(VAR_4);

    const struct vlc_player_track *VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
    if (VAR_5) {
        if (VAR_5->selected)
            FUNC_4(VAR_4, VAR_5);
        else
            FUNC_2(VAR_4, VAR_5, VAR_0);
    }

    FUNC_3(VAR_4);

    return 0;
}
