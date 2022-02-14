
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,float) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1)
{
    vlc_playlist_t *VAR_2 = FUNC_3(VAR_1);
    vlc_player_t *VAR_3 = FUNC_2(VAR_2);

    int VAR_4 = FUNC_0(VAR_1, 1);
    if (VAR_4 < 0)
        VAR_4 = 0;

    float VAR_5 = VAR_4 / (float) VAR_0;
    int VAR_6 = FUNC_1(VAR_3, VAR_5);
    return FUNC_4(VAR_1, VAR_6);
}
