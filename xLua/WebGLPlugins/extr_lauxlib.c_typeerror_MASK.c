
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,char const*) ;
 scalar_t__ FUNC_1 (int *,int,char*) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char*,char const*,char const*) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_2, int VAR_3, const char *VAR_4) {
  const char *VAR_5;
  const char *VAR_6;
  if (FUNC_1(VAR_2, VAR_3, "__name") == VAR_1)
    VAR_6 = FUNC_4(VAR_2, -1);
  else if (FUNC_5(VAR_2, VAR_3) == VAR_0)
    VAR_6 = "light userdata";
  else
    VAR_6 = FUNC_2(VAR_2, VAR_3);
  VAR_5 = FUNC_3(VAR_2, "%s expected, got %s", VAR_4, VAR_6);
  return FUNC_0(VAR_2, VAR_3, VAR_5);
}
