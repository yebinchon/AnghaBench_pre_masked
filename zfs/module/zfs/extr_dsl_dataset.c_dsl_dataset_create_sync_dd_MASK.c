
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef void* uint64_t ;
typedef size_t spa_feature_t ;
typedef int objset_t ;
struct TYPE_35__ {int dp_spa; TYPE_3__* dp_origin_snap; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_36__ {TYPE_6__* dd_dbuf; int dd_object; TYPE_1__* dd_pool; } ;
typedef TYPE_2__ dsl_dir_t ;
struct TYPE_37__ {TYPE_2__* ds_dir; int ds_object; int ds_deadlist; TYPE_6__* ds_dbuf; int * ds_feature; int ds_bp_rwlock; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_38__ {int ds_flags; int ds_creation_txg; int ds_prev_snap_obj; int ds_prev_snap_txg; int ds_deadlist_obj; int ds_bp; int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_time; int ds_snapnames_zapobj; int ds_guid; int ds_fsid_guid; int ds_dir_obj; } ;
typedef TYPE_4__ dsl_dataset_phys_t ;
typedef int dsl_crypto_params_t ;
struct TYPE_39__ {int tx_txg; } ;
typedef TYPE_5__ dmu_tx_t ;
struct TYPE_40__ {TYPE_4__* db_data; } ;
typedef TYPE_6__ dmu_buf_t ;
struct TYPE_34__ {scalar_t__ ds_num_children; int ds_flags; scalar_t__ ds_next_clones_obj; int ds_bp; int ds_uncompressed_bytes; int ds_compressed_bytes; int ds_referenced_bytes; int ds_creation_txg; } ;
struct TYPE_33__ {scalar_t__ dd_head_dataset_obj; scalar_t__ dd_clones; int dd_origin_obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *,void*,int ,TYPE_6__**) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 void* FUNC_6 (int *,int ,int ,int ,int,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (void*,size_t,int ,TYPE_5__*) ;
 int FUNC_9 (void*,TYPE_2__*,TYPE_3__*,int *,TYPE_5__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int ,TYPE_3__**) ;
 TYPE_15__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (int *,TYPE_5__*) ;
 int FUNC_14 (int *,int ,int ,TYPE_5__*) ;
 TYPE_10__* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 () ;
 int FUNC_17 (void*,int) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int *,scalar_t__,void*,TYPE_5__*) ;
 void* FUNC_23 (int *,int ,int ,int ,TYPE_5__*) ;
 int FUNC_24 (int *,int ,int ,int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_25 (size_t,int ) ;

uint64_t
FUNC_26(dsl_dir_t *VAR_16, dsl_dataset_t *VAR_17,
    dsl_crypto_params_t *VAR_18, uint64_t VAR_19, dmu_tx_t *VAR_20)
{
 dsl_pool_t *VAR_21 = VAR_16->dd_pool;
 dmu_buf_t *VAR_22;
 dsl_dataset_phys_t *VAR_23;
 uint64_t VAR_24;
 objset_t *VAR_25 = VAR_21->dp_meta_objset;

 if (VAR_17 == ((void*)0))
  VAR_17 = VAR_21->dp_origin_snap;

 FUNC_0(VAR_17 == ((void*)0) || VAR_17->ds_dir->dd_pool == VAR_21);
 FUNC_0(VAR_17 == ((void*)0) || FUNC_11(VAR_17)->ds_num_children > 0);
 FUNC_0(FUNC_7(VAR_20));
 FUNC_0(FUNC_15(VAR_16)->dd_head_dataset_obj == 0);

 VAR_24 = FUNC_6(VAR_25, VAR_1, 0,
     VAR_1, sizeof (dsl_dataset_phys_t), VAR_20);
 FUNC_1(FUNC_3(VAR_25, VAR_24, VAR_8, &VAR_22));
 FUNC_5(VAR_22, VAR_20);
 VAR_23 = VAR_22->db_data;
 FUNC_2(VAR_23, sizeof (dsl_dataset_phys_t));
 VAR_23->ds_dir_obj = VAR_16->dd_object;
 VAR_23->ds_flags = VAR_19;
 VAR_23->ds_fsid_guid = FUNC_21();
 (void) FUNC_17((void*)&VAR_23->ds_guid,
     sizeof (VAR_23->ds_guid));
 VAR_23->ds_snapnames_zapobj =
     FUNC_24(VAR_25, VAR_15, VAR_2,
     VAR_4, 0, VAR_20);
 VAR_23->ds_creation_time = FUNC_16();
 VAR_23->ds_creation_txg = VAR_20->tx_txg == VAR_14 ? 1 : VAR_20->tx_txg;

 if (VAR_17 == ((void*)0)) {
  VAR_23->ds_deadlist_obj = FUNC_13(VAR_25, VAR_20);
 } else {
  dsl_dataset_t *VAR_26;

  VAR_23->ds_prev_snap_obj = VAR_17->ds_object;
  VAR_23->ds_prev_snap_txg =
      FUNC_11(VAR_17)->ds_creation_txg;
  VAR_23->ds_referenced_bytes =
      FUNC_11(VAR_17)->ds_referenced_bytes;
  VAR_23->ds_compressed_bytes =
      FUNC_11(VAR_17)->ds_compressed_bytes;
  VAR_23->ds_uncompressed_bytes =
      FUNC_11(VAR_17)->ds_uncompressed_bytes;
  FUNC_18(&VAR_17->ds_bp_rwlock, VAR_9, VAR_8);
  VAR_23->ds_bp = FUNC_11(VAR_17)->ds_bp;
  FUNC_19(&VAR_17->ds_bp_rwlock, VAR_8);





  VAR_23->ds_flags |= FUNC_11(VAR_17)->ds_flags &
      (VAR_6 | VAR_5);

  for (spa_feature_t VAR_27 = 0; VAR_27 < VAR_10; VAR_27++) {
   if (FUNC_25(VAR_27, VAR_17->ds_feature[VAR_27])) {
    FUNC_8(VAR_24, VAR_27,
        VAR_17->ds_feature[VAR_27], VAR_20);
   }
  }

  FUNC_5(VAR_17->ds_dbuf, VAR_20);
  FUNC_11(VAR_17)->ds_num_children++;

  FUNC_1(FUNC_10(VAR_21,
      FUNC_15(VAR_17->ds_dir)->dd_head_dataset_obj,
      VAR_8, &VAR_26));
  VAR_23->ds_deadlist_obj = FUNC_14(&VAR_26->ds_deadlist,
      VAR_23->ds_prev_snap_txg, VAR_23->ds_prev_snap_obj, VAR_20);
  FUNC_12(VAR_26, VAR_8);

  if (FUNC_20(VAR_21->dp_spa) >= VAR_12) {
   if (FUNC_11(VAR_17)->ds_next_clones_obj == 0) {
    FUNC_11(VAR_17)->ds_next_clones_obj =
        FUNC_23(VAR_25,
        VAR_3, VAR_4, 0, VAR_20);
   }
   FUNC_1(FUNC_22(VAR_25,
       FUNC_11(VAR_17)->ds_next_clones_obj,
       VAR_24, VAR_20));
  }

  FUNC_5(VAR_16->dd_dbuf, VAR_20);
  FUNC_15(VAR_16)->dd_origin_obj = VAR_17->ds_object;
  if (FUNC_20(VAR_21->dp_spa) >= VAR_11) {
   if (FUNC_15(VAR_17->ds_dir)->dd_clones == 0) {
    FUNC_5(VAR_17->ds_dir->dd_dbuf, VAR_20);
    FUNC_15(VAR_17->ds_dir)->dd_clones =
        FUNC_23(VAR_25,
        VAR_0, VAR_4, 0, VAR_20);
   }
   FUNC_1(FUNC_22(VAR_25,
       FUNC_15(VAR_17->ds_dir)->dd_clones,
       VAR_24, VAR_20));
  }
 }


 FUNC_9(VAR_24, VAR_16, VAR_17, VAR_18, VAR_20);

 if (FUNC_20(VAR_21->dp_spa) >= VAR_13)
  VAR_23->ds_flags |= VAR_7;

 FUNC_4(VAR_22, VAR_8);

 FUNC_5(VAR_16->dd_dbuf, VAR_20);
 FUNC_15(VAR_16)->dd_head_dataset_obj = VAR_24;

 return (VAR_24);
}
