
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z_sb; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct inode_operations {int dummy; } ;
struct inode {int dummy; } ;
struct file_operations {int dummy; } ;


 struct inode* FUNC_0 (int ,unsigned long) ;
 struct inode* FUNC_1 (TYPE_1__*,scalar_t__,struct file_operations const*,struct inode_operations const*) ;

__attribute__((used)) static struct inode *
FUNC_2(zfsvfs_t *VAR_0, uint64_t VAR_1,
    const struct file_operations *VAR_2, const struct inode_operations *VAR_3)
{
 struct inode *VAR_4 = ((void*)0);

 while (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_0->z_sb, (unsigned long)VAR_1);
  if (VAR_4)
   break;


  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return (VAR_4);
}
