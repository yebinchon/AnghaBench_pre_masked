
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_6__ {scalar_t__ traceno; size_t nk; int startpt; scalar_t__ nextside; scalar_t__ nextroot; scalar_t__ link; TYPE_1__* ir; } ;
struct TYPE_5__ {scalar_t__ o; } ;
typedef size_t IRRef ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ GCtrace ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(global_State *VAR_2, GCtrace *VAR_3)
{
  IRRef VAR_4;
  if (VAR_3->traceno == 0) return;
  for (VAR_4 = VAR_3->nk; VAR_4 < VAR_1; VAR_4++) {
    IRIns *VAR_5 = &VAR_3->ir[VAR_4];
    if (VAR_5->o == VAR_0)
      FUNC_0(VAR_2, FUNC_3(VAR_5));
  }
  if (VAR_3->link) FUNC_1(VAR_2, VAR_3->link);
  if (VAR_3->nextroot) FUNC_1(VAR_2, VAR_3->nextroot);
  if (VAR_3->nextside) FUNC_1(VAR_2, VAR_3->nextside);
  FUNC_0(VAR_2, FUNC_2(VAR_3->startpt));
}
