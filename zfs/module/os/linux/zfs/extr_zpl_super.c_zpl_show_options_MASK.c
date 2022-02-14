
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_fs_info; } ;


 int FUNC_0 (struct seq_file*,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1->d_sb->s_fs_info));
}
