
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {unsigned long long vdev_ms_shift; int vdev_stat_lock; int vdev_resilver_deferred; TYPE_2__* vdev_ops; TYPE_1__* vdev_mg; struct TYPE_14__* vdev_top; int * vdev_aux; scalar_t__ vdev_asize; scalar_t__ vdev_max_asize; int vdev_trim_action_time; int vdev_trim_state; int vdev_trim_bytes_est; int vdev_trim_bytes_done; int vdev_has_trim; int vdev_initialize_action_time; int vdev_initialize_state; int vdev_initialize_bytes_est; int vdev_initialize_bytes_done; int vdev_state; int vdev_stat; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_15__ {int vs_trim_notsup; int vs_resilver_deferred; int vs_fragmentation; int vs_esize; int vs_trim_action_time; int vs_trim_state; int vs_trim_bytes_est; int vs_trim_bytes_done; int vs_initialize_action_time; int vs_initialize_state; int vs_initialize_bytes_est; int vs_initialize_bytes_done; int vs_rsize; int vs_state; scalar_t__ vs_timestamp; } ;
typedef TYPE_4__ vdev_stat_t ;
typedef int vdev_stat_ex_t ;
struct TYPE_13__ {scalar_t__ vdev_op_leaf; } ;
struct TYPE_12__ {int mg_fragmentation; } ;


 int FUNC_0 (scalar_t__,unsigned long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

void
FUNC_8(vdev_t *VAR_2, vdev_stat_t *VAR_3, vdev_stat_ex_t *VAR_4)
{
 vdev_t *VAR_5 = VAR_2->vdev_top;
 FUNC_3(&VAR_2->vdev_stat_lock);
 if (VAR_3) {
  FUNC_1(&VAR_2->vdev_stat, VAR_3, sizeof (*VAR_3));
  VAR_3->vs_timestamp = FUNC_2() - VAR_3->vs_timestamp;
  VAR_3->vs_state = VAR_2->vdev_state;
  VAR_3->vs_rsize = FUNC_5(VAR_2);
  if (VAR_2->vdev_ops->vdev_op_leaf) {
   VAR_3->vs_rsize += VAR_1 +
       VAR_0;





   VAR_3->vs_initialize_bytes_done =
       VAR_2->vdev_initialize_bytes_done;
   VAR_3->vs_initialize_bytes_est =
       VAR_2->vdev_initialize_bytes_est;
   VAR_3->vs_initialize_state = VAR_2->vdev_initialize_state;
   VAR_3->vs_initialize_action_time =
       VAR_2->vdev_initialize_action_time;






   VAR_3->vs_trim_notsup = !VAR_2->vdev_has_trim;
   VAR_3->vs_trim_bytes_done = VAR_2->vdev_trim_bytes_done;
   VAR_3->vs_trim_bytes_est = VAR_2->vdev_trim_bytes_est;
   VAR_3->vs_trim_state = VAR_2->vdev_trim_state;
   VAR_3->vs_trim_action_time = VAR_2->vdev_trim_action_time;
  }






  if (VAR_2->vdev_aux == ((void*)0) && VAR_5 != ((void*)0)) {
   VAR_3->vs_esize = FUNC_0(
       VAR_2->vdev_max_asize - VAR_2->vdev_asize,
       1ULL << VAR_5->vdev_ms_shift);
  }
  if (VAR_2->vdev_aux == ((void*)0) && VAR_2 == VAR_2->vdev_top &&
      FUNC_7(VAR_2)) {
   VAR_3->vs_fragmentation = (VAR_2->vdev_mg != ((void*)0)) ?
       VAR_2->vdev_mg->mg_fragmentation : 0;
  }
  if (VAR_2->vdev_ops->vdev_op_leaf)
   VAR_3->vs_resilver_deferred = VAR_2->vdev_resilver_deferred;
 }

 FUNC_6(VAR_2, VAR_3, VAR_4);
 FUNC_4(&VAR_2->vdev_stat_lock);
}
