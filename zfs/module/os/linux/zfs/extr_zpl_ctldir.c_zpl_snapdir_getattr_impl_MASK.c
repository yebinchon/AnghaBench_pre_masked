
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int u32 ;
struct path {TYPE_1__* dentry; } ;
struct kstat {int nlink; int size; int atime; int mtime; int ctime; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {struct inode* d_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct kstat*) ;

__attribute__((used)) static int
FUNC_6(const struct path *VAR_0, struct kstat *VAR_1,
    u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = VAR_0->dentry->d_inode;
 zfsvfs_t *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_5);
 FUNC_5(VAR_4, VAR_1);

 VAR_1->nlink = VAR_1->size = 2;
 VAR_1->ctime = VAR_1->mtime = FUNC_4(VAR_5->z_os);
 VAR_1->atime = FUNC_3(VAR_4);
 FUNC_2(VAR_5);

 return (0);
}
