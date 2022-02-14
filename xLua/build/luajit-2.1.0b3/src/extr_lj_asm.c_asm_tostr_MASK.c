
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int gcsteps; } ;
struct TYPE_10__ {scalar_t__ op2; int op1; } ;
typedef int IRRef ;
typedef TYPE_1__ IRIns ;
typedef int CCallInfo ;
typedef TYPE_2__ ASMState ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,int const*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int * VAR_7 ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(ASMState *VAR_8, IRIns *VAR_9)
{
  const CCallInfo *VAR_10;
  IRRef VAR_11[2];
  VAR_11[0] = VAR_0;
  VAR_8->gcsteps++;
  if (VAR_9->op2 == VAR_6) {
    VAR_11[1] = VAR_1;
    VAR_10 = &VAR_7[VAR_4];
  } else {
    VAR_11[1] = VAR_9->op1;
    if (VAR_9->op2 == VAR_5)
      VAR_10 = &VAR_7[VAR_3];
    else
      VAR_10 = &VAR_7[VAR_2];
  }
  FUNC_1(VAR_8, VAR_9, VAR_10);
  FUNC_0(VAR_8, VAR_10, VAR_11);
  if (VAR_9->op2 == VAR_6)
    FUNC_2(VAR_8, FUNC_3(VAR_8, VAR_1), VAR_9->op1);
}
