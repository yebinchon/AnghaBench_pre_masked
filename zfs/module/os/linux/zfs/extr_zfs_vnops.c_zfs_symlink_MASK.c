
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_28__ ;
typedef struct TYPE_37__ TYPE_1__ ;


struct TYPE_39__ {char z_size; int z_sa_hdl; int z_lock; scalar_t__ z_is_sa; int z_id; } ;
typedef TYPE_2__ znode_t ;
typedef int zilog_t ;
struct TYPE_40__ {TYPE_28__* z_os; int z_use_sa; scalar_t__ z_fuid_dirty; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
struct TYPE_41__ {TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
struct TYPE_42__ {int va_mode; } ;
typedef TYPE_5__ vattr_t ;
typedef scalar_t__ uint64_t ;
struct inode {int dummy; } ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_38__ {scalar_t__ os_sync; } ;
struct TYPE_37__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_22 ;
 struct inode* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_28__*) ;
 int FUNC_16 (int *,int ,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,int ,int ,scalar_t__) ;
 int FUNC_19 (int *,int ,int ,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (int ,int ,char*,int,int *) ;
 scalar_t__ FUNC_26 (char*) ;
 scalar_t__ FUNC_27 (char*,scalar_t__,int *,int ,int*) ;
 int FUNC_28 (TYPE_2__*,int ,TYPE_5__*,int *,int *,TYPE_4__*) ;
 int FUNC_29 (TYPE_4__*) ;
 scalar_t__ FUNC_30 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_31 (int **,TYPE_2__*,char*,TYPE_2__**,int,int *,int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (TYPE_3__*,int *) ;
 int FUNC_34 (TYPE_3__*,int *) ;
 int FUNC_35 (TYPE_2__*) ;
 int FUNC_36 (int *,TYPE_2__*,int *,int) ;
 int FUNC_37 (int *,int *,scalar_t__,TYPE_2__*,TYPE_2__*,char*,char*) ;
 int FUNC_38 (TYPE_2__*,TYPE_5__*,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_39 (TYPE_2__*,char*,scalar_t__,int *) ;
 int FUNC_40 (TYPE_2__*,int ,int ,scalar_t__,int *) ;
 int FUNC_41 (TYPE_2__*,int *) ;
 int FUNC_42 (int *,int ) ;

int
FUNC_43(struct inode *VAR_23, char *VAR_24, vattr_t *VAR_25, char *VAR_26,
    struct inode **VAR_27, cred_t *VAR_28, int VAR_29)
{
 znode_t *VAR_30, *VAR_31 = FUNC_1(VAR_23);
 zfs_dirlock_t *VAR_32;
 dmu_tx_t *VAR_33;
 zfsvfs_t *VAR_34 = FUNC_2(VAR_23);
 zilog_t *VAR_35;
 uint64_t VAR_36 = FUNC_26(VAR_26);
 int VAR_37;
 int VAR_38 = VAR_22;
 zfs_acl_ids_t VAR_39;
 boolean_t VAR_40;
 uint64_t VAR_41 = VAR_15;
 boolean_t VAR_42 = VAR_1;

 FUNC_0(FUNC_7(VAR_25->va_mode));

 if (VAR_24 == ((void*)0))
  return (FUNC_6(VAR_6));

 FUNC_8(VAR_34);
 FUNC_10(VAR_31);
 VAR_35 = VAR_34->z_log;

 if (VAR_34->z_utf8 && FUNC_27(VAR_24, FUNC_26(VAR_24),
     ((void*)0), VAR_16, &VAR_37) < 0) {
  FUNC_9(VAR_34);
  return (FUNC_6(VAR_5));
 }
 if (VAR_29 & VAR_9)
  VAR_38 |= VAR_17;

 if (VAR_36 > VAR_10) {
  FUNC_9(VAR_34);
  return (FUNC_6(VAR_7));
 }

 if ((VAR_37 = FUNC_28(VAR_31, 0,
     VAR_25, VAR_28, ((void*)0), &VAR_39)) != 0) {
  FUNC_9(VAR_34);
  return (VAR_37);
 }
top:
 *VAR_27 = ((void*)0);




 VAR_37 = FUNC_31(&VAR_32, VAR_31, VAR_24, &VAR_30, VAR_38, ((void*)0), ((void*)0));
 if (VAR_37) {
  FUNC_29(&VAR_39);
  FUNC_9(VAR_34);
  return (VAR_37);
 }

 if ((VAR_37 = FUNC_40(VAR_31, VAR_0, 0, VAR_1, VAR_28))) {
  FUNC_29(&VAR_39);
  FUNC_32(VAR_32);
  FUNC_9(VAR_34);
  return (VAR_37);
 }

 if (FUNC_30(VAR_34, &VAR_39, VAR_19)) {
  FUNC_29(&VAR_39);
  FUNC_32(VAR_32);
  FUNC_9(VAR_34);
  return (FUNC_6(VAR_4));
 }
 VAR_33 = FUNC_15(VAR_34->z_os);
 VAR_40 = VAR_34->z_fuid_dirty;
 FUNC_18(VAR_33, VAR_3, 0, FUNC_3(1, VAR_36));
 FUNC_19(VAR_33, VAR_31->z_id, VAR_11, VAR_24);
 FUNC_17(VAR_33, VAR_39.z_aclp->z_acl_bytes +
     VAR_20 + VAR_36);
 FUNC_16(VAR_33, VAR_31->z_sa_hdl, VAR_1);
 if (!VAR_34->z_use_sa && VAR_39.z_aclp->z_acl_bytes > VAR_18) {
  FUNC_18(VAR_33, VAR_3, 0,
      VAR_39.z_aclp->z_acl_bytes);
 }
 if (VAR_40)
  FUNC_34(VAR_34, VAR_33);
 VAR_37 = FUNC_13(VAR_33, (VAR_42 ? VAR_12 : 0) | VAR_13);
 if (VAR_37) {
  FUNC_32(VAR_32);
  if (VAR_37 == VAR_8) {
   VAR_42 = VAR_2;
   FUNC_20(VAR_33);
   FUNC_12(VAR_33);
   goto top;
  }
  FUNC_29(&VAR_39);
  FUNC_12(VAR_33);
  FUNC_9(VAR_34);
  return (VAR_37);
 }





 FUNC_38(VAR_31, VAR_25, VAR_33, VAR_28, 0, &VAR_30, &VAR_39);

 if (VAR_40)
  FUNC_33(VAR_34, VAR_33);

 FUNC_22(&VAR_30->z_lock);
 if (VAR_30->z_is_sa)
  VAR_37 = FUNC_25(VAR_30->z_sa_hdl, FUNC_5(VAR_34),
      VAR_26, VAR_36, VAR_33);
 else
  FUNC_39(VAR_30, VAR_26, VAR_36, VAR_33);
 FUNC_23(&VAR_30->z_lock);

 VAR_30->z_size = VAR_36;
 (void) FUNC_25(VAR_30->z_sa_hdl, FUNC_4(VAR_34),
     &VAR_30->z_size, sizeof (VAR_30->z_size), VAR_33);



 VAR_37 = FUNC_36(VAR_32, VAR_30, VAR_33, VAR_22);
 if (VAR_37 != 0) {
  FUNC_41(VAR_30, VAR_33);
  FUNC_24(FUNC_11(VAR_30));
 } else {
  if (VAR_29 & VAR_9)
   VAR_41 |= VAR_14;
  FUNC_37(VAR_35, VAR_33, VAR_41, VAR_31, VAR_30, VAR_24, VAR_26);

  FUNC_35(VAR_31);
  FUNC_35(VAR_30);
 }

 FUNC_29(&VAR_39);

 FUNC_14(VAR_33);

 FUNC_32(VAR_32);

 if (VAR_37 == 0) {
  *VAR_27 = FUNC_11(VAR_30);

  if (VAR_34->z_os->os_sync == VAR_21)
   FUNC_42(VAR_35, 0);
 } else {
  FUNC_21(FUNC_11(VAR_30));
 }

 FUNC_9(VAR_34);
 return (VAR_37);
}
