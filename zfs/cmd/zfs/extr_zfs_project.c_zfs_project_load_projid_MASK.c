
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fsx_projid; } ;
typedef TYPE_1__ zfsxattr_t ;
struct TYPE_6__ {int zpc_expected_projid; } ;
typedef TYPE_2__ zfs_project_control_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,int ,TYPE_1__*) ;
 int FUNC_4 (char const*,int) ;
 int VAR_4 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5, zfs_project_control_t *VAR_6)
{
 zfsxattr_t VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_4(VAR_5, VAR_1 | VAR_0);
 if (VAR_9 < 0) {
  (void) FUNC_1(VAR_4, FUNC_2("failed to open %s: %s\n"),
      VAR_5, FUNC_5(VAR_3));
  return (VAR_9);
 }

 VAR_8 = FUNC_3(VAR_9, VAR_2, &VAR_7);
 if (VAR_8)
  (void) FUNC_1(VAR_4,
      FUNC_2("failed to get xattr for %s: %s\n"),
      VAR_5, FUNC_5(VAR_3));
 else
  VAR_6->zpc_expected_projid = VAR_7.fsx_projid;

 FUNC_0(VAR_9);
 return (VAR_8);
}
