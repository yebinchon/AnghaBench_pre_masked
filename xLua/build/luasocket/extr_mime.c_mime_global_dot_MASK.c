
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int luaL_Buffer ;


 size_t FUNC_0 (int ,size_t,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,int *,size_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0)
{
    size_t VAR_1 = 0, VAR_2 = (size_t) FUNC_2(VAR_0, 1);
    const char *VAR_3 = FUNC_3(VAR_0, 2, ((void*)0), &VAR_1);
    const char *VAR_4 = VAR_3 + VAR_1;
    luaL_Buffer VAR_5;

    if (!VAR_3) {
        FUNC_5(VAR_0);
        FUNC_6(VAR_0, 2);
        return 2;
    }

    FUNC_1(VAR_0, &VAR_5);
    while (VAR_3 < VAR_4)
        VAR_2 = FUNC_0(*VAR_3++, VAR_2, &VAR_5);
    FUNC_4(&VAR_5);
    FUNC_6(VAR_0, (lua_Number) VAR_2);
    return 2;
}
