
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_9__ {int ps_TupFromTlist; int ps_ProjInfo; scalar_t__ qual; TYPE_3__* ps_ExprContext; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_12__ {scalar_t__ custom_ps; TYPE_2__ ss; } ;
struct TYPE_11__ {int * ecxt_scantuple; } ;
typedef scalar_t__ ExprDoneCond ;
typedef TYPE_3__ ExprContext ;
typedef int DecompressChunkState ;
typedef TYPE_4__ CustomScanState ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,...) ;
 int FUNC_2 (scalar_t__,TYPE_3__*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_7(CustomScanState *VAR_3)
{
 DecompressChunkState *VAR_4 = (DecompressChunkState *) VAR_3;
 ExprContext *VAR_5 = VAR_3->ss.ps.ps_ExprContext;





 if (VAR_3->custom_ps == VAR_2)
  return ((void*)0);
 FUNC_4(VAR_5);

 while (1)
 {
  TupleTableSlot *VAR_6 = FUNC_6(VAR_4);

  if (FUNC_5(VAR_6))
   return ((void*)0);

  VAR_5->ecxt_scantuple = VAR_6;




  if (VAR_3->ss.ps.qual && !FUNC_2(VAR_3->ss.ps.qual, VAR_5))

  {
   FUNC_3(VAR_3, 1);
   FUNC_0(VAR_6);
   continue;
  }

  if (!VAR_3->ss.ps.ps_ProjInfo)
   return VAR_6;
  return FUNC_1(VAR_3->ss.ps.ps_ProjInfo);

 }
}
