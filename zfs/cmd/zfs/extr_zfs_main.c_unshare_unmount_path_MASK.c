
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct stat64 {scalar_t__ st_ino; } ;
struct extmnttab {char* mnt_fstype; int mnt_mountp; int mnt_special; } ;
typedef int smbshare_prop ;
typedef int nfs_mnt_prop ;
typedef int mtpt_prop ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int ,char*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (char*,struct extmnttab*,struct stat64*) ;
 char* FUNC_3 (char*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,struct stat64*) ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int *,int ,char*,int,int *,int *,int ,int ) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,char*) ;

__attribute__((used)) static int
FUNC_17(int VAR_14, char *VAR_15, int VAR_16, boolean_t VAR_17)
{
 zfs_handle_t *VAR_18;
 int VAR_19 = 0;
 struct stat64 VAR_20;
 struct extmnttab VAR_21;
 const char *VAR_22 = (VAR_14 == VAR_4) ? "unshare" : "unmount";
 ino_t VAR_23;







 if (FUNC_1(VAR_2, "r", VAR_12) == ((void*)0))
  return (VAR_1);

 if (FUNC_2(VAR_15, &VAR_21, &VAR_20) != 0) {
  if (VAR_14 == VAR_4) {
   (void) FUNC_0(VAR_13, FUNC_3("cannot %s '%s': not "
       "currently mounted\n"), VAR_22, VAR_15);
   return (1);
  }
  (void) FUNC_0(VAR_13, FUNC_3("warning: %s not in"
      "/proc/self/mounts\n"), VAR_15);
  if ((VAR_19 = FUNC_7(VAR_15, VAR_16)) != 0)
   (void) FUNC_0(VAR_13, FUNC_3("%s: %s\n"), VAR_15,
       FUNC_6(VAR_10));
  return (VAR_19 != 0);
 }
 VAR_23 = VAR_20.st_ino;

 if (FUNC_5(VAR_21.mnt_fstype, VAR_3) != 0) {
  (void) FUNC_0(VAR_13, FUNC_3("cannot %s '%s': not a ZFS "
      "filesystem\n"), VAR_22, VAR_15);
  return (1);
 }

 if ((VAR_18 = FUNC_12(VAR_11, VAR_21.mnt_special,
     VAR_9)) == ((void*)0))
  return (1);

 VAR_19 = 1;
 if (FUNC_4(VAR_21.mnt_mountp, &VAR_20) != 0) {
  (void) FUNC_0(VAR_13, FUNC_3("cannot %s '%s': %s\n"),
      VAR_22, VAR_15, FUNC_6(VAR_10));
  goto out;
 } else if (VAR_20.st_ino != VAR_23) {
  (void) FUNC_0(VAR_13, FUNC_3("cannot "
      "%s '%s': not a mountpoint\n"), VAR_22, VAR_15);
  goto out;
 }

 if (VAR_14 == VAR_4) {
  char VAR_24[VAR_5];
  char VAR_25[VAR_5];

  FUNC_8(FUNC_13(VAR_18, VAR_7, VAR_24,
      sizeof (VAR_24), ((void*)0), ((void*)0), 0, VAR_0) == 0);
  FUNC_8(FUNC_13(VAR_18, VAR_8, VAR_25,
      sizeof (VAR_25), ((void*)0), ((void*)0), 0, VAR_0) == 0);

  if (FUNC_5(VAR_24, "off") == 0 &&
      FUNC_5(VAR_25, "off") == 0) {
   (void) FUNC_0(VAR_13, FUNC_3("cannot unshare "
       "'%s': legacy share\n"), VAR_15);
   (void) FUNC_0(VAR_13, "%s", FUNC_3("use exportfs(8) "
       "or smbcontrol(1) to unshare this filesystem\n"));
  } else if (!FUNC_11(VAR_18)) {
   (void) FUNC_0(VAR_13, FUNC_3("cannot unshare '%s': "
       "not currently shared\n"), VAR_15);
  } else {
   VAR_19 = FUNC_16(VAR_18, VAR_15);
  }
 } else {
  char VAR_26[VAR_5];

  FUNC_8(FUNC_13(VAR_18, VAR_6, VAR_26,
      sizeof (VAR_26), ((void*)0), ((void*)0), 0, VAR_0) == 0);

  if (VAR_17) {
   VAR_19 = FUNC_14(VAR_18, ((void*)0), VAR_16);
  } else if (FUNC_5(VAR_26, "legacy") == 0) {
   (void) FUNC_0(VAR_13, FUNC_3("cannot unmount "
       "'%s': legacy mountpoint\n"),
       FUNC_10(VAR_18));
   (void) FUNC_0(VAR_13, "%s", FUNC_3("use umount(8) "
       "to unmount this filesystem\n"));
  } else {
   VAR_19 = FUNC_15(VAR_18, VAR_16);
  }
 }

out:
 FUNC_9(VAR_18);

 return (VAR_19 != 0);
}
