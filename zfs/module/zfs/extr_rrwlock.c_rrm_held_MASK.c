
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * locks; } ;
typedef TYPE_1__ rrmlock_t ;
typedef scalar_t__ krw_t ;
typedef int boolean_t ;


 size_t FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

boolean_t
FUNC_2(rrmlock_t *VAR_1, krw_t VAR_2)
{
 if (VAR_2 == VAR_0) {
  return (FUNC_1(&VAR_1->locks[0], VAR_2));
 } else {
  return (FUNC_1(&VAR_1->locks[FUNC_0()], VAR_2));
 }
}
