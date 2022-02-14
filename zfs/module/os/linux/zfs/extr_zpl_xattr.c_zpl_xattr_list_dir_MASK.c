
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dentry; } ;
typedef TYPE_2__ xattr_filldir_t ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int cred_t ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int *,struct inode**,int ,int *,int *,int *) ;
 int FUNC_2 (struct inode*,TYPE_2__*) ;

__attribute__((used)) static ssize_t
FUNC_3(xattr_filldir_t *VAR_2, cred_t *VAR_3)
{
 struct inode *VAR_4 = VAR_2->dentry->d_inode;
 struct inode *VAR_5 = ((void*)0);
 int VAR_6;


 VAR_6 = -FUNC_1(VAR_4, ((void*)0), &VAR_5, VAR_1, VAR_3, ((void*)0), ((void*)0));
 if (VAR_6) {
  if (VAR_6 == -VAR_0)
   VAR_6 = 0;

  return (VAR_6);
 }

 VAR_6 = FUNC_2(VAR_5, VAR_2);
 FUNC_0(VAR_5);

 return (VAR_6);
}
