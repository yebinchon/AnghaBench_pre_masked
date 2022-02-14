
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;

void *FUNC_6(lua_State *VAR_0, const char *VAR_1, int VAR_2) {
    if (!FUNC_0(VAR_0, VAR_2))
        return ((void*)0);
    FUNC_3(VAR_0, VAR_1);
    FUNC_4(VAR_0, -2);
    if (FUNC_1(VAR_0, -1)) {
        FUNC_2(VAR_0, 2);
        return ((void*)0);
    } else {
        FUNC_2(VAR_0, 2);
        return FUNC_5(VAR_0, VAR_2);
    }
}
