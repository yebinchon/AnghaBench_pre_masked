
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int spa_all_vdev_zaps; int spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;

uint64_t
FUNC_4(vdev_t *VAR_2, dmu_tx_t *VAR_3)
{
 spa_t *VAR_4 = VAR_2->vdev_spa;
 uint64_t VAR_5 = FUNC_3(VAR_4->spa_meta_objset, VAR_0,
     VAR_1, 0, VAR_3);

 FUNC_0(VAR_5 != 0);
 FUNC_1(FUNC_2(VAR_4->spa_meta_objset, VAR_4->spa_all_vdev_zaps,
     VAR_5, VAR_3));

 return (VAR_5);
}
