
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ zbm_redaction_obj; scalar_t__ zbm_creation_time; scalar_t__ zbm_creation_txg; scalar_t__ zbm_guid; } ;
typedef TYPE_2__ zfs_bookmark_phys_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_22__ {TYPE_4__* rl_phys; } ;
typedef TYPE_3__ redaction_list_t ;
struct TYPE_23__ {scalar_t__ rlp_last_object; scalar_t__ rlp_last_blkid; unsigned int rlp_num_snaps; scalar_t__ rlp_num_entries; scalar_t__* rlp_snaps; } ;
typedef TYPE_4__ redaction_list_phys_t ;
struct TYPE_24__ {scalar_t__ rbp_object; scalar_t__ rbp_blkid; } ;
typedef TYPE_5__ redact_block_phys_t ;
typedef int objset_t ;
struct TYPE_25__ {TYPE_1__* dp_spa; } ;
typedef TYPE_6__ dsl_pool_t ;
struct TYPE_26__ {int doi_max_offset; } ;
typedef TYPE_7__ dmu_object_info_t ;
typedef int boolean_t ;
struct TYPE_20__ {int * spa_meta_objset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,TYPE_7__*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_6__*,char*,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_6__*,scalar_t__,int ,TYPE_3__**) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int
FUNC_13(dsl_pool_t *VAR_3, char *VAR_4, boolean_t VAR_5,
    boolean_t VAR_6)
{
 int VAR_7 = 0;
 zfs_bookmark_phys_t VAR_8;
 objset_t *VAR_9 = VAR_3->dp_spa->spa_meta_objset;
 VAR_7 = FUNC_4(VAR_3, VAR_4, ((void*)0), &VAR_8);

 if (VAR_7 != 0) {
  return (VAR_7);
 }

 (void) FUNC_9("\t#%s: ", FUNC_12(VAR_4, '#') + 1);
 (void) FUNC_9("{guid: %llx creation_txg: %llu creation_time: "
     "%llu redaction_obj: %llu}\n", (u_longlong_t)VAR_8.zbm_guid,
     (u_longlong_t)VAR_8.zbm_creation_txg,
     (u_longlong_t)VAR_8.zbm_creation_time,
     (u_longlong_t)VAR_8.zbm_redaction_obj);

 FUNC_0(VAR_6, VAR_5);
 if (!VAR_5 || VAR_8.zbm_redaction_obj == 0)
  return (0);

 redaction_list_t *VAR_10;
 FUNC_1(FUNC_5(VAR_3,
     VAR_8.zbm_redaction_obj, VAR_0, &VAR_10));

 redaction_list_phys_t *VAR_11 = VAR_10->rl_phys;
 (void) FUNC_9("\tRedacted:\n\t\tProgress: ");
 if (VAR_11->rlp_last_object != VAR_2 ||
     VAR_11->rlp_last_blkid != VAR_2) {
  (void) FUNC_9("%llu %llu (incomplete)\n",
      (u_longlong_t)VAR_11->rlp_last_object,
      (u_longlong_t)VAR_11->rlp_last_blkid);
 } else {
  (void) FUNC_9("complete\n");
 }
 (void) FUNC_9("\t\tSnapshots: [");
 for (unsigned int VAR_12 = 0; VAR_12 < VAR_11->rlp_num_snaps; VAR_12++) {
  if (VAR_12 > 0)
   (void) FUNC_9(", ");
  (void) FUNC_9("%0llu",
      (u_longlong_t)VAR_11->rlp_snaps[VAR_12]);
 }
 (void) FUNC_9("]\n\t\tLength: %llu\n",
     (u_longlong_t)VAR_11->rlp_num_entries);

 if (!VAR_6) {
  FUNC_6(VAR_10, VAR_0);
  return (0);
 }

 if (VAR_11->rlp_num_entries == 0) {
  FUNC_6(VAR_10, VAR_0);
  (void) FUNC_9("\t\tRedaction List: []\n\n");
  return (0);
 }

 redact_block_phys_t *VAR_13;
 uint64_t VAR_14;
 dmu_object_info_t VAR_15;

 FUNC_1(FUNC_2(VAR_9, VAR_8.zbm_redaction_obj, &VAR_15));
 VAR_14 = VAR_15.doi_max_offset;
 VAR_13 = FUNC_7(VAR_14, VAR_1);

 VAR_7 = FUNC_3(VAR_9, VAR_8.zbm_redaction_obj, 0, VAR_14,
     VAR_13, 0);
 if (VAR_7 != 0) {
  FUNC_6(VAR_10, VAR_0);
  FUNC_8(VAR_13, VAR_14);
  return (VAR_7);
 }

 (void) FUNC_9("\t\tRedaction List: [{object: %llx, offset: "
     "%llx, blksz: %x, count: %llx}",
     (u_longlong_t)VAR_13[0].rbp_object,
     (u_longlong_t)VAR_13[0].rbp_blkid,
     (uint_t)(FUNC_11(&VAR_13[0])),
     (u_longlong_t)FUNC_10(&VAR_13[0]));

 for (size_t VAR_16 = 1; VAR_16 < VAR_11->rlp_num_entries; VAR_16++) {
  (void) FUNC_9(",\n\t\t{object: %llx, offset: %llx, "
      "blksz: %x, count: %llx}",
      (u_longlong_t)VAR_13[VAR_16].rbp_object,
      (u_longlong_t)VAR_13[VAR_16].rbp_blkid,
      (uint_t)(FUNC_11(&VAR_13[VAR_16])),
      (u_longlong_t)FUNC_10(&VAR_13[VAR_16]));
 }
 FUNC_6(VAR_10, VAR_0);
 FUNC_8(VAR_13, VAR_14);
 (void) FUNC_9("]\n\n");
 return (0);
}
