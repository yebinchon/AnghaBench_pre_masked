
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int table_id; TYPE_1__* constraints; } ;
struct TYPE_5__ {int num_constraints; int * constraints; } ;
typedef int ChunkScanCtx ;
typedef int ChunkResult ;
typedef TYPE_1__ ChunkConstraints ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static ChunkResult
FUNC_2(ChunkScanCtx *VAR_1, Chunk *VAR_2)
{
 ChunkConstraints *VAR_3 = VAR_2->constraints;
 int VAR_4;

 FUNC_0(VAR_2, 0);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_constraints; VAR_4++)
  FUNC_1(&VAR_3->constraints[VAR_4], VAR_2->table_id);

 return VAR_0;
}
