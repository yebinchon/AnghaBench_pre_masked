
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t vdev_children; void* vdev_resilver_deferred; int * vdev_dtl; TYPE_1__* vdev_ops; struct TYPE_8__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_9__ {void* spa_resilver_deferred; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_7__ {int vdev_op_leaf; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(spa_t *VAR_2, vdev_t *VAR_3)
{
 for (uint64_t VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++)
  FUNC_2(VAR_2, VAR_3->vdev_child[VAR_4]);

 if (!VAR_3->vdev_ops->vdev_op_leaf || !FUNC_1(VAR_3) ||
     FUNC_0(VAR_3->vdev_dtl[VAR_1])) {
  return;
 }

 VAR_3->vdev_resilver_deferred = VAR_0;
 VAR_2->spa_resilver_deferred = VAR_0;
}
