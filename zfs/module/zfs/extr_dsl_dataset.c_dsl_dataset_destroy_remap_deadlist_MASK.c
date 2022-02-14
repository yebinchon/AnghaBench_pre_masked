
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_11__ {int dl_object; } ;
struct TYPE_10__ {TYPE_4__ ds_remap_deadlist; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {TYPE_1__* dd_pool; } ;
struct TYPE_8__ {int * dp_spa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(dsl_dataset_t *VAR_1, dmu_tx_t *VAR_2)
{
 uint64_t VAR_3;
 spa_t *VAR_4 = VAR_1->ds_dir->dd_pool->dp_spa;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_0(FUNC_2(VAR_1));

 VAR_3 = VAR_1->ds_remap_deadlist.dl_object;
 FUNC_4(&VAR_1->ds_remap_deadlist);
 FUNC_5(FUNC_7(VAR_4), VAR_3, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_6(VAR_4, VAR_0, VAR_2);
}
