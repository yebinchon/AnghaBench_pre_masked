
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int,size_t*) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 char* FUNC_10 (char const*,char) ;

__attribute__((used)) static int FUNC_11(lua_State* VAR_1) {
    size_t VAR_2 = 0;
 const char * VAR_3 = ((void*)0);
 const char * VAR_4 = FUNC_7(VAR_1, 2, &VAR_2);
 FUNC_4(VAR_1, 1);
 do {
  VAR_3 = FUNC_10(VAR_4, '.');
  if (((void*)0) == VAR_3) {
   FUNC_3(VAR_1, VAR_4, VAR_2);
   FUNC_4(VAR_1, 3);
   FUNC_6(VAR_1, -3);
   FUNC_2(VAR_1, 1);
   break;
  } else {
   FUNC_3(VAR_1, VAR_4, VAR_3 - VAR_4);
   VAR_2 = VAR_2 - (VAR_3 - VAR_4 + 1);
   VAR_4 = VAR_3 + 1;
  }
  FUNC_1(VAR_1, -2);
  if (FUNC_9(VAR_1, -1) != VAR_0) {
   return FUNC_0(VAR_1, "can not set value to %s", FUNC_8(VAR_1, 2));
  }
  FUNC_5(VAR_1, -2);
 } while(VAR_3);
    return 0;
}
