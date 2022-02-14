
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int lua_State ;


 int FUNC_0 (int *,size_t,int ) ;
 int FUNC_1 (int *,int,size_t) ;
 int FUNC_2 (int *,int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_0)
{
    vlc_playlist_t *VAR_1 = FUNC_7(VAR_0);

    FUNC_5(VAR_1);

    size_t VAR_2 = FUNC_3(VAR_1);
    FUNC_0(VAR_0, VAR_2, 0);

    for (size_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    {
        FUNC_2(VAR_0, FUNC_4(VAR_1, VAR_3));
        FUNC_1(VAR_0, -2, VAR_3 + 1);
    }

    FUNC_6(VAR_1);

    return 1;
}
