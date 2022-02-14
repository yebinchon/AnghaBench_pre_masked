
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (char*,char*,int ) ;

int FUNC_10(lua_State *VAR_0) {
    char VAR_1[32];
    if (!FUNC_1(VAR_0, 1)) goto error;
    FUNC_6(VAR_0, "__index");
    FUNC_2(VAR_0, -2);
    if (!FUNC_4(VAR_0, -1)) goto error;
    FUNC_6(VAR_0, "class");
    FUNC_2(VAR_0, -2);
    if (!FUNC_3(VAR_0, -1)) goto error;
    FUNC_9(VAR_1, "%p", FUNC_8(VAR_0, 1));
    FUNC_5(VAR_0, "%s: %s", FUNC_7(VAR_0, -1), VAR_1);
    return 1;
error:
    FUNC_6(VAR_0, "invalid object passed to 'auxiliar.c:__tostring'");
    FUNC_0(VAR_0);
    return 1;
}
