
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int (*) (int *)) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, vlc_object_t *VAR_1,
                                  int (*VAR_2)(lua_State *))
{
    vlc_object_t **VAR_3 =
        (vlc_object_t **)FUNC_1(VAR_0, sizeof (vlc_object_t *));

    *VAR_3 = VAR_1;

    if (FUNC_0(VAR_0, "vlc_object"))
    {

        FUNC_3(VAR_0, "none of your business");
        FUNC_4(VAR_0, -2, "__metatable");

        if (VAR_2 != ((void*)0))
        {
            FUNC_2(VAR_0, VAR_2);
            FUNC_4(VAR_0, -2, "__gc");
        }
    }
    FUNC_5(VAR_0, -2);
    return 1;
}
