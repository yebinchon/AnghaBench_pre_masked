
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,char const*,char const*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2, const char *VAR_3, int VAR_4) {
  const char *VAR_5 = FUNC_3(VAR_1);
  const char *VAR_6 = FUNC_2(VAR_2, VAR_4) + 1;
  FUNC_0(VAR_2, "cannot %s %s: %s", VAR_3, VAR_6, VAR_5);
  FUNC_1(VAR_2, VAR_4);
  return VAR_0;
}
