
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,void const*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_7(lua_State *VAR_0, lua_State *VAR_1) {
 const void *VAR_2 = FUNC_4(VAR_0, -1);
 int VAR_3 = 0;

 if (!FUNC_0(VAR_1, VAR_2)) {
  FUNC_6(VAR_1, VAR_2, 0);

  FUNC_3(VAR_0);
  while (FUNC_1(VAR_0, -2) != 0) {
   ++VAR_3;
   FUNC_5(VAR_0, VAR_1);
   FUNC_2(VAR_0, 1);
   FUNC_5(VAR_0, VAR_1);
  }

  FUNC_6(VAR_1, VAR_2, VAR_3);
 }
}
