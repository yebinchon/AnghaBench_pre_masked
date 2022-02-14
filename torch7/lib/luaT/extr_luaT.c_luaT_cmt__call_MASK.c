
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

int FUNC_11(lua_State *VAR_1)
{
  if(!FUNC_6(VAR_1, 1))
    FUNC_0(VAR_1, "internal error in __call: not a constructor table");

  if(!FUNC_2(VAR_1, 1))
    FUNC_0(VAR_1, "internal error in __call: no metatable available");

  FUNC_8(VAR_1, "__new");
  FUNC_9(VAR_1, -2);

  if(FUNC_5(VAR_1, -1))
    FUNC_0(VAR_1, "no constructor available");

  FUNC_10(VAR_1, 1);
  FUNC_4(VAR_1, 1);
  FUNC_7(VAR_1, 1);

  FUNC_1(VAR_1, FUNC_3(VAR_1)-1, VAR_0);
  return FUNC_3(VAR_1);
}
