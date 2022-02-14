
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,int ,char const*,int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0, int VAR_1, const char *VAR_2) {
  if (VAR_1) {
    FUNC_1(VAR_0, VAR_2);
    return 2;
  }
  else
    return FUNC_0(VAR_0, "error loading module '%s' from file '%s':\n\t%s",
                          FUNC_2(VAR_0, 1), VAR_2, FUNC_2(VAR_0, -1));
}
