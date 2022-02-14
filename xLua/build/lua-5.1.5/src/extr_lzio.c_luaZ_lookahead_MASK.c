
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n; int * p; } ;
typedef TYPE_1__ ZIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2 (ZIO *VAR_1) {
  if (VAR_1->n == 0) {
    if (FUNC_1(VAR_1) == VAR_0)
      return VAR_0;
    else {
      VAR_1->n++;
      VAR_1->p--;
    }
  }
  return FUNC_0(*VAR_1->p);
}
