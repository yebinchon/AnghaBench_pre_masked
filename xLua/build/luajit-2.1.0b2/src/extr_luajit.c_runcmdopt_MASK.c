
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, const char *VAR_1)
{
  int VAR_2 = 0;
  if (VAR_1 && *VAR_1) {
    for (;;) {
      const char *VAR_3 = FUNC_5(VAR_1, ',');
      VAR_2++;
      if (!VAR_3) break;
      if (VAR_3 == VAR_1)
 FUNC_2(VAR_0);
      else
 FUNC_1(VAR_0, VAR_1, (size_t)(VAR_3 - VAR_1));
      VAR_1 = VAR_3 + 1;
    }
    if (*VAR_1)
      FUNC_3(VAR_0, VAR_1);
    else
      FUNC_2(VAR_0);
  }
  return FUNC_4(VAR_0, FUNC_0(VAR_0, VAR_2, 0, 0));
}
