
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
typedef int lua_State ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1,
                                       enum vlc_player_whence VAR_2)
{
    int VAR_3 = FUNC_1(VAR_1, 1);
    vlc_tick_t VAR_4 = FUNC_0(VAR_3);

    vlc_player_t *VAR_5 = FUNC_5(VAR_1);

    FUNC_2(VAR_5);
    FUNC_3(VAR_5, VAR_4, VAR_0, VAR_2);
    FUNC_4(VAR_5);

    return 0;
}
