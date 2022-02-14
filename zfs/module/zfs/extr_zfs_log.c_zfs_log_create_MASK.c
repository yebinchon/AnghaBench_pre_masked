
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int z_dnodesize; int z_sa_hdl; int z_mode; int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_24__ {int z_fuid_cnt; int z_domain_cnt; void* z_fuid_group; void* z_fuid_owner; scalar_t__ z_domain_str_sz; } ;
typedef TYPE_2__ zfs_fuid_info_t ;
struct TYPE_25__ {int xva_mapsize; } ;
typedef TYPE_3__ xvattr_t ;
struct TYPE_26__ {int vsa_aclflags; char* vsa_aclentp; int vsa_aclcnt; } ;
typedef TYPE_4__ vsecattr_t ;
struct TYPE_27__ {int va_mask; } ;
typedef TYPE_5__ vattr_t ;
typedef void* uint64_t ;
struct TYPE_28__ {scalar_t__ lr_rdev; scalar_t__* lr_crtime; scalar_t__ lr_gen; void* lr_gid; void* lr_uid; int lr_mode; int lr_foid; int lr_doid; } ;
typedef TYPE_6__ lr_create_t ;
typedef int lr_attr_t ;
struct TYPE_29__ {size_t lr_acl_bytes; int lr_fuidcnt; void* lr_acl_flags; int lr_domcnt; int lr_aclcnt; } ;
typedef TYPE_7__ lr_acl_create_t ;
struct TYPE_30__ {int itx_lr; } ;
typedef TYPE_8__ itx_t ;
typedef int dmu_tx_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (size_t) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,void*,size_t) ;
 scalar_t__ FUNC_13 (int ,int ,scalar_t__*,int) ;
 int FUNC_14 (char*) ;
 void* FUNC_15 (TYPE_2__*,void*) ;
 void* FUNC_16 (TYPE_2__*,void*) ;
 int FUNC_17 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *,TYPE_8__*,int *) ;
 TYPE_8__* FUNC_20 (void*,size_t) ;
 scalar_t__ FUNC_21 (int *,int *) ;

void
FUNC_22(zilog_t *VAR_8, dmu_tx_t *VAR_9, uint64_t VAR_10,
    znode_t *VAR_11, znode_t *VAR_12, char *VAR_13, vsecattr_t *VAR_14,
    zfs_fuid_info_t *VAR_15, vattr_t *VAR_16)
{
 itx_t *VAR_17;
 lr_create_t *VAR_18;
 lr_acl_create_t *VAR_19;
 size_t VAR_20 = 0;
 size_t VAR_21 = 0;
 size_t VAR_22;
 xvattr_t *VAR_23 = (xvattr_t *)VAR_16;
 void *VAR_24;
 size_t VAR_25;
 size_t VAR_26 = FUNC_14(VAR_13) + 1;
 size_t VAR_27 = 0;

 if (FUNC_21(VAR_8, VAR_9) || FUNC_18(VAR_11))
  return;





 if (VAR_15) {
  VAR_27 += VAR_15->z_domain_str_sz;
  VAR_27 += VAR_15->z_fuid_cnt * sizeof (uint64_t);
 }

 if (VAR_16->va_mask & VAR_0)
  VAR_21 = FUNC_8(VAR_23->xva_mapsize);

 if ((int)VAR_10 == VAR_3 || (int)VAR_10 == VAR_5 ||
     (int)VAR_10 == VAR_2 || (int)VAR_10 == VAR_4 ||
     (int)VAR_10 == VAR_6) {
  VAR_22 = sizeof (*VAR_18) + VAR_26 + VAR_27 + VAR_21;
  VAR_25 = sizeof (*VAR_18);
 } else {
  VAR_22 =
      sizeof (lr_acl_create_t) + VAR_26 + VAR_27 +
      FUNC_7(VAR_20) + VAR_21;
  VAR_25 = sizeof (lr_acl_create_t);
 }

 VAR_17 = FUNC_20(VAR_10, VAR_22);

 VAR_18 = (lr_create_t *)&VAR_17->itx_lr;
 VAR_18->lr_doid = VAR_11->z_id;
 VAR_18->lr_foid = VAR_12->z_id;

 FUNC_3(VAR_18->lr_foid, VAR_12->z_dnodesize >> VAR_1);
 VAR_18->lr_mode = VAR_12->z_mode;
 if (!FUNC_0(FUNC_2(FUNC_10(VAR_12)))) {
  VAR_18->lr_uid = (uint64_t)FUNC_2(FUNC_10(VAR_12));
 } else {
  VAR_18->lr_uid = VAR_15->z_fuid_owner;
 }
 if (!FUNC_0(FUNC_1(FUNC_9(VAR_12)))) {
  VAR_18->lr_gid = (uint64_t)FUNC_1(FUNC_9(VAR_12));
 } else {
  VAR_18->lr_gid = VAR_15->z_fuid_group;
 }
 (void) FUNC_13(VAR_12->z_sa_hdl, FUNC_5(FUNC_11(VAR_12)), &VAR_18->lr_gen,
     sizeof (uint64_t));
 (void) FUNC_13(VAR_12->z_sa_hdl, FUNC_4(FUNC_11(VAR_12)),
     VAR_18->lr_crtime, sizeof (uint64_t) * 2);

 if (FUNC_13(VAR_12->z_sa_hdl, FUNC_6(FUNC_11(VAR_12)), &VAR_18->lr_rdev,
     sizeof (VAR_18->lr_rdev)) != 0)
  VAR_18->lr_rdev = 0;




 if (VAR_16->va_mask & VAR_0) {
  FUNC_17((lr_attr_t *)((caddr_t)VAR_18 + VAR_25), VAR_23);
  VAR_24 = (caddr_t)VAR_18 + VAR_25 + VAR_21;
 } else {
  VAR_24 = (caddr_t)VAR_18 + VAR_25;
 }



 if (VAR_14) {
  VAR_19 = (lr_acl_create_t *)&VAR_17->itx_lr;
  VAR_19->lr_aclcnt = VAR_14->vsa_aclcnt;
  VAR_19->lr_acl_bytes = VAR_20;
  VAR_19->lr_domcnt = VAR_15 ? VAR_15->z_domain_cnt : 0;
  VAR_19->lr_fuidcnt = VAR_15 ? VAR_15->z_fuid_cnt : 0;
  if (VAR_14->vsa_aclflags & VAR_7)
   VAR_19->lr_acl_flags = (uint64_t)VAR_14->vsa_aclflags;
  else
   VAR_19->lr_acl_flags = 0;

  FUNC_12(VAR_14->vsa_aclentp, VAR_24, VAR_20);
  VAR_24 = (caddr_t)VAR_24 + FUNC_7(VAR_20);
 }


 if (VAR_15) {
  VAR_24 = FUNC_16(VAR_15, VAR_24);
  VAR_24 = FUNC_15(VAR_15, VAR_24);
 }



 FUNC_12(VAR_13, VAR_24, VAR_26);

 FUNC_19(VAR_8, VAR_17, VAR_9);
}
