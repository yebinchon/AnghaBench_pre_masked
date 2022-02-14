
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vdev_top_zap; int vdev_spa; int * vdev_checkpoint_sm; int vdev_id; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_10__ {int sdc_entry_limit; int sdc_txg; TYPE_1__* sdc_vd; } ;
typedef TYPE_2__ spa_checkpoint_discard_sync_callback_arg_t ;
struct TYPE_11__ {int tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_10 (char*,int ,int ,int,int) ;
 int FUNC_11 (char*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_12(void *VAR_4, dmu_tx_t *VAR_5)
{
 vdev_t *VAR_6 = VAR_4;
 int VAR_7;
 uint64_t VAR_8 =
     (VAR_3 / (2 * sizeof (uint64_t))) >> 1;
 spa_checkpoint_discard_sync_callback_arg_t VAR_9;
 VAR_9.sdc_vd = VAR_6;
 VAR_9.sdc_txg = VAR_5->tx_txg;
 VAR_9.sdc_entry_limit = VAR_8;

 uint64_t VAR_10 =
     FUNC_8(VAR_6->vdev_checkpoint_sm) / sizeof (uint64_t);

 VAR_7 = FUNC_7(VAR_6->vdev_checkpoint_sm,
     VAR_2, &VAR_9, VAR_5);

 uint64_t VAR_11 =
     FUNC_8(VAR_6->vdev_checkpoint_sm) / sizeof (uint64_t);





 FUNC_10("discarding checkpoint: txg %llu, vdev id %d, "
     "deleted %llu words - %llu words are left",
     VAR_5->tx_txg, VAR_6->vdev_id, (VAR_10 - VAR_11),
     VAR_11);

 if (VAR_7 != VAR_0) {
  if (VAR_7 != 0) {
   FUNC_11("zfs: error %d was returned "
       "while incrementally destroying the checkpoint "
       "space map of vdev %llu\n",
       VAR_7, VAR_6->vdev_id);
  }
  FUNC_0(VAR_11);
  FUNC_0(FUNC_4(VAR_6->vdev_checkpoint_sm));
  FUNC_0(FUNC_8(VAR_6->vdev_checkpoint_sm));

  FUNC_6(VAR_6->vdev_checkpoint_sm, VAR_5);
  FUNC_5(VAR_6->vdev_checkpoint_sm);
  VAR_6->vdev_checkpoint_sm = ((void*)0);

  FUNC_1(FUNC_9(FUNC_3(VAR_6->vdev_spa),
      VAR_6->vdev_top_zap, VAR_1, VAR_5));
 }
}
