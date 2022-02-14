
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lua_Number ;
struct TYPE_5__ {int pt; } ;
typedef TYPE_1__ jit_State ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int cTValue ;
typedef int TRef ;
typedef scalar_t__ IRType ;
typedef scalar_t__ BCReg ;
typedef scalar_t__ BCOp ;
typedef int const BCIns ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int const* FUNC_10 (int ) ;
 int * FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static TRef FUNC_13(jit_State *VAR_6, const BCIns *VAR_7, BCReg VAR_8, IRType VAR_9)
{





  const BCIns *VAR_10, *VAR_11 = FUNC_10(VAR_6->pt);
  for (VAR_10 = VAR_7-1; VAR_10 > VAR_11; VAR_10--) {
    BCIns VAR_12 = *VAR_10;
    BCOp VAR_13 = FUNC_3(VAR_12);

    if (FUNC_4(VAR_13) == VAR_0 && FUNC_0(VAR_12) <= VAR_8) {
      return 0;
    } else if (FUNC_4(VAR_13) == VAR_1 && FUNC_0(VAR_12) == VAR_8) {
      if (VAR_13 == VAR_4 || VAR_13 == VAR_3) {

 const BCIns *VAR_14 = VAR_10;
 for (; VAR_10 > VAR_11; VAR_10--)
   if (FUNC_3(*VAR_10) == VAR_2) {
     const BCIns *VAR_15 = VAR_10+FUNC_2(*VAR_10)+1;
     if (VAR_15 > VAR_14 && VAR_15 <= VAR_7)
       return 0;
   }
 if (VAR_13 == VAR_4) {
   int32_t VAR_16 = (int32_t)(int16_t)FUNC_1(VAR_12);
   return VAR_9 == VAR_5 ? FUNC_5(VAR_6, VAR_16) : FUNC_6(VAR_6, (lua_Number)VAR_16);
 } else {
   cTValue *VAR_17 = FUNC_11(VAR_6->pt, FUNC_1(VAR_12));
   if (VAR_9 == VAR_5) {
     int32_t VAR_18 = FUNC_8(VAR_17);
     if (FUNC_12(VAR_17) || FUNC_7(VAR_17) == (lua_Number)VAR_18)
       return FUNC_5(VAR_6, VAR_18);
     return 0;
   } else {
     return FUNC_6(VAR_6, FUNC_9(VAR_17));
   }
 }
      }
      return 0;
    }
  }
  return 0;
}
