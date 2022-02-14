
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zsda_name; } ;
typedef TYPE_1__ zvol_set_prop_int_arg_t ;
typedef int dsl_pool_t ;
typedef int dsl_dir_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int **,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, dmu_tx_t *VAR_2)
{
 zvol_set_prop_int_arg_t *VAR_3 = VAR_1;
 dsl_pool_t *VAR_4 = FUNC_0(VAR_2);
 dsl_dir_t *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3->zsda_name, VAR_0, &VAR_5, ((void*)0));
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_2(VAR_5, VAR_0);

 return (VAR_6);
}
