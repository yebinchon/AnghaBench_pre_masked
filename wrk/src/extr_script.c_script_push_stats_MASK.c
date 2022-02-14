
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stats ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(lua_State *VAR_0, stats *VAR_1) {
    stats **VAR_2 = (stats **) FUNC_1(VAR_0, sizeof(stats **));
    *VAR_2 = VAR_1;
    FUNC_0(VAR_0, "wrk.stats");
    FUNC_2(VAR_0, -2);
}
