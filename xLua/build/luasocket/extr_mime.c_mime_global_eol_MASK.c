
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,int *,size_t*) ;
 char* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1)
{
    int VAR_2 = FUNC_2(VAR_1, 1);
    size_t VAR_3 = 0;
    const char *VAR_4 = FUNC_3(VAR_1, 2, ((void*)0), &VAR_3);
    const char *VAR_5 = VAR_4 + VAR_3;
    const char *VAR_6 = FUNC_4(VAR_1, 3, VAR_0);
    luaL_Buffer VAR_7;
    FUNC_1(VAR_1, &VAR_7);

    if (!VAR_4) {
       FUNC_6(VAR_1);
       FUNC_7(VAR_1, 0);
       return 2;
    }

    while (VAR_4 < VAR_5)
        VAR_2 = FUNC_0(*VAR_4++, VAR_2, VAR_6, &VAR_7);
    FUNC_5(&VAR_7);
    FUNC_7(VAR_1, VAR_2);
    return 2;
}
