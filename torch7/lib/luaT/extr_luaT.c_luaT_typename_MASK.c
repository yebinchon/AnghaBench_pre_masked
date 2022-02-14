
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char const* FUNC_0 (int *,int,int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,int) ;

const char* FUNC_7(lua_State *VAR_1, int VAR_2)
{
  if(FUNC_1(VAR_1, VAR_2))
    return FUNC_0(VAR_1, VAR_2, ((void*)0));
  else if(FUNC_2(VAR_1, VAR_2))
  {
    const char *VAR_3 = ((void*)0);
    FUNC_5(VAR_1, VAR_0);
    if(FUNC_3(VAR_1, -1))
      VAR_3 = FUNC_6(VAR_1, -1);
    FUNC_4(VAR_1, 1);
    return VAR_3;
  }
  return ((void*)0);
}
