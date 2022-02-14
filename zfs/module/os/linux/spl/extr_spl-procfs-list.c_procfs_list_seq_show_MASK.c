
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {TYPE_2__* private; } ;
struct TYPE_3__ {int (* pl_show_header ) (struct seq_file*) ;int (* pl_show ) (struct seq_file*,void*) ;int pl_lock; } ;
typedef TYPE_1__ procfs_list_t ;
struct TYPE_4__ {TYPE_1__* procfs_list; } ;
typedef TYPE_2__ procfs_list_cursor_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct seq_file*,void*) ;

__attribute__((used)) static int
FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 procfs_list_cursor_t *VAR_3 = VAR_1->private;
 procfs_list_t *VAR_4 = VAR_3->procfs_list;

 FUNC_0(FUNC_1(&VAR_4->pl_lock));
 if (VAR_2 == VAR_0) {
  if (VAR_4->pl_show_header != ((void*)0))
   return (VAR_4->pl_show_header(VAR_1));
  else
   return (0);
 }
 return (VAR_4->pl_show(VAR_1, VAR_2));
}
