
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dimension; } ;
struct TYPE_6__ {void* upper_strategy; void* lower_strategy; TYPE_1__ base; } ;
typedef TYPE_2__ DimensionRestrictInfoOpen ;
typedef int Dimension ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static DimensionRestrictInfoOpen *
FUNC_1(Dimension *VAR_1)
{
 DimensionRestrictInfoOpen *VAR_2 = FUNC_0(sizeof(DimensionRestrictInfoOpen));

 VAR_2->base.dimension = VAR_1;
 VAR_2->lower_strategy = VAR_0;
 VAR_2->upper_strategy = VAR_0;
 return VAR_2;
}
