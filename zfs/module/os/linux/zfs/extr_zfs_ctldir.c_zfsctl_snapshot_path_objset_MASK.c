
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* z_vfs; int * z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int fstrans_cookie_t ;
typedef int boolean_t ;
struct TYPE_4__ {char* vfs_mntpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(zfsvfs_t *VAR_4, uint64_t VAR_5,
    int VAR_6, char *VAR_7)
{
 objset_t *VAR_8 = VAR_4->z_os;
 fstrans_cookie_t VAR_9;
 char *VAR_10;
 boolean_t VAR_11;
 uint64_t VAR_12, VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_4->z_vfs->vfs_mntpoint == ((void*)0))
  return (FUNC_0(VAR_0));

 VAR_9 = FUNC_8();
 VAR_10 = FUNC_5(VAR_3, VAR_2);

 while (VAR_14 == 0) {
  FUNC_3(FUNC_1(VAR_8), VAR_1);
  VAR_14 = FUNC_2(VAR_4->z_os,
      VAR_3, VAR_10, &VAR_12, &VAR_13,
      &VAR_11);
  FUNC_4(FUNC_1(VAR_8), VAR_1);
  if (VAR_14)
   goto out;

  if (VAR_12 == VAR_5)
   break;
 }

 FUNC_7(VAR_7, VAR_6, "%s/.zfs/snapshot/%s",
     VAR_4->z_vfs->vfs_mntpoint, VAR_10);
out:
 FUNC_6(VAR_10, VAR_3);
 FUNC_9(VAR_9);

 return (VAR_14);
}
