
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(lua_State *VAR_1)
{
  const char *VAR_2 = FUNC_0(VAR_1, 2);
  FUNC_1(VAR_1, 1, VAR_0);

  if(!FUNC_3(VAR_1, VAR_2))
    FUNC_2(VAR_1, "unknown typename %s\n", VAR_2);
  FUNC_4(VAR_1, 1);

  return 1;
}
