
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_14__ {size_t current; size_t num_subplans; int (* choose_next_subplan ) (TYPE_5__*) ;int ** subplanstates; } ;
struct TYPE_10__ {int ps_TupFromTlist; int * ps_ProjInfo; int ps_ResultTupleSlot; TYPE_3__* ps_ExprContext; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;
struct TYPE_13__ {TYPE_2__ ss; } ;
struct TYPE_12__ {int * ecxt_scantuple; } ;
typedef int PlanState ;
typedef scalar_t__ ExprDoneCond ;
typedef TYPE_3__ ExprContext ;
typedef TYPE_4__ CustomScanState ;
typedef TYPE_5__ ChunkAppendState ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_9(CustomScanState *VAR_4)
{
 ChunkAppendState *VAR_5 = (ChunkAppendState *) VAR_4;
 TupleTableSlot *VAR_6;
 ExprContext *VAR_7 = VAR_4->ss.ps.ps_ExprContext;





 if (VAR_5->current == VAR_2)
  VAR_5->choose_next_subplan(VAR_5);
 while (1)
 {
  PlanState *VAR_8;

  FUNC_1();

  if (VAR_5->current == VAR_3)
   return FUNC_2(VAR_4->ss.ps.ps_ResultTupleSlot);

  FUNC_0(VAR_5->current >= 0 && VAR_5->current < VAR_5->num_subplans);

  VAR_8 = VAR_5->subplanstates[VAR_5->current];




  VAR_6 = FUNC_3(VAR_8);

  if (!FUNC_6(VAR_6))
  {




   if (VAR_4->ss.ps.ps_ProjInfo == ((void*)0))
    return VAR_6;

   FUNC_5(VAR_7);
   VAR_7->ecxt_scantuple = VAR_6;
   return FUNC_4(VAR_4->ss.ps.ps_ProjInfo);

  }

  VAR_5->choose_next_subplan(VAR_5);


 }
}
