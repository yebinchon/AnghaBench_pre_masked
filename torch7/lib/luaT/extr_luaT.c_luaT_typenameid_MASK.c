
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int) ;

const char *FUNC_5(lua_State *VAR_1, const char *VAR_2)
{
  if(FUNC_0(VAR_1, VAR_2))
  {
    const char *VAR_3 = ((void*)0);
    FUNC_3(VAR_1, VAR_0);
    if(FUNC_1(VAR_1, -1))
      VAR_3 = FUNC_4(VAR_1, -1);
    FUNC_2(VAR_1, 1);
    return VAR_3;
  }
  return ((void*)0);
}
