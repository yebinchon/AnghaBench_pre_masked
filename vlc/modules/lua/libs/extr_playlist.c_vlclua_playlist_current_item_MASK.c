
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    vlc_playlist_t *VAR_1 = FUNC_6(VAR_0);

    FUNC_4(VAR_1);
    ssize_t VAR_2 = FUNC_3(VAR_1);
    vlc_playlist_item_t *VAR_3 = VAR_2 != -1 ? FUNC_2(VAR_1, VAR_2)
                                            : ((void*)0);
    if (VAR_3)
        FUNC_1(VAR_0, VAR_3);
    else
        FUNC_0(VAR_0);
    FUNC_5(VAR_1);

    return 1;
}
