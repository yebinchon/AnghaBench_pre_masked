
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int znode_t ;
typedef int zfsvfs_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 int VAR_0 ;
 int * FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int ,int *) ;
 int FUNC_6 (int *,int,int,int *) ;

int
FUNC_7(struct inode *VAR_2, int VAR_3, int VAR_4, cred_t *VAR_5)
{
 znode_t *VAR_6 = FUNC_0(VAR_2);
 zfsvfs_t *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 FUNC_2(VAR_7);
 FUNC_4(VAR_6);

 if (VAR_4 & VAR_1)
  VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_4, VAR_0, VAR_5);
 else
  VAR_8 = FUNC_6(VAR_6, VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_7);
 return (VAR_8);
}
