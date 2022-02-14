
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int FUNC_8(lua_State* VAR_1) {
 size_t VAR_2 = 0;
 const char * VAR_3 = ((void*)0);
 const char * VAR_4 = FUNC_5(VAR_1, 2, &VAR_2);
 FUNC_3(VAR_1, 1);
 do {
  VAR_3 = FUNC_7(VAR_4, '.');
  if (((void*)0) == VAR_3) {
   FUNC_1(VAR_1, VAR_4, VAR_2);
  } else {
   FUNC_1(VAR_1, VAR_4, VAR_3 - VAR_4);
   VAR_2 = VAR_2 - (VAR_3 - VAR_4 + 1);
   VAR_4 = VAR_3 + 1;
  }
  FUNC_0(VAR_1, -2);
  if (FUNC_6(VAR_1, -1) != VAR_0) {
   if (((void*)0) != VAR_3) {
    FUNC_2(VAR_1);
   }
   break;
  }
  FUNC_4(VAR_1, -2);
 } while(VAR_3);
    return 1;
}
