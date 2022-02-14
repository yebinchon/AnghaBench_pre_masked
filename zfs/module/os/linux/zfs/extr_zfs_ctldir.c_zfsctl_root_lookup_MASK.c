
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct inode {TYPE_2__* i_sb; } ;
typedef int pathname_t ;
typedef int cred_t ;
struct TYPE_4__ {TYPE_1__* s_root; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int * FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 struct inode* FUNC_5 (int *,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_6(struct inode *VAR_9, char *VAR_10, struct inode **VAR_11,
    int VAR_12, cred_t *VAR_13, int *VAR_14, pathname_t *VAR_15)
{
 zfsvfs_t *VAR_16 = FUNC_0(VAR_9);
 int VAR_17 = 0;

 FUNC_2(VAR_16);

 if (FUNC_4(VAR_10, "..") == 0) {
  *VAR_11 = VAR_9->i_sb->s_root->d_inode;
 } else if (FUNC_4(VAR_10, VAR_4) == 0) {
  *VAR_11 = FUNC_5(VAR_16, VAR_2,
      &VAR_6, &VAR_8);
 } else if (FUNC_4(VAR_10, VAR_3) == 0) {
  *VAR_11 = FUNC_5(VAR_16, VAR_1,
      &VAR_5, &VAR_7);
 } else {
  *VAR_11 = ((void*)0);
 }

 if (*VAR_11 == ((void*)0))
  VAR_17 = FUNC_1(VAR_0);

 FUNC_3(VAR_16);

 return (VAR_17);
}
