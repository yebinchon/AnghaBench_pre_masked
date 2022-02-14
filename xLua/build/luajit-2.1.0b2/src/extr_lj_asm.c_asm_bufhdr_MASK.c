
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int op2; scalar_t__ o; int op1; int r; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(ASMState *VAR_6, IRIns *VAR_7)
{
  Reg VAR_8 = FUNC_6(VAR_6, VAR_7, VAR_2);
  if ((VAR_7->op2 & VAR_0)) {

    IRIns *VAR_9 = FUNC_0(VAR_7->op1);
    if (!(FUNC_7(VAR_9->r) || VAR_9 == VAR_7-1 ||
   (VAR_9 == VAR_7-2 && !FUNC_11(VAR_7-1)))) {
      while (!(VAR_9->o == VAR_1 && !(VAR_9->op2 & VAR_0)))
 VAR_9 = FUNC_0(VAR_9->op1);
      if (FUNC_3(VAR_9->op1)) {
 FUNC_12(VAR_6, FUNC_5(VAR_6, VAR_7->op1, VAR_2));
 VAR_7 = VAR_9;
      }
    }
  } else {
    Reg VAR_10 = FUNC_10(VAR_6, FUNC_13(VAR_2, VAR_8));

    FUNC_2(VAR_6, VAR_7, VAR_10, VAR_8, FUNC_4(VAR_3, VAR_5));
    FUNC_1(VAR_6, VAR_7, VAR_10, VAR_8, FUNC_4(VAR_3, VAR_4));
  }



  FUNC_9(VAR_6, VAR_8, VAR_7->op1);

}
