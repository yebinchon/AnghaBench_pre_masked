
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {int ddha_name; } ;
typedef TYPE_2__ dsl_destroy_head_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int ) ;

void
FUNC_6(void *VAR_2, dmu_tx_t *VAR_3)
{
 dsl_destroy_head_arg_t *VAR_4 = VAR_2;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);
 dsl_dataset_t *VAR_6;

 FUNC_0(FUNC_2(VAR_5, VAR_4->ddha_name, VAR_1, &VAR_6));
 FUNC_4(VAR_6, VAR_3);
 FUNC_5(VAR_5->dp_spa, VAR_4->ddha_name, VAR_0);
 FUNC_3(VAR_6, VAR_1);
}
