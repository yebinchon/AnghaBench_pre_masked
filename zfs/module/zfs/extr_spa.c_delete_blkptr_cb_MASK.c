
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_6__ {TYPE_1__* tx_pool; int tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;
typedef int blkptr_t ;
struct TYPE_5__ {int dp_free_dir; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int ,int const*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1, const blkptr_t *VAR_2, dmu_tx_t *VAR_3)
{
 spa_t *VAR_4 = VAR_1;
 FUNC_4(VAR_4, VAR_3->tx_txg, VAR_2);
 FUNC_3(VAR_3->tx_pool->dp_free_dir, VAR_0,
     -FUNC_2(VAR_4, VAR_2),
     -FUNC_0(VAR_2), -FUNC_1(VAR_2), VAR_3);
 return (0);
}
