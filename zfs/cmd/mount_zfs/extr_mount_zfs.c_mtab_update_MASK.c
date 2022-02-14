
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntent {char* mnt_fsname; char* mnt_dir; char* mnt_type; char* mnt_opts; scalar_t__ mnt_passno; scalar_t__ mnt_freq; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mntent*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*,int) ;
 char* FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(char *VAR_4, char *VAR_5, char *VAR_6, char *VAR_7)
{
 struct mntent VAR_8;
 FILE *VAR_9;
 int VAR_10;

 VAR_8.mnt_fsname = VAR_4;
 VAR_8.mnt_dir = VAR_5;
 VAR_8.mnt_type = VAR_6;
 VAR_8.mnt_opts = VAR_7 ? VAR_7 : "";
 VAR_8.mnt_freq = 0;
 VAR_8.mnt_passno = 0;

 VAR_9 = FUNC_4("/etc/mtab", "a+");
 if (!VAR_9) {
  (void) FUNC_2(VAR_3, FUNC_3(
      "filesystem '%s' was mounted, but /etc/mtab "
      "could not be opened due to error %d\n"),
      VAR_4, VAR_2);
  return (VAR_0);
 }

 VAR_10 = FUNC_0(VAR_9, &VAR_8);
 if (VAR_10) {
  (void) FUNC_2(VAR_3, FUNC_3(
      "filesystem '%s' was mounted, but /etc/mtab "
      "could not be updated due to error %d\n"),
      VAR_4, VAR_2);
  return (VAR_0);
 }

 (void) FUNC_1(VAR_9);

 return (VAR_1);
}
