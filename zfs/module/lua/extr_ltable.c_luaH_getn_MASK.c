
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sizearray; int node; int * array; } ;
typedef TYPE_1__ Table ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

int FUNC_3 (Table *VAR_0) {
  unsigned int VAR_1 = VAR_0->sizearray;
  if (VAR_1 > 0 && FUNC_1(&VAR_0->array[VAR_1 - 1])) {

    unsigned int VAR_2 = 0;
    while (VAR_1 - VAR_2 > 1) {
      unsigned int VAR_3 = (VAR_2+VAR_1)/2;
      if (FUNC_1(&VAR_0->array[VAR_3 - 1])) VAR_1 = VAR_3;
      else VAR_2 = VAR_3;
    }
    return VAR_2;
  }

  else if (FUNC_0(VAR_0->node))
    return VAR_1;
  else return FUNC_2(VAR_0, VAR_1);
}
