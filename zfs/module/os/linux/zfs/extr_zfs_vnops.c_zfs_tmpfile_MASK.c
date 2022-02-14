
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_30__ {void* z_unlinked; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_31__ {scalar_t__ z_use_fuids; int z_use_sa; void* z_fuid_dirty; int z_unlinkedobj; int * z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_32__ {TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int xvattr_t ;
typedef int vsecattr_t ;
struct TYPE_33__ {int va_mask; int va_mode; } ;
typedef TYPE_5__ vattr_t ;
typedef int uint64_t ;
typedef int uid_t ;
struct inode {int dummy; } ;
typedef int objset_t ;
typedef int gid_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef void* boolean_t ;
struct TYPE_29__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (TYPE_2__*) ;
 struct inode* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (int *,int ,int ,scalar_t__) ;
 int FUNC_18 (int *,int ,int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int *,int ,int *,int ) ;
 int FUNC_22 (TYPE_2__*,int ,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_23 (TYPE_4__*) ;
 scalar_t__ FUNC_24 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_25 (TYPE_3__*,int *) ;
 int FUNC_26 (TYPE_3__*,int *) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*,TYPE_5__*,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_30 (TYPE_2__*,int *) ;
 int FUNC_31 (TYPE_2__*,int ,int ,scalar_t__,int *) ;

int
FUNC_32(struct inode *VAR_15, vattr_t *VAR_16, int VAR_17,
    int VAR_18, struct inode **VAR_19, cred_t *VAR_20, int VAR_21, vsecattr_t *VAR_22)
{
 znode_t *VAR_23 = ((void*)0), *VAR_24 = FUNC_1(VAR_15);
 zfsvfs_t *VAR_25 = FUNC_2(VAR_15);
 objset_t *VAR_26;
 dmu_tx_t *VAR_27;
 int VAR_28;
 uid_t VAR_29;
 gid_t VAR_30;
 zfs_acl_ids_t VAR_31;
 uint64_t VAR_32 = VAR_13;
 boolean_t VAR_33;
 boolean_t VAR_34 = VAR_2;
 boolean_t VAR_35 = VAR_2;






 VAR_30 = FUNC_10(VAR_20);
 VAR_29 = FUNC_11(VAR_20);

 if (VAR_25->z_use_fuids == VAR_2 &&
     (VAR_22 || FUNC_0(VAR_29) || FUNC_0(VAR_30)))
  return (FUNC_3(VAR_6));

 FUNC_6(VAR_25);
 FUNC_8(VAR_24);
 VAR_26 = VAR_25->z_os;

 if (VAR_16->va_mask & VAR_1) {
  if ((VAR_28 = FUNC_21((xvattr_t *)VAR_16,
      FUNC_11(VAR_20), VAR_20, VAR_16->va_mode)) != 0) {
   FUNC_7(VAR_25);
   return (VAR_28);
  }
 }

top:
 *VAR_19 = ((void*)0);





 if ((VAR_28 = FUNC_31(VAR_24, VAR_0, 0, VAR_2, VAR_20))) {
  if (VAR_34)
   FUNC_23(&VAR_31);
  goto out;
 }

 if (!VAR_34 && (VAR_28 = FUNC_22(VAR_24, 0, VAR_16,
     VAR_20, VAR_22, &VAR_31)) != 0)
  goto out;
 VAR_34 = VAR_3;

 if (FUNC_5(VAR_16->va_mode) || FUNC_4(VAR_16->va_mode))
  VAR_32 = FUNC_27(VAR_24);
 if (FUNC_24(VAR_25, &VAR_31, VAR_32)) {
  FUNC_23(&VAR_31);
  VAR_28 = FUNC_3(VAR_5);
  goto out;
 }

 VAR_27 = FUNC_15(VAR_26);

 FUNC_16(VAR_27, VAR_31.z_aclp->z_acl_bytes +
     VAR_14);
 FUNC_18(VAR_27, VAR_25->z_unlinkedobj, VAR_8, ((void*)0));

 VAR_33 = VAR_25->z_fuid_dirty;
 if (VAR_33)
  FUNC_26(VAR_25, VAR_27);
 if (!VAR_25->z_use_sa &&
     VAR_31.z_aclp->z_acl_bytes > VAR_12) {
  FUNC_17(VAR_27, VAR_4,
      0, VAR_31.z_aclp->z_acl_bytes);
 }
 VAR_28 = FUNC_13(VAR_27, (VAR_35 ? VAR_10 : 0) | VAR_11);
 if (VAR_28) {
  if (VAR_28 == VAR_7) {
   VAR_35 = VAR_3;
   FUNC_19(VAR_27);
   FUNC_12(VAR_27);
   goto top;
  }
  FUNC_23(&VAR_31);
  FUNC_12(VAR_27);
  FUNC_7(VAR_25);
  return (VAR_28);
 }
 FUNC_29(VAR_24, VAR_16, VAR_27, VAR_20, VAR_9, &VAR_23, &VAR_31);

 if (VAR_33)
  FUNC_25(VAR_25, VAR_27);


 VAR_23->z_unlinked = VAR_3;
 FUNC_30(VAR_23, VAR_27);
 FUNC_23(&VAR_31);
 FUNC_14(VAR_27);
out:

 if (VAR_28) {
  if (VAR_23)
   FUNC_20(FUNC_9(VAR_23));
 } else {
  FUNC_28(VAR_24);
  FUNC_28(VAR_23);
  *VAR_19 = FUNC_9(VAR_23);
 }

 FUNC_7(VAR_25);
 return (VAR_28);
}
