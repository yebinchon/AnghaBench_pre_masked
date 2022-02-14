
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_dimensions; TYPE_1__* dimensions; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_2__ Hyperspace ;
typedef scalar_t__ DimensionType ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(Hyperspace *VAR_1, DimensionType VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_dimensions; VAR_3++)
 {
  if (VAR_2 == VAR_0 || VAR_1->dimensions[VAR_3].type == VAR_2)
   VAR_4++;
 }

 return VAR_4;
}
