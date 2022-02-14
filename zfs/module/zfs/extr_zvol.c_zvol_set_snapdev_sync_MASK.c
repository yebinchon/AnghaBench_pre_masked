
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * zsda_tx; int zsda_value; int zsda_source; int zsda_name; } ;
typedef TYPE_1__ zvol_set_prop_int_arg_t ;
typedef int dsl_pool_t ;
struct TYPE_7__ {int dd_object; } ;
typedef TYPE_2__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int **) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,TYPE_2__**,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_9(void *VAR_4, dmu_tx_t *VAR_5)
{
 zvol_set_prop_int_arg_t *VAR_6 = VAR_4;
 dsl_pool_t *VAR_7 = FUNC_2(VAR_5);
 dsl_dir_t *VAR_8;
 dsl_dataset_t *VAR_9;
 int VAR_10;

 FUNC_0(FUNC_5(VAR_7, VAR_6->zsda_name, VAR_1, &VAR_8, ((void*)0)));
 VAR_6->zsda_tx = VAR_5;

 VAR_10 = FUNC_3(VAR_7, VAR_6->zsda_name, VAR_1, &VAR_9);
 if (VAR_10 == 0) {
  FUNC_7(VAR_9, FUNC_8(VAR_2),
      VAR_6->zsda_source, sizeof (VAR_6->zsda_value), 1,
      &VAR_6->zsda_value, VAR_6->zsda_tx);
  FUNC_4(VAR_9, VAR_1);
 }
 FUNC_1(VAR_7, VAR_8->dd_object, VAR_3,
     VAR_6, VAR_0);

 FUNC_6(VAR_8, VAR_1);
}
