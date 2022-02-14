
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int gcsteps; } ;
struct TYPE_8__ {int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef TYPE_2__ ASMState ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(ASMState *VAR_2, IRIns *VAR_3)
{
  const CCallInfo *VAR_4 = &VAR_1[VAR_0];
  IRRef VAR_5[1];
  VAR_5[0] = VAR_3->op1;
  VAR_2->gcsteps++;
  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_2, VAR_4, VAR_5);
}
