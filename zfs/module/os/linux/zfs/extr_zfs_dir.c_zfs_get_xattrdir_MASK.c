
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
typedef int zfs_dirlock_t ;
struct TYPE_3__ {int va_mask; int va_mode; int * va_dentry; int va_gid; int va_uid; } ;
typedef TYPE_1__ vattr_t ;
struct inode {int dummy; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (int **,int *,char*,int **,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*,struct inode**,int *) ;

int
FUNC_8(znode_t *VAR_10, struct inode **VAR_11, cred_t *VAR_12, int VAR_13)
{
 zfsvfs_t *VAR_14 = FUNC_2(VAR_10);
 znode_t *VAR_15;
 zfs_dirlock_t *VAR_16;
 vattr_t VAR_17;
 int VAR_18;
top:
 VAR_18 = FUNC_3(&VAR_16, VAR_10, "", &VAR_15, VAR_9, ((void*)0), ((void*)0));
 if (VAR_18)
  return (VAR_18);

 if (VAR_15 != ((void*)0)) {
  *VAR_11 = FUNC_1(VAR_15);
  FUNC_4(VAR_16);
  return (0);
 }

 if (!(VAR_13 & VAR_3)) {
  FUNC_4(VAR_16);
  return (FUNC_0(VAR_4));
 }

 if (FUNC_6(VAR_14)) {
  FUNC_4(VAR_16);
  return (FUNC_0(VAR_6));
 }
 VAR_17.va_mask = VAR_1 | VAR_2 | VAR_0;
 VAR_17.va_mode = VAR_7 | VAR_8 | 0777;
 FUNC_5(VAR_10, VAR_12, &VAR_17.va_uid, &VAR_17.va_gid);

 VAR_17.va_dentry = ((void*)0);
 VAR_18 = FUNC_7(VAR_10, &VAR_17, VAR_11, VAR_12);
 FUNC_4(VAR_16);

 if (VAR_18 == VAR_5) {

  goto top;
 }

 return (VAR_18);
}
