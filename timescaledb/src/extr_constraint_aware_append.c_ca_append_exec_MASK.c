
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_12__ {scalar_t__ num_append_subplans; } ;
struct TYPE_8__ {int ps_TupFromTlist; int ps_ProjInfo; TYPE_3__* ps_ExprContext; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ ss; int custom_ps; } ;
struct TYPE_10__ {int * ecxt_scantuple; } ;
typedef scalar_t__ ExprDoneCond ;
typedef TYPE_3__ ExprContext ;
typedef TYPE_4__ CustomScanState ;
typedef TYPE_5__ ConstraintAwareAppendState ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static TupleTableSlot *
FUNC_5(CustomScanState *VAR_2)
{
 ConstraintAwareAppendState *VAR_3 = (ConstraintAwareAppendState *) VAR_2;
 TupleTableSlot *VAR_4;
 ExprContext *VAR_5 = VAR_2->ss.ps.ps_ExprContext;
 if (VAR_3->num_append_subplans == 0)
  return ((void*)0);
 FUNC_2(VAR_5);

 while (1)
 {
  VAR_4 = FUNC_0(FUNC_4(VAR_2->custom_ps));

  if (FUNC_3(VAR_4))
   return ((void*)0);

  if (!VAR_2->ss.ps.ps_ProjInfo)
   return VAR_4;

  VAR_5->ecxt_scantuple = VAR_4;
  return FUNC_1(VAR_2->ss.ps.ps_ProjInfo);

 }
}
