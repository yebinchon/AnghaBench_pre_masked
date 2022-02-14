
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_is_sa; int z_xattr_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_7__ {scalar_t__ z_use_sa; } ;
typedef TYPE_2__ zfsvfs_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,char const*,void*,size_t,int *) ;
 int FUNC_5 (struct inode*,char const*,void*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_2, const char *VAR_3, void *VAR_4, size_t VAR_5,
    cred_t *VAR_6)
{
 znode_t *VAR_7 = FUNC_1(VAR_2);
 zfsvfs_t *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 FUNC_0(FUNC_2(&VAR_7->z_xattr_lock));

 if (VAR_8->z_use_sa && VAR_7->z_is_sa) {
  VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_9 != -VAR_1)
   goto out;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
out:
 if (VAR_9 == -VAR_1)
  VAR_9 = -VAR_0;

 return (VAR_9);
}
