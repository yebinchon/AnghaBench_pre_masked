
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16 ;
struct TYPE_7__ {TYPE_2__* space; } ;
struct TYPE_6__ {size_t num_dimensions; TYPE_1__* dimensions; } ;
struct TYPE_5__ {scalar_t__ column_attno; } ;
typedef scalar_t__ Index ;
typedef TYPE_3__ Hypertable ;



bool
FUNC_0(Hypertable *VAR_0, Index VAR_1)
{
 uint16 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->space->num_dimensions; VAR_2++)
 {
  if (VAR_1 == VAR_0->space->dimensions[VAR_2].column_attno)
   return 1;
 }
 return 0;
}
