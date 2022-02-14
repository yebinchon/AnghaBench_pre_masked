
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* mnt_osname; void* mnt_data; } ;
typedef TYPE_1__ zfs_mnt_t ;
struct super_block {int s_root; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 struct dentry* FUNC_2 (int ) ;
 struct super_block* FUNC_3 (struct file_system_type*,int,TYPE_1__*) ;

__attribute__((used)) static struct dentry *
FUNC_4(struct file_system_type *VAR_0, int VAR_1,
    const char *VAR_2, void *VAR_3)
{
 zfs_mnt_t VAR_4 = { .mnt_osname = VAR_2, .mnt_data = VAR_3 };

 struct super_block *VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_4);
 if (FUNC_1(VAR_5))
  return (FUNC_0(VAR_5));

 return (FUNC_2(VAR_5->s_root));
}
