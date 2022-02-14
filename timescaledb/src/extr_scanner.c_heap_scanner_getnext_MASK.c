
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tuple; } ;
struct TYPE_6__ {int heap_scan; } ;
struct TYPE_9__ {TYPE_3__ tinfo; TYPE_2__* sctx; TYPE_1__ scan; } ;
struct TYPE_7__ {int scandirection; } ;
typedef TYPE_4__ InternalScannerCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(InternalScannerCtx *VAR_0)
{
 VAR_0->tinfo.tuple = FUNC_1(VAR_0->scan.heap_scan, VAR_0->sctx->scandirection);
 return FUNC_0(VAR_0->tinfo.tuple);
}
