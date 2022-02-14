
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t vdev_children; int vdev_scan_io_queue_lock; int * vdev_scan_io_queue; struct TYPE_8__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_9__ {TYPE_2__* scn_dp; } ;
typedef TYPE_4__ dsl_scan_t ;
struct TYPE_7__ {TYPE_1__* dp_spa; } ;
struct TYPE_6__ {TYPE_3__* spa_root_vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(dsl_scan_t *VAR_0)
{
 vdev_t *VAR_1 = VAR_0->scn_dp->dp_spa->spa_root_vdev;

 for (uint64_t VAR_2 = 0; VAR_2 < VAR_1->vdev_children; VAR_2++) {
  vdev_t *VAR_3 = VAR_1->vdev_child[VAR_2];

  FUNC_1(&VAR_3->vdev_scan_io_queue_lock);
  if (VAR_3->vdev_scan_io_queue != ((void*)0))
   FUNC_0(VAR_3->vdev_scan_io_queue);
  VAR_3->vdev_scan_io_queue = ((void*)0);
  FUNC_2(&VAR_3->vdev_scan_io_queue_lock);
 }
}
