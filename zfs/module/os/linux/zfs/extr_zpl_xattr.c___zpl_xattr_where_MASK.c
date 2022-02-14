
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


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int* FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,struct inode*,char const*) ;
 int FUNC_5 (struct inode*,char const*,int *,int ,int *) ;
 int FUNC_6 (struct inode*,char const*,int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_6, const char *VAR_7, int *VAR_8, cred_t *VAR_9)
{
 znode_t *VAR_10 = FUNC_1(VAR_6);
 zfsvfs_t *VAR_11 = FUNC_3(VAR_10);
 int VAR_12;

 FUNC_0(VAR_8);
 FUNC_0(FUNC_2(&VAR_10->z_xattr_lock));

 *VAR_8 = VAR_5;
 if (VAR_11->z_use_sa && VAR_10->z_is_sa) {
  VAR_12 = FUNC_6(VAR_6, VAR_7, ((void*)0), 0);
  if (VAR_12 >= 0)
   *VAR_8 |= VAR_4;
  else if (VAR_12 != -VAR_2)
   return (VAR_12);
 }

 VAR_12 = FUNC_5(VAR_6, VAR_7, ((void*)0), 0, VAR_9);
 if (VAR_12 >= 0)
  *VAR_8 |= VAR_3;
 else if (VAR_12 != -VAR_2)
  return (VAR_12);

 if (*VAR_8 == (VAR_4|VAR_3))
  FUNC_4(VAR_0, "ZFS: inode %p has xattr \"%s\""
      " in both SA and dir", VAR_6, VAR_7);
 if (*VAR_8 == VAR_5)
  VAR_12 = -VAR_1;
 else
  VAR_12 = 0;
 return (VAR_12);
}
