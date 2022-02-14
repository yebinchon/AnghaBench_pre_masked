
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_case; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,char*,int ,int *) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_10 (char*,int ) ;

int
FUNC_11(struct inode *VAR_9, char *VAR_10, cred_t *VAR_11, int VAR_12)
{
 zfsvfs_t *VAR_13 = FUNC_0(VAR_9);
 char *VAR_14, *VAR_15;
 int VAR_16;

 if (!VAR_8)
  return (FUNC_1(VAR_1));

 FUNC_2(VAR_13);

 VAR_14 = FUNC_6(VAR_7, VAR_4);
 VAR_15 = FUNC_6(VAR_7, VAR_4);

 if (VAR_13->z_case == VAR_6) {
  VAR_16 = FUNC_4(VAR_13->z_os, VAR_10, VAR_15,
      VAR_7, ((void*)0));
  if (VAR_16 == 0) {
   VAR_10 = VAR_15;
  } else if (VAR_16 != VAR_3) {
   goto out;
  }
 }

 VAR_16 = FUNC_9(FUNC_0(VAR_9), VAR_10,
     VAR_7, VAR_14);
 if (VAR_16 == 0)
  VAR_16 = FUNC_8(VAR_14, VAR_11);
 if (VAR_16 != 0)
  goto out;

 VAR_16 = FUNC_10(VAR_14, VAR_5);
 if ((VAR_16 == 0) || (VAR_16 == VAR_2))
  VAR_16 = FUNC_5(VAR_14, VAR_0);
out:
 FUNC_7(VAR_14, VAR_7);
 FUNC_7(VAR_15, VAR_7);

 FUNC_3(VAR_13);

 return (VAR_16);
}
