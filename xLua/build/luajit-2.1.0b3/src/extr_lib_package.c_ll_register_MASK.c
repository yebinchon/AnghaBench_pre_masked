
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;

__attribute__((used)) static void **FUNC_9(lua_State *VAR_1, const char *VAR_2)
{
  void **VAR_3;
  FUNC_5(VAR_1, "LOADLIB: %s", VAR_2);
  FUNC_1(VAR_1, VAR_0);
  if (!FUNC_2(VAR_1, -1)) {
    VAR_3 = (void **)FUNC_8(VAR_1, -1);
  } else {
    FUNC_4(VAR_1, 1);
    VAR_3 = (void **)FUNC_3(VAR_1, sizeof(void *));
    *VAR_3 = ((void*)0);
    FUNC_0(VAR_1, "_LOADLIB");
    FUNC_5(VAR_1, "LOADLIB: %s", VAR_2);
    FUNC_6(VAR_1, -2);
    FUNC_7(VAR_1, VAR_0);
  }
  return VAR_3;
}
