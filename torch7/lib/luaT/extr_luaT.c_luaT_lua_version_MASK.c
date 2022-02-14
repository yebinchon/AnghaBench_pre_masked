
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(lua_State *VAR_0)
{
  FUNC_0(VAR_0, 1);

  if(FUNC_2(VAR_0, 1))
  {
    const char *VAR_1 = FUNC_1(VAR_0, 1, ((void*)0));
    if(VAR_1)
    {
      FUNC_3(VAR_0, VAR_1);
      FUNC_5(VAR_0, "__version");
      FUNC_6(VAR_0, -2);
      return 1;
    }
    return 0;
  }
  else if(FUNC_4(VAR_0, 1))
  {
    FUNC_5(VAR_0, "__version");
    FUNC_6(VAR_0, -2);
    return 1;
  }
  return 0;
}
