
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_6__ {scalar_t__ traceno; size_t nk; int startpt; scalar_t__ nextside; scalar_t__ nextroot; scalar_t__ link; TYPE_1__* ir; } ;
struct TYPE_5__ {scalar_t__ o; int t; } ;
typedef size_t IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(global_State *VAR_3, GCtrace *VAR_4)
{
  IRRef VAR_5;
  if (VAR_4->traceno == 0) return;
  for (VAR_5 = VAR_4->nk; VAR_5 < VAR_2; VAR_5++) {
    IRIns *VAR_6 = &VAR_4->ir[VAR_5];
    if (VAR_6->o == VAR_0)
      FUNC_0(VAR_3, FUNC_3(VAR_6));
    if (FUNC_4(VAR_6->t) && VAR_6->o != VAR_1)
      VAR_5++;
  }
  if (VAR_4->link) FUNC_1(VAR_3, VAR_4->link);
  if (VAR_4->nextroot) FUNC_1(VAR_3, VAR_4->nextroot);
  if (VAR_4->nextside) FUNC_1(VAR_3, VAR_4->nextside);
  FUNC_0(VAR_3, FUNC_2(VAR_4->startpt));
}
