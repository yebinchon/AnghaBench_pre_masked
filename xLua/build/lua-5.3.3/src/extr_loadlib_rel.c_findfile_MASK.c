
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int ,char const*) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 char const* FUNC_4 (int *,char const*,char const*,char*,char const*) ;

__attribute__((used)) static const char *FUNC_5 (lua_State *VAR_0, const char *VAR_1,
                                           const char *VAR_2,
                                           const char *VAR_3) {
  const char *VAR_4;
  FUNC_1(VAR_0, FUNC_3(1), VAR_2);
  VAR_4 = FUNC_2(VAR_0, -1);
  if (VAR_4 == ((void*)0))
    FUNC_0(VAR_0, "'package.%s' must be a string", VAR_2);
  return FUNC_4(VAR_0, VAR_1, VAR_4, ".", VAR_3);
}
