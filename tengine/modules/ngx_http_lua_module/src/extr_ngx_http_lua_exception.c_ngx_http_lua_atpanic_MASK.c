
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int,size_t*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char*,size_t,int *) ;
 int VAR_1 ;

int
FUNC_5(lua_State *VAR_2)
{



    u_char *VAR_3 = ((void*)0);
    size_t VAR_4 = 0;

    if (FUNC_3(VAR_2, -1) == VAR_0) {
        VAR_3 = (u_char *) FUNC_2(VAR_2, -1, &VAR_4);
    }

    if (VAR_3 == ((void*)0)) {
        VAR_3 = (u_char *) "unknown reason";
        VAR_4 = sizeof("unknown reason") - 1;
    }

    FUNC_4(0, "lua atpanic: Lua VM crashed, reason: %*s", VAR_4, VAR_3);
    VAR_1 = 1;


    FUNC_0(1);



}
