
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int vdev_scan_io_queue_lock; int * vdev_scan_io_queue; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {TYPE_2__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_12__ {scalar_t__ scn_bytes_pending; int * scn_taskq; int scn_is_sorted; TYPE_1__* scn_dp; } ;
typedef TYPE_5__ dsl_scan_t ;
struct TYPE_9__ {int vdev_children; TYPE_3__** vdev_child; } ;
struct TYPE_8__ {TYPE_4__* dp_spa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int * FUNC_5 (char*,int,int ,int,int,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(dsl_scan_t *VAR_7)
{
 spa_t *VAR_8 = VAR_7->scn_dp->dp_spa;

 FUNC_0(VAR_7->scn_is_sorted);
 FUNC_0(FUNC_4(VAR_8, VAR_1, VAR_0));

 if (VAR_7->scn_bytes_pending == 0)
  return;

 if (VAR_7->scn_taskq == ((void*)0)) {
  int VAR_9 = VAR_8->spa_root_vdev->vdev_children;
  VAR_7->scn_taskq = FUNC_5("dsl_scan_iss", VAR_9,
      VAR_5, VAR_9, VAR_9, VAR_3);
 }

 for (uint64_t VAR_10 = 0; VAR_10 < VAR_8->spa_root_vdev->vdev_children; VAR_10++) {
  vdev_t *VAR_11 = VAR_8->spa_root_vdev->vdev_child[VAR_10];

  FUNC_2(&VAR_11->vdev_scan_io_queue_lock);
  if (VAR_11->vdev_scan_io_queue != ((void*)0)) {
   FUNC_1(FUNC_6(VAR_7->scn_taskq,
       VAR_6, VAR_11->vdev_scan_io_queue,
       VAR_4) != VAR_2);
  }
  FUNC_3(&VAR_11->vdev_scan_io_queue_lock);
 }






 FUNC_7(VAR_7->scn_taskq);
}
