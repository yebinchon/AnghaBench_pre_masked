
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nins; TYPE_1__* ir; } ;
struct TYPE_4__ {scalar_t__ o; scalar_t__ op1; scalar_t__ op2; int prev; } ;
typedef scalar_t__ SnapNo ;
typedef int RegSP ;
typedef scalar_t__ IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static RegSP FUNC_0(GCtrace *VAR_1, SnapNo VAR_2, IRRef VAR_3, RegSP VAR_4)
{
  IRIns *VAR_5;
  for (VAR_5 = &VAR_1->ir[VAR_1->nins-1]; VAR_5->o == VAR_0; VAR_5--)
    if (VAR_5->op1 == VAR_3 && VAR_5->op2 <= VAR_2)
      VAR_4 = VAR_5->prev;
  return VAR_4;
}
