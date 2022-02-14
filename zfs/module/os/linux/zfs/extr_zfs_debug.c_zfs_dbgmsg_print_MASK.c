
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zdm_msg; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;
typedef int ssize_t ;
struct TYPE_7__ {int pl_lock; int pl_list; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int) ;
 TYPE_2__ VAR_1 ;

void
FUNC_6(const char *VAR_2)
{
 ssize_t VAR_3 __attribute__((unused));





 VAR_3 = FUNC_5(VAR_0, "ZFS_DBGMSG(", 11);
 VAR_3 = FUNC_5(VAR_0, VAR_2, FUNC_4(VAR_2));
 VAR_3 = FUNC_5(VAR_0, ") START:\n", 9);

 FUNC_2(&VAR_1.pl_lock);
 for (zfs_dbgmsg_t *VAR_4 = FUNC_0(&VAR_1.pl_list); VAR_4 != ((void*)0);
     VAR_4 = FUNC_1(&VAR_1.pl_list, VAR_4)) {
  VAR_3 = FUNC_5(VAR_0, VAR_4->zdm_msg,
      FUNC_4(VAR_4->zdm_msg));
  VAR_3 = FUNC_5(VAR_0, "\n", 1);
 }

 VAR_3 = FUNC_5(VAR_0, "ZFS_DBGMSG(", 11);
 VAR_3 = FUNC_5(VAR_0, VAR_2, FUNC_4(VAR_2));
 VAR_3 = FUNC_5(VAR_0, ") END\n", 6);

 FUNC_3(&VAR_1.pl_lock);
}
