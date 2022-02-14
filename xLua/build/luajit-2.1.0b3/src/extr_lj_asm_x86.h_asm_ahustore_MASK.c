
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_20__ {int ofs; } ;
struct TYPE_23__ {TYPE_3__ mrm; TYPE_1__* J; } ;
struct TYPE_22__ {scalar_t__ r; int i; int t; int op1; int op2; } ;
struct TYPE_19__ {int lo; int hi; } ;
struct TYPE_21__ {TYPE_2__ u32; } ;
struct TYPE_18__ {int L; } ;
typedef TYPE_4__ TValue ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_5__ IRIns ;
typedef TYPE_6__ ASMState ;


 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*,int ,int,int ) ;
 int FUNC_4 (TYPE_6__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_6__*,int ,int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ FUNC_18 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_19(ASMState *VAR_13, IRIns *VAR_14)
{
  if (VAR_14->r == VAR_5)
    return;
  if (FUNC_9(VAR_14->t)) {
    Reg VAR_15 = FUNC_14(VAR_13, VAR_14->op2, VAR_6);
    FUNC_1(VAR_13, VAR_14->op1, VAR_7);
    FUNC_3(VAR_13, VAR_9, VAR_15, VAR_3);
  } else {
    IRIns *VAR_16 = FUNC_0(VAR_14->op2);
    RegSet VAR_17 = VAR_7;
    Reg VAR_18 = VAR_4;
    if (!FUNC_5(VAR_14->op2)) {
      VAR_18 = FUNC_14(VAR_13, VAR_14->op2, VAR_17);
      FUNC_16(VAR_17, VAR_18);
    }
    FUNC_1(VAR_13, VAR_14->op1, VAR_17);
    if (FUNC_15(VAR_18)) {
      FUNC_3(VAR_13, VAR_11, VAR_18, VAR_3);
    } else if (!FUNC_10(VAR_16->t)) {
      FUNC_13(FUNC_6(VAR_14->t) || (VAR_0 && FUNC_7(VAR_14->t)));
      FUNC_2(VAR_13, VAR_16->i);
      FUNC_3(VAR_13, VAR_10, 0, VAR_3);
    }
    VAR_13->mrm.ofs += 4;




    FUNC_2(VAR_13, (int32_t)FUNC_11(VAR_14->t));

    FUNC_3(VAR_13, VAR_10, 0, VAR_3);
  }
}
