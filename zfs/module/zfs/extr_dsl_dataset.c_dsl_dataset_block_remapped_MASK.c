
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int dva_t ;
struct TYPE_21__ {int ds_remap_deadlist; int ds_remap_deadlist_lock; int ds_is_snapshot; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_22__ {scalar_t__ tx_txg; } ;
typedef TYPE_4__ dmu_tx_t ;
struct TYPE_23__ {scalar_t__ blk_birth; int * blk_dva; } ;
typedef TYPE_5__ blkptr_t ;
struct TYPE_20__ {TYPE_1__* dd_pool; } ;
struct TYPE_19__ {int * dp_spa; } ;
struct TYPE_18__ {scalar_t__ ds_prev_snap_txg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 TYPE_10__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_5__*,int ,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__,scalar_t__,TYPE_4__*) ;

void
FUNC_13(dsl_dataset_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5, dmu_tx_t *VAR_6)
{
 spa_t *VAR_7 = VAR_1->ds_dir->dd_pool->dp_spa;

 FUNC_0(FUNC_5(VAR_6));
 FUNC_0(VAR_5 <= VAR_6->tx_txg);
 FUNC_0(!VAR_1->ds_is_snapshot);

 if (VAR_5 > FUNC_7(VAR_1)->ds_prev_snap_txg) {
  FUNC_12(VAR_7, VAR_2, VAR_3, VAR_4, VAR_6);
 } else {
  blkptr_t VAR_8;
  dva_t *VAR_9 = &VAR_8.blk_dva[0];

  FUNC_0(VAR_1 != ((void*)0));

  FUNC_10(&VAR_1->ds_remap_deadlist_lock);
  if (!FUNC_8(VAR_1)) {
   FUNC_6(VAR_1, VAR_6);
  }
  FUNC_11(&VAR_1->ds_remap_deadlist_lock);

  FUNC_1(&VAR_8);
  VAR_8.blk_birth = VAR_5;
  FUNC_4(VAR_9, VAR_2);
  FUNC_3(VAR_9, VAR_3);
  FUNC_2(VAR_9, VAR_4);
  FUNC_9(&VAR_1->ds_remap_deadlist, &VAR_8, VAR_0,
      VAR_6);
 }
}
