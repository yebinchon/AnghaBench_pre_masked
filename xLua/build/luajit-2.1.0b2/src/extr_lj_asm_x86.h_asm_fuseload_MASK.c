
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int int32_t ;
struct TYPE_20__ {int ofs; void* idx; void* base; } ;
struct TYPE_22__ {int freeset; int modset; TYPE_1__ mrm; } ;
struct TYPE_21__ {scalar_t__ o; int op2; int s; scalar_t__ op1; int t; int r; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
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
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,int ,scalar_t__,int ) ;
 void* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ,int) ;
 int FUNC_17 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static Reg FUNC_22(ASMState *VAR_25, IRRef VAR_26, RegSet VAR_27)
{
  IRIns *VAR_28 = FUNC_0(VAR_26);
  if (FUNC_18(VAR_28->r)) {
    if (VAR_27 != VAR_22) {
      FUNC_20(VAR_25, VAR_28->r);
      return VAR_28->r;
    }
  fusespill:

    VAR_25->mrm.base = VAR_19;
    VAR_25->mrm.ofs = FUNC_21(VAR_25, VAR_28);
    VAR_25->mrm.idx = VAR_21;
    return VAR_20;
  }
  if (VAR_28->o == VAR_11) {
    RegSet VAR_29 = VAR_25->freeset & ~VAR_25->modset & VAR_23;
    FUNC_12(VAR_27 != VAR_22);
    if (!(VAR_29 & (VAR_29-1))) {
      VAR_25->mrm.ofs = FUNC_15(FUNC_5(VAR_28));
      VAR_25->mrm.base = VAR_25->mrm.idx = VAR_21;
      return VAR_20;
    }
  } else if (VAR_28->o == VAR_10) {
    RegSet VAR_30 = VAR_25->freeset & ~VAR_25->modset & VAR_24;
    FUNC_12(VAR_27 != VAR_22);
    if (!(VAR_30 & (VAR_30-1))) {
      VAR_25->mrm.ofs = FUNC_15(FUNC_4(VAR_28));
      VAR_25->mrm.base = VAR_25->mrm.idx = VAR_21;
      return VAR_20;
    }
  } else if (FUNC_13(VAR_25, VAR_26)) {
    RegSet VAR_31 = (VAR_27 & VAR_24) ? VAR_27 : VAR_24;
    if (VAR_28->o == VAR_13) {
      if (!(VAR_28->op2 & (VAR_3|VAR_1)) &&
   FUNC_14(VAR_25, VAR_26, VAR_12, 0)) {
 VAR_25->mrm.base = (uint8_t)FUNC_16(VAR_25, VAR_18, VAR_31);
 VAR_25->mrm.ofs = 8*((int32_t)VAR_28->op1-1) + ((VAR_28->op2&VAR_2)?4:0);
 VAR_25->mrm.idx = VAR_21;
 return VAR_20;
      }
    } else if (VAR_28->o == VAR_7) {

      if ((FUNC_8(VAR_28->t) || FUNC_9(VAR_28->t) || FUNC_7(VAR_28->t)) &&
   FUNC_14(VAR_25, VAR_26, VAR_8, 0)) {
 FUNC_2(VAR_25, VAR_28, VAR_31);
 return VAR_20;
      }
    } else if (VAR_28->o == VAR_6 || VAR_28->o == VAR_9 || VAR_28->o == VAR_14) {
      if (FUNC_14(VAR_25, VAR_26, VAR_28->o + VAR_0, 0)) {
 FUNC_1(VAR_25, VAR_28->op1, VAR_31);
 return VAR_20;
      }
    } else if (VAR_28->o == VAR_16) {



      if ((!FUNC_10(VAR_28->t, VAR_4, VAR_5)) &&
   FUNC_14(VAR_25, VAR_26, VAR_17, 0)) {
 FUNC_3(VAR_25, VAR_28->op1, VAR_31);
 return VAR_20;
      }
    } else if (VAR_28->o == VAR_15) {
      FUNC_1(VAR_25, VAR_28->op1, VAR_31);
      return VAR_20;
    }
  }
  if (!(VAR_25->freeset & VAR_27) && !FUNC_6(VAR_26) &&
      (VAR_27 == VAR_22 || FUNC_19(VAR_28->s) || FUNC_11(VAR_25, VAR_26)))
    goto fusespill;
  return FUNC_17(VAR_25, VAR_26, VAR_27);
}
