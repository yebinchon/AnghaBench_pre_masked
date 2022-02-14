
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_15__ {int num_slices; int ** slices; } ;
struct TYPE_14__ {TYPE_7__* cube; } ;
struct TYPE_13__ {TYPE_1__* point; TYPE_2__* space; TYPE_3__* data; } ;
struct TYPE_12__ {int ** slices; } ;
struct TYPE_11__ {int num_dimensions; } ;
struct TYPE_10__ {int * coordinates; } ;
typedef TYPE_2__ Hyperspace ;
typedef TYPE_3__ Hypercube ;
typedef int DimensionSlice ;
typedef TYPE_4__ ChunkScanCtx ;
typedef int ChunkResult ;
typedef TYPE_5__ Chunk ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*) ;

__attribute__((used)) static ChunkResult
FUNC_5(ChunkScanCtx *VAR_2, Chunk *VAR_3)
{
 Hypercube *VAR_4 = VAR_2->data;
 Hyperspace *VAR_5 = VAR_2->space;
 ChunkResult VAR_6 = VAR_0;
 int VAR_7;

 if (VAR_3->cube->num_slices != VAR_5->num_dimensions ||
  !FUNC_4(VAR_4, VAR_3->cube))
  return VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_dimensions; VAR_7++)
 {
  DimensionSlice *VAR_8 = VAR_4->slices[VAR_7];
  DimensionSlice *VAR_9 = VAR_3->cube->slices[VAR_7];
  int64 VAR_10 = VAR_2->point->coordinates[VAR_7];





  if (!FUNC_3(VAR_8, VAR_9) &&
   FUNC_2(VAR_8, VAR_9))
  {
   FUNC_1(VAR_8, VAR_9, VAR_10);
   VAR_6 = VAR_1;





   if (!FUNC_4(VAR_4, VAR_3->cube))
    return VAR_6;
  }
 }

 FUNC_0(!FUNC_4(VAR_4, VAR_3->cube));

 return VAR_6;
}
