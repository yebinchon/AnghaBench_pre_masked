
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int UC ;


 size_t FUNC_0 (int ,int *,size_t,int *) ;
 size_t FUNC_1 (int *,size_t,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int,int *,size_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,size_t*) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0)
{
    UC VAR_1[3];
    size_t VAR_2 = 0, VAR_3 = 0;
    const UC *VAR_4 = (UC *) FUNC_3(VAR_0, 1, ((void*)0), &VAR_2);
    const UC *VAR_5 = VAR_4 + VAR_2;
    luaL_Buffer VAR_6;

    if (!VAR_4) {
        FUNC_6(VAR_0);
        FUNC_6(VAR_0);
        return 2;
    }

    FUNC_7(VAR_0, 2);

    FUNC_2(VAR_0, &VAR_6);
    while (VAR_4 < VAR_5)
        VAR_3 = FUNC_0(*VAR_4++, VAR_1, VAR_3, &VAR_6);
    VAR_4 = (UC *) FUNC_3(VAR_0, 2, ((void*)0), &VAR_2);

    if (!VAR_4) {
        size_t VAR_7 = 0;
        VAR_3 = FUNC_1(VAR_1, VAR_3, &VAR_6);
        FUNC_4(&VAR_6);

        FUNC_8(VAR_0, -1, &VAR_7);
        if (VAR_7 == 0) FUNC_6(VAR_0);
        FUNC_6(VAR_0);
        return 2;
    }

    VAR_5 = VAR_4 + VAR_2;
    while (VAR_4 < VAR_5)
        VAR_3 = FUNC_0(*VAR_4++, VAR_1, VAR_3, &VAR_6);
    FUNC_4(&VAR_6);
    FUNC_5(VAR_0, (char *) VAR_1, VAR_3);
    return 2;
}
