
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,char const*) ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,char*,char const*,char const*) ;
 char* FUNC_3 (int *,int) ;

int FUNC_4(lua_State *VAR_0, int VAR_1, const char *VAR_2)
{
  const char *VAR_3;
  const char *VAR_4 = FUNC_1(VAR_0, VAR_1);

  if(!VAR_4)
    VAR_4 = FUNC_3(VAR_0, VAR_1);

  VAR_3 = FUNC_2(VAR_0, "%s expected, got %s",
                        VAR_2,
                        (VAR_4 ? VAR_4 : "unknown object"));

  return FUNC_0(VAR_0, VAR_1, VAR_3);
}
