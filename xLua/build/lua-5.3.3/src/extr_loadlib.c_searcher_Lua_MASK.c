
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,char const*) ;
 char* FUNC_1 (int *,char const*,char*,int ) ;
 char* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2) {
  const char *VAR_3;
  const char *VAR_4 = FUNC_2(VAR_2, 1);
  VAR_3 = FUNC_1(VAR_2, VAR_4, "path", VAR_0);
  if (VAR_3 == ((void*)0)) return 1;
  return FUNC_0(VAR_2, (FUNC_3(VAR_2, VAR_3) == VAR_1), VAR_3);
}
