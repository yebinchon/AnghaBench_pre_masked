
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {scalar_t__ num_slices; int slices; } ;
typedef TYPE_1__ DimensionVec ;
typedef int DimensionSlice ;


 int FUNC_0 (int ) ;
 int ** FUNC_1 (int *,int ,scalar_t__,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

DimensionSlice *
FUNC_3(DimensionVec *VAR_1, int64 VAR_2)
{
 DimensionSlice **VAR_3;

 if (VAR_1->num_slices == 0)
  return ((void*)0);

 FUNC_0(FUNC_2(VAR_1));

 VAR_3 = FUNC_1(&VAR_2,
      VAR_1->slices,
      VAR_1->num_slices,
      sizeof(DimensionSlice *),
      VAR_0);

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 return *VAR_3;
}
