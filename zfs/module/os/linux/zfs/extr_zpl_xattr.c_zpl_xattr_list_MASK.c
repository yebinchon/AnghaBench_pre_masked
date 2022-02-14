
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int z_xattr_lock; scalar_t__ z_is_sa; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_13__ {scalar_t__ z_use_sa; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_14__ {size_t member_0; char* member_2; int offset; struct dentry* member_3; int member_1; } ;
typedef TYPE_3__ xattr_filldir_t ;
struct dentry {int d_inode; } ;
typedef int ssize_t ;
typedef int fstrans_cookie_t ;
typedef int cred_t ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*) ;

ssize_t
FUNC_14(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 znode_t *VAR_4 = FUNC_1(VAR_1->d_inode);
 zfsvfs_t *VAR_5 = FUNC_5(VAR_4);
 xattr_filldir_t VAR_6 = { VAR_3, 0, VAR_2, VAR_1 };
 cred_t *VAR_7 = FUNC_0();
 fstrans_cookie_t VAR_8;
 int VAR_9 = 0;

 FUNC_7(VAR_7);
 VAR_8 = FUNC_10();
 FUNC_2(VAR_5);
 FUNC_4(VAR_4);
 FUNC_8(&VAR_4->z_xattr_lock, VAR_0);

 if (VAR_5->z_use_sa && VAR_4->z_is_sa) {
  VAR_9 = FUNC_13(&VAR_6);
  if (VAR_9)
   goto out;
 }

 VAR_9 = FUNC_12(&VAR_6, VAR_7);
 if (VAR_9)
  goto out;

 VAR_9 = VAR_6.offset;
out:

 FUNC_9(&VAR_4->z_xattr_lock);
 FUNC_3(VAR_5);
 FUNC_11(VAR_8);
 FUNC_6(VAR_7);

 return (VAR_9);
}
