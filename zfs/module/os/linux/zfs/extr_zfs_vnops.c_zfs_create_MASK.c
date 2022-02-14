
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


struct TYPE_41__ {int z_pflags; int z_lock; int z_seq; int z_sa_hdl; int z_id; } ;
typedef TYPE_2__ znode_t ;
typedef int zilog_t ;
struct TYPE_42__ {scalar_t__ z_use_fuids; TYPE_6__* z_os; int z_use_sa; scalar_t__ z_fuid_dirty; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
struct TYPE_43__ {int z_fuidp; TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int xvattr_t ;
typedef int vsecattr_t ;
struct TYPE_44__ {int va_mask; scalar_t__ va_size; int va_mode; } ;
typedef TYPE_5__ vattr_t ;
typedef int uint64_t ;
typedef int uid_t ;
struct inode {int i_mode; } ;
struct TYPE_45__ {scalar_t__ os_sync; } ;
typedef TYPE_6__ objset_t ;
typedef int gid_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_40__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_25 ;
 int VAR_26 ;
 struct inode* FUNC_9 (TYPE_2__*) ;
 int VAR_27 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (int *,int ,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,int ,int ,scalar_t__) ;
 int FUNC_19 (int *,int ,int ,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*,int ,int *,int ,int*) ;
 int FUNC_30 (TYPE_2__*,int ,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_31 (TYPE_4__*) ;
 scalar_t__ FUNC_32 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_33 (int **,TYPE_2__*,char*,TYPE_2__**,int,int *,int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_36 (TYPE_3__*,int *) ;
 int FUNC_37 (TYPE_3__*,int *) ;
 int FUNC_38 (TYPE_2__*) ;
 int FUNC_39 (TYPE_2__*) ;
 int FUNC_40 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_41 (int *,int *,int ,TYPE_2__*,TYPE_2__*,char*,int *,int ,TYPE_5__*) ;
 int FUNC_42 (int ,int *,TYPE_5__*) ;
 int FUNC_43 (TYPE_2__*,TYPE_5__*,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_44 (TYPE_2__*,int ,int ,scalar_t__,int *) ;
 int FUNC_45 (TYPE_2__*,int,int,int *) ;
 int FUNC_46 (TYPE_2__*,int *) ;
 int FUNC_47 (int *,int ) ;

int
FUNC_48(struct inode *VAR_28, char *VAR_29, vattr_t *VAR_30, int VAR_31,
    int VAR_32, struct inode **VAR_33, cred_t *VAR_34, int VAR_35, vsecattr_t *VAR_36)
{
 znode_t *VAR_37, *VAR_38 = FUNC_1(VAR_28);
 zfsvfs_t *VAR_39 = FUNC_2(VAR_28);
 zilog_t *VAR_40;
 objset_t *VAR_41;
 zfs_dirlock_t *VAR_42;
 dmu_tx_t *VAR_43;
 int VAR_44;
 uid_t VAR_45;
 gid_t VAR_46;
 zfs_acl_ids_t VAR_47;
 boolean_t VAR_48;
 boolean_t VAR_49 = VAR_3;
 boolean_t VAR_50 = VAR_3;






 VAR_46 = FUNC_10(VAR_34);
 VAR_45 = FUNC_11(VAR_34);

 if (VAR_39->z_use_fuids == VAR_3 &&
     (VAR_36 || FUNC_0(VAR_45) || FUNC_0(VAR_46)))
  return (FUNC_3(VAR_9));

 if (VAR_29 == ((void*)0))
  return (FUNC_3(VAR_9));

 FUNC_6(VAR_39);
 FUNC_8(VAR_38);
 VAR_41 = VAR_39->z_os;
 VAR_40 = VAR_39->z_log;

 if (VAR_39->z_utf8 && FUNC_29(VAR_29, FUNC_28(VAR_29),
     ((void*)0), VAR_18, &VAR_44) < 0) {
  FUNC_7(VAR_39);
  return (FUNC_3(VAR_8));
 }

 if (VAR_30->va_mask & VAR_2) {
  if ((VAR_44 = FUNC_26((xvattr_t *)VAR_30,
      FUNC_11(VAR_34), VAR_34, VAR_30->va_mode)) != 0) {
   FUNC_7(VAR_39);
   return (VAR_44);
  }
 }

top:
 *VAR_33 = ((void*)0);
 if (*VAR_29 == '\0') {



  FUNC_21(VAR_28);
  VAR_37 = VAR_38;
  VAR_42 = ((void*)0);
  VAR_44 = 0;
 } else {

  int VAR_51 = 0;

  if (VAR_35 & VAR_13)
   VAR_51 |= VAR_20;

  VAR_44 = FUNC_33(&VAR_42, VAR_38, VAR_29, &VAR_37, VAR_51,
      ((void*)0), ((void*)0));
  if (VAR_44) {
   if (VAR_49)
    FUNC_31(&VAR_47);
   if (FUNC_27(VAR_29, "..") == 0)
    VAR_44 = FUNC_3(VAR_10);
   FUNC_7(VAR_39);
   return (VAR_44);
  }
 }

 if (VAR_37 == ((void*)0)) {
  uint64_t VAR_52;
  uint64_t VAR_53 = VAR_22;





  if ((VAR_44 = FUNC_44(VAR_38, VAR_0, 0, VAR_3, VAR_34))) {
   if (VAR_49)
    FUNC_31(&VAR_47);
   goto out;
  }






  if ((VAR_38->z_pflags & VAR_25) && !FUNC_5(VAR_30->va_mode)) {
   if (VAR_49)
    FUNC_31(&VAR_47);
   VAR_44 = FUNC_3(VAR_9);
   goto out;
  }

  if (!VAR_49 && (VAR_44 = FUNC_30(VAR_38, 0, VAR_30,
      VAR_34, VAR_36, &VAR_47)) != 0)
   goto out;
  VAR_49 = VAR_4;

  if (FUNC_5(VAR_30->va_mode) || FUNC_4(VAR_30->va_mode))
   VAR_53 = FUNC_38(VAR_38);
  if (FUNC_32(VAR_39, &VAR_47, VAR_53)) {
   FUNC_31(&VAR_47);
   VAR_44 = FUNC_3(VAR_6);
   goto out;
  }

  VAR_43 = FUNC_15(VAR_41);

  FUNC_17(VAR_43, VAR_47.z_aclp->z_acl_bytes +
      VAR_23);

  VAR_48 = VAR_39->z_fuid_dirty;
  if (VAR_48)
   FUNC_37(VAR_39, VAR_43);
  FUNC_19(VAR_43, VAR_38->z_id, VAR_14, VAR_29);
  FUNC_16(VAR_43, VAR_38->z_sa_hdl, VAR_3);
  if (!VAR_39->z_use_sa &&
      VAR_47.z_aclp->z_acl_bytes > VAR_21) {
   FUNC_18(VAR_43, VAR_5,
       0, VAR_47.z_aclp->z_acl_bytes);
  }

  VAR_44 = FUNC_13(VAR_43,
      (VAR_50 ? VAR_15 : 0) | VAR_16);
  if (VAR_44) {
   FUNC_34(VAR_42);
   if (VAR_44 == VAR_11) {
    VAR_50 = VAR_4;
    FUNC_20(VAR_43);
    FUNC_12(VAR_43);
    goto top;
   }
   FUNC_31(&VAR_47);
   FUNC_12(VAR_43);
   FUNC_7(VAR_39);
   return (VAR_44);
  }
  FUNC_43(VAR_38, VAR_30, VAR_43, VAR_34, 0, &VAR_37, &VAR_47);

  VAR_44 = FUNC_40(VAR_42, VAR_37, VAR_43, VAR_26);
  if (VAR_44 != 0) {




   FUNC_46(VAR_37, VAR_43);
   FUNC_25(FUNC_9(VAR_37));
   FUNC_31(&VAR_47);
   FUNC_14(VAR_43);
   goto out;
  }

  if (VAR_48)
   FUNC_36(VAR_39, VAR_43);

  VAR_52 = FUNC_42(VAR_27, VAR_36, VAR_30);
  if (VAR_35 & VAR_13)
   VAR_52 |= VAR_17;
  FUNC_41(VAR_40, VAR_43, VAR_52, VAR_38, VAR_37, VAR_29,
      VAR_36, VAR_47.z_fuidp, VAR_30);
  FUNC_31(&VAR_47);
  FUNC_14(VAR_43);
 } else {
  int VAR_54 = (VAR_35 & VAR_12) ? VAR_19 : 0;

  if (VAR_49)
   FUNC_31(&VAR_47);
  VAR_49 = VAR_3;







  if (VAR_31) {
   VAR_44 = FUNC_3(VAR_7);
   goto out;
  }



  if (FUNC_4(FUNC_9(VAR_37)->i_mode)) {
   VAR_44 = FUNC_3(VAR_10);
   goto out;
  }



  if (VAR_32 && (VAR_44 = FUNC_45(VAR_37, VAR_32, VAR_54, VAR_34))) {
   goto out;
  }

  FUNC_23(&VAR_38->z_lock);
  VAR_38->z_seq++;
  FUNC_24(&VAR_38->z_lock);




  if (FUNC_5(FUNC_9(VAR_37)->i_mode) &&
      (VAR_30->va_mask & VAR_1) && (VAR_30->va_size == 0)) {

   if (VAR_42) {
    FUNC_34(VAR_42);
    VAR_42 = ((void*)0);
   }
   VAR_44 = FUNC_35(VAR_37, 0, 0, VAR_32, VAR_14);
  }
 }
out:

 if (VAR_42)
  FUNC_34(VAR_42);

 if (VAR_44) {
  if (VAR_37)
   FUNC_22(FUNC_9(VAR_37));
 } else {
  FUNC_39(VAR_38);
  FUNC_39(VAR_37);
  *VAR_33 = FUNC_9(VAR_37);
 }

 if (VAR_39->z_os->os_sync == VAR_24)
  FUNC_47(VAR_40, 0);

 FUNC_7(VAR_39);
 return (VAR_44);
}
