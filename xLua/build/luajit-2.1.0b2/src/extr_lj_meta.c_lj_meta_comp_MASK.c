
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ int32_t ;
typedef int cTValue ;
typedef int TValue ;
typedef int MMS ;
typedef int ASMFunction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

TValue *FUNC_12(lua_State *VAR_6, cTValue *VAR_7, cTValue *VAR_8, int VAR_9)
{
  if (VAR_1 && (FUNC_9(VAR_7) || FUNC_9(VAR_8))) {
    ASMFunction VAR_10 = (VAR_9 & 1) ? VAR_4 : VAR_5;
    MMS VAR_11 = (VAR_9 & 2) ? VAR_2 : VAR_3;
    cTValue *VAR_12 = FUNC_3(VAR_6, FUNC_9(VAR_7) ? VAR_7 : VAR_8, VAR_11);
    if (FUNC_0(FUNC_10(VAR_12))) goto err;
    return FUNC_6(VAR_6, VAR_10, VAR_12, VAR_7, VAR_8);
  } else if (VAR_0 || FUNC_1(VAR_7) == FUNC_1(VAR_8)) {

    if (FUNC_11(VAR_7) && FUNC_11(VAR_8)) {
      int32_t VAR_13 = FUNC_5(FUNC_7(VAR_7), FUNC_7(VAR_8));
      return (TValue *)(intptr_t)(((VAR_9&2) ? VAR_13 <= 0 : VAR_13 < 0) ^ (VAR_9&1));
    } else {
    trymt:
      while (1) {
 ASMFunction VAR_14 = (VAR_9 & 1) ? VAR_4 : VAR_5;
 MMS VAR_15 = (VAR_9 & 2) ? VAR_2 : VAR_3;
 cTValue *VAR_16 = FUNC_3(VAR_6, VAR_7, VAR_15);



 cTValue *VAR_17 = FUNC_3(VAR_6, VAR_8, VAR_15);
 if (FUNC_10(VAR_16) || !FUNC_4(VAR_16, VAR_17))

 {
   if (VAR_9 & 2) {
     cTValue *VAR_18 = VAR_7; VAR_7 = VAR_8; VAR_8 = VAR_18;
     VAR_9 ^= 3;
     continue;
   }
   goto err;
 }
 return FUNC_6(VAR_6, VAR_14, VAR_16, VAR_7, VAR_8);
      }
    }
  } else if (FUNC_8(VAR_7) && FUNC_8(VAR_8)) {
    goto trymt;
  } else {
  err:
    FUNC_2(VAR_6, VAR_7, VAR_8);
    return ((void*)0);
  }
}
