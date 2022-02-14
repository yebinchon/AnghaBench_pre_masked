
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vdev_children; int vdev_scan_io_queue_lock; TYPE_4__* vdev_scan_io_queue; struct TYPE_8__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int range_seg_gap_t ;
typedef int longlong_t ;
struct TYPE_9__ {int scn_clearing; int scn_bytes_pending; TYPE_1__* scn_dp; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_10__ {scalar_t__ q_sio_memused; int q_exts_by_size; } ;
typedef TYPE_4__ dsl_scan_io_queue_t ;
typedef int boolean_t ;
struct TYPE_11__ {TYPE_2__* spa_root_vdev; } ;
struct TYPE_7__ {TYPE_5__* dp_spa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static boolean_t
FUNC_9(dsl_scan_t *VAR_8)
{
 vdev_t *VAR_9 = VAR_8->scn_dp->dp_spa->spa_root_vdev;
 uint64_t VAR_10, VAR_11, VAR_12;
 uint64_t VAR_13 = FUNC_4(FUNC_7(
     VAR_8->scn_dp->dp_spa));

 VAR_10 = FUNC_1((VAR_3 / VAR_4) * VAR_2,
     VAR_5);
 VAR_10 = FUNC_2(VAR_10, VAR_13 / 20);
 VAR_11 = VAR_10 - FUNC_2(VAR_10 / VAR_6,
     VAR_7);
 VAR_12 = 0;
 for (uint64_t VAR_14 = 0; VAR_14 < VAR_9->vdev_children; VAR_14++) {
  vdev_t *VAR_15 = VAR_9->vdev_child[VAR_14];
  dsl_scan_io_queue_t *VAR_16;

  FUNC_5(&VAR_15->vdev_scan_io_queue_lock);
  VAR_16 = VAR_15->vdev_scan_io_queue;
  if (VAR_16 != ((void*)0)) {

   VAR_12 += FUNC_8(&VAR_16->q_exts_by_size) *
       sizeof (range_seg_gap_t) + VAR_16->q_sio_memused;
  }
  FUNC_6(&VAR_15->vdev_scan_io_queue_lock);
 }

 FUNC_3("current scan memory usage: %llu bytes\n", (longlong_t)VAR_12);

 if (VAR_12 == 0)
  FUNC_0(VAR_8->scn_bytes_pending);






 if (VAR_12 >= VAR_10)
  return (VAR_1);
 else if (VAR_12 < VAR_11)
  return (VAR_0);
 else
  return (VAR_8->scn_clearing);
}
