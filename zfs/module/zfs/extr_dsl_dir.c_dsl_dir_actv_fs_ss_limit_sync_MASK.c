
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int spa_t ;
typedef int dsl_pool_t ;
struct TYPE_5__ {int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*,int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, dmu_tx_t *VAR_3)
{
 char *VAR_4 = (char *)VAR_2;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_3);
 dsl_dataset_t *VAR_6;
 spa_t *VAR_7;

 FUNC_0(FUNC_3(VAR_5, VAR_4, VAR_0, &VAR_6));

 VAR_7 = FUNC_2(VAR_6);

 if (!FUNC_7(VAR_7, VAR_1)) {







  FUNC_6(VAR_7, VAR_1, VAR_3);
 }






 FUNC_5(VAR_6->ds_dir, VAR_3);

 FUNC_4(VAR_6, VAR_0);
}
