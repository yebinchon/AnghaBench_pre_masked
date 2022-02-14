
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct super_block {TYPE_1__* s_fs_info; } ;
typedef int objset_t ;



__attribute__((used)) static int
FUNC_0(struct super_block *VAR_0, void *VAR_1)
{
 zfsvfs_t *VAR_2 = VAR_0->s_fs_info;
 objset_t *VAR_3 = VAR_1;

 if (VAR_2 == ((void*)0))
  return (0);

 return (VAR_3 == VAR_2->z_os);
}
