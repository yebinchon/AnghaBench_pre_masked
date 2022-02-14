
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char const*) ;
 char* FUNC_9 (char const*,char) ;
 size_t FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_1, const char *VAR_2)
{
  const char *VAR_3 = FUNC_9(VAR_2, '=');
  FUNC_5(VAR_1, VAR_2, VAR_3 ? (size_t)(VAR_3 - VAR_2) : FUNC_10(VAR_2));
  FUNC_1(VAR_1, VAR_0, "_LOADED");
  FUNC_1(VAR_1, -1, "jit");
  FUNC_7(VAR_1, -2);
  FUNC_6(VAR_1, -2);
  FUNC_2(VAR_1, -2);
  if (!FUNC_3(VAR_1, -1)) {
    FUNC_4(VAR_1, 2);
    if (FUNC_0(VAR_1))
      return 1;
  } else {
    FUNC_7(VAR_1, -2);
  }
  FUNC_7(VAR_1, -2);
  return FUNC_8(VAR_1, VAR_3 ? VAR_3+1 : VAR_3);
}
