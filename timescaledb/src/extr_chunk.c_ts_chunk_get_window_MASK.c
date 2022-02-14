
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_16__ {int id; } ;
struct TYPE_21__ {int constraints; int cube; TYPE_3__ fd; } ;
struct TYPE_15__ {int chunk_id; } ;
struct TYPE_20__ {TYPE_2__ fd; } ;
struct TYPE_19__ {int num_constraints; TYPE_7__* constraints; } ;
struct TYPE_14__ {int id; } ;
struct TYPE_18__ {TYPE_1__ fd; } ;
struct TYPE_17__ {int num_slices; TYPE_5__** slices; } ;
typedef int MemoryContext ;
typedef int List ;
typedef TYPE_4__ DimensionVec ;
typedef TYPE_5__ DimensionSlice ;
typedef TYPE_6__ ChunkConstraints ;
typedef TYPE_7__ ChunkConstraint ;
typedef TYPE_8__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,TYPE_8__*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,TYPE_6__*,int ) ;
 TYPE_6__* FUNC_4 (int,int ) ;
 TYPE_8__* FUNC_5 (int ,int ,int) ;
 TYPE_4__* FUNC_6 (int ,int ,int,int ,int ) ;
 int FUNC_7 (int ,int ) ;

List *
FUNC_8(int32 VAR_2, int64 VAR_3, int VAR_4, MemoryContext VAR_5)
{
 List *VAR_6 = VAR_1;
 DimensionVec *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6(VAR_2,
                  VAR_3,
                  VAR_4,
                  VAR_0,
                  VAR_5);






 for (VAR_8 = 0; VAR_8 < VAR_7->num_slices; VAR_8++)
 {
  DimensionSlice *VAR_9 = VAR_7->slices[VAR_8];
  ChunkConstraints *VAR_10 = FUNC_4(1, VAR_5);
  int VAR_11;

  FUNC_3(VAR_9->fd.id, VAR_10, VAR_5);


  for (VAR_11 = 0; VAR_11 < VAR_10->num_constraints; VAR_11++)
  {
   ChunkConstraint *VAR_12 = &VAR_10->constraints[VAR_11];
   Chunk *VAR_13 = FUNC_5(VAR_12->fd.chunk_id, 0, 1);
   MemoryContext VAR_14;

   VAR_13->constraints = FUNC_2(VAR_13->fd.id, 1, VAR_5);
   VAR_13->cube = FUNC_7(VAR_13->constraints, VAR_5);


   VAR_14 = FUNC_0(VAR_5);
   VAR_6 = FUNC_1(VAR_6, VAR_13);
   FUNC_0(VAR_14);
  }
 }

 return VAR_6;
}
