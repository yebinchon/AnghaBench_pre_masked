
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_type_t ;
typedef int zfs_handle_t ;
struct stat64 {int dummy; } ;
struct extmnttab {char* mnt_special; int mnt_fstype; } ;
struct TYPE_4__ {int libzfs_mnttab; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (char*,struct extmnttab*,struct stat64*) ;
 char* FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 int * FUNC_7 (TYPE_1__*,char*,int ) ;

zfs_handle_t *
FUNC_8(libzfs_handle_t *VAR_4, char *VAR_5, zfs_type_t VAR_6)
{
 struct stat64 VAR_7;
 struct extmnttab VAR_8;

 if (VAR_5[0] != '/' && FUNC_6(VAR_5, "./", FUNC_5("./")) != 0) {



  return (FUNC_7(VAR_4, VAR_5, VAR_6));
 }


 if (FUNC_1(VAR_0, "r", VAR_4->libzfs_mnttab) == ((void*)0))
  return (((void*)0));

 if (FUNC_2(VAR_5, &VAR_8, &VAR_7) != 0)
  return (((void*)0));

 if (FUNC_4(VAR_8.mnt_fstype, VAR_1) != 0) {
  (void) FUNC_0(VAR_3, FUNC_3("'%s': not a ZFS filesystem\n"),
      VAR_5);
  return (((void*)0));
 }

 return (FUNC_7(VAR_4, VAR_8.mnt_special, VAR_2));
}
