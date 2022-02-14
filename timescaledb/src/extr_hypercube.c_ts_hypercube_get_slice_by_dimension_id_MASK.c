
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {int dimension_id; } ;
struct TYPE_9__ {TYPE_1__ fd; } ;
struct TYPE_8__ {int num_slices; int slices; } ;
typedef TYPE_2__ Hypercube ;
typedef TYPE_3__ DimensionSlice ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void**,int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

DimensionSlice *
FUNC_3(Hypercube *VAR_1, int32 VAR_2)
{
 DimensionSlice VAR_3 = {
  .fd.dimension_id = VAR_2,
 };
 void *VAR_4 = &VAR_3;

 if (VAR_1->num_slices == 0)
  return ((void*)0);

 FUNC_0(FUNC_2(VAR_1));

 VAR_4 = FUNC_1(&VAR_4,
      VAR_1->slices,
      VAR_1->num_slices,
      sizeof(DimensionSlice *),
      VAR_0);

 if (((void*)0) == VAR_4)
  return ((void*)0);

 return *((DimensionSlice **) VAR_4);
}
