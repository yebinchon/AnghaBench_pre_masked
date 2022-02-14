
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_11__ {int ds_remap_deadlist; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(dsl_dataset_t *VAR_0,
    dsl_dataset_t *VAR_1, dmu_tx_t *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 dsl_pool_t *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(FUNC_7(VAR_5));

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_2(VAR_1);

 if (VAR_3 != 0) {
  FUNC_5(&VAR_0->ds_remap_deadlist);
  FUNC_4(VAR_0, VAR_2);
 }
 if (VAR_4 != 0) {
  FUNC_5(&VAR_1->ds_remap_deadlist);
  FUNC_4(VAR_1, VAR_2);
 }

 if (VAR_3 != 0) {
  FUNC_3(VAR_1,
      VAR_3, VAR_2);
  FUNC_6(&VAR_1->ds_remap_deadlist,
      VAR_5->dp_meta_objset, VAR_3);
 }
 if (VAR_4 != 0) {
  FUNC_3(VAR_0,
      VAR_4, VAR_2);
  FUNC_6(&VAR_0->ds_remap_deadlist,
      VAR_5->dp_meta_objset, VAR_4);
 }
}
