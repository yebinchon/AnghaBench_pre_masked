
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; int vdev_spa; int * vdev_physpath; TYPE_1__* vdev_ops; struct TYPE_8__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_9__ {int spa_autoexpand; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_7__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_1, vdev_t *VAR_2)
{
 if (!VAR_1->spa_autoexpand)
  return;

 for (int VAR_3 = 0; VAR_3 < VAR_2->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_2->vdev_child[VAR_3];
  FUNC_1(VAR_1, VAR_4);
 }

 if (!VAR_2->vdev_ops->vdev_op_leaf || VAR_2->vdev_physpath == ((void*)0))
  return;

 FUNC_0(VAR_2->vdev_spa, VAR_2, ((void*)0), VAR_0);
}
