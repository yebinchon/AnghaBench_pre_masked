
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ z_sync_cnt; int z_id; scalar_t__ z_unlinked; } ;
typedef TYPE_1__ znode_t ;
typedef int zilog_t ;
struct TYPE_15__ {void* z_fuid_group; void* z_fuid_owner; scalar_t__ z_domain_str_sz; } ;
typedef TYPE_2__ zfs_fuid_info_t ;
struct TYPE_16__ {int xva_mapsize; } ;
typedef TYPE_3__ xvattr_t ;
struct TYPE_17__ {int va_mask; int va_mtime; int va_atime; scalar_t__ va_size; scalar_t__ va_gid; scalar_t__ va_uid; scalar_t__ va_mode; } ;
typedef TYPE_4__ vattr_t ;
typedef int uint_t ;
typedef void* uint64_t ;
struct TYPE_18__ {int lr_mtime; int lr_atime; void* lr_size; void* lr_gid; void* lr_uid; void* lr_mode; void* lr_mask; int lr_foid; } ;
typedef TYPE_5__ lr_setattr_t ;
typedef int lr_attr_t ;
struct TYPE_19__ {int itx_sync; int itx_lr; } ;
typedef TYPE_6__ itx_t ;
typedef int dmu_tx_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_6__*,int *) ;
 TYPE_6__* FUNC_6 (int,size_t) ;
 scalar_t__ FUNC_7 (int *,int *) ;

void
FUNC_8(zilog_t *VAR_3, dmu_tx_t *VAR_4, int VAR_5,
    znode_t *VAR_6, vattr_t *VAR_7, uint_t VAR_8, zfs_fuid_info_t *VAR_9)
{
 itx_t *VAR_10;
 lr_setattr_t *VAR_11;
 xvattr_t *VAR_12 = (xvattr_t *)VAR_7;
 size_t VAR_13 = sizeof (lr_setattr_t);
 void *VAR_14;

 if (FUNC_7(VAR_3, VAR_4) || VAR_6->z_unlinked)
  return;






 if (VAR_7->va_mask & VAR_2)
  VAR_13 = sizeof (*VAR_11) + FUNC_2(VAR_12->xva_mapsize);

 if (VAR_9)
  VAR_13 += VAR_9->z_domain_str_sz;

 VAR_10 = FUNC_6(VAR_5, VAR_13);
 VAR_11 = (lr_setattr_t *)&VAR_10->itx_lr;
 VAR_11->lr_foid = VAR_6->z_id;
 VAR_11->lr_mask = (uint64_t)VAR_8;
 VAR_11->lr_mode = (uint64_t)VAR_7->va_mode;
 if ((VAR_8 & VAR_1) && FUNC_0(VAR_7->va_uid))
  VAR_11->lr_uid = VAR_9->z_fuid_owner;
 else
  VAR_11->lr_uid = (uint64_t)VAR_7->va_uid;

 if ((VAR_8 & VAR_0) && FUNC_0(VAR_7->va_gid))
  VAR_11->lr_gid = VAR_9->z_fuid_group;
 else
  VAR_11->lr_gid = (uint64_t)VAR_7->va_gid;

 VAR_11->lr_size = (uint64_t)VAR_7->va_size;
 FUNC_1(&VAR_7->va_atime, VAR_11->lr_atime);
 FUNC_1(&VAR_7->va_mtime, VAR_11->lr_mtime);
 VAR_14 = (lr_setattr_t *)(VAR_11 + 1);
 if (VAR_7->va_mask & VAR_2) {
  FUNC_4((lr_attr_t *)VAR_14, VAR_12);
  VAR_14 = (caddr_t)VAR_14 + FUNC_2(VAR_12->xva_mapsize);
 }





 if (VAR_9)
  (void) FUNC_3(VAR_9, VAR_14);

 VAR_10->itx_sync = (VAR_6->z_sync_cnt != 0);
 FUNC_5(VAR_3, VAR_10, VAR_4);
}
