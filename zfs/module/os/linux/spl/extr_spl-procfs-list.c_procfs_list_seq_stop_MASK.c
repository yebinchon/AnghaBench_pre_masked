
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {TYPE_2__* private; } ;
struct TYPE_3__ {int pl_lock; } ;
typedef TYPE_1__ procfs_list_t ;
struct TYPE_4__ {TYPE_1__* procfs_list; } ;
typedef TYPE_2__ procfs_list_cursor_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 procfs_list_cursor_t *VAR_2 = VAR_0->private;
 procfs_list_t *VAR_3 = VAR_2->procfs_list;
 FUNC_0(&VAR_3->pl_lock);
}
