
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int DimensionVec ;
typedef TYPE_2__ DimensionSlice ;


 int * FUNC_0 (int **,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;

DimensionVec *
FUNC_2(DimensionVec **VAR_0, DimensionSlice *VAR_1)
{
 DimensionVec *VAR_2 = *VAR_0;

 int32 VAR_3 = FUNC_1(VAR_2, VAR_1->fd.id);

 if (VAR_3 == -1)
 {
  return FUNC_0(VAR_0, VAR_1);
 }
 return VAR_2;
}
