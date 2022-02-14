
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 char const* FUNC_8 (int *,int ,size_t*) ;

__attribute__((used)) static const char *FUNC_9 (lua_State *VAR_1, void *VAR_2, size_t *VAR_3) {
  (void)(VAR_2);
  FUNC_0(VAR_1, 2, "too many nested functions");
  FUNC_6(VAR_1, 1);
  FUNC_2(VAR_1, 0, 1);
  if (FUNC_3(VAR_1, -1)) {
    FUNC_5(VAR_1, 1);
    *VAR_3 = 0;
    return ((void*)0);
  }
  else if (!FUNC_4(VAR_1, -1))
    FUNC_1(VAR_1, "reader function must return a string");
  FUNC_7(VAR_1, VAR_0);
  return FUNC_8(VAR_1, VAR_0, VAR_3);
}
