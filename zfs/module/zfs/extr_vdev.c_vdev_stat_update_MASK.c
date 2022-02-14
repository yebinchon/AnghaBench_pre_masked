
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t zio_type_t ;
struct TYPE_20__ {scalar_t__ io_txg; size_t io_type; int io_flags; scalar_t__ io_error; size_t io_priority; TYPE_5__* io_vd; scalar_t__ io_delta; scalar_t__ io_delay; int io_size; scalar_t__ io_gang_tree; TYPE_8__* io_spa; } ;
typedef TYPE_4__ zio_t ;
struct TYPE_23__ {int ** vsx_total_histo; int ** vsx_disk_histo; int ** vsx_queue_histo; int ** vsx_ind_histo; int ** vsx_agg_histo; } ;
struct TYPE_22__ {scalar_t__ vs_scan_processed; int * vs_bytes; int * vs_ops; int vs_self_healed; } ;
struct TYPE_21__ {int vdev_top; struct TYPE_21__* vdev_parent; TYPE_3__* vdev_ops; int vdev_stat_lock; TYPE_7__ vdev_stat_ex; TYPE_6__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
typedef TYPE_6__ vdev_stat_t ;
typedef TYPE_7__ vdev_stat_ex_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_24__ {scalar_t__ spa_load_state; scalar_t__ spa_claiming; TYPE_2__* spa_dsl_pool; TYPE_5__* spa_root_vdev; } ;
typedef TYPE_8__ spa_t ;
struct TYPE_25__ {scalar_t__ scn_processed; } ;
typedef TYPE_9__ dsl_scan_phys_t ;
struct TYPE_19__ {scalar_t__ vdev_op_leaf; } ;
struct TYPE_18__ {TYPE_1__* dp_scan; } ;
struct TYPE_17__ {TYPE_9__ scn_phys; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int ,int ,TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ,scalar_t__,int) ;
 int FUNC_11 (TYPE_5__*,int ,scalar_t__,int) ;

void
FUNC_12(zio_t *VAR_18, uint64_t VAR_19)
{
 spa_t *VAR_20 = VAR_18->io_spa;
 vdev_t *VAR_21 = VAR_20->spa_root_vdev;
 vdev_t *VAR_22 = VAR_18->io_vd ? VAR_18->io_vd : VAR_21;
 vdev_t *VAR_23;
 uint64_t VAR_24 = VAR_18->io_txg;
 vdev_stat_t *VAR_25 = &VAR_22->vdev_stat;
 vdev_stat_ex_t *VAR_26 = &VAR_22->vdev_stat_ex;
 zio_type_t VAR_27 = VAR_18->io_type;
 int VAR_28 = VAR_18->io_flags;




 if (VAR_18->io_gang_tree)
  return;

 if (VAR_18->io_error == 0) {
  if (VAR_22 == VAR_21)
   return;

  FUNC_0(VAR_22 == VAR_18->io_vd);

  if (VAR_28 & VAR_8)
   return;

  FUNC_4(&VAR_22->vdev_stat_lock);

  if (VAR_28 & VAR_9) {
   if (VAR_28 & VAR_11) {
    dsl_scan_phys_t *VAR_29 =
        &VAR_20->spa_dsl_pool->dp_scan->scn_phys;
    uint64_t *VAR_30 = &VAR_29->scn_processed;


    if (VAR_22->vdev_ops->vdev_op_leaf)
     FUNC_3(VAR_30, VAR_19);
    VAR_25->vs_scan_processed += VAR_19;
   }

   if (VAR_28 & VAR_12)
    VAR_25->vs_self_healed += VAR_19;
  }





  if (VAR_22->vdev_ops->vdev_op_leaf &&
      (VAR_18->io_priority < VAR_14)) {
   zio_type_t VAR_31 = VAR_27;






   if (VAR_27 == VAR_16)
    VAR_31 = VAR_15;

   VAR_25->vs_ops[VAR_31]++;
   VAR_25->vs_bytes[VAR_31] += VAR_19;

   if (VAR_28 & VAR_6) {
    VAR_26->vsx_agg_histo[VAR_18->io_priority]
        [FUNC_2(VAR_18->io_size)]++;
   } else {
    VAR_26->vsx_ind_histo[VAR_18->io_priority]
        [FUNC_2(VAR_18->io_size)]++;
   }

   if (VAR_18->io_delta && VAR_18->io_delay) {
    VAR_26->vsx_queue_histo[VAR_18->io_priority]
        [FUNC_1(VAR_18->io_delta - VAR_18->io_delay)]++;
    VAR_26->vsx_disk_histo[VAR_27]
        [FUNC_1(VAR_18->io_delay)]++;
    VAR_26->vsx_total_histo[VAR_27]
        [FUNC_1(VAR_18->io_delta)]++;
   }
  }

  FUNC_5(&VAR_22->vdev_stat_lock);
  return;
 }

 if (VAR_28 & VAR_13)
  return;







 if (VAR_18->io_error == VAR_3 &&
     !(VAR_18->io_flags & VAR_10))
  return;






 if (VAR_18->io_vd == ((void*)0) && (VAR_18->io_flags & VAR_7))
  return;

 if (VAR_20->spa_load_state == VAR_4 &&
     VAR_27 == VAR_17 && VAR_24 != 0 &&
     (!(VAR_28 & VAR_9) ||
     (VAR_28 & VAR_11) ||
     VAR_20->spa_claiming)) {
  if (VAR_22->vdev_ops->vdev_op_leaf) {
   uint64_t VAR_32 = VAR_24;
   if (VAR_28 & VAR_11) {
    FUNC_0(VAR_28 & VAR_9);
    FUNC_0(FUNC_7(VAR_20) == 1);
    FUNC_11(VAR_22, VAR_2, VAR_24, 1);
    VAR_32 = FUNC_8(VAR_20);
   } else if (VAR_20->spa_claiming) {
    FUNC_0(VAR_28 & VAR_9);
    VAR_32 = FUNC_6(VAR_20);
   }
   FUNC_0(VAR_32 >= FUNC_8(VAR_20));
   if (FUNC_10(VAR_22, VAR_0, VAR_24, 1))
    return;
   for (VAR_23 = VAR_22; VAR_23 != VAR_21; VAR_23 = VAR_23->vdev_parent)
    FUNC_11(VAR_23, VAR_1, VAR_24, 1);
   FUNC_9(VAR_22->vdev_top, VAR_5, VAR_22, VAR_32);
  }
  if (VAR_22 != VAR_21)
   FUNC_11(VAR_22, VAR_0, VAR_24, 1);
 }
}
