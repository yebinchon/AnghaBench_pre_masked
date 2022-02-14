
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int dsl_pool_t ;
struct TYPE_15__ {scalar_t__ ds_dir; scalar_t__ ds_object; scalar_t__ ds_quota; int ds_reserved; struct TYPE_15__* ds_prev; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_16__ {int ddra_owner; int * ddra_tosnap; int * ddra_fsname; } ;
typedef TYPE_2__ dsl_dataset_rollback_arg_t ;
struct TYPE_17__ {scalar_t__ tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
struct TYPE_19__ {scalar_t__ ds_prev_snap_txg; scalar_t__ ds_referenced_bytes; int ds_unique_bytes; } ;
struct TYPE_18__ {scalar_t__ dd_origin_obj; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_7 (int *,int *,int ,TYPE_1__**) ;
 TYPE_7__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 TYPE_4__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,int *,int ,int ) ;

int
FUNC_13(void *VAR_11, dmu_tx_t *VAR_12)
{
 dsl_dataset_rollback_arg_t *VAR_13 = VAR_11;
 dsl_pool_t *VAR_14 = FUNC_4(VAR_12);
 dsl_dataset_t *VAR_15;
 int64_t VAR_16;
 int VAR_17;

 VAR_17 = FUNC_7(VAR_14, VAR_13->ddra_fsname, VAR_8, &VAR_15);
 if (VAR_17 != 0)
  return (VAR_17);


 if (VAR_15->ds_is_snapshot) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_3));
 }


 if (FUNC_8(VAR_15)->ds_prev_snap_txg < VAR_10) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_6));
 }







 if (FUNC_3(VAR_12) &&
     FUNC_8(VAR_15)->ds_prev_snap_txg >= VAR_12->tx_txg) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_0));
 }





 if (VAR_13->ddra_tosnap != ((void*)0)) {
  dsl_dataset_t *VAR_18;


  VAR_17 = FUNC_7(VAR_14, VAR_13->ddra_tosnap, VAR_8, &VAR_18);
  if (VAR_17 != 0) {
   if (VAR_17 == VAR_4 || VAR_17 == VAR_7)
    VAR_17 = FUNC_2(VAR_6);
   FUNC_9(VAR_15, VAR_8);
   return (VAR_17);
  }
  FUNC_0(VAR_18->ds_is_snapshot);


  if (VAR_18 != VAR_15->ds_prev) {





   if (VAR_18->ds_dir == VAR_15->ds_dir ||
       (FUNC_10(VAR_15->ds_dir) &&
       FUNC_11(VAR_15->ds_dir)->dd_origin_obj ==
       VAR_18->ds_object)) {
    VAR_17 = FUNC_2(VAR_2);
   } else {
    VAR_17 = FUNC_2(VAR_6);
   }
   FUNC_9(VAR_18, VAR_8);
   FUNC_9(VAR_15, VAR_8);
   return (VAR_17);
  }
  FUNC_9(VAR_18, VAR_8);
 }


 if (FUNC_5(VAR_15) >
     FUNC_8(VAR_15)->ds_prev_snap_txg) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_2));
 }

 VAR_17 = FUNC_6(VAR_15, VAR_13->ddra_owner, VAR_12);
 if (VAR_17 != 0) {
  FUNC_9(VAR_15, VAR_8);
  return (VAR_17);
 }





 if (VAR_15->ds_quota != 0 &&
     FUNC_8(VAR_15->ds_prev)->ds_referenced_bytes > VAR_15->ds_quota) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_1));
 }
 VAR_16 = (int64_t)FUNC_1(VAR_15->ds_reserved,
     FUNC_8(VAR_15)->ds_unique_bytes);

 if (VAR_16 > 0 &&
     VAR_16 >
     FUNC_12(VAR_15->ds_dir, ((void*)0), 0, VAR_9)) {
  FUNC_9(VAR_15, VAR_8);
  return (FUNC_2(VAR_5));
 }

 FUNC_9(VAR_15, VAR_8);
 return (0);
}
