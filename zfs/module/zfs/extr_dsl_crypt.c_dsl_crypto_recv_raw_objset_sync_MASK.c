
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int zio_t ;
typedef int uint_t ;
typedef int uint8_t ;
typedef void* uint64_t ;
struct TYPE_26__ {void** os_next_write_raw; TYPE_1__* os_phys; int os_phys_buf; } ;
typedef TYPE_2__ objset_t ;
typedef int nvlist_t ;
struct TYPE_27__ {int dp_spa; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_28__ {int ds_dbuf; int ds_bp_rwlock; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_29__ {int dn_struct_rwlock; void* dn_checksum; void* dn_compress; } ;
typedef TYPE_5__ dnode_t ;
struct TYPE_30__ {size_t tx_txg; TYPE_3__* tx_pool; } ;
typedef TYPE_6__ dmu_tx_t ;
typedef int dmu_objset_type_t ;
typedef void* boolean_t ;
struct TYPE_25__ {int os_local_mac; int os_portable_mac; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_4__*,int ,int ,void*,void*,void*,TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__**) ;
 int FUNC_9 (TYPE_5__*,void*,TYPE_6__*,void*,void*) ;
 int FUNC_10 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int *,TYPE_6__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_6__*) ;
 void* FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,int **,int *) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ,int *,int *,int ) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void
FUNC_22(dsl_dataset_t *VAR_8, dmu_objset_type_t VAR_9,
    nvlist_t *VAR_10, dmu_tx_t *VAR_11)
{
 dsl_pool_t *VAR_12 = VAR_11->tx_pool;
 objset_t *VAR_13;
 dnode_t *VAR_14;
 zio_t *VAR_15;
 uint8_t *VAR_16;
 uint_t VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 boolean_t VAR_24 = VAR_0;

 FUNC_2(FUNC_8(VAR_8, &VAR_13));
 VAR_14 = FUNC_1(VAR_13);






 VAR_18 = FUNC_14(VAR_10, "mdn_compress");
 VAR_19 = FUNC_14(VAR_10, "mdn_checksum");
 VAR_20 = FUNC_14(VAR_10, "mdn_nlevels");
 VAR_21 = FUNC_14(VAR_10, "mdn_blksz");
 VAR_22 = FUNC_14(VAR_10, "mdn_indblkshift");
 VAR_23 = FUNC_14(VAR_10, "mdn_maxblkid");
 FUNC_2(FUNC_15(VAR_10, "portable_mac", &VAR_16,
     &VAR_17));


 FUNC_16(&VAR_8->ds_bp_rwlock, VAR_3, VAR_2);
 if (FUNC_0(FUNC_11(VAR_8))) {
  (void) FUNC_7(VAR_12->dp_spa, VAR_8,
      FUNC_11(VAR_8), VAR_9, VAR_20, VAR_21,
      VAR_22, VAR_11);
  VAR_24 = VAR_1;
 }
 FUNC_17(&VAR_8->ds_bp_rwlock, VAR_2);







 FUNC_3(VAR_13->os_phys_buf, &VAR_13->os_phys_buf);
 FUNC_4(VAR_16, VAR_13->os_phys->os_portable_mac, VAR_7);
 FUNC_5(VAR_13->os_phys->os_local_mac, VAR_7);
 VAR_13->os_next_write_raw[VAR_11->tx_txg & VAR_5] = VAR_1;


 VAR_14->dn_compress = VAR_18;
 VAR_14->dn_checksum = VAR_19;

 FUNC_18(&VAR_14->dn_struct_rwlock, VAR_4);
 FUNC_9(VAR_14, VAR_23, VAR_11, VAR_0, VAR_1);
 FUNC_19(&VAR_14->dn_struct_rwlock);






 if (VAR_24) {
  FUNC_10(VAR_8, VAR_11);
 } else {
  VAR_15 = FUNC_20(VAR_12->dp_spa, ((void*)0), ((void*)0), VAR_6);
  FUNC_12(VAR_8, VAR_15, VAR_11);
  FUNC_2(FUNC_21(VAR_15));


  FUNC_6(VAR_8->ds_dbuf, VAR_8);
  FUNC_13(VAR_8, VAR_11);
 }
}
