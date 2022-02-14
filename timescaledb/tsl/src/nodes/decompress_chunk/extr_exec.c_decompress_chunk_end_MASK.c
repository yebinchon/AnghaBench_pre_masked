
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int custom_ps; } ;
struct TYPE_4__ {int per_batch_context; } ;
typedef TYPE_1__ DecompressChunkState ;
typedef TYPE_2__ CustomScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(CustomScanState *VAR_0)
{
 FUNC_1(((DecompressChunkState *) VAR_0)->per_batch_context);
 FUNC_0(FUNC_2(VAR_0->custom_ps));
}
