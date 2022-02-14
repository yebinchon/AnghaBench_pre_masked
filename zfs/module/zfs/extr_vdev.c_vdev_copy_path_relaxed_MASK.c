
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vdev_child; int * vdev_ops; int vdev_children; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

void
FUNC_3(vdev_t *VAR_1, vdev_t *VAR_2)
{
 uint64_t VAR_3 = FUNC_1(VAR_1->vdev_children, VAR_2->vdev_children);
 FUNC_0(VAR_1->vdev_ops == &VAR_0);
 FUNC_0(VAR_2->vdev_ops == &VAR_0);

 for (uint64_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(VAR_1->vdev_child[VAR_4],
      VAR_2->vdev_child[VAR_4]);
 }
}
