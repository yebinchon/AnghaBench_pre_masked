
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_5__ {int spa_all_vdev_zaps; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;

void
FUNC_3(vdev_t *VAR_0, uint64_t VAR_1, dmu_tx_t *VAR_2)
{
 spa_t *VAR_3 = VAR_0->vdev_spa;

 FUNC_0(FUNC_1(VAR_3->spa_meta_objset, VAR_1, VAR_2));
 FUNC_0(FUNC_2(VAR_3->spa_meta_objset, VAR_3->spa_all_vdev_zaps,
     VAR_1, VAR_2));
}
