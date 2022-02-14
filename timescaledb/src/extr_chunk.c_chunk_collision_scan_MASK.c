
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* space; } ;
struct TYPE_10__ {int range_end; int range_start; int dimension_id; } ;
struct TYPE_12__ {TYPE_2__ fd; } ;
struct TYPE_11__ {TYPE_4__** slices; } ;
struct TYPE_9__ {int num_dimensions; } ;
typedef TYPE_3__ Hypercube ;
typedef int DimensionVec ;
typedef TYPE_4__ DimensionSlice ;
typedef TYPE_5__ ChunkScanCtx ;


 int FUNC_0 (TYPE_5__*,int *) ;
 int * FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(ChunkScanCtx *VAR_0, Hypercube *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->space->num_dimensions; VAR_2++)
 {
  DimensionVec *VAR_3;
  DimensionSlice *VAR_4 = VAR_1->slices[VAR_2];

  VAR_3 = FUNC_1(VAR_4->fd.dimension_id,
            VAR_4->fd.range_start,
            VAR_4->fd.range_end);


  FUNC_0(VAR_0, VAR_3);
 }
}
