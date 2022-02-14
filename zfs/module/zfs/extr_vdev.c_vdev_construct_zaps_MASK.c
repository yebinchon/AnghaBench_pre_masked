
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ vdev_leaf_zap; scalar_t__ vdev_top_zap; scalar_t__ vdev_alloc_bias; size_t vdev_children; struct TYPE_8__** vdev_child; struct TYPE_8__* vdev_top; TYPE_3__* vdev_ops; int vdev_removing; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {scalar_t__ vdev_op_leaf; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (TYPE_1__*,int *) ;
 TYPE_3__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;

void
FUNC_2(vdev_t *VAR_4, dmu_tx_t *VAR_5)
{
 if (VAR_4->vdev_ops != &VAR_1 &&
     VAR_4->vdev_ops != &VAR_2 &&
     VAR_4->vdev_ops != &VAR_3 &&
     !VAR_4->vdev_top->vdev_removing) {
  if (VAR_4->vdev_ops->vdev_op_leaf && VAR_4->vdev_leaf_zap == 0) {
   VAR_4->vdev_leaf_zap = FUNC_0(VAR_4, VAR_5);
  }
  if (VAR_4 == VAR_4->vdev_top && VAR_4->vdev_top_zap == 0) {
   VAR_4->vdev_top_zap = FUNC_0(VAR_4, VAR_5);
   if (VAR_4->vdev_alloc_bias != VAR_0)
    FUNC_1(VAR_4, VAR_5);
  }
 }

 for (uint64_t VAR_6 = 0; VAR_6 < VAR_4->vdev_children; VAR_6++) {
  FUNC_2(VAR_4->vdev_child[VAR_6], VAR_5);
 }
}
