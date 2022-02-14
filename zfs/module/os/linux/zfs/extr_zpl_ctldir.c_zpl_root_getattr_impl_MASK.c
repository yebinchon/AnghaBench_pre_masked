
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {TYPE_1__* dentry; } ;
struct kstat {int atime; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct kstat*) ;

__attribute__((used)) static int
FUNC_2(const struct path *VAR_0, struct kstat *VAR_1,
    u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = VAR_0->dentry->d_inode;

 FUNC_1(VAR_4, VAR_1);
 VAR_1->atime = FUNC_0(VAR_4);

 return (0);
}
