
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int xs_want_itup; } ;
struct TYPE_9__ {TYPE_6__* index_scan; } ;
struct TYPE_10__ {TYPE_2__ scan; TYPE_1__* sctx; int indexrel; int tablerel; } ;
struct TYPE_8__ {int norderbys; int nkeys; int scankey; int want_itup; } ;
typedef TYPE_1__ ScannerCtx ;
typedef TYPE_2__ ScanDesc ;
typedef TYPE_3__ InternalScannerCtx ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int *,int ) ;

__attribute__((used)) static ScanDesc
FUNC_2(InternalScannerCtx *VAR_1)
{
 ScannerCtx *VAR_2 = VAR_1->sctx;

 VAR_1->scan.index_scan =
  FUNC_0(VAR_1->tablerel, VAR_1->indexrel, VAR_0, VAR_2->nkeys, VAR_2->norderbys);
 VAR_1->scan.index_scan->xs_want_itup = VAR_1->sctx->want_itup;
 FUNC_1(VAR_1->scan.index_scan, VAR_2->scankey, VAR_2->nkeys, ((void*)0), VAR_2->norderbys);
 return VAR_1->scan;
}
