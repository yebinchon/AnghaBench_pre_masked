
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int int32_t ;
struct TYPE_22__ {int ofs; void* idx; void* base; } ;
struct TYPE_25__ {int freeset; int modset; TYPE_1__ mrm; int J; } ;
struct TYPE_24__ {scalar_t__ o; int op2; scalar_t__ op1; int s; int t; int r; } ;
struct TYPE_23__ {int jit_base; } ;
typedef int RegSet ;
typedef int Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 TYPE_20__* FUNC_1 (int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*,scalar_t__) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_18 (TYPE_3__*,scalar_t__,int) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static Reg FUNC_23(ASMState *VAR_29, IRRef VAR_30, RegSet VAR_31)
{
  IRIns *VAR_32 = FUNC_0(VAR_30);
  if (FUNC_19(VAR_32->r)) {
    if (VAR_31 != VAR_26) {
      FUNC_21(VAR_29, VAR_32->r);
      return VAR_32->r;
    }
  fusespill:

    VAR_29->mrm.base = VAR_23;
    VAR_29->mrm.ofs = FUNC_22(VAR_29, VAR_32);
    VAR_29->mrm.idx = VAR_25;
    return VAR_24;
  }
  if (VAR_32->o == VAR_11) {
    RegSet VAR_33 = VAR_29->freeset & ~VAR_29->modset & VAR_27;
    FUNC_13(VAR_31 != VAR_26);
    if (!(VAR_33 & (VAR_33-1)))
      return FUNC_4(VAR_29, VAR_32);
  } else if (VAR_30 == VAR_20 || VAR_32->o == VAR_10) {
    RegSet VAR_34 = VAR_29->freeset & ~VAR_29->modset & VAR_28;
    FUNC_13(VAR_31 != VAR_26);
    if (!(VAR_34 & (VAR_34-1))) {
      if (VAR_30 == VAR_20) {




 VAR_29->mrm.ofs = FUNC_16(&FUNC_1(VAR_29->J)->jit_base);
 VAR_29->mrm.base = VAR_25;

 VAR_29->mrm.idx = VAR_25;
 return VAR_24;
      } else {
 return FUNC_4(VAR_29, VAR_32);
      }
    }
  } else if (FUNC_14(VAR_29, VAR_30)) {
    RegSet VAR_35 = (VAR_31 & VAR_28) ? VAR_31 : VAR_28;
    if (VAR_32->o == VAR_13) {
      if (!(VAR_32->op2 & (VAR_3|VAR_1)) &&
   FUNC_15(VAR_29, VAR_30, VAR_12, 0) &&
   !(VAR_19 && FUNC_8(VAR_32->t))) {
 VAR_29->mrm.base = (uint8_t)FUNC_17(VAR_29, VAR_20, VAR_35);
 VAR_29->mrm.ofs = 8*((int32_t)VAR_32->op1-1-VAR_18) +
        (!VAR_18 && (VAR_32->op2 & VAR_2) ? 4 : 0);
 VAR_29->mrm.idx = VAR_25;
 return VAR_24;
      }
    } else if (VAR_32->o == VAR_7) {

      if ((FUNC_9(VAR_32->t) || FUNC_10(VAR_32->t) || FUNC_8(VAR_32->t)) &&
   FUNC_15(VAR_29, VAR_30, VAR_8, 0)) {
 FUNC_3(VAR_29, VAR_32, VAR_35);
 return VAR_24;
      }
    } else if (VAR_32->o == VAR_6 || VAR_32->o == VAR_9 || VAR_32->o == VAR_14) {
      if (FUNC_15(VAR_29, VAR_30, VAR_32->o + VAR_0, 0) &&
   !(VAR_19 && FUNC_8(VAR_32->t))) {
 FUNC_2(VAR_29, VAR_32->op1, VAR_35);
 return VAR_24;
      }
    } else if (VAR_32->o == VAR_16) {



      if ((!FUNC_11(VAR_32->t, VAR_4, VAR_5)) &&
   FUNC_15(VAR_29, VAR_30, VAR_17, 0)) {
 FUNC_5(VAR_29, VAR_32->op1, VAR_35);
 return VAR_24;
      }
    } else if (VAR_32->o == VAR_15 && !(VAR_19 && FUNC_8(VAR_32->t))) {
      FUNC_2(VAR_29, VAR_32->op1, VAR_35);
      return VAR_24;
    }
  }
  if (VAR_32->o == VAR_7 && VAR_32->op1 == VAR_21) {
    FUNC_3(VAR_29, VAR_32, VAR_26);
    return VAR_24;
  }
  if (!(VAR_29->freeset & VAR_31) && !FUNC_7(VAR_30) &&
      (VAR_31 == VAR_26 || FUNC_20(VAR_32->s) || FUNC_12(VAR_29, VAR_30)))
    goto fusespill;
  return FUNC_18(VAR_29, VAR_30, VAR_31);
}
