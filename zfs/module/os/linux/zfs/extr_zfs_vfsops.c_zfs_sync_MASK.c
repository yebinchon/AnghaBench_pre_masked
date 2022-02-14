
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * z_log; int z_os; } ;
typedef TYPE_1__ zfsvfs_t ;
struct super_block {TYPE_1__* s_fs_info; } ;
struct TYPE_7__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int cred_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(struct super_block *VAR_0, int VAR_1, cred_t *VAR_2)
{
 zfsvfs_t *VAR_3 = VAR_0->s_fs_info;





 if (!VAR_1)
  return (0);

 if (VAR_3 != ((void*)0)) {



  dsl_pool_t *VAR_4;

  FUNC_0(VAR_3);
  VAR_4 = FUNC_2(VAR_3->z_os);





  if (FUNC_3(VAR_4->dp_spa)) {
   FUNC_1(VAR_3);
   return (0);
  }

  if (VAR_3->z_log != ((void*)0))
   FUNC_5(VAR_3->z_log, 0);

  FUNC_1(VAR_3);
 } else {





  FUNC_4();
 }

 return (0);
}
