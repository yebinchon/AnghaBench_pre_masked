
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_59__ TYPE_9__ ;
typedef struct TYPE_58__ TYPE_8__ ;
typedef struct TYPE_57__ TYPE_7__ ;
typedef struct TYPE_56__ TYPE_6__ ;
typedef struct TYPE_55__ TYPE_5__ ;
typedef struct TYPE_54__ TYPE_4__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_12__ ;


typedef int uint32_t ;
struct TYPE_59__ {void* ins; } ;
struct TYPE_51__ {size_t info; } ;
struct TYPE_52__ {int lo; int hi; } ;
struct TYPE_50__ {TYPE_2__ u32; } ;
struct TYPE_53__ {TYPE_1__ s; TYPE_12__ nval; } ;
struct TYPE_58__ {scalar_t__ k; TYPE_3__ u; } ;
struct TYPE_57__ {scalar_t__ freereg; int pc; int L; TYPE_9__* bcbase; } ;
struct TYPE_56__ {int asize; int hmask; int node; } ;
struct TYPE_55__ {char tok; int linenumber; TYPE_7__* fs; } ;
struct TYPE_54__ {int val; } ;
typedef int TValue ;
typedef TYPE_4__ Node ;
typedef TYPE_5__ LexState ;
typedef TYPE_6__ GCtab ;
typedef TYPE_7__ FuncState ;
typedef TYPE_8__ ExpDesc ;
typedef scalar_t__ BCReg ;
typedef size_t BCPos ;
typedef int BCLine ;
typedef TYPE_9__ BCInsLine ;
typedef void* BCIns ;


 void* FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 size_t FUNC_3 (TYPE_7__*,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*,int) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_8__*) ;
 scalar_t__ FUNC_13 (TYPE_8__*) ;
 scalar_t__ FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_18 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_5__*,char) ;
 int FUNC_21 (TYPE_5__*,char,char,int ) ;
 int FUNC_22 (TYPE_5__*,char) ;
 int FUNC_23 (int ,TYPE_6__*) ;
 int FUNC_24 (int ) ;
 char FUNC_25 (TYPE_5__*) ;
 TYPE_6__* FUNC_26 (int ,int,int) ;
 int FUNC_27 (int ,TYPE_6__*,int) ;
 int * FUNC_28 (int ,TYPE_6__*,int *) ;
 int FUNC_29 (int) ;
 TYPE_4__* FUNC_30 (int ) ;
 int FUNC_31 (TYPE_6__*) ;
 int FUNC_32 (void**,int ) ;
 int FUNC_33 (void**,int) ;
 int FUNC_34 (TYPE_12__*,int) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int ,int *,TYPE_6__*) ;
 TYPE_6__* FUNC_37 (int *) ;
 scalar_t__ FUNC_38 (int *) ;

