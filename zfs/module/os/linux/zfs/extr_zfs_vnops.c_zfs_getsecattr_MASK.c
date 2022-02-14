
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int znode_t ;
typedef int zfsvfs_t ;
typedef int vsecattr_t ;
struct inode {int dummy; } ;
typedef int cred_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;

int
FUNC_6(struct inode *VAR_3, vsecattr_t *VAR_4, int VAR_5, cred_t *VAR_6)
{
 znode_t *VAR_7 = FUNC_0(VAR_3);
 zfsvfs_t *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;
 boolean_t VAR_10 = (VAR_5 & VAR_0) ? VAR_2 : VAR_1;

 FUNC_2(VAR_8);
 FUNC_4(VAR_7);
 VAR_9 = FUNC_5(VAR_7, VAR_4, VAR_10, VAR_6);
 FUNC_3(VAR_8);

 return (VAR_9);
}
