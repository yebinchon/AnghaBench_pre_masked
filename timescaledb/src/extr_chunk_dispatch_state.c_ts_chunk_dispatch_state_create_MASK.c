
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * methods; } ;
struct TYPE_5__ {TYPE_1__ cscan_state; int * subplan; int hypertable_relid; } ;
typedef int Plan ;
typedef int Oid ;
typedef TYPE_2__ ChunkDispatchState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

ChunkDispatchState *
FUNC_1(Oid VAR_2, Plan *VAR_3)
{
 ChunkDispatchState *VAR_4;

 VAR_4 = (ChunkDispatchState *) FUNC_0(sizeof(ChunkDispatchState), VAR_0);
 VAR_4->hypertable_relid = VAR_2;
 VAR_4->subplan = VAR_3;
 VAR_4->cscan_state.methods = &VAR_1;
 return VAR_4;
}
