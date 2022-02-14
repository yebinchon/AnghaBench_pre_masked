
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_16__ {scalar_t__ z_sync_cnt; int z_id; scalar_t__ z_unlinked; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_17__ {int z_domain_str_sz; int z_fuid_cnt; int z_domain_cnt; } ;
typedef TYPE_2__ zfs_fuid_info_t ;
struct TYPE_18__ {size_t vsa_aclentsz; int vsa_mask; int vsa_aclentp; int vsa_aclcnt; int vsa_aclflags; } ;
typedef TYPE_3__ vsecattr_t ;
typedef void* uint64_t ;
typedef int lr_acl_v0_t ;
struct TYPE_19__ {size_t lr_acl_bytes; int lr_fuidcnt; void* lr_aclcnt; void* lr_acl_flags; int lr_domcnt; int lr_foid; } ;
typedef TYPE_4__ lr_acl_t ;
struct TYPE_20__ {int itx_sync; int itx_lr; } ;
typedef TYPE_5__ itx_t ;
typedef int dmu_tx_t ;
typedef int caddr_t ;
typedef void ace_t ;
struct TYPE_15__ {scalar_t__ z_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_3 ;
 TYPE_13__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 void* FUNC_4 (TYPE_2__*,void*) ;
 int FUNC_5 (int *,TYPE_5__*,int *) ;
 TYPE_5__* FUNC_6 (int,size_t) ;
 scalar_t__ FUNC_7 (int *,int *) ;

void
FUNC_8(zilog_t *VAR_4, dmu_tx_t *VAR_5, znode_t *VAR_6,
    vsecattr_t *VAR_7, zfs_fuid_info_t *VAR_8)
{
 itx_t *VAR_9;
 lr_acl_v0_t *VAR_10;
 lr_acl_t *VAR_11;
 int VAR_12;
 int VAR_13;
 size_t VAR_14;
 size_t VAR_15 = VAR_7->vsa_aclentsz;

 if (FUNC_7(VAR_4, VAR_5) || VAR_6->z_unlinked)
  return;

 VAR_12 = (FUNC_1(VAR_6)->z_version < VAR_3) ?
     VAR_1 : VAR_0;

 if (VAR_12 == VAR_0)
  VAR_13 = sizeof (*VAR_11);
 else
  VAR_13 = sizeof (*VAR_10);

 VAR_14 = VAR_13 +
     ((VAR_12 == VAR_0) ? FUNC_0(VAR_15) : VAR_15) +
     (VAR_8 ? VAR_8->z_domain_str_sz : 0) +
     sizeof (uint64_t) * (VAR_8 ? VAR_8->z_fuid_cnt : 0);

 VAR_9 = FUNC_6(VAR_12, VAR_14);

 VAR_11 = (lr_acl_t *)&VAR_9->itx_lr;
 VAR_11->lr_foid = VAR_6->z_id;
 if (VAR_12 == VAR_0) {
  VAR_11->lr_acl_bytes = VAR_15;
  VAR_11->lr_domcnt = VAR_8 ? VAR_8->z_domain_cnt : 0;
  VAR_11->lr_fuidcnt = VAR_8 ? VAR_8->z_fuid_cnt : 0;
  if (VAR_7->vsa_mask & VAR_2)
   VAR_11->lr_acl_flags = (uint64_t)VAR_7->vsa_aclflags;
  else
   VAR_11->lr_acl_flags = 0;
 }
 VAR_11->lr_aclcnt = (uint64_t)VAR_7->vsa_aclcnt;

 if (VAR_12 == VAR_1) {
  VAR_10 = (lr_acl_v0_t *)VAR_11;
  FUNC_2(VAR_7->vsa_aclentp, (ace_t *)(VAR_10 + 1), VAR_15);
 } else {
  void *VAR_16 = (ace_t *)(VAR_11 + 1);

  FUNC_2(VAR_7->vsa_aclentp, VAR_16, VAR_15);

  VAR_16 = (caddr_t)VAR_16 + FUNC_0(VAR_15);

  if (VAR_8) {
   VAR_16 = FUNC_4(VAR_8, VAR_16);
   (void) FUNC_3(VAR_8, VAR_16);
  }
 }

 VAR_9->itx_sync = (VAR_6->z_sync_cnt != 0);
 FUNC_5(VAR_4, VAR_9, VAR_5);
}
