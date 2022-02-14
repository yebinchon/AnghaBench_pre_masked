
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int flags; int* mcp; } ;
struct TYPE_19__ {int op1; int r; int op2; } ;
typedef int RegSet ;
typedef int Reg ;
typedef int MCode ;
typedef TYPE_1__ IRIns ;
typedef scalar_t__ IRFPMathOp ;
typedef TYPE_2__ ASMState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static void FUNC_14(ASMState *VAR_17, IRIns *VAR_18)
{
  IRFPMathOp VAR_19 = (IRFPMathOp)VAR_18->op2;
  if (VAR_19 == VAR_4) {
    Reg VAR_20 = FUNC_8(VAR_17, VAR_18, VAR_11);
    Reg VAR_21 = FUNC_4(VAR_17, VAR_18->op1, VAR_11);
    FUNC_7(VAR_17, VAR_13, VAR_20, VAR_21);
  } else if (VAR_19 <= VAR_5) {
    if (VAR_17->flags & VAR_6) {
      Reg VAR_22 = FUNC_8(VAR_17, VAR_18, VAR_11);
      Reg VAR_23 = FUNC_4(VAR_17, VAR_18->op1, VAR_11);





      FUNC_6(VAR_17, 0x09 + VAR_19);
      FUNC_7(VAR_17, VAR_12, VAR_22, VAR_23);
      if (VAR_7 && VAR_17->mcp[1] != (MCode)(VAR_12 >> 16)) {
 VAR_17->mcp[0] = VAR_17->mcp[1]; VAR_17->mcp[1] = 0x0f;
      }
      *--VAR_17->mcp = 0x66;
    } else {

      RegSet VAR_24 = FUNC_1(VAR_9, VAR_10+1)|FUNC_0(VAR_8);
      if (FUNC_11(VAR_18->r))
 FUNC_13(VAR_24, VAR_18->r);
      FUNC_10(VAR_17, VAR_24);
      FUNC_9(VAR_17, VAR_18, VAR_9);
      FUNC_5(VAR_17, VAR_19 == VAR_3 ? VAR_15 :
      VAR_19 == VAR_1 ? VAR_14 : VAR_16);
      FUNC_12(VAR_17, VAR_9, VAR_18->op1);
    }
  } else if (VAR_19 == VAR_2 && FUNC_3(VAR_17, VAR_18)) {

  } else {
    FUNC_2(VAR_17, VAR_18, VAR_0 + VAR_19);
  }
}
