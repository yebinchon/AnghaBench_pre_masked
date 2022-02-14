
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int gcsteps; } ;
struct TYPE_8__ {int op2; int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_3, IRIns *VAR_4)
{
  const CCallInfo *VAR_5 = &VAR_2[VAR_1];
  IRRef VAR_6[3];
  VAR_6[0] = VAR_0;
  VAR_6[1] = VAR_4->op1;
  VAR_6[2] = VAR_4->op2;
  VAR_3->gcsteps++;
  FUNC_1(VAR_3, VAR_4, VAR_5);
  FUNC_0(VAR_3, VAR_5, VAR_6);
}
