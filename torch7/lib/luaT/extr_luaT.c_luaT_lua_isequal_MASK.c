
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 void** FUNC_6 (int *,int) ;

int FUNC_7(lua_State *VAR_0)
{
  if(FUNC_3(VAR_0, 1) && FUNC_3(VAR_0, 2))
  {
    void **VAR_1, **VAR_2;
    FUNC_0(VAR_0, FUNC_1(VAR_0, 1), 1, "Torch object expected");
    FUNC_0(VAR_0, FUNC_1(VAR_0, 2), 2, "Torch object expected");

    VAR_1 = FUNC_6(VAR_0, 1);
    VAR_2 = FUNC_6(VAR_0, 2);
    if(*VAR_1 == *VAR_2)
      FUNC_4(VAR_0, 1);
    else
      FUNC_4(VAR_0, 0);
  }
  else if(FUNC_2(VAR_0, 1) && FUNC_2(VAR_0, 2))
    FUNC_4(VAR_0, FUNC_5(VAR_0, 1, 2));
  else
    FUNC_4(VAR_0, 0);
  return 1;
}
