
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int lua_State ;


 float VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (float) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (int *,int,float*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_2)
{
    vlc_playlist_t *VAR_3 = FUNC_5(VAR_2);
    vlc_player_t *VAR_4 = FUNC_4(VAR_3);

    float VAR_5;
    int VAR_6 = FUNC_1(VAR_2, 1, 1);
    int VAR_7 = FUNC_3(VAR_4, VAR_6, &VAR_5);

    long VAR_8 = VAR_7 == VAR_1 ? FUNC_0(VAR_5 * VAR_0)
                                       : 0;
    FUNC_2(VAR_2, VAR_8);
    return 1;
}
