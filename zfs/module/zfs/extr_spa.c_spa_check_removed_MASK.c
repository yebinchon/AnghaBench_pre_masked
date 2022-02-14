
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t vdev_children; int vdev_spa; TYPE_1__* vdev_ops; struct TYPE_9__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_8__ {scalar_t__ vdev_op_leaf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_1)
{
 for (uint64_t VAR_2 = 0; VAR_2 < VAR_1->vdev_children; VAR_2++)
  FUNC_4(VAR_1->vdev_child[VAR_2]);

 if (VAR_1->vdev_ops->vdev_op_leaf && FUNC_2(VAR_1) &&
     FUNC_1(VAR_1)) {
  FUNC_3(VAR_1->vdev_spa, VAR_1);
  FUNC_0(VAR_1->vdev_spa, VAR_1, ((void*)0), VAR_0);
 }
}
