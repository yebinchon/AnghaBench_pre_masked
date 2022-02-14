
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_title {size_t chapter_count; } ;
typedef int lua_State ;


 int FUNC_0 (int *,size_t) ;
 struct vlc_player_title* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
    vlc_player_t *VAR_1 = FUNC_4(VAR_0);

    FUNC_2(VAR_1);
    const struct vlc_player_title *VAR_2 =
        FUNC_1(VAR_1);

    size_t VAR_3 = VAR_2 ? VAR_2->chapter_count : 0;
    FUNC_3(VAR_1);

    FUNC_0(VAR_0, VAR_3);
    return 1;
}
