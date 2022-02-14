
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef int x86Op ;
typedef scalar_t__ x86Arith ;
typedef int int32_t ;
struct TYPE_22__ {int* flagmcp; int* mcp; } ;
struct TYPE_21__ {scalar_t__ op1; scalar_t__ op2; int t; } ;
struct TYPE_20__ {int r; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int MCode ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_19__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static void FUNC_21(ASMState *VAR_8, IRIns *VAR_9, x86Arith VAR_10)
{
  IRRef VAR_11 = VAR_9->op1;
  IRRef VAR_12 = VAR_9->op2;
  RegSet VAR_13 = VAR_2;
  Reg VAR_14, VAR_15;
  int32_t VAR_16 = 0;
  if (VAR_8->flagmcp == VAR_8->mcp) {
    MCode *VAR_17 = VAR_8->mcp + ((VAR_1 && *VAR_8->mcp < VAR_3) ? 3 : 2);
    if ((VAR_17[1] & 15) < 14) {
      if ((VAR_17[1] & 15) >= 12) VAR_17[1] -= 4;
      VAR_8->flagmcp = ((void*)0);
      VAR_8->mcp = VAR_17;
    }
  }
  VAR_15 = FUNC_0(VAR_12)->r;
  if (FUNC_16(VAR_15)) {
    FUNC_20(VAR_13, VAR_15);
    FUNC_19(VAR_8, VAR_15);
  }
  VAR_14 = FUNC_15(VAR_8, VAR_9, VAR_13);
  if (VAR_11 == VAR_12) {
    VAR_15 = VAR_14;
  } else if (FUNC_18(VAR_15) && !FUNC_6(VAR_8, VAR_12, &VAR_16)) {
    if (FUNC_7(VAR_8, VAR_9)) {
      IRRef VAR_18 = VAR_11; VAR_11 = VAR_12; VAR_12 = VAR_18;
    }
    VAR_15 = FUNC_4(VAR_8, VAR_12, FUNC_20(VAR_13, VAR_14), FUNC_13(VAR_9->t));
  }
  if (FUNC_14(VAR_9->t))
    FUNC_5(VAR_8, VAR_0);
  if (VAR_10 != VAR_7) {
    if (FUNC_16(VAR_15))
      FUNC_12(VAR_8, FUNC_3(VAR_10), FUNC_1(VAR_9, VAR_14), VAR_15);
    else
      FUNC_9(VAR_8, FUNC_2(VAR_10), FUNC_1(VAR_9, VAR_14), VAR_16);
  } else if (FUNC_16(VAR_15)) {
    FUNC_12(VAR_8, VAR_4, FUNC_1(VAR_9, VAR_14), VAR_15);
  } else {

    Reg VAR_19 = FUNC_4(VAR_8, VAR_11, VAR_2, FUNC_13(VAR_9->t));
    x86Op VAR_20;
    if (FUNC_8(VAR_16)) { FUNC_11(VAR_8, VAR_16); VAR_20 = VAR_6;
    } else { FUNC_10(VAR_8, VAR_16); VAR_20 = VAR_5; }
    FUNC_12(VAR_8, VAR_20, FUNC_1(VAR_9, VAR_14), VAR_19);
    return;
  }
  FUNC_17(VAR_8, VAR_14, VAR_11);
}
