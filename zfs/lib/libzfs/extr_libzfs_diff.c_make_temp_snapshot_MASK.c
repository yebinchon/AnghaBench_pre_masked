
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* member_0; int zc_value; int zc_name; int zc_cleanup_fd; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int libzfs_handle_t ;
struct TYPE_8__ {int tmpsnap; int ds; int tosnap; int errbuf; int cleanupfd; TYPE_1__* zhp; } ;
typedef TYPE_3__ differ_info_t ;
struct TYPE_6__ {int * zfs_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,char*,...) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(differ_info_t *VAR_6)
{
 libzfs_handle_t *VAR_7 = VAR_6->zhp->zfs_hdl;
 zfs_cmd_t VAR_8 = {"\0"};

 (void) FUNC_2(VAR_8.zc_value, sizeof (VAR_8.zc_value),
     VAR_3, FUNC_1());
 (void) FUNC_3(VAR_8.zc_name, VAR_6->ds, sizeof (VAR_8.zc_name));
 VAR_8.zc_cleanup_fd = VAR_6->cleanupfd;

 if (FUNC_6(VAR_7, VAR_4, &VAR_8) != 0) {
  int VAR_9 = VAR_5;
  if (VAR_9 == VAR_0) {
   (void) FUNC_2(VAR_6->errbuf, sizeof (VAR_6->errbuf),
       FUNC_0(VAR_2, "The diff delegated "
       "permission is needed in order\nto create a "
       "just-in-time snapshot for diffing\n"));
   return (FUNC_5(VAR_7, VAR_1, VAR_6->errbuf));
  } else {
   (void) FUNC_2(VAR_6->errbuf, sizeof (VAR_6->errbuf),
       FUNC_0(VAR_2, "Cannot create just-in-time "
       "snapshot of '%s'"), VAR_8.zc_name);
   return (FUNC_7(VAR_7, VAR_9, VAR_6->errbuf));
  }
 }

 VAR_6->tmpsnap = FUNC_8(VAR_7, VAR_8.zc_value);
 VAR_6->tosnap = FUNC_4(VAR_7, "%s@%s", VAR_6->ds, VAR_6->tmpsnap);
 return (0);
}
