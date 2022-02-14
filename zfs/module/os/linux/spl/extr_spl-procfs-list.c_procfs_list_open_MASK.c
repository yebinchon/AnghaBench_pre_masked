
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct TYPE_2__ {scalar_t__ cached_pos; int * cached_node; int procfs_list; } ;
typedef TYPE_1__ procfs_list_cursor_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, &VAR_0,
     sizeof (procfs_list_cursor_t));
 if (VAR_3 != 0)
  return (VAR_3);

 struct seq_file *VAR_4 = VAR_2->private_data;
 procfs_list_cursor_t *VAR_5 = VAR_4->private;
 VAR_5->procfs_list = FUNC_0(VAR_1);
 VAR_5->cached_node = ((void*)0);
 VAR_5->cached_pos = 0;

 return (0);
}
