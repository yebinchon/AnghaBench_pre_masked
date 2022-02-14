
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * z_xattr_cached; int z_lock; int z_xattr_lock; } ;
typedef TYPE_1__ znode_t ;
typedef int uint_t ;
typedef int uchar_t ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (void*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int **,int*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_1, const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 znode_t *VAR_5 = FUNC_1(VAR_1);
 uchar_t *VAR_6;
 uint_t VAR_7;
 int VAR_8 = 0;

 FUNC_0(FUNC_2(&VAR_5->z_xattr_lock));

 FUNC_4(&VAR_5->z_lock);
 if (VAR_5->z_xattr_cached == ((void*)0))
  VAR_8 = -FUNC_7(VAR_5);
 FUNC_5(&VAR_5->z_lock);

 if (VAR_8)
  return (VAR_8);

 FUNC_0(VAR_5->z_xattr_cached);
 VAR_8 = -FUNC_6(VAR_5->z_xattr_cached, VAR_2,
     &VAR_6, &VAR_7);
 if (VAR_8)
  return (VAR_8);

 if (VAR_4 == 0 || VAR_3 == ((void*)0))
  return (VAR_7);

 if (VAR_4 < VAR_7)
  return (-VAR_0);

 FUNC_3(VAR_3, VAR_6, VAR_7);

 return (VAR_7);
}
