
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_projectobjquota_obj; int z_projectquota_obj; int z_groupobjquota_obj; int z_userobjquota_obj; int z_groupquota_obj; int z_userquota_obj; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_userquota_prop_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
__attribute__((used)) static uint64_t
FUNC_0(zfsvfs_t *VAR_4, zfs_userquota_prop_t VAR_5)
{
 switch (VAR_5) {
 case 128:
 case 130:
  return (VAR_2);
 case 136:
 case 138:
  return (VAR_0);
 case 132:
 case 134:
  return (VAR_1);
 case 129:
  return (VAR_4->z_userquota_obj);
 case 137:
  return (VAR_4->z_groupquota_obj);
 case 131:
  return (VAR_4->z_userobjquota_obj);
 case 139:
  return (VAR_4->z_groupobjquota_obj);
 case 133:
  return (VAR_4->z_projectquota_obj);
 case 135:
  return (VAR_4->z_projectobjquota_obj);
 default:
  return (VAR_3);
 }
}
