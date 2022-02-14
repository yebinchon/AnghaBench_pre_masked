
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; int vdev_resilver_deferred; TYPE_1__* vdev_ops; scalar_t__ vdev_aux; struct TYPE_6__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int boolean_t ;
struct TYPE_5__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_1(vdev_t *VAR_2)
{
 boolean_t VAR_3 = VAR_0;

 for (int VAR_4 = 0; VAR_4 < VAR_2->vdev_children; VAR_4++) {
  VAR_3 |=
      FUNC_1(VAR_2->vdev_child[VAR_4]);
 }

 if (!FUNC_0(VAR_2) || VAR_2->vdev_aux ||
     !VAR_2->vdev_ops->vdev_op_leaf)
  return (VAR_3);

 if (!VAR_2->vdev_resilver_deferred)
  VAR_3 = VAR_1;

 return (VAR_3);
}
