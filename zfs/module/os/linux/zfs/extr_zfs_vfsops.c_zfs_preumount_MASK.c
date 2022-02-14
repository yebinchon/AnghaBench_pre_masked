
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct super_block {TYPE_1__* s_fs_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(struct super_block *VAR_0)
{
 zfsvfs_t *VAR_1 = VAR_0->s_fs_info;


 if (VAR_1) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_0->s_fs_info);
  FUNC_2(FUNC_1(
      FUNC_0(VAR_1->z_os)), 0);
  FUNC_2(FUNC_1(
      FUNC_0(VAR_1->z_os)), 0);
 }
}
