
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int uint64_t ;
typedef int ssize_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_2)
{
    uint64_t VAR_3 = FUNC_0(VAR_2, 1);
    vlc_playlist_t *VAR_4 = FUNC_5(VAR_2);

    int VAR_5;

    FUNC_3(VAR_4);
    ssize_t VAR_6 = FUNC_2(VAR_4, VAR_3);
    if (VAR_6 == -1)
        VAR_5 = VAR_0;
    else
    {
        FUNC_1(VAR_4, VAR_6);
        VAR_5 = VAR_1;
    }
    FUNC_4(VAR_4);

    return FUNC_6(VAR_2, VAR_5);
}
