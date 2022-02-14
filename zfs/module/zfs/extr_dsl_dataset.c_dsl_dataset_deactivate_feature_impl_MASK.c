
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef size_t spa_feature_t ;
typedef int objset_t ;
struct TYPE_5__ {int ** ds_feature; int ds_object; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {int * dp_meta_objset; int * dp_spa; } ;
struct TYPE_6__ {int fi_flags; int fi_guid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (int *,int ,int ,int *) ;

void
FUNC_5(dsl_dataset_t *VAR_2, spa_feature_t VAR_3,
    dmu_tx_t *VAR_4)
{
 spa_t *VAR_5 = FUNC_2(VAR_4)->dp_spa;
 objset_t *VAR_6 = FUNC_2(VAR_4)->dp_meta_objset;
 uint64_t VAR_7 = VAR_2->ds_object;

 FUNC_0(VAR_1[VAR_3].fi_flags & VAR_0);

 FUNC_1(FUNC_4(VAR_6, VAR_7, VAR_1[VAR_3].fi_guid, VAR_4));
 FUNC_3(VAR_5, VAR_3, VAR_4);
 VAR_2->ds_feature[VAR_3] = ((void*)0);
}
