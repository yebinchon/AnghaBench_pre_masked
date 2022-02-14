
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,char const*,char*) ;
 scalar_t__ FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0) {
  const char *VAR_1;
  const char *VAR_2 = FUNC_3(VAR_0, 1);
  const char *VAR_3 = FUNC_0(VAR_0, VAR_2, "cpath");
  if (VAR_3 == ((void*)0)) return 1;
  VAR_1 = FUNC_4(VAR_0, VAR_2);
  if (FUNC_1(VAR_0, VAR_3, VAR_1) != 0)
    FUNC_2(VAR_0, VAR_3);
  return 1;
}
