
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int lua_Number ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_34__ {scalar_t__ info; } ;
struct TYPE_35__ {TYPE_1__ s; int nval; } ;
struct TYPE_39__ {scalar_t__ k; TYPE_2__ u; int t; int f; } ;
struct TYPE_38__ {scalar_t__ freereg; } ;
struct TYPE_37__ {scalar_t__ ctypeid; } ;
struct TYPE_36__ {scalar_t__ u64; } ;
typedef TYPE_3__ TValue ;
typedef TYPE_4__ GCcdata ;
typedef TYPE_5__ FuncState ;
typedef TYPE_6__ ExpDesc ;
typedef int BCPos ;
typedef scalar_t__ BCOp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 TYPE_3__* FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_16 (TYPE_5__*,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (TYPE_3__*,scalar_t__) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_21 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_22(FuncState *VAR_12, BCOp VAR_13, ExpDesc *VAR_14)
{
  if (VAR_13 == VAR_1) {

    { BCPos VAR_15 = VAR_14->f; VAR_14->f = VAR_14->t; VAR_14->t = VAR_15; }
    FUNC_16(VAR_12, VAR_14->f);
    FUNC_16(VAR_12, VAR_14->t);
    FUNC_6(VAR_12, VAR_14);
    if (VAR_14->k == VAR_8 || VAR_14->k == VAR_7) {
      VAR_14->k = VAR_9;
      return;
    } else if (FUNC_9(VAR_14) || (VAR_4 && VAR_14->k == VAR_6)) {
      VAR_14->k = VAR_7;
      return;
    } else if (VAR_14->k == VAR_5) {
      FUNC_15(VAR_12, VAR_14);
      return;
    } else if (VAR_14->k == VAR_11) {
      FUNC_3(VAR_12, 1);
      FUNC_18(FUNC_2(VAR_12, VAR_14), VAR_12->freereg-1);
      VAR_14->u.s.info = VAR_12->freereg-1;
      VAR_14->k = VAR_10;
    } else {
      FUNC_17(VAR_14->k == VAR_10);
    }
  } else {
    FUNC_17(VAR_13 == VAR_2 || VAR_13 == VAR_0);
    if (VAR_13 == VAR_2 && !FUNC_8(VAR_14)) {
      if (FUNC_10(VAR_14) && !FUNC_11(VAR_14)) {
 TValue *VAR_16 = FUNC_12(VAR_14);
 if (FUNC_21(VAR_16)) {
   int32_t VAR_17 = FUNC_14(VAR_16);
   if (VAR_17 == -VAR_17)
     FUNC_20(VAR_16, -(lua_Number)VAR_17);
   else
     FUNC_19(VAR_16, -VAR_17);
   return;
 } else {
   VAR_16->u64 ^= FUNC_0(80000000,00000000);
   return;
 }
      }
    }
    FUNC_13(VAR_12, VAR_14);
  }
  FUNC_7(VAR_12, VAR_14);
  VAR_14->u.s.info = FUNC_1(VAR_12, VAR_13, 0, VAR_14->u.s.info);
  VAR_14->k = VAR_11;
}
