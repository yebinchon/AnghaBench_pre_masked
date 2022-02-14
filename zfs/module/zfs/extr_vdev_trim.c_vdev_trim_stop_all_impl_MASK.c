
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdev_trim_state_t ;
struct TYPE_7__ {size_t vdev_children; struct TYPE_7__** vdev_child; int vdev_trim_lock; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
typedef int list_t ;
struct TYPE_6__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_0, vdev_trim_state_t VAR_1,
    list_t *VAR_2)
{
 if (VAR_0->vdev_ops->vdev_op_leaf && FUNC_2(VAR_0)) {
  FUNC_0(&VAR_0->vdev_trim_lock);
  FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_1(&VAR_0->vdev_trim_lock);
  return;
 }

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_0->vdev_children; VAR_3++) {
  FUNC_4(VAR_0->vdev_child[VAR_3], VAR_1,
      VAR_2);
 }
}
