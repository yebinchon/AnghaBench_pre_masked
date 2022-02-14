
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct inode {int dummy; } ;
typedef int pathname_t ;
typedef int cred_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_5 (TYPE_1__*,scalar_t__,int *,int *) ;

int
FUNC_6(struct inode *VAR_4, char *VAR_5, struct inode **VAR_6,
    int VAR_7, cred_t *VAR_8, int *VAR_9, pathname_t *VAR_10)
{
 zfsvfs_t *VAR_11 = FUNC_0(VAR_4);
 uint64_t VAR_12;
 int VAR_13;

 FUNC_2(VAR_11);

 VAR_13 = FUNC_4(VAR_11->z_os, VAR_5, &VAR_12);
 if (VAR_13) {
  FUNC_3(VAR_11);
  return (VAR_13);
 }

 *VAR_6 = FUNC_5(VAR_11, VAR_1 - VAR_12,
     &VAR_3, &VAR_2);
 if (*VAR_6 == ((void*)0))
  VAR_13 = FUNC_1(VAR_0);

 FUNC_3(VAR_11);

 return (VAR_13);
}
