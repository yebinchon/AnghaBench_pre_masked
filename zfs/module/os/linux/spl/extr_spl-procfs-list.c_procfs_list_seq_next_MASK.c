
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {TYPE_2__* private; } ;
struct TYPE_5__ {TYPE_1__* procfs_list; } ;
typedef TYPE_2__ procfs_list_cursor_t ;
typedef int loff_t ;
struct TYPE_4__ {int pl_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void *
FUNC_3(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 procfs_list_cursor_t *VAR_3 = VAR_0->private;
 FUNC_0(FUNC_1(&VAR_3->procfs_list->pl_lock));
 return (FUNC_2(VAR_3, VAR_2));
}
