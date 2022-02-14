
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int vattr_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,int *,int *) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (struct inode*,char*,struct inode**,int ,int *,int *,int *) ;

int
FUNC_9(struct inode *VAR_5, char *VAR_6, vattr_t *VAR_7,
    struct inode **VAR_8, cred_t *VAR_9, int VAR_10)
{
 zfsvfs_t *VAR_11 = FUNC_0(VAR_5);
 char *VAR_12;
 int VAR_13;

 if (!VAR_4)
  return (FUNC_1(VAR_0));

 VAR_12 = FUNC_4(VAR_3, VAR_2);

 if (FUNC_6(VAR_6, ((void*)0), ((void*)0)) != 0) {
  VAR_13 = FUNC_1(VAR_1);
  goto out;
 }

 FUNC_2(VAR_11->z_os, VAR_12);

 VAR_13 = FUNC_7(VAR_12, VAR_9);
 if (VAR_13 != 0)
  goto out;

 if (VAR_13 == 0) {
  VAR_13 = FUNC_3(VAR_12, VAR_6);
  if (VAR_13 != 0)
   goto out;

  VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_8,
      0, VAR_9, ((void*)0), ((void*)0));
 }
out:
 FUNC_5(VAR_12, VAR_3);

 return (VAR_13);
}
