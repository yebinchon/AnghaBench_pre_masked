
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
 int FUNC_0 (int *,int,char*,char const* const*) ;
 char* FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int const,char const*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0) {
  static const int VAR_1[] = {133, 132, 131, 130,
                      129, 128};
  static const char *const VAR_2[] = {"all", "collate", "ctype", "monetary",
     "numeric", "time", ((void*)0)};
  const char *VAR_3 = FUNC_1(VAR_0, 1, ((void*)0));
  int VAR_4 = FUNC_0(VAR_0, 2, "all", VAR_2);
  FUNC_2(VAR_0, FUNC_3(VAR_1[VAR_4], VAR_3));
  return 1;
}
