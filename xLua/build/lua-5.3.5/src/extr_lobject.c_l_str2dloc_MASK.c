
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (char const*,char**) ;

__attribute__((used)) static const char *FUNC_4 (const char *VAR_0, lua_Number *VAR_1, int VAR_2) {
  char *VAR_3;
  *VAR_1 = (VAR_2 == 'x') ? FUNC_3(VAR_0, &VAR_3)
                          : FUNC_2(VAR_0, &VAR_3);
  if (VAR_3 == VAR_0) return ((void*)0);
  while (FUNC_1(FUNC_0(*VAR_3))) VAR_3++;
  return (*VAR_3 == '\0') ? VAR_3 : ((void*)0);
}
