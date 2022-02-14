
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sls_txg; } ;
typedef TYPE_1__ spa_log_sm_t ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const spa_log_sm_t *VAR_2 = VAR_0;
 const spa_log_sm_t *VAR_3 = VAR_1;

 return (FUNC_0(VAR_2->sls_txg, VAR_3->sls_txg));
}
