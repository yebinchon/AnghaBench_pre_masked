
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnttab {int mnt_mntopts; int mnt_fstype; int mnt_mountp; int mnt_special; } ;
struct mntent {int mnt_opts; int mnt_type; int mnt_dir; int mnt_fsname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mntent* FUNC_1 (int *,struct mntent*,int ,int ) ;

int
FUNC_2(FILE *VAR_3, struct mnttab *VAR_4)
{
 struct mntent VAR_5;
 struct mntent *VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5, VAR_2, VAR_0);

 if (VAR_6 != ((void*)0)) {
  VAR_4->mnt_special = VAR_5.mnt_fsname;
  VAR_4->mnt_mountp = VAR_5.mnt_dir;
  VAR_4->mnt_fstype = VAR_5.mnt_type;
  VAR_4->mnt_mntopts = VAR_5.mnt_opts;
  return (0);
 }

 if (FUNC_0(VAR_3))
  return (-1);

 return (VAR_1);
}
