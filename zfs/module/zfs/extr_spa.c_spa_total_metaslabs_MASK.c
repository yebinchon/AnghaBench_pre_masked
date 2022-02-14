
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t vdev_children; scalar_t__ vdev_ms_count; struct TYPE_5__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_6__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (TYPE_1__*) ;

uint64_t
FUNC_1(spa_t *VAR_0)
{
 vdev_t *VAR_1 = VAR_0->spa_root_vdev;

 uint64_t VAR_2 = 0;
 for (uint64_t VAR_3 = 0; VAR_3 < VAR_1->vdev_children; VAR_3++) {
  vdev_t *VAR_4 = VAR_1->vdev_child[VAR_3];
  if (!FUNC_0(VAR_4))
   continue;
  VAR_2 += VAR_4->vdev_ms_count;
 }
 return (VAR_2);
}
