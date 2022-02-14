
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int int32_t ;
struct TYPE_15__ {int J; } ;
struct TYPE_14__ {int r; } ;
struct TYPE_13__ {int jit_base; } ;
typedef scalar_t__ RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ExitNo ;
typedef int BCReg ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_12__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int,int,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(ASMState *VAR_16, BCReg VAR_17,
       IRIns *VAR_18, RegSet VAR_19, ExitNo VAR_20)
{

  Reg VAR_21 = VAR_18 ? VAR_18->r : VAR_3;
  Reg VAR_22 = VAR_19 ? FUNC_14(VAR_19) : VAR_5;
  FUNC_6(VAR_16, VAR_0, FUNC_9(VAR_16->J, VAR_20));
  if (VAR_19 == VAR_8)
    FUNC_7(VAR_16, VAR_9, VAR_22|VAR_1, VAR_6, 0);
  else
    FUNC_13(VAR_16, VAR_22);
  FUNC_5(VAR_16, FUNC_1(VAR_11), VAR_22|VAR_2, (int32_t)(8*VAR_17));
  if (FUNC_12(VAR_21) && VAR_21 != VAR_22)
    FUNC_8(VAR_16, FUNC_2(VAR_12), VAR_22|VAR_2, VAR_21);
  else




    FUNC_7(VAR_16, FUNC_2(VAR_12), VAR_22, VAR_7,
       FUNC_11(&FUNC_0(VAR_16->J)->jit_base));

  FUNC_7(VAR_16, VAR_9, VAR_22|VAR_2, VAR_22, FUNC_10(VAR_14, VAR_15));
  FUNC_4(VAR_16, VAR_22, VAR_13);
  if (VAR_19 == VAR_8)
    FUNC_7(VAR_16, VAR_10, VAR_22|VAR_1, VAR_6, 0);
}
