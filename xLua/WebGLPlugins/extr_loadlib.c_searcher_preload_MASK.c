
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_3) {
  const char *VAR_4 = FUNC_0(VAR_3, 1);
  FUNC_1(VAR_3, VAR_1, VAR_0);
  if (FUNC_1(VAR_3, -1, VAR_4) == VAR_2)
    FUNC_2(VAR_3, "\n\tno field package.preload['%s']", VAR_4);
  return 1;
}
