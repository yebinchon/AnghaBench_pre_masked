
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_8__ {int ms_unflushed_txg; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {TYPE_1__* mg_vd; } ;
struct TYPE_6__ {int * vdev_spa; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(metaslab_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 spa_t *VAR_4 = VAR_1->ms_group->mg_vd->vdev_spa;

 if (!FUNC_1(VAR_4, VAR_0))
  return;

 VAR_1->ms_unflushed_txg = VAR_2;
 FUNC_0(VAR_1, VAR_3);
}
