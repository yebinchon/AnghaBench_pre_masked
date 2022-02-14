
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sm_shift; } ;
typedef TYPE_1__ space_map_t ;
struct TYPE_6__ {scalar_t__* rt_histogram; } ;
typedef TYPE_2__ range_tree_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0(space_map_t *VAR_2, range_tree_t *VAR_3)
{




 for (int VAR_4 = 0; VAR_4 < VAR_2->sm_shift; VAR_4++) {
  if (VAR_3->rt_histogram[VAR_4] != 0)
   return (VAR_0);
 }
 return (VAR_1);
}
