
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 char const* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,char const*,char const*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *,int) ;
 char const* FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static const char *FUNC_9 (lua_State *VAR_1, const char *VAR_2,
                                             const char *VAR_3,
                                             const char *VAR_4,
                                             const char *VAR_5) {
  luaL_Buffer VAR_6;
  FUNC_1(VAR_1, &VAR_6);
  if (*VAR_4 != '\0')
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
  while ((VAR_3 = FUNC_7(VAR_1, VAR_3)) != ((void*)0)) {
    const char *VAR_7 = FUNC_2(VAR_1, FUNC_6(VAR_1, -1),
                                     VAR_0, VAR_2);
    FUNC_5(VAR_1, -2);
    if (FUNC_8(VAR_7))
      return VAR_7;
    FUNC_4(VAR_1, "\n\tno file '%s'", VAR_7);
    FUNC_5(VAR_1, -2);
    FUNC_0(&VAR_6);
  }
  FUNC_3(&VAR_6);
  return ((void*)0);
}
