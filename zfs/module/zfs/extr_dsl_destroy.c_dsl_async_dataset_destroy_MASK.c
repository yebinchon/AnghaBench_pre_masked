
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {scalar_t__ scn_async_destroying; } ;
typedef TYPE_1__ dsl_scan_t ;
struct TYPE_12__ {int dp_free_dir; int dp_bptree_obj; int dp_spa; TYPE_1__* dp_scan; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_13__ {int ds_dir; int ds_bp_rwlock; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {int ds_prev_snap_txg; int ds_bp; int ds_unique_bytes; } ;
struct TYPE_14__ {int dd_uncompressed_bytes; int dd_compressed_bytes; int dd_used_bytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*,int **) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_5__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int *) ;
 TYPE_4__* FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static void
FUNC_17(dsl_dataset_t *VAR_7, dmu_tx_t *VAR_8)
{
 uint64_t VAR_9, VAR_10, VAR_11;
 objset_t *VAR_12;

 FUNC_2(FUNC_5(VAR_7, &VAR_12));
 dsl_pool_t *VAR_13 = FUNC_7(VAR_8);
 objset_t *VAR_14 = VAR_13->dp_meta_objset;

 FUNC_16(FUNC_6(VAR_12), VAR_8);

 if (!FUNC_14(VAR_13->dp_spa,
     VAR_6)) {
  dsl_scan_t *VAR_15 = VAR_13->dp_scan;
  FUNC_13(VAR_13->dp_spa, VAR_6,
      VAR_8);
  VAR_13->dp_bptree_obj = FUNC_4(VAR_14, VAR_8);
  FUNC_2(FUNC_15(VAR_14,
      VAR_3,
      VAR_2, sizeof (uint64_t), 1,
      &VAR_13->dp_bptree_obj, VAR_8));
  FUNC_0(!VAR_15->scn_async_destroying);
  VAR_15->scn_async_destroying = VAR_0;
 }

 VAR_9 = FUNC_10(VAR_7->ds_dir)->dd_used_bytes;
 VAR_10 = FUNC_10(VAR_7->ds_dir)->dd_compressed_bytes;
 VAR_11 = FUNC_10(VAR_7->ds_dir)->dd_uncompressed_bytes;

 FUNC_0(!FUNC_1(VAR_7) ||
     FUNC_8(VAR_7)->ds_unique_bytes == VAR_9);

 FUNC_11(&VAR_7->ds_bp_rwlock, VAR_5, VAR_4);
 FUNC_3(VAR_14, VAR_13->dp_bptree_obj,
     &FUNC_8(VAR_7)->ds_bp,
     FUNC_8(VAR_7)->ds_prev_snap_txg,
     VAR_9, VAR_10, VAR_11, VAR_8);
 FUNC_12(&VAR_7->ds_bp_rwlock, VAR_4);
 FUNC_9(VAR_7->ds_dir, VAR_1,
     -VAR_9, -VAR_10, -VAR_11, VAR_8);
 FUNC_9(VAR_13->dp_free_dir, VAR_1,
     VAR_9, VAR_10, VAR_11, VAR_8);
}
