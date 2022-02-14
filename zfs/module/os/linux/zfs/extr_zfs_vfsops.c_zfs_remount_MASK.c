
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* z_vfs; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_11__ {int mnt_data; } ;
typedef TYPE_2__ zfs_mnt_t ;
struct TYPE_12__ {TYPE_1__* vfs_data; } ;
typedef TYPE_3__ vfs_t ;
struct super_block {TYPE_1__* s_fs_info; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_3__**) ;
 int FUNC_9 (TYPE_3__*) ;

int
FUNC_10(struct super_block *VAR_2, int *VAR_3, zfs_mnt_t *VAR_4)
{
 zfsvfs_t *VAR_5 = VAR_2->s_fs_info;
 vfs_t *VAR_6;
 boolean_t VAR_7 = FUNC_0(VAR_5->z_os);
 int VAR_8;

 if ((VAR_7 || !FUNC_3(FUNC_2(VAR_5->z_os))) &&
     !(*VAR_3 & VAR_1)) {
  *VAR_3 |= VAR_1;
  return (VAR_0);
 }

 VAR_8 = FUNC_8(VAR_4->mnt_data, &VAR_6);
 if (VAR_8)
  return (VAR_8);

 if (!FUNC_5(VAR_5) && (*VAR_3 & VAR_1))
  FUNC_4(FUNC_1(VAR_5->z_os), 0);

 FUNC_7(VAR_5);
 FUNC_9(VAR_5->z_vfs);

 VAR_6->vfs_data = VAR_5;
 VAR_5->z_vfs = VAR_6;
 if (!VAR_7)
  (void) FUNC_6(VAR_6);

 return (VAR_8);
}
