
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_slices; int * slices; } ;
typedef TYPE_1__ Hypercube ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

bool
FUNC_2(Hypercube *VAR_0, Hypercube *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->num_slices == VAR_1->num_slices);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_slices; VAR_2++)
  if (!FUNC_1(VAR_0->slices[VAR_2], VAR_1->slices[VAR_2]))
   return 0;

 return 1;
}
