
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_3__ {size_t num_slices; int * slices; } ;
typedef TYPE_1__ DimensionVec ;
typedef int DimensionSlice ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(DimensionVec **VAR_0, int32 VAR_1)
{
 DimensionVec *VAR_2 = *VAR_0;

 FUNC_1(VAR_2->slices[VAR_1]);
 FUNC_0(VAR_2->slices + VAR_1,
   VAR_2->slices + (VAR_1 + 1),
   sizeof(DimensionSlice *) * (VAR_2->num_slices - VAR_1 - 1));
 VAR_2->num_slices--;
}
