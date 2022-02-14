
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int lua_State ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 int VAR_0 ;
 float FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,float,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1,
                                      enum vlc_player_whence VAR_2)
{
    float VAR_3 = FUNC_0(VAR_1, 1);

    vlc_player_t *VAR_4 = FUNC_4(VAR_1);

    FUNC_1(VAR_4);
    FUNC_2(VAR_4, VAR_3, VAR_0, VAR_2);
    FUNC_3(VAR_4);

    return 0;
}
