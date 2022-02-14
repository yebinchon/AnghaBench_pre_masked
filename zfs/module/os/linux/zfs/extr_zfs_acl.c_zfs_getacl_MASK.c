
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int z_pflags; int z_acl_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_17__ {scalar_t__ z_version; int z_acl_bytes; int z_acl; scalar_t__ z_acl_count; } ;
typedef TYPE_2__ zfs_acl_t ;
struct TYPE_18__ {void* z_size; int z_acldata; } ;
typedef TYPE_3__ zfs_acl_node_t ;
struct TYPE_19__ {int vsa_mask; int vsa_aclcnt; size_t vsa_aclentsz; int vsa_aclflags; void* vsa_aclentp; } ;
typedef TYPE_4__ vsecattr_t ;
typedef int ulong_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int cred_t ;
typedef int caddr_t ;
typedef int boolean_t ;
typedef int ace_t ;
typedef int ace_object_t ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,void*,void*) ;
 void* FUNC_4 (size_t,int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (TYPE_2__*,void*,int *,int *,int*,int*) ;
 int FUNC_10 (TYPE_1__*,int ,TYPE_2__**,int ) ;
 int FUNC_11 (int ,TYPE_2__*,int *,void*,int) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ,int *) ;

int
FUNC_13(znode_t *VAR_16, vsecattr_t *VAR_17, boolean_t VAR_18, cred_t *VAR_19)
{
 zfs_acl_t *VAR_20;
 ulong_t VAR_21;
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;

 VAR_21 = VAR_17->vsa_mask & (VAR_7 | VAR_8 |
     VAR_9 | VAR_10);

 if (VAR_21 == 0)
  return (FUNC_1(VAR_5));

 if ((VAR_22 = FUNC_12(VAR_16, VAR_0, 0, VAR_18, VAR_19)))
  return (VAR_22);

 FUNC_7(&VAR_16->z_acl_lock);

 VAR_22 = FUNC_10(VAR_16, VAR_4, &VAR_20, VAR_4);
 if (VAR_22 != 0) {
  FUNC_8(&VAR_16->z_acl_lock);
  return (VAR_22);
 }




 if ((VAR_16->z_pflags & VAR_13) && !(VAR_21 & VAR_10)) {
  void *VAR_25 = ((void*)0);
  uint64_t VAR_26;
  uint32_t VAR_27;
  uint16_t VAR_28, VAR_29;

  while ((VAR_25 = FUNC_9(VAR_20, VAR_25,
      &VAR_26, &VAR_27, &VAR_29, &VAR_28))) {
   switch (VAR_28) {
   case 131:
   case 130:
   case 128:
   case 129:
    VAR_24++;
    continue;
   default:
    VAR_23++;
   }
  }
  VAR_17->vsa_aclcnt = VAR_23;
 } else
  VAR_23 = (int)VAR_20->z_acl_count;

 if (VAR_21 & VAR_8) {
  VAR_17->vsa_aclcnt = VAR_23;
 }

 if (VAR_21 & VAR_7) {
  size_t VAR_30;

  VAR_30 = VAR_23 * sizeof (ace_t) +
      sizeof (ace_object_t) * VAR_24;

  VAR_17->vsa_aclentp = FUNC_4(VAR_30, VAR_6);
  VAR_17->vsa_aclentsz = VAR_30;

  if (VAR_20->z_version == VAR_15)
   FUNC_11(FUNC_2(VAR_16), VAR_20, VAR_19,
       VAR_17->vsa_aclentp, !(VAR_21 & VAR_10));
  else {
   zfs_acl_node_t *VAR_31;
   void *VAR_32 = VAR_17->vsa_aclentp;

   for (VAR_31 = FUNC_5(&VAR_20->z_acl); VAR_31;
       VAR_31 = FUNC_6(&VAR_20->z_acl, VAR_31)) {
    FUNC_3(VAR_31->z_acldata, VAR_32,
        VAR_31->z_size);
    VAR_32 = (caddr_t)VAR_32 + VAR_31->z_size;
   }
   FUNC_0((caddr_t)VAR_32 - (caddr_t)VAR_17->vsa_aclentp ==
       VAR_20->z_acl_bytes);
  }
 }
 if (VAR_21 & VAR_9) {
  VAR_17->vsa_aclflags = 0;
  if (VAR_16->z_pflags & VAR_12)
   VAR_17->vsa_aclflags |= VAR_2;
  if (VAR_16->z_pflags & VAR_14)
   VAR_17->vsa_aclflags |= VAR_3;
  if (VAR_16->z_pflags & VAR_11)
   VAR_17->vsa_aclflags |= VAR_1;
 }

 FUNC_8(&VAR_16->z_acl_lock);

 return (0);
}
