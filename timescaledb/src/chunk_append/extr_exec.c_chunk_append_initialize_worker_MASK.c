
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int shm_toc ;
struct TYPE_2__ {int * pstate; int current; int choose_next_subplan; int lock; } ;
typedef int ParallelChunkAppendState ;
typedef int CustomScanState ;
typedef TYPE_1__ ChunkAppendState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(CustomScanState *VAR_2, shm_toc *VAR_3, void *VAR_4)
{
 ChunkAppendState *VAR_5 = (ChunkAppendState *) VAR_2;
 ParallelChunkAppendState *VAR_6 = (ParallelChunkAppendState *) VAR_4;

 VAR_5->lock = FUNC_0();
 VAR_5->choose_next_subplan = VAR_1;
 VAR_5->current = VAR_0;
 VAR_5->pstate = VAR_6;
}
