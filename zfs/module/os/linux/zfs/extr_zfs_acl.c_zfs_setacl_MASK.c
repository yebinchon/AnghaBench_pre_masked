
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_23__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {int z_pflags; int z_acl_lock; int z_lock; TYPE_3__* z_acl_cached; int z_is_sa; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_27__ {scalar_t__ z_version; scalar_t__ z_fuid_dirty; int z_os; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zfs_fuid_info_t ;
struct TYPE_28__ {int z_hints; scalar_t__ z_acl_bytes; } ;
typedef TYPE_3__ zfs_acl_t ;
struct TYPE_29__ {scalar_t__ vsa_mask; } ;
typedef TYPE_4__ vsecattr_t ;
typedef scalar_t__ ulong_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_26__ {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_23__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_3__*,int *,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*,int *) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int FUNC_20 (int *,int *,TYPE_1__*,TYPE_4__*,int *) ;
 int FUNC_21 (int *,TYPE_1__*) ;
 int FUNC_22 (TYPE_2__*,int ,TYPE_4__*,int *,int **,TYPE_3__**) ;
 int FUNC_23 (TYPE_1__*,int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_24 (TYPE_1__*) ;

int
FUNC_25(znode_t *VAR_16, vsecattr_t *VAR_17, boolean_t VAR_18, cred_t *VAR_19)
{
 zfsvfs_t *VAR_20 = FUNC_3(VAR_16);
 zilog_t *VAR_21 = VAR_20->z_log;
 ulong_t VAR_22 = VAR_17->vsa_mask & (VAR_9 | VAR_10);
 dmu_tx_t *VAR_23;
 int VAR_24;
 zfs_acl_t *VAR_25;
 zfs_fuid_info_t *VAR_26 = ((void*)0);
 boolean_t VAR_27;
 uint64_t VAR_28;

 if (VAR_22 == 0)
  return (FUNC_1(VAR_4));

 if (VAR_16->z_pflags & VAR_14)
  return (FUNC_1(VAR_5));

 if ((VAR_24 = FUNC_23(VAR_16, VAR_0, 0, VAR_18, VAR_19)))
  return (VAR_24);

 VAR_24 = FUNC_22(VAR_20, FUNC_2(VAR_16)->i_mode, VAR_17, VAR_19, &VAR_26,
     &VAR_25);
 if (VAR_24)
  return (VAR_24);





 if (!(VAR_17->vsa_mask & VAR_11)) {
  VAR_25->z_hints |=
      (VAR_16->z_pflags & VAR_8);
 }
top:
 FUNC_12(&VAR_16->z_acl_lock);
 FUNC_12(&VAR_16->z_lock);

 VAR_23 = FUNC_7(VAR_20->z_os);

 FUNC_9(VAR_23, VAR_16->z_sa_hdl, VAR_1);

 VAR_27 = VAR_20->z_fuid_dirty;
 if (VAR_27)
  FUNC_19(VAR_20, VAR_23);






 if ((VAR_28 = FUNC_16(VAR_16)) != 0) {
  if (VAR_20->z_version >= VAR_15 &&
      FUNC_24(VAR_16) <= VAR_13) {
   FUNC_8(VAR_23, VAR_28, 0,
       VAR_3);
   FUNC_10(VAR_23, VAR_2, 0,
       VAR_25->z_acl_bytes);
  } else {
   FUNC_10(VAR_23, VAR_28, 0, VAR_25->z_acl_bytes);
  }
 } else if (!VAR_16->z_is_sa && VAR_25->z_acl_bytes > VAR_12) {
  FUNC_10(VAR_23, VAR_2, 0, VAR_25->z_acl_bytes);
 }

 FUNC_21(VAR_23, VAR_16);
 VAR_24 = FUNC_5(VAR_23, VAR_7);
 if (VAR_24) {
  FUNC_13(&VAR_16->z_acl_lock);
  FUNC_13(&VAR_16->z_lock);

  if (VAR_24 == VAR_6) {
   FUNC_11(VAR_23);
   FUNC_4(VAR_23);
   goto top;
  }
  FUNC_4(VAR_23);
  FUNC_14(VAR_25);
  return (VAR_24);
 }

 VAR_24 = FUNC_15(VAR_16, VAR_25, VAR_19, VAR_23);
 FUNC_0(VAR_24 == 0);
 FUNC_0(VAR_16->z_acl_cached == ((void*)0));
 VAR_16->z_acl_cached = VAR_25;

 if (VAR_27)
  FUNC_18(VAR_20, VAR_23);

 FUNC_20(VAR_21, VAR_23, VAR_16, VAR_17, VAR_26);

 if (VAR_26)
  FUNC_17(VAR_26);
 FUNC_6(VAR_23);

 FUNC_13(&VAR_16->z_lock);
 FUNC_13(&VAR_16->z_acl_lock);

 return (VAR_24);
}
