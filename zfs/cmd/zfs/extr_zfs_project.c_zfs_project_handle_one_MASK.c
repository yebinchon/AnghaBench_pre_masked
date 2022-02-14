
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fsx_projid; int fsx_xflags; } ;
typedef TYPE_1__ zfsxattr_t ;
struct TYPE_6__ {int zpc_op; int zpc_expected_projid; int zpc_set_flag; int zpc_keep_projid; int zpc_newline; scalar_t__ zpc_ignore_noent; } ;
typedef TYPE_2__ zfs_project_control_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char*,...) ;
 int VAR_8 ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_9, zfs_project_control_t *VAR_10)
{
 zfsxattr_t VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_5(VAR_9, VAR_2 | VAR_1);
 if (VAR_13 < 0) {
  if (VAR_7 == VAR_0 && VAR_10->zpc_ignore_noent)
   return (0);

  (void) FUNC_2(VAR_8, FUNC_3("failed to open %s: %s\n"),
      VAR_9, FUNC_7(VAR_7));
  return (VAR_13);
 }

 VAR_12 = FUNC_4(VAR_13, VAR_4, &VAR_11);
 if (VAR_12) {
  (void) FUNC_2(VAR_8,
      FUNC_3("failed to get xattr for %s: %s\n"),
      VAR_9, FUNC_7(VAR_7));
  goto out;
 }

 switch (VAR_10->zpc_op) {
 case 129:
  (void) FUNC_6("%5u %c %s\n", VAR_11.fsx_projid,
      (VAR_11.fsx_xflags & VAR_6) ? 'P' : '-', VAR_9);
  goto out;
 case 131:
  if (VAR_11.fsx_projid == VAR_10->zpc_expected_projid &&
      VAR_11.fsx_xflags & VAR_6)
   goto out;

  if (!VAR_10->zpc_newline) {
   char VAR_14 = '\0';

   (void) FUNC_6("%s%c", VAR_9, VAR_14);
   goto out;
  }

  if (VAR_11.fsx_projid != VAR_10->zpc_expected_projid)
   (void) FUNC_6("%s - project ID is not set properly "
       "(%u/%u)\n", VAR_9, VAR_11.fsx_projid,
       (uint32_t)VAR_10->zpc_expected_projid);

  if (!(VAR_11.fsx_xflags & VAR_6))
   (void) FUNC_6("%s - project inherit flag is not set\n",
       VAR_9);

  goto out;
 case 130:
  if (!(VAR_11.fsx_xflags & VAR_6) &&
      (VAR_10->zpc_keep_projid ||
      VAR_11.fsx_projid == VAR_3))
   goto out;

  VAR_11.fsx_xflags &= ~VAR_6;
  if (!VAR_10->zpc_keep_projid)
   VAR_11.fsx_projid = VAR_3;
  break;
 case 128:
  if (VAR_11.fsx_projid == VAR_10->zpc_expected_projid &&
      (!VAR_10->zpc_set_flag || VAR_11.fsx_xflags & VAR_6))
   goto out;

  VAR_11.fsx_projid = VAR_10->zpc_expected_projid;
  if (VAR_10->zpc_set_flag)
   VAR_11.fsx_xflags |= VAR_6;
  break;
 default:
  FUNC_0(0);
  break;
 }

 VAR_12 = FUNC_4(VAR_13, VAR_5, &VAR_11);
 if (VAR_12)
  (void) FUNC_2(VAR_8,
      FUNC_3("failed to set xattr for %s: %s\n"),
      VAR_9, FUNC_7(VAR_7));

out:
 FUNC_1(VAR_13);
 return (VAR_12);
}
