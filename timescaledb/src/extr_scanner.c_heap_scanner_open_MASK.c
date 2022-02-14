
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tablerel; TYPE_1__* sctx; } ;
struct TYPE_4__ {int lockmode; int table; } ;
typedef int Relation ;
typedef TYPE_2__ InternalScannerCtx ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static Relation
FUNC_1(InternalScannerCtx *VAR_0)
{
 VAR_0->tablerel = FUNC_0(VAR_0->sctx->table, VAR_0->sctx->lockmode);
 return VAR_0->tablerel;
}
