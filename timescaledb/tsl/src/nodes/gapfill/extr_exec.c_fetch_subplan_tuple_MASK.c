
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {int ps_TupFromTlist; int ps_ProjInfo; TYPE_3__* ps_ExprContext; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_10__ {TYPE_2__ ss; int custom_ps; } ;
struct TYPE_9__ {int * ecxt_scantuple; } ;
typedef scalar_t__ ExprDoneCond ;
typedef TYPE_3__ ExprContext ;
typedef TYPE_4__ CustomScanState ;


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
 TupleTableSlot *VAR_3;
 ExprContext *VAR_4 = VAR_2->ss.ps.ps_ExprContext;
 FUNC_2(VAR_4);

 while (1)
 {
  VAR_3 = FUNC_0(FUNC_4(VAR_2->custom_ps));

  if (FUNC_3(VAR_3))
   return ((void*)0);

  if (!VAR_2->ss.ps.ps_ProjInfo)
   return VAR_3;

  VAR_4->ecxt_scantuple = VAR_3;
  return FUNC_1(VAR_2->ss.ps.ps_ProjInfo);

 }
}
