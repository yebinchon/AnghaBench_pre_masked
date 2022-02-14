
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ ub_checkpoint_txg; } ;
struct TYPE_5__ {scalar_t__ spa_first_txg; TYPE_1__ spa_uberblock; } ;
typedef TYPE_2__ spa_t ;



uint64_t
FUNC_0(spa_t *VAR_0)
{
 uint64_t VAR_1 = VAR_0->spa_uberblock.ub_checkpoint_txg;

 if (VAR_1 != 0)
  return (VAR_1 + 1);

 return (VAR_0->spa_first_txg);
}
