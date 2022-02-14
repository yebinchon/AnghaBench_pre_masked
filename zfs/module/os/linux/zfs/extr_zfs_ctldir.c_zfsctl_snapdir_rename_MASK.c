
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
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,char*,int ,int *) ;
 int FUNC_6 (char*,char*,char*,int ) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int VAR_8 ;
 int FUNC_12 (char*,char*,int *) ;
 int VAR_9 ;
 int FUNC_13 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_14 (char*,char*) ;

int
FUNC_15(struct inode *VAR_10, char *VAR_11,
    struct inode *VAR_12, char *VAR_13, cred_t *VAR_14, int VAR_15)
{
 zfsvfs_t *VAR_16 = FUNC_0(VAR_10);
 char *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 int VAR_21;

 if (!VAR_8)
  return (FUNC_1(VAR_1));

 FUNC_2(VAR_16);

 VAR_17 = FUNC_7(VAR_7, VAR_4);
 VAR_18 = FUNC_7(VAR_7, VAR_4);
 VAR_19 = FUNC_7(VAR_7, VAR_4);
 VAR_20 = FUNC_7(VAR_7, VAR_4);

 if (VAR_16->z_case == VAR_6) {
  VAR_21 = FUNC_5(VAR_16->z_os, VAR_11, VAR_19,
      VAR_7, ((void*)0));
  if (VAR_21 == 0) {
   VAR_11 = VAR_19;
  } else if (VAR_21 != VAR_3) {
   goto out;
  }
 }

 FUNC_4(VAR_16->z_os, VAR_20);

 VAR_21 = FUNC_13(FUNC_0(VAR_10), VAR_11,
     VAR_7, VAR_18);
 if (VAR_21 == 0)
  VAR_21 = FUNC_13(FUNC_0(VAR_12), VAR_13,
      VAR_7, VAR_17);
 if (VAR_21 == 0)
  VAR_21 = FUNC_12(VAR_18, VAR_17, VAR_14);
 if (VAR_21 != 0)
  goto out;




 if (VAR_10 != VAR_12) {
  VAR_21 = FUNC_1(VAR_2);
  goto out;
 }




 if (FUNC_11(VAR_11, VAR_13) == 0) {
  VAR_21 = 0;
  goto out;
 }

 FUNC_9(&VAR_9, VAR_5);

 VAR_21 = FUNC_6(VAR_20, VAR_11, VAR_13, VAR_0);
 if (VAR_21 == 0)
  (void) FUNC_14(VAR_11, VAR_13);

 FUNC_10(&VAR_9);
out:
 FUNC_8(VAR_18, VAR_7);
 FUNC_8(VAR_17, VAR_7);
 FUNC_8(VAR_19, VAR_7);
 FUNC_8(VAR_20, VAR_7);

 FUNC_3(VAR_16);

 return (VAR_21);
}
