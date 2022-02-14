
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ub_rootbp; } ;
struct TYPE_5__ {TYPE_1__ spa_uberblock; } ;
typedef TYPE_2__ spa_t ;
typedef int blkptr_t ;



void
FUNC_0(spa_t *VAR_0, const blkptr_t *VAR_1)
{
 VAR_0->spa_uberblock.ub_rootbp = *VAR_1;
}
