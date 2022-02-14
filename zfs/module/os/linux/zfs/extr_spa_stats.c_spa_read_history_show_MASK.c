
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_longlong_t ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {scalar_t__ pln_id; } ;
struct TYPE_4__ {int comm; int pid; int origin; int aflags; scalar_t__ blkid; scalar_t__ level; scalar_t__ object; scalar_t__ objset; int start; TYPE_1__ srh_node; } ;
typedef TYPE_2__ spa_read_history_t ;
typedef int longlong_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 spa_read_history_t *VAR_2 = (spa_read_history_t *)VAR_1;

 FUNC_0(VAR_0, "%-8llu %-16llu 0x%-6llx "
     "%-8lli %-8lli %-8lli 0x%-6x %-24s %-8i %-16s\n",
     (u_longlong_t)VAR_2->srh_node.pln_id, VAR_2->start,
     (longlong_t)VAR_2->objset, (longlong_t)VAR_2->object,
     (longlong_t)VAR_2->level, (longlong_t)VAR_2->blkid,
     VAR_2->aflags, VAR_2->origin, VAR_2->pid, VAR_2->comm);

 return (0);
}
