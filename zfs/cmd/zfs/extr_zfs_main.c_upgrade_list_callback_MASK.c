
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {scalar_t__ cb_foundone; scalar_t__ cb_newer; } ;
typedef TYPE_1__ upgrade_cbdata_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_3, void *VAR_4)
{
 upgrade_cbdata_t *VAR_5 = VAR_4;
 int VAR_6 = FUNC_4(VAR_3, VAR_1);


 if ((!VAR_5->cb_newer && VAR_6 < VAR_2) ||
     (VAR_5->cb_newer && VAR_6 > VAR_2)) {
  char *VAR_7;
  if (VAR_5->cb_newer) {
   VAR_7 = FUNC_0("The following filesystems are "
       "formatted using a newer software version and\n"
       "cannot be accessed on the current system.\n\n");
  } else {
   VAR_7 = FUNC_0("The following filesystems are "
       "out of date, and can be upgraded.  After being\n"
       "upgraded, these filesystems (and any 'zfs send' "
       "streams generated from\n"
       "subsequent snapshots) will no longer be "
       "accessible by older software versions.\n\n");
  }

  if (!VAR_5->cb_foundone) {
   (void) FUNC_2(VAR_7);
   (void) FUNC_1(FUNC_0("VER  FILESYSTEM\n"));
   (void) FUNC_1(FUNC_0("---  ------------\n"));
   VAR_5->cb_foundone = VAR_0;
  }

  (void) FUNC_1("%2u   %s\n", VAR_6, FUNC_3(VAR_3));
 }

 return (0);
}
