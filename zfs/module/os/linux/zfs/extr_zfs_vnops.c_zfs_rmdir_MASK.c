
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_19__ {int z_name_lock; int z_parent_lock; int z_sa_hdl; int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_20__ {TYPE_11__* z_os; int z_unlinkedobj; int * z_log; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zfs_dirlock_t ;
typedef int uint64_t ;
struct inode {int i_mode; } ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_18__ {scalar_t__ os_sync; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (TYPE_1__*) ;
 struct inode* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (int *,int ,scalar_t__) ;
 int FUNC_13 (int *,int ,int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,TYPE_1__*,char*,TYPE_1__**,int,int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int *,TYPE_1__*,int *,int,int *) ;
 int FUNC_23 (int *,int *,int ,TYPE_1__*,char*,int ,scalar_t__) ;
 int FUNC_24 (int *,TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_26 (int *,int ) ;

int
FUNC_27(struct inode *VAR_16, char *VAR_17, struct inode *VAR_18, cred_t *VAR_19,
    int VAR_20)
{
 znode_t *VAR_21 = FUNC_0(VAR_16);
 znode_t *VAR_22;
 struct inode *VAR_23;
 zfsvfs_t *VAR_24 = FUNC_1(VAR_16);
 zilog_t *VAR_25;
 zfs_dirlock_t *VAR_26;
 dmu_tx_t *VAR_27;
 int VAR_28;
 int VAR_29 = VAR_13;
 boolean_t VAR_30 = VAR_0;

 if (VAR_17 == ((void*)0))
  return (FUNC_2(VAR_2));

 FUNC_4(VAR_24);
 FUNC_6(VAR_21);
 VAR_25 = VAR_24->z_log;

 if (VAR_20 & VAR_6)
  VAR_29 |= VAR_12;
top:
 VAR_22 = ((void*)0);




 if ((VAR_28 = FUNC_19(&VAR_26, VAR_21, VAR_17, &VAR_22, VAR_29,
     ((void*)0), ((void*)0)))) {
  FUNC_5(VAR_24);
  return (VAR_28);
 }

 VAR_23 = FUNC_7(VAR_22);

 if ((VAR_28 = FUNC_25(VAR_21, VAR_22, VAR_19))) {
  goto out;
 }

 if (!FUNC_3(VAR_23->i_mode)) {
  VAR_28 = FUNC_2(VAR_3);
  goto out;
 }

 if (VAR_23 == VAR_18) {
  VAR_28 = FUNC_2(VAR_2);
  goto out;
 }





 FUNC_17(&VAR_22->z_name_lock, VAR_7);





 FUNC_17(&VAR_22->z_parent_lock, VAR_7);

 VAR_27 = FUNC_11(VAR_24->z_os);
 FUNC_13(VAR_27, VAR_21->z_id, VAR_5, VAR_17);
 FUNC_12(VAR_27, VAR_22->z_sa_hdl, VAR_0);
 FUNC_13(VAR_27, VAR_24->z_unlinkedobj, VAR_5, ((void*)0));
 FUNC_24(VAR_27, VAR_22);
 FUNC_24(VAR_27, VAR_21);
 FUNC_14(VAR_27);
 VAR_28 = FUNC_9(VAR_27, (VAR_30 ? VAR_8 : 0) | VAR_9);
 if (VAR_28) {
  FUNC_18(&VAR_22->z_parent_lock);
  FUNC_18(&VAR_22->z_name_lock);
  FUNC_20(VAR_26);
  if (VAR_28 == VAR_4) {
   VAR_30 = VAR_1;
   FUNC_15(VAR_27);
   FUNC_8(VAR_27);
   FUNC_16(VAR_23);
   goto top;
  }
  FUNC_8(VAR_27);
  FUNC_16(VAR_23);
  FUNC_5(VAR_24);
  return (VAR_28);
 }

 VAR_28 = FUNC_22(VAR_26, VAR_22, VAR_27, VAR_29, ((void*)0));

 if (VAR_28 == 0) {
  uint64_t VAR_31 = VAR_11;
  if (VAR_20 & VAR_6)
   VAR_31 |= VAR_10;
  FUNC_23(VAR_25, VAR_27, VAR_31, VAR_21, VAR_17, VAR_14,
      VAR_0);
 }

 FUNC_10(VAR_27);

 FUNC_18(&VAR_22->z_parent_lock);
 FUNC_18(&VAR_22->z_name_lock);
out:
 FUNC_20(VAR_26);

 FUNC_21(VAR_21);
 FUNC_21(VAR_22);
 FUNC_16(VAR_23);

 if (VAR_24->z_os->os_sync == VAR_15)
  FUNC_26(VAR_25, 0);

 FUNC_5(VAR_24);
 return (VAR_28);
}
