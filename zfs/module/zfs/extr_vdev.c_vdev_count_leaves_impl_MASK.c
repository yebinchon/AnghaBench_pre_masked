
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_children; struct TYPE_5__** vdev_child; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_4__ {scalar_t__ vdev_op_leaf; } ;



__attribute__((used)) static int
FUNC_0(vdev_t *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->vdev_ops->vdev_op_leaf)
  return (1);

 for (int VAR_2 = 0; VAR_2 < VAR_0->vdev_children; VAR_2++)
  VAR_1 += FUNC_0(VAR_0->vdev_child[VAR_2]);

 return (VAR_1);
}
