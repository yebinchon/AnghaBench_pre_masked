
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int dimension_slice_id; } ;
struct TYPE_16__ {TYPE_1__ fd; } ;
struct TYPE_15__ {scalar_t__ num_dimension_constraints; int num_constraints; } ;
struct TYPE_14__ {scalar_t__ num_slices; int ** slices; } ;
typedef int MemoryContext ;
typedef TYPE_2__ Hypercube ;
typedef int DimensionSlice ;
typedef TYPE_3__ ChunkConstraints ;
typedef TYPE_4__ ChunkConstraint ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (int ,int ) ;
 TYPE_2__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;

Hypercube *
FUNC_8(ChunkConstraints *VAR_0, MemoryContext VAR_1)
{
 Hypercube *VAR_2;
 int VAR_3;
 MemoryContext VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 VAR_2 = FUNC_6(VAR_0->num_dimension_constraints);
 FUNC_1(VAR_4);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_constraints; VAR_3++)
 {
  ChunkConstraint *VAR_5 = FUNC_2(VAR_0, VAR_3);

  if (FUNC_4(VAR_5))
  {
   DimensionSlice *VAR_6;

   FUNC_0(VAR_2->num_slices < VAR_0->num_dimension_constraints);
   VAR_6 = FUNC_5(VAR_5->fd.dimension_slice_id, VAR_1);
   FUNC_0(VAR_6 != ((void*)0));
   VAR_2->slices[VAR_2->num_slices++] = VAR_6;
  }
 }

 FUNC_7(VAR_2);

 FUNC_0(FUNC_3(VAR_2));

 return VAR_2;
}
