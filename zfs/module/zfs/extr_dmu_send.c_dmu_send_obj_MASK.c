
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {int zbm_ivset_guid; int zbm_creation_time; int zbm_creation_txg; int zbm_guid; } ;
struct dmu_send_params {int outfd; int numfromredactsnaps; int is_clone; TYPE_2__* to_ds; int fromredactsnaps; TYPE_1__ ancestor_zb; TYPE_3__* dp; void* rawok; int tag; int * dso; int * off; void* compressok; void* large_block_ok; void* embedok; int member_0; } ;
typedef int offset_t ;
struct TYPE_16__ {scalar_t__ ds_dir; int ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int ds_hold_flags_t ;
typedef int dmu_send_outparams_t ;
typedef void* boolean_t ;
struct TYPE_18__ {int ds_creation_time; int ds_creation_txg; int ds_guid; } ;
struct TYPE_17__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct dmu_send_params*) ;
 int FUNC_3 (TYPE_2__*,int ,int*,int**) ;
 int FUNC_4 (TYPE_3__*,int,int ,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_7__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (char const*,int ,TYPE_3__**) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int ,int,int,int *) ;

int
FUNC_14(const char *VAR_7, uint64_t VAR_8, uint64_t VAR_9,
    boolean_t VAR_10, boolean_t VAR_11, boolean_t VAR_12,
    boolean_t VAR_13, int VAR_14, offset_t *VAR_15, dmu_send_outparams_t *VAR_16)
{
 int VAR_17;
 dsl_dataset_t *VAR_18;
 ds_hold_flags_t VAR_19 = (VAR_13) ? 0 : VAR_1;
 struct dmu_send_params VAR_20 = {0};
 VAR_20.embedok = VAR_10;
 VAR_20.large_block_ok = VAR_11;
 VAR_20.compressok = VAR_12;
 VAR_20.outfd = VAR_14;
 VAR_20.off = VAR_15;
 VAR_20.dso = VAR_16;
 VAR_20.tag = VAR_3;
 VAR_20.rawok = VAR_13;

 VAR_17 = FUNC_10(VAR_7, VAR_3, &VAR_20.dp);
 if (VAR_17 != 0)
  return (VAR_17);

 VAR_17 = FUNC_4(VAR_20.dp, VAR_8, VAR_19, VAR_3,
     &VAR_20.to_ds);
 if (VAR_17 != 0) {
  FUNC_11(VAR_20.dp, VAR_3);
  return (VAR_17);
 }

 if (VAR_9 != 0) {
  VAR_17 = FUNC_4(VAR_20.dp, VAR_9, VAR_19,
      VAR_3, &VAR_18);
  if (VAR_17 != 0) {
   FUNC_9(VAR_20.to_ds, VAR_19, VAR_3);
   FUNC_11(VAR_20.dp, VAR_3);
   return (VAR_17);
  }
  VAR_20.ancestor_zb.zbm_guid = FUNC_7(VAR_18)->ds_guid;
  VAR_20.ancestor_zb.zbm_creation_txg =
      FUNC_7(VAR_18)->ds_creation_txg;
  VAR_20.ancestor_zb.zbm_creation_time =
      FUNC_7(VAR_18)->ds_creation_time;

  if (FUNC_6(VAR_18)) {
   (void) FUNC_13(VAR_20.dp->dp_meta_objset,
       VAR_18->ds_object, VAR_0, 8, 1,
       &VAR_20.ancestor_zb.zbm_ivset_guid);
  }


  uint64_t *VAR_21;

  if (!FUNC_3(VAR_18,
      VAR_6,
      &VAR_20.numfromredactsnaps,
      &VAR_21)) {
   VAR_20.numfromredactsnaps = VAR_5;
  } else if (VAR_20.numfromredactsnaps > 0) {
   uint64_t VAR_22 = VAR_20.numfromredactsnaps *
       sizeof (uint64_t);
   VAR_20.fromredactsnaps = FUNC_12(VAR_22, VAR_4);
   FUNC_1(VAR_21, VAR_20.fromredactsnaps, VAR_22);
  }

  if (!FUNC_5(VAR_20.to_ds, VAR_18, 0)) {
   VAR_17 = FUNC_0(VAR_2);
  } else {
   VAR_20.is_clone = (VAR_20.to_ds->ds_dir !=
       VAR_18->ds_dir);
   FUNC_8(VAR_18, VAR_3);
   VAR_17 = FUNC_2(&VAR_20);
  }
 } else {
  VAR_20.numfromredactsnaps = VAR_5;
  VAR_17 = FUNC_2(&VAR_20);
 }
 FUNC_8(VAR_20.to_ds, VAR_3);
 return (VAR_17);
}
