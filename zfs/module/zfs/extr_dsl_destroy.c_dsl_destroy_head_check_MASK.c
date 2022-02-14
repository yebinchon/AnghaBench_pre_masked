
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dsl_pool_t ;
struct TYPE_2__ {int ddha_name; } ;
typedef TYPE_1__ dsl_destroy_head_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(void *VAR_1, dmu_tx_t *VAR_2)
{
 dsl_destroy_head_arg_t *VAR_3 = VAR_1;
 dsl_pool_t *VAR_4 = FUNC_0(VAR_2);
 dsl_dataset_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3->ddha_name, VAR_0, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_3(VAR_5, 0);
 FUNC_2(VAR_5, VAR_0);
 return (VAR_6);
}
