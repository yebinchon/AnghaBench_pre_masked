
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int int32_t ;
struct TYPE_14__ {int J; } ;
struct TYPE_13__ {int r; } ;
struct TYPE_12__ {int jit_base; } ;
typedef scalar_t__ RegSet ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ExitNo ;
typedef int BCReg ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 TYPE_11__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(ASMState *VAR_14, BCReg VAR_15,
       IRIns *VAR_16, RegSet VAR_17, ExitNo VAR_18)
{

  Reg VAR_19 = VAR_16 ? VAR_16->r : VAR_2;
  Reg VAR_20 = VAR_17 ? FUNC_13(VAR_17) : VAR_3;
  FUNC_5(VAR_14, VAR_0, FUNC_8(VAR_14->J, VAR_18));
  if (VAR_17 == VAR_6)
    FUNC_6(VAR_14, VAR_7, VAR_20|VAR_1, VAR_4, 0);
  else
    FUNC_12(VAR_14, VAR_20);
  FUNC_4(VAR_14, FUNC_1(VAR_9), VAR_20, (int32_t)(8*VAR_15));
  if (FUNC_11(VAR_19) && VAR_19 != VAR_20)
    FUNC_7(VAR_14, FUNC_2(VAR_10), VAR_20, VAR_19);
  else
    FUNC_6(VAR_14, FUNC_2(VAR_10), VAR_20, VAR_5,
       FUNC_10(&FUNC_0(VAR_14->J)->jit_base));
  FUNC_6(VAR_14, VAR_7, VAR_20, VAR_20, FUNC_9(VAR_12, VAR_13));
  FUNC_3(VAR_14, VAR_20, VAR_11);
  if (VAR_17 == VAR_6)
    FUNC_6(VAR_14, VAR_8, VAR_20|VAR_1, VAR_4, 0);
}
