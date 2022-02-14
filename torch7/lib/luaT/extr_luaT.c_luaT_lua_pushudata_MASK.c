
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,char const*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(lua_State *VAR_0)
{
  void *VAR_1 = ((void*)0);
  const char *VAR_2 = FUNC_1(VAR_0, 2);

  if(FUNC_7(VAR_0, 1) == 10)
    VAR_1 = *((void**)FUNC_6(VAR_0, 1));
  else if(FUNC_2(VAR_0, 1))
    VAR_1 = ((void**)FUNC_6(VAR_0, 1))[4];
  else if(FUNC_4(VAR_0, 1))
    VAR_1 = (void*)(uintptr_t)FUNC_5(VAR_0, 1);
  else
    FUNC_0(VAR_0, 1, "expecting number or cdata");

  FUNC_3(VAR_0, VAR_1, VAR_2);

  return 1;
}
