
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
  int VAR_2;
  FUNC_4(VAR_1, 0);
  if (!FUNC_6(VAR_1, 1))
    return -1;
  if ((VAR_2 = FUNC_0(VAR_1)) != VAR_0)
    VAR_2 = FUNC_5(VAR_1);
  FUNC_3(VAR_1, 1);
  FUNC_1(FUNC_2(VAR_1) == 1);
  return VAR_2;
}
