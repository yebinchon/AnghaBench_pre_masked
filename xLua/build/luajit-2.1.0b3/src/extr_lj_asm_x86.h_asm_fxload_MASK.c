
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int x86Op ;
struct TYPE_5__ {scalar_t__ o; int t; int op1; } ;
typedef int Reg ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_11(ASMState *VAR_13, IRIns *VAR_14)
{
  Reg VAR_15 = FUNC_10(VAR_13, VAR_14, FUNC_5(VAR_14->t) ? VAR_4 : VAR_5);
  x86Op VAR_16;
  if (VAR_14->o == VAR_0)
    FUNC_0(VAR_13, VAR_14, VAR_5);
  else
    FUNC_1(VAR_13, VAR_14->op1, VAR_5);

  switch (FUNC_8(VAR_14->t)) {
  case 131: VAR_16 = VAR_9; break;
  case 128: VAR_16 = VAR_11; break;
  case 132: VAR_16 = VAR_10; break;
  case 129: VAR_16 = VAR_12; break;
  case 130: VAR_16 = VAR_7; break;
  case 133: VAR_16 = VAR_8; break;
  default:
    if (VAR_1 && FUNC_3(VAR_14->t))
      VAR_15 |= VAR_2;
    else
      FUNC_9(FUNC_6(VAR_14->t) || FUNC_7(VAR_14->t) || FUNC_4(VAR_14->t));
    VAR_16 = VAR_6;
    break;
  }
  FUNC_2(VAR_13, VAR_16, VAR_15, VAR_3);
}
