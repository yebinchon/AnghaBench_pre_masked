
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scandesc; } ;
struct TYPE_5__ {int rel; TYPE_1__ fromctx; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int HeapScanDesc ;
typedef int ExprContext ;
typedef int Datum ;
typedef TYPE_2__ CopyChunkState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5(CopyChunkState *VAR_1, ExprContext *VAR_2, Datum *VAR_3,
          bool *VAR_4, Oid *VAR_5)
{
 HeapScanDesc VAR_6 = VAR_1->fromctx.scandesc;
 HeapTuple VAR_7 = FUNC_4(VAR_6, VAR_0);

 if (!FUNC_1(VAR_7))
  return 0;

 FUNC_3(VAR_7, FUNC_2(VAR_1->rel), VAR_3, VAR_4);
 *VAR_5 = FUNC_0(VAR_7);

 return 1;
}
