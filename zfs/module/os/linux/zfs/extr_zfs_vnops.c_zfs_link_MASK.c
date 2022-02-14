
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct TYPE_22__ {int z_pflags; scalar_t__ z_projid; void* z_unlinked; int z_id; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_23__ {scalar_t__ z_shares_dir; TYPE_12__* z_os; int z_unlinkedobj; scalar_t__ z_utf8; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uid_t ;
struct inode {scalar_t__ i_nlink; int i_state; scalar_t__ i_sb; int i_uid; int i_mode; } ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_21__ {scalar_t__ os_sync; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int) ;
 int VAR_17 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_12__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (TYPE_12__*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,void*) ;
 int FUNC_19 (int *,int ,int ,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,scalar_t__) ;
 scalar_t__ FUNC_25 (char*,int ,int *,int ,int*) ;
 scalar_t__ FUNC_26 (TYPE_12__*,int ,int ,int *) ;
 int FUNC_27 (int **,TYPE_1__*,char*,TYPE_1__**,int,int *,int *) ;
 int FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_32 (int *,int *,scalar_t__,TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_33 (int *,TYPE_1__*) ;
 int FUNC_34 (TYPE_1__*,int ,int ,void*,int *) ;
 scalar_t__ FUNC_35 (struct inode*) ;
 int FUNC_36 (int *,int ) ;

int
FUNC_37(struct inode *VAR_23, struct inode *VAR_24, char *VAR_25, cred_t *VAR_26,
    int VAR_27)
{
 znode_t *VAR_28 = FUNC_1(VAR_23);
 znode_t *VAR_29, *VAR_30;
 zfsvfs_t *VAR_31 = FUNC_2(VAR_23);
 zilog_t *VAR_32;
 zfs_dirlock_t *VAR_33;
 dmu_tx_t *VAR_34;
 int VAR_35;
 int VAR_36 = VAR_22;
 uint64_t VAR_37;
 uid_t VAR_38;
 boolean_t VAR_39 = VAR_1;
 boolean_t VAR_40 = 0;
 uint64_t VAR_41;



 FUNC_0(FUNC_6(VAR_23->i_mode));

 if (VAR_25 == ((void*)0))
  return (FUNC_5(VAR_4));

 FUNC_8(VAR_31);
 FUNC_10(VAR_28);
 VAR_32 = VAR_31->z_log;





 if (FUNC_6(VAR_24->i_mode)) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_5));
 }

 VAR_30 = FUNC_1(VAR_24);
 FUNC_10(VAR_30);
 if (VAR_28->z_pflags & VAR_19 && VAR_28->z_projid != VAR_30->z_projid) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_7));
 }





 if (VAR_24->i_sb != VAR_23->i_sb || FUNC_35(VAR_24)) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_7));
 }



 if ((VAR_35 = FUNC_21(VAR_30->z_sa_hdl, FUNC_4(VAR_31),
     &VAR_37, sizeof (uint64_t))) != 0) {
  FUNC_9(VAR_31);
  return (VAR_35);
 }
 if (VAR_37 == VAR_31->z_shares_dir) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_5));
 }

 if (VAR_31->z_utf8 && FUNC_25(VAR_25,
     FUNC_23(VAR_25), ((void*)0), VAR_16, &VAR_35) < 0) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_3));
 }
 if (VAR_27 & VAR_9)
  VAR_36 |= VAR_17;







 if ((VAR_30->z_pflags & VAR_21) != (VAR_28->z_pflags & VAR_21)) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_4));
 }

 VAR_38 = FUNC_29(VAR_31, FUNC_3(VAR_24->i_uid),
     VAR_26, VAR_18);
 if (VAR_38 != FUNC_11(VAR_26) && FUNC_22(VAR_26) != 0) {
  FUNC_9(VAR_31);
  return (FUNC_5(VAR_5));
 }

 if ((VAR_35 = FUNC_34(VAR_28, VAR_0, 0, VAR_1, VAR_26))) {
  FUNC_9(VAR_31);
  return (VAR_35);
 }

top:



 VAR_35 = FUNC_27(&VAR_33, VAR_28, VAR_25, &VAR_29, VAR_36, ((void*)0), ((void*)0));
 if (VAR_35) {
  FUNC_9(VAR_31);
  return (VAR_35);
 }

 VAR_34 = FUNC_16(VAR_31->z_os);
 FUNC_18(VAR_34, VAR_30->z_sa_hdl, VAR_1);
 FUNC_19(VAR_34, VAR_28->z_id, VAR_11, VAR_25);
 if (VAR_40)
  FUNC_19(VAR_34, VAR_31->z_unlinkedobj, VAR_8, ((void*)0));

 FUNC_33(VAR_34, VAR_30);
 FUNC_33(VAR_34, VAR_28);
 VAR_35 = FUNC_14(VAR_34, (VAR_39 ? VAR_12 : 0) | VAR_13);
 if (VAR_35) {
  FUNC_28(VAR_33);
  if (VAR_35 == VAR_6) {
   VAR_39 = VAR_2;
   FUNC_20(VAR_34);
   FUNC_13(VAR_34);
   goto top;
  }
  FUNC_13(VAR_34);
  FUNC_9(VAR_31);
  return (VAR_35);
 }

 if (VAR_40)
  VAR_30->z_unlinked = VAR_1;
 VAR_35 = FUNC_31(VAR_33, VAR_30, VAR_34, 0);

 if (VAR_35 == 0) {
  uint64_t VAR_42 = VAR_15;







  if (VAR_40) {
   FUNC_7(FUNC_26(VAR_31->z_os,
       VAR_31->z_unlinkedobj, VAR_30->z_id, VAR_34) == 0);
  } else {
   if (VAR_27 & VAR_9)
    VAR_42 |= VAR_14;
   FUNC_32(VAR_32, VAR_34, VAR_42, VAR_28, VAR_30, VAR_25);
  }
 } else if (VAR_40) {

  VAR_30->z_unlinked = VAR_2;
 }
 VAR_41 = FUNC_17(VAR_34);
 FUNC_15(VAR_34);

 FUNC_28(VAR_33);

 if (!VAR_40 && VAR_31->z_os->os_sync == VAR_20)
  FUNC_36(VAR_32, 0);

 if (VAR_40)
  FUNC_24(FUNC_12(VAR_31->z_os), VAR_41);

 FUNC_30(VAR_28);
 FUNC_30(VAR_30);
 FUNC_9(VAR_31);
 return (VAR_35);
}
