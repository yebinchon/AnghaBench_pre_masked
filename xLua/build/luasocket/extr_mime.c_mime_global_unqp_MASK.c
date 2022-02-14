
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int UC ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int) ;
 size_t FUNC_7 (int ,int *,size_t,int *) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_0)
{
    size_t VAR_1 = 0, VAR_2 = 0;
    UC VAR_3[3];
    const UC *VAR_4 = (UC *) FUNC_1(VAR_0, 1, ((void*)0), &VAR_2);
    const UC *VAR_5 = VAR_4 + VAR_2;
    luaL_Buffer VAR_6;

    if (!VAR_4) {
        FUNC_4(VAR_0);
        FUNC_4(VAR_0);
        return 2;
    }

    FUNC_5(VAR_0, 2);

    FUNC_0(VAR_0, &VAR_6);
    while (VAR_4 < VAR_5)
        VAR_1 = FUNC_7(*VAR_4++, VAR_3, VAR_1, &VAR_6);
    VAR_4 = (UC *) FUNC_1(VAR_0, 2, ((void*)0), &VAR_2);

    if (!VAR_4) {
        FUNC_2(&VAR_6);
        if (!(*FUNC_6(VAR_0, -1))) FUNC_4(VAR_0);
        FUNC_4(VAR_0);
        return 2;
    }

    VAR_5 = VAR_4 + VAR_2;
    while (VAR_4 < VAR_5)
        VAR_1 = FUNC_7(*VAR_4++, VAR_3, VAR_1, &VAR_6);
    FUNC_2(&VAR_6);
    FUNC_3(VAR_0, (char *) VAR_3, VAR_1);
    return 2;
}
