
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int * dp_origin_snap; int dp_root_dir; int dp_config_rwlock; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {int ds_prev_snap_obj; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_1__*,int **) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9(dsl_pool_t *VAR_4, dmu_tx_t *VAR_5)
{
 uint64_t VAR_6;
 dsl_dataset_t *VAR_7;

 FUNC_0(FUNC_2(VAR_5));
 FUNC_0(VAR_4->dp_origin_snap == ((void*)0));
 FUNC_0(FUNC_8(&VAR_4->dp_config_rwlock, VAR_2));


 VAR_6 = FUNC_3(VAR_4->dp_root_dir, VAR_1,
     ((void*)0), 0, VAR_3, ((void*)0), VAR_5);
 FUNC_1(FUNC_4(VAR_4, VAR_6, VAR_0, &VAR_7));
 FUNC_7(VAR_7, VAR_1, VAR_5);
 FUNC_1(FUNC_4(VAR_4, FUNC_5(VAR_7)->ds_prev_snap_obj,
     VAR_4, &VAR_4->dp_origin_snap));
 FUNC_6(VAR_7, VAR_0);
}
