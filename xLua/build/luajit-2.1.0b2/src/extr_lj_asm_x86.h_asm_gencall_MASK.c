
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_27__ {scalar_t__ hi; scalar_t__ lo; } ;
struct TYPE_31__ {TYPE_1__ u32; } ;
struct TYPE_30__ {int* mcp; int freeset; } ;
struct TYPE_29__ {int flags; scalar_t__ func; } ;
struct TYPE_28__ {scalar_t__ o; int i; int t; int r; } ;
struct TYPE_26__ {int u64; } ;
typedef int Reg ;
typedef int MCode ;
typedef scalar_t__ IRRef ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ CCallInfo ;
typedef TYPE_4__ ASMState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__ const*) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_4__*,int,int ,int) ;
 int FUNC_10 (TYPE_4__*,int ,int,int ,int) ;
 int FUNC_11 (TYPE_4__*,int ,int,int) ;
 TYPE_10__* FUNC_12 (TYPE_2__*) ;
 TYPE_8__* FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_20 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 int FUNC_23 (int ,int) ;

__attribute__((used)) static void FUNC_24(ASMState *VAR_22, const CCallInfo *VAR_23, IRRef *VAR_24)
{
  uint32_t VAR_25, VAR_26 = FUNC_0(VAR_23);
  int32_t VAR_27 = VAR_17;







  uint32_t VAR_28 = 0;
  if ((VAR_23->flags & VAR_3) != VAR_1) {
    if ((VAR_23->flags & VAR_3) == VAR_4)
      VAR_28 = (VAR_9 & 31);
    else if ((VAR_23->flags & VAR_3) == VAR_2)
      VAR_28 = VAR_9;
  }

  if ((void *)VAR_23->func)
    FUNC_4(VAR_22, VAR_23->func);
  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
    IRRef VAR_29 = VAR_24[VAR_25];
    IRIns *VAR_30 = FUNC_1(VAR_29);
    Reg VAR_31;
    if (VAR_29 && FUNC_16(VAR_30->t)) {
      VAR_31 = 0;
    } else {
      VAR_31 = VAR_28 & 31; VAR_28 >>= 5;
      if (!VAR_29) continue;
    }

    if (VAR_31) {
      if (VAR_31 < VAR_14 && VAR_29 < VAR_0) {





   FUNC_5(VAR_22, VAR_31, VAR_30->i);
      } else {
 FUNC_18(FUNC_23(VAR_22->freeset, VAR_31));
 if (FUNC_21(VAR_30->r)) {
   FUNC_22(VAR_22, VAR_30->r);
   FUNC_8(VAR_22, VAR_30, VAR_31, VAR_30->r);
 } else {
   FUNC_20(VAR_22, VAR_29, FUNC_2(VAR_31));
 }
      }
    } else if (FUNC_16(VAR_30->t)) {
      FUNC_18(!(FUNC_15(VAR_30->t) && FUNC_14(VAR_29)));
      if (VAR_7 && (VAR_27 & 4) && FUNC_14(VAR_29)) {

 FUNC_7(VAR_22, VAR_13, VAR_27, (int32_t)FUNC_13(VAR_30)->u32.lo);
 FUNC_7(VAR_22, VAR_13, VAR_27+4, (int32_t)FUNC_13(VAR_30)->u32.hi);
      } else {
 VAR_31 = FUNC_19(VAR_22, VAR_29, VAR_15);
 FUNC_10(VAR_22, FUNC_17(VAR_30->t) ? VAR_20 : VAR_21,
    VAR_31, VAR_13, VAR_27);
      }
      VAR_27 += (VAR_7 && FUNC_15(VAR_30->t)) ? 4 : 8;
    } else {
      if (VAR_7 && VAR_29 < VAR_0) {
 FUNC_7(VAR_22, VAR_13, VAR_27, VAR_30->i);
      } else {
 VAR_31 = FUNC_19(VAR_22, VAR_29, VAR_16);
 FUNC_9(VAR_22, VAR_11 + VAR_31, VAR_13, VAR_27);
      }
      VAR_27 += sizeof(intptr_t);
    }
    FUNC_3(VAR_22);
  }



}
