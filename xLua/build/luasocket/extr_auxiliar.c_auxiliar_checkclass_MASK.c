
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 void* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (char*,char*,char const*) ;

void *FUNC_3(lua_State *VAR_0, const char *VAR_1, int VAR_2) {
    void *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (!VAR_3) {
        char VAR_4[45];
        FUNC_2(VAR_4, "%.35s expected", VAR_1);
        FUNC_1(VAR_0, VAR_2, VAR_4);
    }
    return VAR_3;
}
