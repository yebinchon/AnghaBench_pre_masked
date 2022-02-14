
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int vdev_guid; scalar_t__ vdev_path; } ;
typedef TYPE_2__ vdev_t ;
typedef void* uint64_t ;
struct TYPE_17__ {int pl_lock; } ;
struct TYPE_16__ {scalar_t__ size; TYPE_9__ procfs_list; } ;
struct TYPE_12__ {TYPE_5__ mmp_history; } ;
struct TYPE_14__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_15__ {int vdev_guid; int vdev_label; int io_error; int error_start; void* mmp_node_id; int vdev_path; void* mmp_delay; void* timestamp; void* txg; } ;
typedef TYPE_4__ spa_mmp_history_t ;
typedef TYPE_5__ spa_history_list_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_1 ;

void
FUNC_7(spa_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, vdev_t *VAR_6, int VAR_7, uint64_t VAR_8,
    int VAR_9)
{
 spa_history_list_t *VAR_10 = &VAR_2->spa_stats.mmp_history;
 spa_mmp_history_t *VAR_11;

 if (VAR_1 == 0 && VAR_10->size == 0)
  return;

 VAR_11 = FUNC_2(sizeof (spa_mmp_history_t), VAR_0);
 VAR_11->txg = VAR_3;
 VAR_11->timestamp = VAR_4;
 VAR_11->mmp_delay = VAR_5;
 if (VAR_6) {
  VAR_11->vdev_guid = VAR_6->vdev_guid;
  if (VAR_6->vdev_path)
   VAR_11->vdev_path = FUNC_1(VAR_6->vdev_path);
 }
 VAR_11->vdev_label = VAR_7;
 VAR_11->mmp_node_id = VAR_8;

 if (VAR_9) {
  VAR_11->io_error = VAR_9;
  VAR_11->error_start = FUNC_0();
  VAR_11->vdev_guid = 1;
 }

 FUNC_3(&VAR_10->procfs_list.pl_lock);
 FUNC_5(&VAR_10->procfs_list, VAR_11);
 VAR_10->size++;
 FUNC_6(VAR_10, VAR_1);
 FUNC_4(&VAR_10->procfs_list.pl_lock);
}
