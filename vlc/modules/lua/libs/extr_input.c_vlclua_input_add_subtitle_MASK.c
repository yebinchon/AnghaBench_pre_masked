
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *,int ,char const*,int,int,int) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1, bool VAR_2)
{
    vlc_player_t *VAR_3 = FUNC_8(VAR_1);

    if (!FUNC_4(VAR_1, 1))
        return FUNC_2( VAR_1, "vlc.player.add_subtitle() usage: (path, autoselect=false)" );

    bool VAR_4 = 0;
    if (FUNC_3(VAR_1) >= 2)
        VAR_4 = FUNC_5(VAR_1, 2);

    const char *VAR_5 = FUNC_1(VAR_1, 1);
    char *VAR_6;
    if (VAR_2)
        VAR_6 = FUNC_6(VAR_5, ((void*)0));

    const char *VAR_7 = VAR_2 ? VAR_6 : VAR_5;
    FUNC_7(VAR_3, VAR_0, VAR_7, VAR_4, 1, 0);
    if (VAR_2)
        FUNC_0(VAR_6);

    return 1;
}
