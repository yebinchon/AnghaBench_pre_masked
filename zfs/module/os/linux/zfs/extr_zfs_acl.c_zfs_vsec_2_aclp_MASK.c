
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int z_version; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_object_ace_t ;
typedef int zfs_fuid_info_t ;
struct TYPE_17__ {scalar_t__ z_version; int z_acl_count; int z_hints; int z_acl; int z_acl_bytes; } ;
typedef TYPE_2__ zfs_acl_t ;
struct TYPE_18__ {int z_ace_count; int z_size; int z_acldata; } ;
typedef TYPE_3__ zfs_acl_node_t ;
struct TYPE_19__ {int vsa_aclcnt; int vsa_mask; int vsa_aclflags; scalar_t__ vsa_aclentp; } ;
typedef TYPE_4__ vsecattr_t ;
typedef int umode_t ;
typedef int cred_t ;
typedef int ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_2__*,scalar_t__,int ,int,int *,int **,int *) ;
 int FUNC_8 (int ,TYPE_2__*,int *,int ,int,int *) ;

int
FUNC_9(zfsvfs_t *VAR_10, umode_t VAR_11,
    vsecattr_t *VAR_12, cred_t *VAR_13, zfs_fuid_info_t **VAR_14, zfs_acl_t **VAR_15)
{
 zfs_acl_t *VAR_16;
 zfs_acl_node_t *VAR_17;
 int VAR_18 = VAR_12->vsa_aclcnt;
 int VAR_19;

 if (VAR_12->vsa_aclcnt > VAR_4 || VAR_12->vsa_aclcnt <= 0)
  return (FUNC_0(VAR_3));

 VAR_16 = FUNC_2(FUNC_6(VAR_10->z_version));

 VAR_16->z_hints = 0;
 VAR_17 = FUNC_4(VAR_18 * sizeof (zfs_object_ace_t));
 if (VAR_16->z_version == VAR_9) {
  if ((VAR_19 = FUNC_8(VAR_11, VAR_16,
      (ace_t *)VAR_12->vsa_aclentp, VAR_17->z_acldata,
      VAR_18, &VAR_17->z_size)) != 0) {
   FUNC_3(VAR_16);
   FUNC_5(VAR_17);
   return (VAR_19);
  }
 } else {
  if ((VAR_19 = FUNC_7(VAR_10, VAR_11, VAR_16,
      VAR_12->vsa_aclentp, VAR_17->z_acldata, VAR_18,
      &VAR_17->z_size, VAR_14, VAR_13)) != 0) {
   FUNC_3(VAR_16);
   FUNC_5(VAR_17);
   return (VAR_19);
  }
 }
 VAR_16->z_acl_bytes = VAR_17->z_size;
 VAR_17->z_ace_count = VAR_18;
 VAR_16->z_acl_count = VAR_18;
 FUNC_1(&VAR_16->z_acl, VAR_17);




 if (VAR_12->vsa_mask & VAR_5) {
  if (VAR_12->vsa_aclflags & VAR_2)
   VAR_16->z_hints |= VAR_8;
  if (VAR_12->vsa_aclflags & VAR_1)
   VAR_16->z_hints |= VAR_7;
  if (VAR_12->vsa_aclflags & VAR_0)
   VAR_16->z_hints |= VAR_6;
 }

 *VAR_15 = VAR_16;

 return (0);
}
