
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char const*) ;
 char* FUNC_1 (int *,char const*,char*,int ) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 char* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1) {
  const char *VAR_2 = FUNC_3(VAR_1, 1);
  const char *VAR_3 = FUNC_1(VAR_1, VAR_2, "cpath", VAR_0);
  if (VAR_3 == ((void*)0)) return 1;
  return FUNC_0(VAR_1, (FUNC_2(VAR_1, VAR_3, VAR_2) == 0), VAR_3);
}
