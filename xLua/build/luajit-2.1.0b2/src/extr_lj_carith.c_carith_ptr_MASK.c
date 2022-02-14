
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef intptr_t ptrdiff_t ;
struct TYPE_11__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef intptr_t int32_t ;
struct TYPE_13__ {int ** p; TYPE_2__** ct; } ;
struct TYPE_12__ {int info; } ;
typedef scalar_t__ MMS ;
typedef int GCcdata ;
typedef int CTypeID ;
typedef TYPE_2__ CType ;
typedef int CTState ;
typedef scalar_t__ CTSize ;
typedef TYPE_3__ CDArith ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_8 (int *,int ,TYPE_2__*,int *,int *,int ) ;
 int * FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_16 (scalar_t__,intptr_t) ;

__attribute__((used)) static int FUNC_17(lua_State *VAR_11, CTState *VAR_12, CDArith *VAR_13, MMS VAR_14)
{
  CType *VAR_15 = VAR_13->ct[0];
  uint8_t *VAR_16 = VAR_13->p[0];
  ptrdiff_t VAR_17;
  CTSize VAR_18;
  CTypeID VAR_19;
  GCcdata *VAR_20;
  if (FUNC_5(VAR_15->info) || FUNC_6(VAR_15->info)) {
    if ((VAR_14 == VAR_10 || VAR_14 == VAR_7 || VAR_14 == VAR_9 || VAR_14 == VAR_8) &&
 (FUNC_5(VAR_13->ct[1]->info) || FUNC_6(VAR_13->ct[1]->info))) {
      uint8_t *VAR_21 = VAR_13->p[1];
      if (VAR_14 == VAR_7) {
 FUNC_14(VAR_11->top-1, (VAR_16 == VAR_21));
 return 1;
      }
      if (!FUNC_7(VAR_12, VAR_15, VAR_13->ct[1], VAR_0))
 return 0;
      if (VAR_14 == VAR_10) {
 intptr_t VAR_22;
 VAR_18 = FUNC_11(VAR_12, FUNC_2(VAR_15->info));
 if (VAR_18 == 0 || VAR_18 == VAR_3)
   return 0;
 VAR_22 = ((intptr_t)VAR_16 - (intptr_t)VAR_21) / (int32_t)VAR_18;



 FUNC_16(VAR_11->top-1, (int32_t)VAR_22);
 return 1;
      } else if (VAR_14 == VAR_9) {
 FUNC_14(VAR_11->top-1, ((uintptr_t)VAR_16 < (uintptr_t)VAR_21));
 return 1;
      } else {
 FUNC_13(VAR_14 == VAR_8);
 FUNC_14(VAR_11->top-1, ((uintptr_t)VAR_16 <= (uintptr_t)VAR_21));
 return 1;
      }
    }
    if (!((VAR_14 == VAR_6 || VAR_14 == VAR_10) && FUNC_4(VAR_13->ct[1]->info)))
      return 0;
    FUNC_8(VAR_12, FUNC_3(VAR_12, VAR_2), VAR_13->ct[1],
     (uint8_t *)&VAR_17, VAR_13->p[1], 0);
    if (VAR_14 == VAR_10) VAR_17 = -VAR_17;
  } else if (VAR_14 == VAR_6 && FUNC_4(VAR_15->info) &&
      (FUNC_5(VAR_13->ct[1]->info) || FUNC_6(VAR_13->ct[1]->info))) {

    VAR_15 = VAR_13->ct[1]; VAR_16 = VAR_13->p[1];
    FUNC_8(VAR_12, FUNC_3(VAR_12, VAR_2), VAR_13->ct[0],
     (uint8_t *)&VAR_17, VAR_13->p[0], 0);
  } else {
    return 0;
  }
  VAR_18 = FUNC_11(VAR_12, FUNC_2(VAR_15->info));
  if (VAR_18 == VAR_3)
    return 0;
  VAR_16 += VAR_17*(int32_t)VAR_18;
  VAR_19 = FUNC_10(VAR_12, FUNC_0(VAR_5, VAR_1|FUNC_2(VAR_15->info)),
         VAR_4);
  VAR_20 = FUNC_9(VAR_12, VAR_19, VAR_4);
  *(uint8_t **)FUNC_1(VAR_20) = VAR_16;
  FUNC_15(VAR_11, VAR_11->top-1, VAR_20);
  FUNC_12(VAR_11);
  return 1;
}
