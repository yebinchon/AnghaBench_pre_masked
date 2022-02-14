
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int heap_scan; } ;
struct TYPE_8__ {TYPE_2__ scan; int tablerel; TYPE_1__* sctx; } ;
struct TYPE_6__ {int scankey; int nkeys; } ;
typedef TYPE_1__ ScannerCtx ;
typedef TYPE_2__ ScanDesc ;
typedef TYPE_3__ InternalScannerCtx ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static ScanDesc
FUNC_1(InternalScannerCtx *VAR_1)
{
 ScannerCtx *VAR_2 = VAR_1->sctx;

 VAR_1->scan.heap_scan = FUNC_0(VAR_1->tablerel, VAR_0, VAR_2->nkeys, VAR_2->scankey);
 return VAR_1->scan;
}
