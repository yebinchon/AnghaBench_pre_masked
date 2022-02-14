
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {void* sls_txg; void* sls_sm_obj; } ;
typedef TYPE_1__ spa_log_sm_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static spa_log_sm_t *
FUNC_1(uint64_t VAR_1, uint64_t VAR_2)
{
 spa_log_sm_t *VAR_3 = FUNC_0(sizeof (*VAR_3), VAR_0);
 VAR_3->sls_sm_obj = VAR_1;
 VAR_3->sls_txg = VAR_2;
 return (VAR_3);
}
