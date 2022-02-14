
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; struct TYPE_8__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_9__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(spa_t *VAR_0, dmu_tx_t *VAR_1)
{
 FUNC_0(FUNC_2(VAR_0));

 vdev_t *VAR_2 = VAR_0->spa_root_vdev;
 for (int VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_2->vdev_child[VAR_3];
  FUNC_4(VAR_4);

  if (FUNC_3(VAR_4)) {
   FUNC_1(VAR_4, VAR_1);
   break;
  }
 }
}
