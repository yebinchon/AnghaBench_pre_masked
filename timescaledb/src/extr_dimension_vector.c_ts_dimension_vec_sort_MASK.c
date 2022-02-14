
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_slices; int slices; } ;
typedef TYPE_1__ DimensionVec ;
typedef int DimensionSlice ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

DimensionVec *
FUNC_1(DimensionVec **VAR_1)
{
 DimensionVec *VAR_2 = *VAR_1;

 FUNC_0(VAR_2->slices, VAR_2->num_slices, sizeof(DimensionSlice *), VAR_0);

 return VAR_2;
}