__attribute__((used)) static void FUNC_39(LexState *VAR_15, ExpDesc *VAR_16)
{
  FuncState *VAR_17 = VAR_15->fs;
  BCLine VAR_18 = VAR_15->linenumber;
  GCtab *VAR_19 = ((void*)0);
  int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
  uint32_t VAR_23 = 1;
  uint32_t VAR_24 = 0;
  BCReg VAR_25 = VAR_17->freereg;
  BCPos VAR_26 = FUNC_3(VAR_17, VAR_1, VAR_25, 0);
  FUNC_11(VAR_16, VAR_13, VAR_25);
  FUNC_5(VAR_17, 1);
  VAR_25++;
  FUNC_20(VAR_15, '{');
  while (VAR_15->tok != '}') {
    ExpDesc VAR_27, VAR_28;
    VAR_20 = 0;
    if (VAR_15->tok == '[') {
      FUNC_9(VAR_15, &VAR_27);
      if (!FUNC_12(&VAR_27)) FUNC_10(VAR_17, VAR_16, &VAR_27);
      if (FUNC_14(&VAR_27) && FUNC_16(&VAR_27)) VAR_21 = 1; else VAR_24++;
      FUNC_20(VAR_15, '=');
    } else if ((VAR_15->tok == VAR_8 || (!VAR_5 && VAR_15->tok == VAR_7)) &&
        FUNC_25(VAR_15) == '=') {
      FUNC_17(VAR_15, &VAR_27);
      FUNC_20(VAR_15, '=');
      VAR_24++;
    } else {
      FUNC_11(&VAR_27, VAR_11, 0);
      FUNC_34(&VAR_27.u.nval, (int)VAR_23);
      VAR_23++;
      VAR_21 = VAR_20 = 1;
    }
    FUNC_8(VAR_15, &VAR_28);
    if (FUNC_12(&VAR_27) && VAR_27.k != VAR_10 &&
 (VAR_27.k == VAR_12 || FUNC_13(&VAR_28))) {
      TValue VAR_29, *VAR_30;
      if (!VAR_19) {
 BCReg VAR_31;
 VAR_19 = FUNC_26(VAR_17->L, VAR_21 ? VAR_23 : 0, FUNC_19(VAR_24));
 VAR_31 = FUNC_6(VAR_17, FUNC_31(VAR_19), VAR_6);
 VAR_17->bcbase[VAR_26].ins = FUNC_0(VAR_0, VAR_25-1, VAR_31);
      }
      VAR_20 = 0;
      FUNC_15(&VAR_29, &VAR_27);
      VAR_30 = FUNC_28(VAR_17->L, VAR_19, &VAR_29);
      FUNC_23(VAR_17->L, VAR_19);
      if (FUNC_13(&VAR_28)) {
 FUNC_15(VAR_30, &VAR_28);
      } else {
 FUNC_36(VAR_17->L, VAR_30, VAR_19);
 VAR_22 = 1;
 goto nonconst;
      }
    } else {
    nonconst:
      if (VAR_28.k != VAR_9) { FUNC_18(VAR_17, &VAR_28); VAR_20 = 0; }
      if (FUNC_12(&VAR_27)) FUNC_10(VAR_17, VAR_16, &VAR_27);
      FUNC_4(VAR_17, VAR_16, &VAR_28);
    }
    VAR_17->freereg = VAR_25;
    if (!FUNC_22(VAR_15, ',') && !FUNC_22(VAR_15, ';')) break;
  }
  FUNC_21(VAR_15, '}', '{', VAR_18);
  if (VAR_20) {
    BCInsLine *VAR_32 = &VAR_17->bcbase[VAR_17->pc-1];
    ExpDesc VAR_33;
    FUNC_29(FUNC_1(VAR_32->ins) == VAR_25 &&
        FUNC_2(VAR_32->ins) == (VAR_23 > 256 ? VAR_4 : VAR_2));
    FUNC_11(&VAR_33, VAR_11, 0);
    VAR_33.u.nval.u32.lo = VAR_23-1;
    VAR_33.u.nval.u32.hi = 0x43300000;
    if (VAR_23 > 256) { VAR_17->pc--; VAR_32--; }
    VAR_32->ins = FUNC_0(VAR_3, VAR_25, FUNC_7(VAR_17, &VAR_33));
    FUNC_32(&VAR_32[-1].ins, 0);
  }
  if (VAR_26 == VAR_17->pc-1) {
    VAR_16->u.s.info = VAR_26;
    VAR_17->freereg--;
    VAR_16->k = VAR_14;
  } else {
    VAR_16->k = VAR_13;
  }
  if (!VAR_19) {
    BCIns *VAR_34 = &VAR_17->bcbase[VAR_26].ins;
    if (!VAR_21) VAR_23 = 0;
    else if (VAR_23 < 3) VAR_23 = 3;
    else if (VAR_23 > 0x7ff) VAR_23 = 0x7ff;
    FUNC_33(VAR_34, VAR_23|(FUNC_19(VAR_24)<<11));
  } else {
    if (VAR_21 && VAR_19->asize < VAR_23)
      FUNC_27(VAR_17->L, VAR_19, VAR_23-1);
    if (VAR_22) {
      Node *VAR_35 = FUNC_30(VAR_19->node);
      uint32_t VAR_36, VAR_37 = VAR_19->hmask;
      for (VAR_36 = 0; VAR_36 <= VAR_37; VAR_36++) {
 Node *VAR_38 = &VAR_35[VAR_36];
 if (FUNC_38(&VAR_38->val)) {
   FUNC_29(FUNC_37(&VAR_38->val) == VAR_19);
   FUNC_35(&VAR_38->val);
 }
      }
    }
    FUNC_24(VAR_17->L);
  }
}
