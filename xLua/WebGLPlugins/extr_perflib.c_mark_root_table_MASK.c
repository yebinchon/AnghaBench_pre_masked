
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,char*,int,int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(lua_State* VAR_1, lua_State* VAR_2, int VAR_3) {
 int VAR_4 = 0;

 FUNC_2(VAR_1);
 while (FUNC_0(VAR_1, -2) != 0) {
  ++VAR_4;
  if (VAR_0 == FUNC_6(VAR_1, -1)) {
   FUNC_3(VAR_1, -2);

   FUNC_7(VAR_2, FUNC_4(VAR_1, -2), FUNC_5(VAR_1, -1), VAR_3, ((void*)0), 1);
   FUNC_1(VAR_1, 1);
   FUNC_9(VAR_1, VAR_2);
   FUNC_1(VAR_2, 1);
  } else {
      FUNC_7(VAR_2, FUNC_4(VAR_1, -1), "FUNCTION", VAR_3, ((void*)0), 0);
   FUNC_8(VAR_1, VAR_2);
   FUNC_1(VAR_2, 1);
  }
  FUNC_1(VAR_1, 1);

  FUNC_7(VAR_2, FUNC_4(VAR_1, -1), "[KEY]", VAR_3, ((void*)0), VAR_0 == FUNC_6(VAR_1, -1));
  FUNC_8(VAR_1, VAR_2);
  FUNC_1(VAR_2, 1);
 }

 return VAR_4;
}
