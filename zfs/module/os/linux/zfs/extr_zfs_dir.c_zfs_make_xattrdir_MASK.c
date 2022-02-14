
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ z_id; int z_unlinked; int z_sa_hdl; int z_projid; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_26__ {int z_log; scalar_t__ z_fuid_dirty; int z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_27__ {int z_fuidp; TYPE_1__* z_aclp; } ;
typedef TYPE_4__ zfs_acl_ids_t ;
typedef int vattr_t ;
typedef scalar_t__ uint64_t ;
struct inode {int dummy; } ;
typedef int parent ;
typedef int dmu_tx_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_24__ {scalar_t__ z_acl_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_9 ;
 struct inode* FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,int ,int ,int *) ;
 int FUNC_14 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__*,int,int *) ;
 int FUNC_16 (TYPE_2__*,int ,int *,int *,int *,TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_19 (TYPE_3__*,int *) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (int ,int *,int ,TYPE_2__*,TYPE_2__*,char*,int *,int ,int *) ;
 int FUNC_22 (TYPE_2__*,int *,int *,int *,int ,TYPE_2__**,TYPE_4__*) ;
 int FUNC_23 (TYPE_2__*,int ,int ,int ,int *) ;

int
FUNC_24(znode_t *VAR_10, vattr_t *VAR_11, struct inode **VAR_12, cred_t *VAR_13)
{
 zfsvfs_t *VAR_14 = FUNC_6(VAR_10);
 znode_t *VAR_15;
 dmu_tx_t *VAR_16;
 int VAR_17;
 zfs_acl_ids_t VAR_18;
 boolean_t VAR_19;




 *VAR_12 = ((void*)0);

 if ((VAR_17 = FUNC_23(VAR_10, VAR_0, 0, VAR_1, VAR_13)))
  return (VAR_17);

 if ((VAR_17 = FUNC_16(VAR_10, VAR_6, VAR_11, VAR_13, ((void*)0),
     &VAR_18)) != 0)
  return (VAR_17);
 if (FUNC_18(VAR_14, &VAR_18, VAR_10->z_projid)) {
  FUNC_17(&VAR_18);
  return (FUNC_3(VAR_4));
 }

 VAR_16 = FUNC_10(VAR_14->z_os);
 FUNC_12(VAR_16, VAR_18.z_aclp->z_acl_bytes +
     VAR_9);
 FUNC_11(VAR_16, VAR_10->z_sa_hdl, VAR_2);
 FUNC_13(VAR_16, VAR_3, VAR_5, ((void*)0));
 VAR_19 = VAR_14->z_fuid_dirty;
 if (VAR_19)
  FUNC_20(VAR_14, VAR_16);
 VAR_17 = FUNC_8(VAR_16, VAR_7);
 if (VAR_17) {
  FUNC_17(&VAR_18);
  FUNC_7(VAR_16);
  return (VAR_17);
 }
 FUNC_22(VAR_10, VAR_11, VAR_16, VAR_13, VAR_6, &VAR_15, &VAR_18);

 if (VAR_19)
  FUNC_19(VAR_14, VAR_16);







 FUNC_4(0 == FUNC_15(VAR_10->z_sa_hdl, FUNC_2(VAR_14), &VAR_15->z_id,
     sizeof (VAR_15->z_id), VAR_16));

 if (!VAR_10->z_unlinked)
  (void) FUNC_21(VAR_14->z_log, VAR_16, VAR_8, VAR_10,
      VAR_15, "", ((void*)0), VAR_18.z_fuidp, VAR_11);

 FUNC_17(&VAR_18);
 FUNC_9(VAR_16);

 *VAR_12 = FUNC_5(VAR_15);

 return (0);
}
