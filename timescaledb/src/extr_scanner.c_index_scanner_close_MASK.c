
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sctx; int indexrel; int tablerel; } ;
struct TYPE_4__ {int lockmode; } ;
typedef TYPE_2__ InternalScannerCtx ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(InternalScannerCtx *VAR_0)
{
 FUNC_0(VAR_0->tablerel, VAR_0->sctx->lockmode);
 FUNC_1(VAR_0->indexrel, VAR_0->sctx->lockmode);
}
