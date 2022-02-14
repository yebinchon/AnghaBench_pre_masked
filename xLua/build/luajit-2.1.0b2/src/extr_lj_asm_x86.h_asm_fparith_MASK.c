
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86Op ;
struct TYPE_7__ {int r; } ;
struct TYPE_6__ {scalar_t__ op1; scalar_t__ op2; } ;
typedef int RegSet ;
typedef int Reg ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef int ASMState ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(ASMState *VAR_1, IRIns *VAR_2, x86Op VAR_3)
{
  IRRef VAR_4 = VAR_2->op1;
  IRRef VAR_5 = VAR_2->op2;
  RegSet VAR_6 = VAR_0;
  Reg VAR_7;
  Reg VAR_8 = FUNC_0(VAR_5)->r;
  if (FUNC_5(VAR_8)) {
    FUNC_9(VAR_6, VAR_8);
    FUNC_8(VAR_1, VAR_8);
  }
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6);
  if (VAR_4 == VAR_5) {
    VAR_8 = VAR_7;
  } else if (FUNC_7(VAR_8)) {
    if (FUNC_2(VAR_1, VAR_2)) {
      IRRef VAR_9 = VAR_4; VAR_4 = VAR_5; VAR_5 = VAR_9;
    }
    VAR_8 = FUNC_1(VAR_1, VAR_5, FUNC_9(VAR_6, VAR_7));
  }
  FUNC_3(VAR_1, VAR_3, VAR_7, VAR_8);
  FUNC_6(VAR_1, VAR_7, VAR_4);
}
