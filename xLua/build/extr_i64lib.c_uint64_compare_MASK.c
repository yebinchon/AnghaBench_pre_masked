
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(lua_State* VAR_0) {
 uint64_t VAR_1 = FUNC_1(VAR_0, 1);
 uint64_t VAR_2 = FUNC_1(VAR_0, 2);
 FUNC_0(VAR_0, VAR_1 == VAR_2 ? 0 : (VAR_1 < VAR_2 ? -1 : 1));
 return 1;
}
