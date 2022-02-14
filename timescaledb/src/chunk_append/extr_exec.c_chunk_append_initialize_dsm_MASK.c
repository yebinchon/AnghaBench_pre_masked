
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pstate; void* current; int choose_next_subplan; int lock; } ;
struct TYPE_7__ {int pscan_len; } ;
struct TYPE_6__ {void* next_plan; } ;
typedef int ParallelContext ;
typedef TYPE_1__ ParallelChunkAppendState ;
typedef TYPE_2__ CustomScanState ;
typedef TYPE_3__ ChunkAppendState ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(CustomScanState *VAR_2, ParallelContext *VAR_3, void *VAR_4)
{
 ChunkAppendState *VAR_5 = (ChunkAppendState *) VAR_2;
 ParallelChunkAppendState *VAR_6 = (ParallelChunkAppendState *) VAR_4;

 FUNC_1(VAR_6, 0, VAR_2->pscan_len);

 VAR_5->lock = FUNC_0();
 VAR_6->next_plan = VAR_0;

 VAR_5->choose_next_subplan = VAR_1;
 VAR_5->current = VAR_0;
 VAR_5->pstate = VAR_6;
}
