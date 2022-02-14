
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_6__ {TYPE_5__* spa_dsl_pool; int spa_meta_objset; int spa_first_txg; int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_7__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_5__**) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(spa_t *VAR_2)
{
 int VAR_3 = 0;
 vdev_t *VAR_4 = VAR_2->spa_root_vdev;

 VAR_3 = FUNC_0(VAR_2, VAR_2->spa_first_txg, &VAR_2->spa_dsl_pool);
 if (VAR_3 != 0) {
  FUNC_1(VAR_2, "unable to open rootbp in dsl_pool_init "
      "[error=%d]", VAR_3);
  return (FUNC_2(VAR_4, VAR_1, VAR_0));
 }
 VAR_2->spa_meta_objset = VAR_2->spa_dsl_pool->dp_meta_objset;

 return (0);
}
