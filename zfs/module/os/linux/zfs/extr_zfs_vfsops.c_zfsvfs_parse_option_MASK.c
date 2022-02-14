
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vfs_mntpoint; void* vfs_do_nbmand; void* vfs_nbmand; void* vfs_do_relatime; void* vfs_relatime; void* vfs_do_atime; void* vfs_atime; void* vfs_do_xattr; void* vfs_xattr; void* vfs_do_devices; void* vfs_devices; void* vfs_do_exec; void* vfs_exec; void* vfs_do_setuid; void* vfs_setuid; void* vfs_do_readonly; void* vfs_readonly; } ;
typedef TYPE_1__ vfs_t ;
typedef int substring_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(char *VAR_6, int VAR_7, substring_t *VAR_8, vfs_t *VAR_9)
{
 switch (VAR_7) {
 case 132:
  VAR_9->vfs_readonly = VAR_1;
  VAR_9->vfs_do_readonly = VAR_1;
  break;
 case 131:
  VAR_9->vfs_readonly = VAR_0;
  VAR_9->vfs_do_readonly = VAR_1;
  break;
 case 129:
  VAR_9->vfs_setuid = VAR_1;
  VAR_9->vfs_do_setuid = VAR_1;
  break;
 case 135:
  VAR_9->vfs_setuid = VAR_0;
  VAR_9->vfs_do_setuid = VAR_1;
  break;
 case 143:
  VAR_9->vfs_exec = VAR_1;
  VAR_9->vfs_do_exec = VAR_1;
  break;
 case 138:
  VAR_9->vfs_exec = VAR_0;
  VAR_9->vfs_do_exec = VAR_1;
  break;
 case 145:
  VAR_9->vfs_devices = VAR_1;
  VAR_9->vfs_do_devices = VAR_1;
  break;
 case 139:
  VAR_9->vfs_devices = VAR_0;
  VAR_9->vfs_do_devices = VAR_1;
  break;
 case 144:
  VAR_9->vfs_xattr = VAR_3;
  VAR_9->vfs_do_xattr = VAR_1;
  break;
 case 130:
  VAR_9->vfs_xattr = VAR_5;
  VAR_9->vfs_do_xattr = VAR_1;
  break;
 case 128:
  VAR_9->vfs_xattr = VAR_3;
  VAR_9->vfs_do_xattr = VAR_1;
  break;
 case 134:
  VAR_9->vfs_xattr = VAR_4;
  VAR_9->vfs_do_xattr = VAR_1;
  break;
 case 146:
  VAR_9->vfs_atime = VAR_1;
  VAR_9->vfs_do_atime = VAR_1;
  break;
 case 140:
  VAR_9->vfs_atime = VAR_0;
  VAR_9->vfs_do_atime = VAR_1;
  break;
 case 133:
  VAR_9->vfs_relatime = VAR_1;
  VAR_9->vfs_do_relatime = VAR_1;
  break;
 case 136:
  VAR_9->vfs_relatime = VAR_0;
  VAR_9->vfs_do_relatime = VAR_1;
  break;
 case 141:
  VAR_9->vfs_nbmand = VAR_1;
  VAR_9->vfs_do_nbmand = VAR_1;
  break;
 case 137:
  VAR_9->vfs_nbmand = VAR_0;
  VAR_9->vfs_do_nbmand = VAR_1;
  break;
 case 142:
  VAR_9->vfs_mntpoint = FUNC_1(&VAR_8[0]);
  if (VAR_9->vfs_mntpoint == ((void*)0))
   return (FUNC_0(VAR_2));

  break;
 default:
  break;
 }

 return (0);
}
