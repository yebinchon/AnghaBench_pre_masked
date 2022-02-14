
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {char* cb_target; int cb_error; scalar_t__ cb_first; scalar_t__ cb_recurse; } ;
typedef TYPE_1__ rollback_cbdata_t ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_1, void *VAR_2)
{
 rollback_cbdata_t *VAR_3 = VAR_2;

 if (VAR_3->cb_first && VAR_3->cb_recurse) {
  (void) FUNC_0(VAR_0, FUNC_1("cannot rollback to "
      "'%s': clones of previous snapshots exist\n"),
      VAR_3->cb_target);
  (void) FUNC_0(VAR_0, "%s", FUNC_1("use '-R' to "
      "force deletion of the following clones and "
      "dependents:\n"));
  VAR_3->cb_first = 0;
  VAR_3->cb_error = 1;
 }

 (void) FUNC_0(VAR_0, "%s\n", FUNC_3(VAR_1));

 FUNC_2(VAR_1);
 return (0);
}
