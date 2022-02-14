
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_3__ {int * tx_pool; } ;
typedef TYPE_1__ dmu_tx_t ;


 int FUNC_0 (int ) ;

dsl_pool_t *
FUNC_1(dmu_tx_t *VAR_0)
{
 FUNC_0(VAR_0->tx_pool != ((void*)0));
 return (VAR_0->tx_pool);
}
