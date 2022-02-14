
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0, char **VAR_1, int VAR_2)
{
  int VAR_3;
  for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1[VAR_3] == ((void*)0)) continue;
    FUNC_5(VAR_1[VAR_3][0] == '-');
    switch (VAR_1[VAR_3][1]) {
    case 'e': {
      const char *VAR_4 = VAR_1[VAR_3] + 2;
      if (*VAR_4 == '\0') VAR_4 = VAR_1[++VAR_3];
      FUNC_5(VAR_4 != ((void*)0));
      if (FUNC_4(VAR_0, VAR_4, "=(command line)") != 0)
 return 1;
      break;
      }
    case 'l': {
      const char *VAR_5 = VAR_1[VAR_3] + 2;
      if (*VAR_5 == '\0') VAR_5 = VAR_1[++VAR_3];
      FUNC_5(VAR_5 != ((void*)0));
      if (FUNC_3(VAR_0, VAR_5))
 return 1;
      break;
      }
    case 'j': {
      const char *VAR_6 = VAR_1[VAR_3] + 2;
      if (*VAR_6 == '\0') VAR_6 = VAR_1[++VAR_3];
      FUNC_5(VAR_6 != ((void*)0));
      if (FUNC_1(VAR_0, VAR_6))
 return 1;
      break;
      }
    case 'O':
      if (FUNC_2(VAR_0, VAR_1[VAR_3] + 2))
 return 1;
      break;
    case 'b':
      return FUNC_0(VAR_0, VAR_1+VAR_3);
    default: break;
    }
  }
  return 0;
}
