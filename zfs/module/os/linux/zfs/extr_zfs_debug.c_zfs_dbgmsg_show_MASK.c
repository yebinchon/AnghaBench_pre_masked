
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zdm_msg; scalar_t__ zdm_timestamp; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;
typedef int u_longlong_t ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 zfs_dbgmsg_t *VAR_2 = (zfs_dbgmsg_t *)VAR_1;
 FUNC_0(VAR_0, "%-12llu %-s\n",
     (u_longlong_t)VAR_2->zdm_timestamp, VAR_2->zdm_msg);
 return (0);
}
