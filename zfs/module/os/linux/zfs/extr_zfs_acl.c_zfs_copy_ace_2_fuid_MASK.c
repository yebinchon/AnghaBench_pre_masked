
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_14__ {int z_inherit_type; int z_object_type; } ;
typedef TYPE_3__ zfs_object_ace_t ;
typedef int zfs_fuid_info_t ;
struct TYPE_15__ {TYPE_2__* z_ops; } ;
typedef TYPE_4__ zfs_acl_t ;
struct TYPE_12__ {int z_flags; int z_type; int z_access_mask; } ;
struct TYPE_16__ {TYPE_1__ z_hdr; int z_fuid; } ;
typedef TYPE_5__ zfs_ace_t ;
typedef int umode_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int cred_t ;
typedef size_t caddr_t ;
struct TYPE_17__ {int a_flags; int a_type; int a_who; int a_access_mask; } ;
typedef TYPE_6__ ace_t ;
struct TYPE_18__ {int a_inherit_obj_type; int a_obj_type; } ;
typedef TYPE_7__ ace_object_t ;
struct TYPE_13__ {size_t (* ace_size ) (TYPE_5__*) ;} ;




 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int) ;
 size_t FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*,int,int) ;
 int FUNC_4 (int *,int ,int *,int ,int **) ;

int
FUNC_5(zfsvfs_t *VAR_8, umode_t VAR_9, zfs_acl_t *VAR_10,
    void *VAR_11, zfs_ace_t *VAR_12, uint64_t VAR_13, size_t *VAR_14,
    zfs_fuid_info_t **VAR_15, cred_t *VAR_16)
{
 int VAR_17;
 uint16_t VAR_18;
 zfs_ace_t *VAR_19 = VAR_12;
 ace_t *VAR_20 = VAR_11;
 zfs_object_ace_t *VAR_21;
 ace_object_t *VAR_22;

 for (VAR_17 = 0; VAR_17 != VAR_13; VAR_17++) {
  VAR_19->z_hdr.z_access_mask = VAR_20->a_access_mask;
  VAR_19->z_hdr.z_flags = VAR_20->a_flags;
  VAR_19->z_hdr.z_type = VAR_20->a_type;
  VAR_18 = VAR_19->z_hdr.z_flags & VAR_2;
  if (VAR_18 != VAR_1 && VAR_18 != VAR_5 &&
      VAR_18 != VAR_0) {
   VAR_19->z_fuid = FUNC_4(VAR_8, VAR_20->a_who,
       VAR_16, (VAR_18 == 0) ?
       VAR_7 : VAR_6, VAR_15);
  }




  if (FUNC_3(VAR_9, VAR_10, VAR_19->z_hdr.z_type,
      VAR_19->z_hdr.z_flags) != VAR_3)
   return (FUNC_0(VAR_4));

  switch (VAR_20->a_type) {
  case 131:
  case 130:
  case 128:
  case 129:
   VAR_21 = (zfs_object_ace_t *)VAR_19;
   VAR_22 = (ace_object_t *)VAR_20;

   FUNC_1(VAR_22->a_obj_type, VAR_21->z_object_type,
       sizeof (VAR_22->a_obj_type));
   FUNC_1(VAR_22->a_inherit_obj_type,
       VAR_21->z_inherit_type,
       sizeof (VAR_22->a_inherit_obj_type));
   VAR_20 = (ace_t *)((caddr_t)VAR_20 + sizeof (ace_object_t));
   break;
  default:
   VAR_20 = (ace_t *)((caddr_t)VAR_20 + sizeof (ace_t));
  }

  VAR_19 = (zfs_ace_t *)((caddr_t)VAR_19 +
      VAR_10->z_ops->ace_size(VAR_19));
 }

 *VAR_14 = (caddr_t)VAR_19 - (caddr_t)VAR_12;

 return (0);
}
