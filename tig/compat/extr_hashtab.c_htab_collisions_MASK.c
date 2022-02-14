
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_3__ {scalar_t__ searches; scalar_t__ collisions; } ;



double
FUNC_0 (htab_t VAR_0)
{
  if (VAR_0->searches == 0)
    return 0.0;

  return (double) VAR_0->collisions / (double) VAR_0->searches;
}
