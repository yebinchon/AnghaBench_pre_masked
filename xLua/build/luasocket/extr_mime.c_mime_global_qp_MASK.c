
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int UC ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int,int *,size_t*) ;
 char* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int) ;
 size_t FUNC_8 (int ,int *,size_t,char const*,int *) ;
 size_t FUNC_9 (int *,size_t,int *) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_1)
{

    size_t VAR_2 = 0, VAR_3 = 0;
    UC VAR_4[3];
    const UC *VAR_5 = (UC *) FUNC_1(VAR_1, 1, ((void*)0), &VAR_3);
    const UC *VAR_6 = VAR_5 + VAR_3;
    const char *VAR_7 = FUNC_2(VAR_1, 3, VAR_0);
    luaL_Buffer VAR_8;

    if (!VAR_5) {
        FUNC_5(VAR_1);
        FUNC_5(VAR_1);
        return 2;
    }

    FUNC_6(VAR_1, 3);

    FUNC_0(VAR_1, &VAR_8);
    while (VAR_5 < VAR_6)
        VAR_2 = FUNC_8(*VAR_5++, VAR_4, VAR_2, VAR_7, &VAR_8);
    VAR_5 = (UC *) FUNC_1(VAR_1, 2, ((void*)0), &VAR_3);

    if (!VAR_5) {
        VAR_2 = FUNC_9(VAR_4, VAR_2, &VAR_8);
        FUNC_3(&VAR_8);
        if (!(*FUNC_7(VAR_1, -1))) FUNC_5(VAR_1);
        FUNC_5(VAR_1);
        return 2;
    }

    VAR_6 = VAR_5 + VAR_3;
    while (VAR_5 < VAR_6)
        VAR_2 = FUNC_8(*VAR_5++, VAR_4, VAR_2, VAR_7, &VAR_8);
    FUNC_3(&VAR_8);
    FUNC_4(VAR_1, (char *) VAR_4, VAR_2);
    return 2;
}
