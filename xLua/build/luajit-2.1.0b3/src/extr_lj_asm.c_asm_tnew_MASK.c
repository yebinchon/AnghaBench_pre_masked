
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int gcsteps; } ;
struct TYPE_10__ {int op1; int op2; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*,int const*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*) ;
 int * VAR_3 ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_4, IRIns *VAR_5)
{
  const CCallInfo *VAR_6 = &VAR_3[VAR_2];
  IRRef VAR_7[2];
  VAR_7[0] = VAR_0;
  VAR_7[1] = VAR_1;
  VAR_4->gcsteps++;
  FUNC_1(VAR_4, VAR_5, VAR_6);
  FUNC_0(VAR_4, VAR_6, VAR_7);
  FUNC_2(VAR_4, VAR_5->op1 | (VAR_5->op2 << 24), FUNC_3(VAR_4, VAR_1));
}
