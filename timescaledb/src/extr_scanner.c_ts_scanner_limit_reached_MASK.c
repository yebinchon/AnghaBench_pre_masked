
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; } ;
struct TYPE_8__ {TYPE_1__ tinfo; } ;
struct TYPE_7__ {scalar_t__ limit; } ;
typedef TYPE_2__ ScannerCtx ;
typedef TYPE_3__ InternalScannerCtx ;



__attribute__((used)) static inline bool
FUNC_0(ScannerCtx *VAR_0, InternalScannerCtx *VAR_1)
{
 return VAR_0->limit > 0 && VAR_1->tinfo.count >= VAR_0->limit;
}
