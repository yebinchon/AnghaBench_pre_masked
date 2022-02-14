
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zpc_recursive; scalar_t__ zpc_dironly; } ;
typedef TYPE_1__ zfs_project_control_t ;
struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char const*,struct stat*) ;
 int VAR_1 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, zfs_project_control_t *VAR_3,
    struct stat *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_5) {
  (void) FUNC_2(VAR_1, FUNC_3("failed to stat %s: %s\n"),
      VAR_2, FUNC_5(VAR_0));
  return (VAR_5);
 }

 if (!FUNC_1(VAR_4->st_mode) && !FUNC_0(VAR_4->st_mode)) {
  (void) FUNC_2(VAR_1, "%s", FUNC_3("only support project quota on "
      "regular file or directory\n"));
  return (-1);
 }

 if (!FUNC_0(VAR_4->st_mode)) {
  if (VAR_3->zpc_dironly) {
   (void) FUNC_2(VAR_1, FUNC_3(
       "'-d' option on non-dir target %s\n"), VAR_2);
   return (-1);
  }

  if (VAR_3->zpc_recursive) {
   (void) FUNC_2(VAR_1, FUNC_3(
       "'-r' option on non-dir target %s\n"), VAR_2);
   return (-1);
  }
 }

 return (0);
}
