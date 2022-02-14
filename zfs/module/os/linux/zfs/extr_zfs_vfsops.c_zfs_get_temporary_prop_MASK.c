
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* z_vfs; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int zfs_prop_t ;
struct TYPE_9__ {scalar_t__ vfs_atime; scalar_t__ vfs_relatime; scalar_t__ vfs_devices; scalar_t__ vfs_exec; scalar_t__ vfs_setuid; scalar_t__ vfs_readonly; scalar_t__ vfs_xattr; scalar_t__ vfs_nbmand; int vfs_do_nbmand; int vfs_do_xattr; int vfs_do_readonly; int vfs_do_setuid; int vfs_do_exec; int vfs_do_devices; int vfs_do_relatime; int vfs_do_atime; } ;
typedef TYPE_2__ vfs_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int os_user_ptr_lock; } ;
typedef TYPE_3__ objset_t ;
typedef int dsl_dataset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_3__**) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(dsl_dataset_t *VAR_4, zfs_prop_t VAR_5, uint64_t *VAR_6,
    char *VAR_7)
{
 int VAR_8;
 zfsvfs_t *VAR_9;
 vfs_t *VAR_10;
 objset_t *VAR_11;
 uint64_t VAR_12 = *VAR_6;

 VAR_8 = FUNC_0(VAR_4, &VAR_11);
 if (VAR_8 != 0)
  return (VAR_8);

 if (FUNC_2(VAR_11) != VAR_0)
  return (VAR_1);

 FUNC_3(&VAR_11->os_user_ptr_lock);
 VAR_9 = FUNC_1(VAR_11);
 FUNC_4(&VAR_11->os_user_ptr_lock);
 if (VAR_9 == ((void*)0))
  return (VAR_3);

 VAR_10 = VAR_9->z_vfs;

 switch (VAR_5) {
 case 135:
  if (VAR_10->vfs_do_atime)
   VAR_12 = VAR_10->vfs_atime;
  break;
 case 130:
  if (VAR_10->vfs_do_relatime)
   VAR_12 = VAR_10->vfs_relatime;
  break;
 case 134:
  if (VAR_10->vfs_do_devices)
   VAR_12 = VAR_10->vfs_devices;
  break;
 case 133:
  if (VAR_10->vfs_do_exec)
   VAR_12 = VAR_10->vfs_exec;
  break;
 case 129:
  if (VAR_10->vfs_do_setuid)
   VAR_12 = VAR_10->vfs_setuid;
  break;
 case 131:
  if (VAR_10->vfs_do_readonly)
   VAR_12 = VAR_10->vfs_readonly;
  break;
 case 128:
  if (VAR_10->vfs_do_xattr)
   VAR_12 = VAR_10->vfs_xattr;
  break;
 case 132:
  if (VAR_10->vfs_do_nbmand)
   VAR_12 = VAR_10->vfs_nbmand;
  break;
 default:
  return (VAR_2);
 }

 if (VAR_12 != *VAR_6) {
  (void) FUNC_5(VAR_7, "temporary");
  *VAR_6 = VAR_12;
 }
 return (0);
}
