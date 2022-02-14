
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dispatch; int * hypertable_cache; int subplan; int hypertable_relid; } ;
struct TYPE_4__ {int custom_ps; } ;
typedef int PlanState ;
typedef int Hypertable ;
typedef int EState ;
typedef TYPE_1__ CustomScanState ;
typedef TYPE_2__ ChunkDispatchState ;
typedef int Cache ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(CustomScanState *VAR_1, EState *VAR_2, int VAR_3)
{
 ChunkDispatchState *VAR_4 = (ChunkDispatchState *) VAR_1;
 Hypertable *VAR_5;
 Cache *VAR_6;
 PlanState *VAR_7;

 VAR_6 = FUNC_6();

 VAR_5 = FUNC_5(VAR_6, VAR_4->hypertable_relid);

 if (((void*)0) == VAR_5)
 {
  FUNC_3(VAR_6);
  FUNC_1(VAR_0, "no hypertable for relid %d", VAR_4->hypertable_relid);
 }
 VAR_7 = FUNC_0(VAR_4->subplan, VAR_2, VAR_3);
 VAR_4->hypertable_cache = VAR_6;
 VAR_4->dispatch = FUNC_4(VAR_5, VAR_2);
 VAR_1->custom_ps = FUNC_2(VAR_7);
}
