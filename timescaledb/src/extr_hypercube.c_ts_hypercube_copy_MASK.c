
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_slices; int * slices; int capacity; } ;
typedef TYPE_1__ Hypercube ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;

Hypercube *
FUNC_4(Hypercube *VAR_0)
{
 Hypercube *VAR_1;
 size_t VAR_2 = FUNC_0(VAR_0->capacity);
 int VAR_3;

 VAR_1 = FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_slices; VAR_3++)
  VAR_1->slices[VAR_3] = FUNC_3(VAR_0->slices[VAR_3]);

 return VAR_1;
}
