
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_2) {
  luaL_Buffer VAR_3;
  FUNC_1(VAR_2, 1, VAR_0);
  FUNC_5(VAR_2, 1);
  FUNC_0(VAR_2,&VAR_3);
  if (FUNC_4(VAR_2, VAR_1, &VAR_3) != 0)
    FUNC_2(VAR_2, "unable to dump given function");
  FUNC_3(&VAR_3);
  return 1;
}
