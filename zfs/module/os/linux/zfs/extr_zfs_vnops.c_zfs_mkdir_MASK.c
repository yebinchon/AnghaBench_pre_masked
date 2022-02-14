
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_30__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


struct TYPE_38__ {int z_pflags; int z_id; } ;
typedef TYPE_2__ znode_t ;
typedef int zilog_t ;
struct TYPE_40__ {scalar_t__ z_use_fuids; TYPE_30__* z_os; int z_use_sa; scalar_t__ z_fuid_dirty; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
struct TYPE_41__ {int z_fuidp; TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int xvattr_t ;
typedef int vsecattr_t ;
struct TYPE_42__ {int va_mask; int va_mode; } ;
typedef TYPE_5__ vattr_t ;
typedef int uint64_t ;
typedef int uid_t ;
struct inode {int dummy; } ;
typedef int gid_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_39__ {scalar_t__ os_sync; } ;
struct TYPE_37__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_20 ;
 int VAR_21 ;
 struct inode* FUNC_9 (TYPE_2__*) ;
 int VAR_22 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_30__*) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (int *,int ,int ,scalar_t__) ;
 int FUNC_18 (int *,int ,int ,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int *,int ,int *,int ) ;
 int FUNC_23 (char*) ;
 scalar_t__ FUNC_24 (char*,int ,int *,int ,int*) ;
 int FUNC_25 (TYPE_2__*,int ,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_26 (TYPE_4__*) ;
 scalar_t__ FUNC_27 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_28 (int **,TYPE_2__*,char*,TYPE_2__**,int,int *,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_3__*,int *) ;
 int FUNC_31 (TYPE_3__*,int *) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (TYPE_2__*) ;
 int FUNC_34 (int *,TYPE_2__*,int *,int) ;
 int FUNC_35 (int *,int *,int ,TYPE_2__*,TYPE_2__*,char*,int *,int ,TYPE_5__*) ;
 int FUNC_36 (int ,int *,TYPE_5__*) ;
 int FUNC_37 (TYPE_2__*,TYPE_5__*,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_38 (TYPE_2__*,int ,int ,scalar_t__,int *) ;
 int FUNC_39 (TYPE_2__*,int *) ;
 int FUNC_40 (int *,int ) ;

int
FUNC_41(struct inode *VAR_23, char *VAR_24, vattr_t *VAR_25, struct inode **VAR_26,
    cred_t *VAR_27, int VAR_28, vsecattr_t *VAR_29)
{
 znode_t *VAR_30, *VAR_31 = FUNC_2(VAR_23);
 zfsvfs_t *VAR_32 = FUNC_3(VAR_23);
 zilog_t *VAR_33;
 zfs_dirlock_t *VAR_34;
 uint64_t VAR_35;
 dmu_tx_t *VAR_36;
 int VAR_37;
 int VAR_38 = VAR_21;
 uid_t VAR_39;
 gid_t VAR_40 = FUNC_10(VAR_27);
 zfs_acl_ids_t VAR_41;
 boolean_t VAR_42;
 boolean_t VAR_43 = VAR_2;

 FUNC_0(FUNC_5(VAR_25->va_mode));






 VAR_39 = FUNC_11(VAR_27);
 if (VAR_32->z_use_fuids == VAR_2 &&
     (VAR_29 || FUNC_1(VAR_39) || FUNC_1(VAR_40)))
  return (FUNC_4(VAR_7));

 if (VAR_24 == ((void*)0))
  return (FUNC_4(VAR_7));

 FUNC_6(VAR_32);
 FUNC_8(VAR_31);
 VAR_33 = VAR_32->z_log;

 if (VAR_31->z_pflags & VAR_20) {
  FUNC_7(VAR_32);
  return (FUNC_4(VAR_7));
 }

 if (VAR_32->z_utf8 && FUNC_24(VAR_24,
     FUNC_23(VAR_24), ((void*)0), VAR_15, &VAR_37) < 0) {
  FUNC_7(VAR_32);
  return (FUNC_4(VAR_6));
 }
 if (VAR_28 & VAR_10)
  VAR_38 |= VAR_16;

 if (VAR_25->va_mask & VAR_1) {
  if ((VAR_37 = FUNC_22((xvattr_t *)VAR_25,
      FUNC_11(VAR_27), VAR_27, VAR_25->va_mode)) != 0) {
   FUNC_7(VAR_32);
   return (VAR_37);
  }
 }

 if ((VAR_37 = FUNC_25(VAR_31, 0, VAR_25, VAR_27,
     VAR_29, &VAR_41)) != 0) {
  FUNC_7(VAR_32);
  return (VAR_37);
 }







top:
 *VAR_26 = ((void*)0);

 if ((VAR_37 = FUNC_28(&VAR_34, VAR_31, VAR_24, &VAR_30, VAR_38,
     ((void*)0), ((void*)0)))) {
  FUNC_26(&VAR_41);
  FUNC_7(VAR_32);
  return (VAR_37);
 }

 if ((VAR_37 = FUNC_38(VAR_31, VAR_0, 0, VAR_2, VAR_27))) {
  FUNC_26(&VAR_41);
  FUNC_29(VAR_34);
  FUNC_7(VAR_32);
  return (VAR_37);
 }

 if (FUNC_27(VAR_32, &VAR_41, FUNC_32(VAR_31))) {
  FUNC_26(&VAR_41);
  FUNC_29(VAR_34);
  FUNC_7(VAR_32);
  return (FUNC_4(VAR_5));
 }




 VAR_36 = FUNC_15(VAR_32->z_os);
 FUNC_18(VAR_36, VAR_31->z_id, VAR_11, VAR_24);
 FUNC_18(VAR_36, VAR_4, VAR_9, ((void*)0));
 VAR_42 = VAR_32->z_fuid_dirty;
 if (VAR_42)
  FUNC_31(VAR_32, VAR_36);
 if (!VAR_32->z_use_sa && VAR_41.z_aclp->z_acl_bytes > VAR_17) {
  FUNC_17(VAR_36, VAR_4, 0,
      VAR_41.z_aclp->z_acl_bytes);
 }

 FUNC_16(VAR_36, VAR_41.z_aclp->z_acl_bytes +
     VAR_18);

 VAR_37 = FUNC_13(VAR_36, (VAR_43 ? VAR_12 : 0) | VAR_13);
 if (VAR_37) {
  FUNC_29(VAR_34);
  if (VAR_37 == VAR_8) {
   VAR_43 = VAR_3;
   FUNC_19(VAR_36);
   FUNC_12(VAR_36);
   goto top;
  }
  FUNC_26(&VAR_41);
  FUNC_12(VAR_36);
  FUNC_7(VAR_32);
  return (VAR_37);
 }




 FUNC_37(VAR_31, VAR_25, VAR_36, VAR_27, 0, &VAR_30, &VAR_41);




 VAR_37 = FUNC_34(VAR_34, VAR_30, VAR_36, VAR_21);
 if (VAR_37 != 0) {
  FUNC_39(VAR_30, VAR_36);
  FUNC_21(FUNC_9(VAR_30));
  goto out;
 }

 if (VAR_42)
  FUNC_30(VAR_32, VAR_36);

 *VAR_26 = FUNC_9(VAR_30);

 VAR_35 = FUNC_36(VAR_22, VAR_29, VAR_25);
 if (VAR_28 & VAR_10)
  VAR_35 |= VAR_14;
 FUNC_35(VAR_33, VAR_36, VAR_35, VAR_31, VAR_30, VAR_24, VAR_29,
     VAR_41.z_fuidp, VAR_25);

out:
 FUNC_26(&VAR_41);

 FUNC_14(VAR_36);

 FUNC_29(VAR_34);

 if (VAR_32->z_os->os_sync == VAR_19)
  FUNC_40(VAR_33, 0);

 if (VAR_37 != 0) {
  FUNC_20(FUNC_9(VAR_30));
 } else {
  FUNC_33(VAR_31);
  FUNC_33(VAR_30);
 }
 FUNC_7(VAR_32);
 return (VAR_37);
}
