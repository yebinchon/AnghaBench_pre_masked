
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
struct TYPE_6__ {int z_root; } ;
typedef TYPE_1__ zfsvfs_t ;
struct inode {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct inode* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int **) ;

int
FUNC_4(zfsvfs_t *VAR_0, struct inode **VAR_1)
{
 znode_t *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);

 VAR_3 = FUNC_3(VAR_0, VAR_0->z_root, &VAR_2);
 if (VAR_3 == 0)
  *VAR_1 = FUNC_2(VAR_2);

 FUNC_1(VAR_0);
 return (VAR_3);
}
