
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_xattr_lock; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct inode {int dummy; } ;
typedef int fstrans_cookie_t ;
typedef int cred_t ;


 int * FUNC_0 () ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct inode*,char const*,void*,size_t,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct inode *VAR_1, const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 znode_t *VAR_5 = FUNC_1(VAR_1);
 zfsvfs_t *VAR_6 = FUNC_5(VAR_5);
 cred_t *VAR_7 = FUNC_0();
 fstrans_cookie_t VAR_8;
 int VAR_9;

 FUNC_8(VAR_7);
 VAR_8 = FUNC_11();
 FUNC_2(VAR_6);
 FUNC_4(VAR_5);
 FUNC_9(&VAR_5->z_xattr_lock, VAR_0);
 VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
 FUNC_10(&VAR_5->z_xattr_lock);
 FUNC_3(VAR_6);
 FUNC_12(VAR_8);
 FUNC_7(VAR_7);

 return (VAR_9);
}
