
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,void const*) ;
 int FUNC_9 (int *,int ,void const*) ;
 int FUNC_10 (int *,int,char const*) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_1, const void *VAR_2, const char *VAR_3, int VAR_4, const char *VAR_5, int VAR_6) {
 FUNC_8(VAR_1, VAR_0, VAR_2);
 if (FUNC_1(VAR_1, -1)) {
  FUNC_3(VAR_1, 1);
  FUNC_2(VAR_1);
  FUNC_2(VAR_1);
  if (VAR_5 != ((void*)0)) {
   FUNC_4(VAR_1, 1);
   FUNC_10(VAR_1, -2, VAR_5);
  }
  FUNC_10(VAR_1, -2, "used_in");
  if (VAR_6) {
      FUNC_6(VAR_1, VAR_3);
      FUNC_10(VAR_1, -2, "name");
      FUNC_5(VAR_1, VAR_4);
      FUNC_10(VAR_1, -2, "type");
  }

  FUNC_7(VAR_1, -1);
  FUNC_9(VAR_1, VAR_0, VAR_2);
 } else {
  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_1, -1, "used_in");
   FUNC_4(VAR_1, 1);
   FUNC_10(VAR_1, -2, VAR_5);
   FUNC_3(VAR_1, 1);
  }
 }
}
