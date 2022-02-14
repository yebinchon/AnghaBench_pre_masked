
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int table_id; } ;
struct TYPE_8__ {scalar_t__ lockmode; int num_complete_chunks; TYPE_2__** data; int space; } ;
typedef TYPE_1__ ChunkScanCtx ;
typedef int ChunkResult ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__** FUNC_3 (int) ;

__attribute__((used)) static ChunkResult
FUNC_4(ChunkScanCtx *VAR_3, Chunk *VAR_4)
{
 Chunk **VAR_5 = VAR_3->data;

 if (!FUNC_2(VAR_4, VAR_3->space))
  return VAR_0;


 FUNC_1(VAR_4, 0);

 if (VAR_3->lockmode != VAR_2)
  FUNC_0(VAR_4->table_id, VAR_3->lockmode);

 if (((void*)0) == VAR_5 && VAR_3->num_complete_chunks > 0)
  VAR_3->data = VAR_5 = FUNC_3(sizeof(Chunk *) * VAR_3->num_complete_chunks);

 if (VAR_3->num_complete_chunks > 0)
  VAR_5[--VAR_3->num_complete_chunks] = VAR_4;

 return VAR_1;
}
