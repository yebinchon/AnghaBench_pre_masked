
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_16__ {int cube; } ;
struct TYPE_15__ {TYPE_1__* point; TYPE_3__* space; TYPE_4__* data; } ;
struct TYPE_11__ {int id; int aligned; } ;
struct TYPE_14__ {TYPE_2__ fd; } ;
struct TYPE_13__ {int ** slices; } ;
struct TYPE_12__ {int num_dimensions; TYPE_5__* dimensions; } ;
struct TYPE_10__ {int * coordinates; } ;
typedef TYPE_3__ Hyperspace ;
typedef TYPE_4__ Hypercube ;
typedef int DimensionSlice ;
typedef TYPE_5__ Dimension ;
typedef TYPE_6__ ChunkScanCtx ;
typedef int ChunkResult ;
typedef TYPE_7__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static ChunkResult
FUNC_4(ChunkScanCtx *VAR_2, Chunk *VAR_3)
{
 Hypercube *VAR_4 = VAR_2->data;
 Hyperspace *VAR_5 = VAR_2->space;
 ChunkResult VAR_6 = VAR_0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_dimensions; VAR_7++)
 {
  Dimension *VAR_8 = &VAR_5->dimensions[VAR_7];
  DimensionSlice *VAR_9, *VAR_10;
  int64 VAR_11 = VAR_2->point->coordinates[VAR_7];

  if (!VAR_8->fd.aligned)
   continue;





  VAR_9 = FUNC_3(VAR_3->cube, VAR_8->fd.id);

  if (((void*)0) == VAR_9)
   continue;

  VAR_10 = VAR_4->slices[VAR_7];





  if (!FUNC_2(VAR_10, VAR_9) &&
   FUNC_1(VAR_10, VAR_9))
  {
   FUNC_0(VAR_10, VAR_9, VAR_11);
   VAR_6 = VAR_1;
  }
 }

 return VAR_6;
}
