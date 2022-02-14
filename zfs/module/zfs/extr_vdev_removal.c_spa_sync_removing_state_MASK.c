
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int spa_removing_phys; TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
typedef int dmu_tx_t ;
struct TYPE_4__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int,int *,int *) ;

__attribute__((used)) static void
FUNC_2(spa_t *VAR_2, dmu_tx_t *VAR_3)
{
 FUNC_0(FUNC_1(VAR_2->spa_dsl_pool->dp_meta_objset,
     VAR_0,
     VAR_1, sizeof (uint64_t),
     sizeof (VAR_2->spa_removing_phys) / sizeof (uint64_t),
     &VAR_2->spa_removing_phys, VAR_3));
}
