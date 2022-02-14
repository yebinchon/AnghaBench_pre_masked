
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int os_flags; } ;
typedef TYPE_2__ objset_t ;
typedef int nvlist_t ;
typedef int from_ivset_guid ;
struct TYPE_16__ {int ds_object; int ds_bp_rwlock; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_17__ {scalar_t__ dn_nlevels; scalar_t__ dn_datablksz; scalar_t__ dn_indblkshift; scalar_t__ dn_nblkptr; } ;
typedef TYPE_4__ dnode_t ;
struct TYPE_18__ {TYPE_1__* tx_pool; } ;
typedef TYPE_5__ dmu_tx_t ;
typedef scalar_t__ dmu_objset_type_t ;
struct TYPE_14__ {int dp_meta_objset; int dp_spa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_4 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,char*,scalar_t__*) ;
 int FUNC_7 (int *,char*,int **,scalar_t__*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int,int,scalar_t__*) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_12(dsl_dataset_t *VAR_20, dsl_dataset_t *VAR_21,
    dmu_objset_type_t VAR_22, nvlist_t *VAR_23, dmu_tx_t *VAR_24)
{
 int VAR_25;
 objset_t *VAR_26;
 dnode_t *VAR_27;
 uint8_t *VAR_28 = ((void*)0);
 uint_t VAR_29;
 uint64_t VAR_30, VAR_31, VAR_32, VAR_33;
 uint64_t VAR_34, VAR_35;

 if (VAR_22 != VAR_0 && VAR_22 != VAR_1)
  return (FUNC_3(VAR_7));


 VAR_25 = FUNC_6(VAR_23, "mdn_compress", &VAR_30);
 if (VAR_25 != 0 || VAR_30 >= VAR_17)
  return (FUNC_3(VAR_7));

 VAR_25 = FUNC_6(VAR_23, "mdn_checksum", &VAR_30);
 if (VAR_25 != 0 || VAR_30 >= VAR_16)
  return (FUNC_3(VAR_7));

 VAR_25 = FUNC_6(VAR_23, "mdn_nlevels", &VAR_31);
 if (VAR_25 != 0 || VAR_31 > VAR_3)
  return (FUNC_3(VAR_7));

 VAR_25 = FUNC_6(VAR_23, "mdn_blksz", &VAR_32);
 if (VAR_25 != 0 || VAR_32 < VAR_13)
  return (FUNC_3(VAR_7));
 else if (VAR_32 > FUNC_10(VAR_24->tx_pool->dp_spa))
  return (FUNC_3(VAR_8));

 VAR_25 = FUNC_6(VAR_23, "mdn_indblkshift", &VAR_33);
 if (VAR_25 != 0 || VAR_33 < VAR_5 || VAR_33 > VAR_2)
  return (FUNC_3(VAR_8));

 VAR_25 = FUNC_6(VAR_23, "mdn_nblkptr", &VAR_34);
 if (VAR_25 != 0 || VAR_34 != VAR_4)
  return (FUNC_3(VAR_8));

 VAR_25 = FUNC_6(VAR_23, "mdn_maxblkid", &VAR_35);
 if (VAR_25 != 0)
  return (FUNC_3(VAR_7));

 VAR_25 = FUNC_7(VAR_23, "portable_mac", &VAR_28, &VAR_29);
 if (VAR_25 != 0 || VAR_29 != VAR_18)
  return (FUNC_3(VAR_7));

 VAR_25 = FUNC_4(VAR_20, &VAR_26);
 if (VAR_25 != 0)
  return (VAR_25);






 FUNC_0(VAR_26->os_flags & VAR_10);
 FUNC_0(VAR_26->os_flags & VAR_11);

 VAR_27 = FUNC_2(VAR_26);





 FUNC_8(&VAR_20->ds_bp_rwlock, VAR_12, VAR_9);
 if (!FUNC_1(FUNC_5(VAR_20)) &&
     (VAR_27->dn_nlevels != VAR_31 || VAR_27->dn_datablksz != VAR_32 ||
     VAR_27->dn_indblkshift != VAR_33 || VAR_27->dn_nblkptr != VAR_34)) {
  FUNC_9(&VAR_20->ds_bp_rwlock, VAR_9);
  return (FUNC_3(VAR_7));
 }
 FUNC_9(&VAR_20->ds_bp_rwlock, VAR_9);
 if (VAR_21 != ((void*)0) && !VAR_19) {
  uint64_t VAR_36 = 0;
  VAR_30 = 0;

  (void) FUNC_6(VAR_23, "from_ivset_guid", &VAR_30);
  (void) FUNC_11(VAR_24->tx_pool->dp_meta_objset,
      VAR_21->ds_object, VAR_6,
      sizeof (VAR_36), 1, &VAR_36);

  if (VAR_30 == 0 || VAR_36 == 0)
   return (FUNC_3(VAR_15));

  if (VAR_30 != VAR_36)
   return (FUNC_3(VAR_14));
 }

 return (0);
}
