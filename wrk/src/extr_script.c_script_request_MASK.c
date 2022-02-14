
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 char* FUNC_7 (char*,size_t) ;

void FUNC_8(lua_State *VAR_0, char **VAR_1, size_t *VAR_2) {
    int VAR_3 = 1;
    FUNC_2(VAR_0, "request");
    if (!FUNC_3(VAR_0, -1)) {
        FUNC_2(VAR_0, "wrk");
        FUNC_1(VAR_0, -1, "request");
        VAR_3 += 2;
    }
    FUNC_0(VAR_0, 0, 1);
    const char *VAR_4 = FUNC_5(VAR_0, -1, VAR_2);
    *VAR_1 = FUNC_7(*VAR_1, *VAR_2);
    FUNC_6(*VAR_1, VAR_4, *VAR_2);
    FUNC_4(VAR_0, VAR_3);
}
