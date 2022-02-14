
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
struct TYPE_6__ {scalar_t__ z_shares_dir; } ;
typedef TYPE_1__ zfsvfs_t ;
struct inode {int dummy; } ;
typedef int pathname_t ;
typedef int cred_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,struct inode**,int ,int *,int *,int *) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int **) ;

int
FUNC_8(struct inode *VAR_1, char *VAR_2, struct inode **VAR_3,
    int VAR_4, cred_t *VAR_5, int *VAR_6, pathname_t *VAR_7)
{
 zfsvfs_t *VAR_8 = FUNC_0(VAR_1);
 struct inode *VAR_9;
 znode_t *VAR_10;
 int VAR_11;

 FUNC_2(VAR_8);

 if (VAR_8->z_shares_dir == 0) {
  FUNC_3(VAR_8);
  return (FUNC_1(VAR_0));
 }

 if ((VAR_11 = FUNC_7(VAR_8, VAR_8->z_shares_dir, &VAR_10)) == 0) {
  VAR_11 = FUNC_6(FUNC_4(VAR_10), VAR_2, &VAR_9, 0, VAR_5, ((void*)0), ((void*)0));
  FUNC_5(FUNC_4(VAR_10));
 }

 FUNC_3(VAR_8);

 return (VAR_11);
}
