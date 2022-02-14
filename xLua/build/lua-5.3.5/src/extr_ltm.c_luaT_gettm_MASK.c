
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int TString ;
typedef unsigned int TMS ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int const*) ;

const TValue *FUNC_4 (Table *VAR_1, TMS VAR_2, TString *VAR_3) {
  const TValue *VAR_4 = FUNC_1(VAR_1, VAR_3);
  FUNC_2(VAR_2 <= VAR_0);
  if (FUNC_3(VAR_4)) {
    VAR_1->flags |= FUNC_0(1u<<VAR_2);
    return ((void*)0);
  }
  else return VAR_4;
}
