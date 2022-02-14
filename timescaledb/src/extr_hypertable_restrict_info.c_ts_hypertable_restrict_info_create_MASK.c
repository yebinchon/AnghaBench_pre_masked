
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* space; } ;
struct TYPE_8__ {int num_dimensions; int ** dimension_restriction; } ;
struct TYPE_7__ {int num_dimensions; int * dimensions; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ HypertableRestrictInfo ;
typedef TYPE_3__ Hypertable ;
typedef int DimensionRestrictInfo ;


 int * FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;

HypertableRestrictInfo *
FUNC_2(RelOptInfo *VAR_0, Hypertable *VAR_1)
{
 int VAR_2 = VAR_1->space->num_dimensions;
 HypertableRestrictInfo *VAR_3 =
  FUNC_1(sizeof(HypertableRestrictInfo) + sizeof(DimensionRestrictInfo *) * VAR_2);
 int VAR_4;

 VAR_3->num_dimensions = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  DimensionRestrictInfo *VAR_5 = FUNC_0(&VAR_1->space->dimensions[VAR_4]);

  VAR_3->dimension_restriction[VAR_4] = VAR_5;
 }

 return VAR_3;
}
