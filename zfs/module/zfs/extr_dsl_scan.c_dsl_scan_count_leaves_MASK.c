
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; struct TYPE_6__** vdev_child; TYPE_1__* vdev_ops; scalar_t__ vdev_isl2cache; scalar_t__ vdev_isspare; scalar_t__ vdev_islog; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static uint64_t
FUNC_1(vdev_t *VAR_0)
{
 uint64_t VAR_1, VAR_2 = 0;


 if (VAR_0->vdev_islog || VAR_0->vdev_isspare ||
     VAR_0->vdev_isl2cache || !FUNC_0(VAR_0))
  return (0);

 if (VAR_0->vdev_ops->vdev_op_leaf)
  return (1);

 for (VAR_1 = 0; VAR_1 < VAR_0->vdev_children; VAR_1++) {
  VAR_2 += FUNC_1(VAR_0->vdev_child[VAR_1]);
 }

 return (VAR_2);
}
