
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t vdev_children; int * vdev_ops; int vdev_islog; int vdev_ishole; struct TYPE_3__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(vdev_t *VAR_1)
{
 uint64_t VAR_2 = 0;

 for (uint64_t VAR_3 = 0; VAR_3 < VAR_1->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_1->vdev_child[VAR_3];

  if (!VAR_4->vdev_ishole && !VAR_4->vdev_islog &&
      VAR_4->vdev_ops != &VAR_0) {
   VAR_2++;
  }
 }

 return (VAR_2);
}
