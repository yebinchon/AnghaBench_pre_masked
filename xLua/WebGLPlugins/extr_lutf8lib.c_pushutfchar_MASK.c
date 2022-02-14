
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,long) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_1, int VAR_2) {
  lua_Integer VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, 0 <= VAR_3 && VAR_3 <= VAR_0, VAR_2, "value out of range");
  FUNC_2(VAR_1, "%U", (long)VAR_3);
}
