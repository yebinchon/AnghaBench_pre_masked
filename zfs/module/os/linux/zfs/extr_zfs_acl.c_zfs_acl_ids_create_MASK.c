
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_25__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int z_mode; int z_pflags; int z_acl_lock; int z_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_29__ {int z_fuid_idx; scalar_t__ z_use_fuids; scalar_t__ z_replay; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zfs_acl_t ;
struct TYPE_30__ {int z_mode; TYPE_6__* z_aclp; void* z_fgid; void* z_fuid; int z_fuidp; } ;
typedef TYPE_3__ zfs_acl_ids_t ;
typedef int vsecattr_t ;
struct TYPE_31__ {int va_mode; int va_mask; void* va_gid; void* va_uid; } ;
typedef TYPE_4__ vattr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef void* gid_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_32__ {int z_hints; } ;
struct TYPE_28__ {int i_mode; int i_gid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_25__* FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (void*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,void*) ;
 int VAR_12 ;
 TYPE_6__* FUNC_16 (int ) ;
 int FUNC_17 (TYPE_2__*,int,TYPE_6__*) ;
 TYPE_6__* FUNC_18 (TYPE_2__*,int,int *,int,scalar_t__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*,scalar_t__,int **,scalar_t__) ;
 int FUNC_20 (TYPE_1__*) ;
 void* FUNC_21 (TYPE_2__*,int ,int *,int ,int *) ;
 void* FUNC_22 (TYPE_2__*,int ,int *,int *) ;
 char* FUNC_23 (int *,int ) ;
 void* FUNC_24 (TYPE_2__*,void*,int *,int ) ;
 int FUNC_25 (int *,char*,int ,int ,void*,int ) ;
 int FUNC_26 (int,TYPE_6__*,int *,void*,void*) ;
 int FUNC_27 (TYPE_2__*,int,int *,int *,int *,TYPE_6__**) ;

int
FUNC_28(znode_t *VAR_13, int VAR_14, vattr_t *VAR_15, cred_t *VAR_16,
    vsecattr_t *VAR_17, zfs_acl_ids_t *VAR_18)
{
 int VAR_19;
 zfsvfs_t *VAR_20 = FUNC_7(VAR_13);
 zfs_acl_t *VAR_21;
 gid_t VAR_22 = VAR_15->va_gid;
 boolean_t VAR_23 = VAR_2;
 boolean_t VAR_24 = VAR_1;

 FUNC_9(VAR_18, sizeof (zfs_acl_ids_t));
 VAR_18->z_mode = VAR_15->va_mode;

 if (VAR_17)
  if ((VAR_19 = FUNC_27(VAR_20, VAR_15->va_mode, VAR_17,
      VAR_16, &VAR_18->z_fuidp, &VAR_18->z_aclp)) != 0)
   return (VAR_19);

 VAR_18->z_fuid = VAR_15->va_uid;
 VAR_18->z_fgid = VAR_15->va_gid;
 if (!(VAR_14 & VAR_3) && (VAR_13->z_mode & VAR_5) &&
     (FUNC_4(VAR_15->va_mode))) {
  VAR_18->z_mode |= VAR_5;
 } else {
  if ((VAR_18->z_mode & VAR_5) &&
      FUNC_15(VAR_16, VAR_22) != 0)
   VAR_18->z_mode &= ~VAR_5;
 }

 if (VAR_18->z_aclp == ((void*)0)) {
  FUNC_12(&VAR_13->z_acl_lock);
  FUNC_12(&VAR_13->z_lock);
  if (!(VAR_14 & VAR_3) && (FUNC_4(FUNC_6(VAR_13)->i_mode) &&
      (VAR_13->z_pflags & VAR_9)) &&
      !(VAR_13->z_pflags & VAR_11)) {
   FUNC_5(0 == FUNC_19(VAR_13, VAR_2,
       &VAR_21, VAR_1));
   VAR_18->z_aclp = FUNC_18(VAR_20,
       VAR_15->va_mode, VAR_21, VAR_18->z_mode, &VAR_23);
   VAR_24 = VAR_2;
  } else {
   VAR_18->z_aclp =
       FUNC_16(FUNC_20(VAR_13));
   VAR_18->z_aclp->z_hints |= VAR_7;
  }
  FUNC_13(&VAR_13->z_lock);
  FUNC_13(&VAR_13->z_acl_lock);
  if (VAR_23) {
   VAR_18->z_aclp->z_hints |= FUNC_4(VAR_15->va_mode) ?
       VAR_6 : 0;
   FUNC_17(VAR_20, VAR_18->z_mode, VAR_18->z_aclp);
  }
 }

 if (VAR_24 || VAR_17) {
  VAR_18->z_mode = FUNC_26(VAR_18->z_mode,
      VAR_18->z_aclp, &VAR_18->z_aclp->z_hints,
      VAR_18->z_fuid, VAR_18->z_fgid);
  if (FUNC_8(VAR_18->z_aclp, 0, VAR_12) == 0)
   VAR_18->z_aclp->z_hints |= VAR_7;
 }

 return (0);
}
