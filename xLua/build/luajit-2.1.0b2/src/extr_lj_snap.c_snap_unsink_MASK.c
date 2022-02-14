
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_31__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_36__ {int L; } ;
typedef TYPE_3__ jit_State ;
typedef int int64_t ;
struct TYPE_40__ {int metatable; } ;
struct TYPE_39__ {int nins; TYPE_5__* ir; TYPE_2__* snap; } ;
struct TYPE_38__ {scalar_t__ o; size_t op1; size_t op2; scalar_t__ r; int i; int t; } ;
struct TYPE_33__ {int lo; int hi; } ;
struct TYPE_37__ {TYPE_1__ u32; } ;
struct TYPE_35__ {scalar_t__ u64; } ;
struct TYPE_34__ {size_t ref; } ;
typedef TYPE_4__ TValue ;
typedef size_t SnapNo ;
typedef TYPE_5__ IRIns ;
typedef TYPE_6__ GCtrace ;
typedef TYPE_7__ GCtab ;
typedef int GCcdata ;
typedef int ExitState ;
typedef int CTypeID ;
typedef int CTState ;
typedef int CTSize ;
typedef int CTInfo ;
typedef int BloomFilter ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 TYPE_31__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,int ,int,int ) ;
 int FUNC_10 (int *,int ,int*) ;
 int FUNC_11 (int ,TYPE_4__*,TYPE_5__*) ;
 TYPE_7__* FUNC_12 (int ,int ) ;
 TYPE_7__* FUNC_13 (int ,size_t,size_t) ;
 TYPE_4__* FUNC_14 (int ,TYPE_7__*,TYPE_4__*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,TYPE_4__*,int *) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,TYPE_4__*,TYPE_7__*) ;
 int FUNC_20 (TYPE_6__*,int *,size_t,int ,size_t,int *,int) ;
 int FUNC_21 (TYPE_3__*,TYPE_6__*,int *,size_t,int ,size_t,TYPE_4__*) ;
 scalar_t__ FUNC_22 (TYPE_6__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_23 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_24(jit_State *VAR_21, GCtrace *VAR_22, ExitState *VAR_23,
   SnapNo VAR_24, BloomFilter VAR_25,
   IRIns *VAR_26, TValue *VAR_27)
{
  FUNC_15(VAR_26->o == VAR_13 || VAR_26->o == VAR_12 ||
      VAR_26->o == VAR_3 || VAR_26->o == VAR_4);
  {
    IRIns *VAR_28, *VAR_29;
    GCtab *VAR_30 = VAR_26->o == VAR_13 ? FUNC_13(VAR_21->L, VAR_26->op1, VAR_26->op2) :
      FUNC_12(VAR_21->L, FUNC_3(&VAR_22->ir[VAR_26->op1]));
    FUNC_19(VAR_21->L, VAR_27, VAR_30);
    VAR_29 = &VAR_22->ir[VAR_22->snap[VAR_24].ref];
    for (VAR_28 = VAR_26+1; VAR_28 < VAR_29; VAR_28++)
      if (VAR_28->r == VAR_20 && FUNC_22(VAR_22, VAR_26, VAR_28)) {
 IRIns *VAR_31 = &VAR_22->ir[VAR_28->op1];
 TValue VAR_32, *VAR_33;
 FUNC_15(VAR_28->o == VAR_2 || VAR_28->o == VAR_8 ||
     VAR_28->o == VAR_6);
 if (VAR_31->o == VAR_5) {
   FUNC_15(VAR_31->op2 == VAR_0);
   FUNC_21(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_28->op2, &VAR_32);

   FUNC_18(VAR_30->metatable, FUNC_16(FUNC_23(&VAR_32)));
 } else {
   VAR_31 = &VAR_22->ir[VAR_31->op2];
   if (VAR_31->o == VAR_11) VAR_31 = &VAR_22->ir[VAR_31->op1];
   FUNC_11(VAR_21->L, &VAR_32, VAR_31);
   VAR_33 = FUNC_14(VAR_21->L, VAR_30, &VAR_32);

   FUNC_21(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_28->op2, VAR_33);
   if (VAR_19 && VAR_28+1 < VAR_22->ir + VAR_22->nins && (VAR_28+1)->o == VAR_7) {
     FUNC_21(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, (VAR_28+1)->op2, &VAR_32);
     VAR_33->u32.hi = VAR_32.u32.lo;
   }
 }
      }
  }
}
