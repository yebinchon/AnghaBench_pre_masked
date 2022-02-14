
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (int *,int,char*) ;
 scalar_t__ FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 scalar_t__ FUNC_19 (int *,int) ;

__attribute__((used)) static void FUNC_20(lua_State* VAR_2, lua_State* VAR_3) {
 int VAR_4 = 0;
 int VAR_5 = 0;
 luaL_Buffer VAR_6;

 FUNC_6(VAR_2);

 FUNC_10(VAR_3);
 while (FUNC_7(VAR_3, VAR_1) != 0) {
  FUNC_4(VAR_3, -1, "name");
  if (FUNC_5(VAR_3, -1)) {
   FUNC_8(VAR_3, 2);
   continue;
  } else {
   FUNC_8(VAR_3, 1);
  }

  FUNC_6(VAR_2);
  VAR_4 = 0;

  FUNC_10(VAR_3);
  while (FUNC_7(VAR_3, -2) != 0) {
   if (VAR_0 == FUNC_19(VAR_3, -2)) {
    VAR_4 += (int)FUNC_15(VAR_3, -1);
   }

   FUNC_8(VAR_3, 1);
  }
  FUNC_11(VAR_2, VAR_4);
  FUNC_14(VAR_2, -2, "size");

  FUNC_9(VAR_2, "%p", FUNC_18(VAR_3, -2));
  FUNC_14(VAR_2, -2, "pointer");

  FUNC_4(VAR_3, -1, "name");
  FUNC_12(VAR_2, FUNC_17(VAR_3, -1));
  FUNC_8(VAR_3, 1);
  FUNC_14(VAR_2, -2, "name");

  FUNC_4(VAR_3, -1, "type");
  FUNC_11(VAR_2, FUNC_16(VAR_3, -1));
  FUNC_8(VAR_3, 1);
  FUNC_14(VAR_2, -2, "type");

  FUNC_4(VAR_3, -1, "used_in");
  FUNC_2(VAR_2, &VAR_6);
  FUNC_10(VAR_3);
  while (FUNC_7(VAR_3, -2) != 0) {
   FUNC_8(VAR_3, 1);
   FUNC_1(&VAR_6, FUNC_17(VAR_3, -1));
   FUNC_0(&VAR_6, ';');
  }
  FUNC_3(&VAR_6);
  FUNC_8(VAR_3, 1);
  FUNC_14(VAR_2, -2, "used_in");

  ++VAR_5;
  FUNC_13(VAR_2, -2, VAR_5);

  FUNC_8(VAR_3, 1);
 }
}
