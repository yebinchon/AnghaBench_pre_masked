
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
    vlc_player_t *VAR_1 = FUNC_5(VAR_0);

    FUNC_3(VAR_1);
    vlc_tick_t VAR_2 = FUNC_2(VAR_1);
    FUNC_4(VAR_1);

    FUNC_1(VAR_0, FUNC_0(VAR_2));
    return 1;
}
