
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hypertable_cache; int dispatch; } ;
struct TYPE_4__ {int custom_ps; } ;
typedef int PlanState ;
typedef TYPE_1__ CustomScanState ;
typedef TYPE_2__ ChunkDispatchState ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(CustomScanState *VAR_0)
{
 ChunkDispatchState *VAR_1 = (ChunkDispatchState *) VAR_0;
 PlanState *VAR_2 = FUNC_1(VAR_0->custom_ps);

 FUNC_0(VAR_2);
 FUNC_3(VAR_1->dispatch);
 FUNC_2(VAR_1->hypertable_cache);
}
