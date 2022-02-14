
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int vdev_children; int vdev_offline; void* vdev_resilver_deferred; TYPE_1__* vdev_ops; scalar_t__ vdev_aux; struct TYPE_12__** vdev_child; TYPE_3__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_13__ {void* spa_resilver_deferred; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_11__ {int vdev_op_leaf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static boolean_t
FUNC_6(vdev_t *VAR_2, dmu_tx_t *VAR_3)
{
 boolean_t VAR_4 = VAR_0;
 spa_t *VAR_5 = VAR_2->vdev_spa;

 for (int VAR_6 = 0; VAR_6 < VAR_2->vdev_children; VAR_6++) {
  VAR_4 |=
      FUNC_6(VAR_2->vdev_child[VAR_6], VAR_3);
 }

 if (VAR_2 == VAR_5->spa_root_vdev &&
     FUNC_1(VAR_5, VAR_1)) {
  FUNC_0(VAR_5, VAR_1, VAR_3);
  FUNC_2(VAR_2);
  VAR_5->spa_resilver_deferred = VAR_0;
  return (VAR_4);
 }

 if (!FUNC_3(VAR_2) || VAR_2->vdev_aux ||
     !VAR_2->vdev_ops->vdev_op_leaf)
  return (VAR_4);

 if (VAR_2->vdev_resilver_deferred)
  VAR_2->vdev_resilver_deferred = VAR_0;

 return (!FUNC_4(VAR_2) && !VAR_2->vdev_offline &&
     FUNC_5(VAR_2, ((void*)0), ((void*)0)));
}
