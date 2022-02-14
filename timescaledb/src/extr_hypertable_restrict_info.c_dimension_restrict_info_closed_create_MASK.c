
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dimension; } ;
struct TYPE_6__ {int strategy; TYPE_1__ base; int partitions; } ;
typedef TYPE_2__ DimensionRestrictInfoClosed ;
typedef int Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static DimensionRestrictInfoClosed *
FUNC_1(Dimension *VAR_2)
{
 DimensionRestrictInfoClosed *VAR_3 = FUNC_0(sizeof(DimensionRestrictInfoClosed));

 VAR_3->partitions = VAR_1;
 VAR_3->base.dimension = VAR_2;
 VAR_3->strategy = VAR_0;
 return VAR_3;
}
