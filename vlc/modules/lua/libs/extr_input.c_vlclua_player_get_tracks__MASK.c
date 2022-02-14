
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_track {int selected; int name; int es_id; } ;
typedef int lua_State ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int FUNC_0 (int *,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,size_t) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int ) ;
 struct vlc_player_track* FUNC_8 (int *,int,size_t) ;
 size_t FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_0,
                                     enum es_format_category_e VAR_1)
{
    vlc_player_t *VAR_2 = FUNC_12(VAR_0);

    FUNC_10(VAR_2);

    size_t VAR_3 = FUNC_9(VAR_2, VAR_1);
    FUNC_0(VAR_0, VAR_3, 0);

    for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
        const struct vlc_player_track *VAR_5 =
                FUNC_8(VAR_2, VAR_1, VAR_4);
        if (!VAR_5) {
            continue;
        }

        FUNC_1(VAR_0);

        FUNC_3(VAR_0, FUNC_7(VAR_5->es_id));
        FUNC_6(VAR_0, -2, "id");

        FUNC_4(VAR_0, VAR_5->name);
        FUNC_6(VAR_0, -2, "name");

        FUNC_2(VAR_0, VAR_5->selected);
        FUNC_6(VAR_0, -2, "selected");

        FUNC_5(VAR_0, -2, VAR_4 + 1);
    }

    FUNC_11(VAR_2);

    return 1;
}
