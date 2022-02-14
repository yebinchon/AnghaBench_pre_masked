
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int znode_t ;
typedef int zfsvfs_t ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int * FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct page**,int) ;

int
FUNC_6(struct inode *VAR_0, struct page *VAR_1[], int VAR_2)
{
 znode_t *VAR_3 = FUNC_0(VAR_0);
 zfsvfs_t *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 if (VAR_1 == ((void*)0))
  return (0);

 FUNC_2(VAR_4);
 FUNC_4(VAR_3);

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2);

 FUNC_3(VAR_4);
 return (VAR_5);
}
