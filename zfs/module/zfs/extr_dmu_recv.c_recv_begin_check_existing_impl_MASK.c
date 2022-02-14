
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_29__ {int dp_meta_objset; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_30__ {scalar_t__ ds_object; TYPE_11__* ds_dir; TYPE_2__* ds_prev; } ;
typedef TYPE_5__ dsl_dataset_t ;
struct TYPE_31__ {int drba_dcp; TYPE_3__* drba_cookie; int drba_cred; } ;
typedef TYPE_6__ dmu_recv_begin_arg_t ;
typedef int boolean_t ;
struct TYPE_28__ {scalar_t__ drc_force; scalar_t__ drc_fromsnapobj; TYPE_1__* drc_drrb; int drc_tosnap; } ;
struct TYPE_27__ {scalar_t__ ds_object; } ;
struct TYPE_26__ {scalar_t__ drr_type; } ;
struct TYPE_25__ {scalar_t__ ds_prev_snap_obj; scalar_t__ ds_guid; int ds_snapnames_zapobj; } ;
struct TYPE_24__ {int dd_child_dir_zapobj; } ;
struct TYPE_23__ {scalar_t__ dd_crypto_obj; int dd_parent; TYPE_4__* dd_pool; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int ,TYPE_5__**) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_5__*) ;
 TYPE_15__* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 TYPE_12__* FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (TYPE_11__*,int,int ,int *,int ) ;
 int VAR_13 ;
 int FUNC_10 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_11 (int ,int ,scalar_t__*) ;
 int FUNC_12 (int ,int ,int ,int,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_13(dmu_recv_begin_arg_t *VAR_14, dsl_dataset_t *VAR_15,
    uint64_t VAR_16, uint64_t VAR_17)
{
 uint64_t VAR_18;
 uint64_t VAR_19;
 int VAR_20;
 dsl_pool_t *VAR_21 = VAR_15->ds_dir->dd_pool;
 boolean_t VAR_22 = VAR_15->ds_dir->dd_crypto_obj != 0;
 boolean_t VAR_23 = (VAR_17 & VAR_1) != 0;
 boolean_t VAR_24 = (VAR_17 & VAR_0) != 0;


 VAR_20 = FUNC_12(VAR_21->dp_meta_objset,
     FUNC_8(VAR_15->ds_dir)->dd_child_dir_zapobj, VAR_13,
     8, 1, &VAR_18);
 if (VAR_20 != VAR_7)
  return (VAR_20 == 0 ? FUNC_0(VAR_3) : VAR_20);


 if (FUNC_3(VAR_15))
  return (FUNC_0(VAR_3));


 VAR_20 = FUNC_12(VAR_21->dp_meta_objset,
     FUNC_6(VAR_15)->ds_snapnames_zapobj,
     VAR_14->drba_cookie->drc_tosnap, 8, 1, &VAR_18);
 if (VAR_20 != VAR_7)
  return (VAR_20 == 0 ? FUNC_0(VAR_4) : VAR_20);


 VAR_20 = FUNC_11(VAR_21->dp_meta_objset,
     FUNC_8(VAR_15->ds_dir)->dd_child_dir_zapobj, &VAR_19);
 if (VAR_20 != 0)
  return (VAR_20);
 if (VAR_14->drba_cookie->drc_drrb->drr_type != VAR_2 &&
     VAR_19 > 0)
  return (FUNC_0(VAR_11));
 VAR_20 = FUNC_9(VAR_15->ds_dir, 1, VAR_12,
     ((void*)0), VAR_14->drba_cred);
 if (VAR_20 != 0)
  return (VAR_20);

 if (VAR_16 != 0) {
  dsl_dataset_t *VAR_25;
  uint64_t VAR_26 = FUNC_6(VAR_15)->ds_prev_snap_obj;


  if (!VAR_22 && VAR_23)
   return (FUNC_0(VAR_5));


  if (VAR_22 && VAR_24)
   return (FUNC_0(VAR_5));


  while (VAR_26 != 0) {
   VAR_20 = FUNC_4(VAR_21, VAR_26, VAR_9,
       &VAR_25);
   if (VAR_20 != 0)
    return (FUNC_0(VAR_6));
   if (VAR_25->ds_dir != VAR_15->ds_dir) {
    FUNC_7(VAR_25, VAR_9);
    return (FUNC_0(VAR_6));
   }
   if (FUNC_6(VAR_25)->ds_guid == VAR_16)
    break;
   VAR_26 = FUNC_6(VAR_25)->ds_prev_snap_obj;
   FUNC_7(VAR_25, VAR_9);
  }
  if (VAR_26 == 0)
   return (FUNC_0(VAR_6));

  if (VAR_14->drba_cookie->drc_force) {
   VAR_14->drba_cookie->drc_fromsnapobj = VAR_26;
  } else {
   if (FUNC_5(VAR_15, VAR_25) ||
       (VAR_23 &&
       FUNC_6(VAR_15)->ds_prev_snap_obj !=
       VAR_25->ds_object)) {
    FUNC_7(VAR_25, VAR_9);
    return (FUNC_0(VAR_8));
   }
   VAR_14->drba_cookie->drc_fromsnapobj =
       VAR_15->ds_prev->ds_object;
  }

  if (FUNC_2(VAR_25,
      VAR_10) && !FUNC_10(VAR_14,
      VAR_25)) {
   FUNC_7(VAR_25, VAR_9);
   return (FUNC_0(VAR_5));
  }

  FUNC_7(VAR_25, VAR_9);
 } else {

  if (!VAR_14->drba_cookie->drc_force)
   return (FUNC_0(VAR_4));







  if ((!VAR_22 && VAR_23) || VAR_22)
   return (FUNC_0(VAR_5));





  if (!VAR_23) {
   boolean_t VAR_27;

   VAR_20 = FUNC_1(
       VAR_15->ds_dir->dd_parent, VAR_14->drba_dcp,
       &VAR_27);
   if (VAR_20 != 0)
    return (VAR_20);

   if (VAR_27 && VAR_24)
    return (FUNC_0(VAR_5));
  }
 }

 return (0);

}
