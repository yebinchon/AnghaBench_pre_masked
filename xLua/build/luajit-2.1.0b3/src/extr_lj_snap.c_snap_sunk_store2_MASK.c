
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ir; } ;
struct TYPE_6__ {scalar_t__ o; size_t op1; } ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(GCtrace *VAR_6, IRIns *VAR_7, IRIns *VAR_8)
{
  if (VAR_8->o == VAR_1 || VAR_8->o == VAR_4 ||
      VAR_8->o == VAR_2 || VAR_8->o == VAR_5) {
    IRIns *VAR_9 = &VAR_6->ir[VAR_8->op1];
    if (VAR_9->o == VAR_0 || VAR_9->o == VAR_3)
      VAR_9 = &VAR_6->ir[VAR_9->op1];
    return (&VAR_6->ir[VAR_9->op1] == VAR_7);
  }
  return 0;
}
