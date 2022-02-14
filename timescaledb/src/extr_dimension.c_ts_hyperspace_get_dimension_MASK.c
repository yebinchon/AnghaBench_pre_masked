
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {int num_dimensions; TYPE_2__* dimensions; } ;
typedef scalar_t__ Index ;
typedef TYPE_1__ Hyperspace ;
typedef scalar_t__ DimensionType ;
typedef TYPE_2__ Dimension ;


 scalar_t__ VAR_0 ;

Dimension *
FUNC_0(Hyperspace *VAR_1, DimensionType VAR_2, Index VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_dimensions; VAR_4++)
 {
  if (VAR_2 == VAR_0 || VAR_1->dimensions[VAR_4].type == VAR_2)
  {
   if (VAR_3 == 0)
    return &VAR_1->dimensions[VAR_4];
   VAR_3--;
  }
 }

 return ((void*)0);
}
