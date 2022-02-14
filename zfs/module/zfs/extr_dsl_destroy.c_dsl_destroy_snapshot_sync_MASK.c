
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_6__ {char* ddsa_name; int ddsa_defer; } ;
typedef TYPE_2__ dsl_destroy_snapshot_arg_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,char const*,int ) ;

void
FUNC_6(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_destroy_snapshot_arg_t *VAR_5 = VAR_3;
 const char *VAR_6 = VAR_5->ddsa_name;
 boolean_t VAR_7 = VAR_5->ddsa_defer;

 dsl_pool_t *VAR_8 = FUNC_1(VAR_4);
 dsl_dataset_t *VAR_9;

 int VAR_10 = FUNC_2(VAR_8, VAR_6, VAR_2, &VAR_9);
 if (VAR_10 == VAR_1)
  return;
 FUNC_0(VAR_10);
 FUNC_4(VAR_9, VAR_7, VAR_4);
 FUNC_5(VAR_8->dp_spa, VAR_6, VAR_0);
 FUNC_3(VAR_9, VAR_2);
}
