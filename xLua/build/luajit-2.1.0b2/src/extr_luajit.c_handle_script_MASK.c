
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char**,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_0, char **VAR_1, int VAR_2)
{
  int VAR_3;
  const char *VAR_4;
  int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_5(VAR_0, "arg");
  VAR_4 = VAR_1[VAR_2];
  if (FUNC_7(VAR_4, "-") == 0 && FUNC_7(VAR_1[VAR_2-1], "--") != 0)
    VAR_4 = ((void*)0);
  VAR_3 = FUNC_2(VAR_0, VAR_4);
  FUNC_3(VAR_0, -(VAR_5+1));
  if (VAR_3 == 0)
    VAR_3 = FUNC_0(VAR_0, VAR_5, 0);
  else
    FUNC_4(VAR_0, VAR_5);
  return FUNC_6(VAR_0, VAR_3);
}
