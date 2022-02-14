
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int freereg; TYPE_1__* f; int ls; } ;
struct TYPE_4__ {int maxstacksize; } ;
typedef TYPE_2__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2 (FuncState *VAR_1, int VAR_2) {
  int VAR_3 = VAR_1->freereg + VAR_2;
  if (VAR_3 > VAR_1->f->maxstacksize) {
    if (VAR_3 >= VAR_0)
      FUNC_1(VAR_1->ls, "function or expression too complex");
    VAR_1->f->maxstacksize = FUNC_0(VAR_3);
  }
}
