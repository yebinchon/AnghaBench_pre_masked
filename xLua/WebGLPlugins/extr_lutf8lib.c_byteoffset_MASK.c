
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,size_t) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_3(VAR_0, 1, &VAR_1);
  lua_Integer VAR_3 = FUNC_2(VAR_0, 2);
  lua_Integer VAR_4 = (VAR_3 >= 0) ? 1 : VAR_1 + 1;
  VAR_4 = FUNC_8(FUNC_5(VAR_0, 3, VAR_4), VAR_1);
  FUNC_1(VAR_0, 1 <= VAR_4 && --VAR_4 <= (lua_Integer)VAR_1, 3,
                   "position out of range");
  if (VAR_3 == 0) {

    while (VAR_4 > 0 && FUNC_0(VAR_2 + VAR_4)) VAR_4--;
  }
  else {
    if (FUNC_0(VAR_2 + VAR_4))
      FUNC_4(VAR_0, "initial position is a continuation byte");
    if (VAR_3 < 0) {
       while (VAR_3 < 0 && VAR_4 > 0) {
         do {
           VAR_4--;
         } while (VAR_4 > 0 && FUNC_0(VAR_2 + VAR_4));
         VAR_3++;
       }
     }
     else {
       VAR_3--;
       while (VAR_3 > 0 && VAR_4 < (lua_Integer)VAR_1) {
         do {
           VAR_4++;
         } while (FUNC_0(VAR_2 + VAR_4));
         VAR_3--;
       }
     }
  }
  if (VAR_3 == 0)
    FUNC_6(VAR_0, VAR_4 + 1);
  else
    FUNC_7(VAR_0);
  return 1;
}
