
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int *,char const*,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char*,int ) ;
 char* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
  const char *VAR_2 = FUNC_4(VAR_1, 1);
  if (VAR_2 == ((void*)0)) {
    if (FUNC_0(VAR_1, 1, "__tostring") &&
        FUNC_5(VAR_1, -1) == VAR_0)
      return 1;
    else
      VAR_2 = FUNC_3(VAR_1, "(error object is a %s value)",
                               FUNC_2(VAR_1, 1));
  }
  FUNC_1(VAR_1, VAR_1, VAR_2, 1);
  return 1;
}
