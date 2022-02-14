
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ r; int op2; int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef int ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int const*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * VAR_4 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_5, IRIns *VAR_6)
{
  const CCallInfo *VAR_7 = &VAR_4[VAR_2];
  IRRef VAR_8[3];
  if (VAR_6->r == VAR_3)
    return;
  VAR_8[0] = VAR_0;
  VAR_8[1] = VAR_6->op1;
  VAR_8[2] = VAR_1;
  FUNC_1(VAR_5, VAR_6, VAR_7);
  FUNC_0(VAR_5, VAR_7, VAR_8);
  FUNC_2(VAR_5, FUNC_3(VAR_5, VAR_1), VAR_6->op2);
}
