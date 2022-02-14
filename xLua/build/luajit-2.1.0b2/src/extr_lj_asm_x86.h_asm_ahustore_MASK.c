
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {int ofs; } ;
struct TYPE_13__ {TYPE_1__ mrm; } ;
struct TYPE_12__ {scalar_t__ r; int t; int i; int op1; int op2; } ;
typedef int RegSet ;
typedef int Reg ;
typedef TYPE_2__ IRIns ;
typedef TYPE_3__ ASMState ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(ASMState *VAR_10, IRIns *VAR_11)
{
  if (VAR_11->r == VAR_4)
    return;
  if (FUNC_8(VAR_11->t)) {
    Reg VAR_12 = FUNC_12(VAR_10, VAR_11->op2, VAR_5);
    FUNC_1(VAR_10, VAR_11->op1, VAR_6);
    FUNC_3(VAR_10, VAR_7, VAR_12, VAR_2);






  } else {
    IRIns *VAR_13 = FUNC_0(VAR_11->op2);
    RegSet VAR_14 = VAR_6;
    Reg VAR_15 = VAR_3;
    if (!FUNC_4(VAR_11->op2)) {
      VAR_15 = FUNC_12(VAR_10, VAR_11->op2, VAR_14);
      FUNC_14(VAR_14, VAR_15);
    }
    FUNC_1(VAR_10, VAR_11->op1, VAR_14);
    if (FUNC_13(VAR_15)) {
      FUNC_3(VAR_10, VAR_9, VAR_15, VAR_2);
    } else if (!FUNC_9(VAR_13->t)) {
      FUNC_11(FUNC_5(VAR_11->t) || (VAR_0 && FUNC_6(VAR_11->t)));
      FUNC_2(VAR_10, VAR_13->i);
      FUNC_3(VAR_10, VAR_8, 0, VAR_2);
    }
    VAR_10->mrm.ofs += 4;
    FUNC_2(VAR_10, (int32_t)FUNC_10(VAR_11->t));
    FUNC_3(VAR_10, VAR_8, 0, VAR_2);
  }
}
