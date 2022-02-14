
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {int spa_livelist_delete_zthr; int spa_livelists_to_delete; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;
struct TYPE_14__ {TYPE_3__* dp_free_dir; TYPE_1__* dp_spa; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_15__ {int dd_livelist; int dd_object; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_16__ {TYPE_3__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_17__ {int dd_uncompressed_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int **) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 TYPE_6__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int *,int ) ;
 int FUNC_9 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_10 (int *,int ,int ,int *) ;
 int FUNC_11 (int *,int ,int ,int ,int *) ;
 int FUNC_12 (int *,int ,int ,int,int,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(dsl_dataset_t *VAR_8, dmu_tx_t *VAR_9)
{
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 objset_t *VAR_15;
 dsl_dir_t *VAR_16 = VAR_8->ds_dir;
 dsl_pool_t *VAR_17 = FUNC_3(VAR_9);
 objset_t *VAR_18 = VAR_17->dp_meta_objset;
 spa_t *VAR_19 = FUNC_3(VAR_9)->dp_spa;
 FUNC_0(FUNC_1(VAR_8, &VAR_15));


 FUNC_4(VAR_16);


 FUNC_14(FUNC_2(VAR_15), VAR_9);

 FUNC_0(FUNC_12(VAR_18, VAR_16->dd_object,
     VAR_1, sizeof (uint64_t), 1, &VAR_11));

 int VAR_20 = FUNC_12(VAR_18, VAR_6,
     VAR_5, sizeof (uint64_t), 1, &VAR_10);
 if (VAR_20 == VAR_7) {
  VAR_10 = FUNC_11(VAR_18, VAR_3,
      VAR_4, 0, VAR_9);
  FUNC_0(FUNC_9(VAR_18, VAR_6,
      VAR_5, sizeof (uint64_t), 1,
      &(VAR_10), VAR_9));
  VAR_19->spa_livelists_to_delete = VAR_10;
 } else if (VAR_20 != 0) {
  FUNC_13("zfs: error %d was returned while looking "
      "up DMU_POOL_DELETED_CLONES in the zap");
  return;
 }
 FUNC_0(FUNC_10(VAR_18, VAR_10, VAR_11, VAR_9));


 FUNC_5(&VAR_16->dd_livelist, &VAR_12, &VAR_13, &VAR_14);
 FUNC_6(VAR_16, VAR_2,
     -VAR_12, -VAR_13, -FUNC_7(VAR_16)->dd_uncompressed_bytes,
     VAR_9);
 FUNC_6(VAR_17->dp_free_dir, VAR_2,
     VAR_12, VAR_13, VAR_14, VAR_9);
 FUNC_8(VAR_16, VAR_9, VAR_0);
 FUNC_15(VAR_19->spa_livelist_delete_zthr);
}
