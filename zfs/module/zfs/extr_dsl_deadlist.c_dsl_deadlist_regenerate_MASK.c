
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int dsl_pool_t ;
struct TYPE_6__ {scalar_t__ dl_oldfmt; int member_0; } ;
typedef TYPE_1__ dsl_deadlist_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {int ds_prev_snap_obj; int ds_prev_snap_txg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int **) ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(objset_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 dsl_deadlist_t VAR_5 = { 0 };
 dsl_pool_t *VAR_6 = FUNC_1(VAR_1);

 FUNC_7(&VAR_5, VAR_1, VAR_2);
 if (VAR_5.dl_oldfmt) {
  FUNC_6(&VAR_5);
  return;
 }

 while (VAR_3 != 0) {
  dsl_dataset_t *VAR_7;
  FUNC_0(FUNC_2(VAR_6, VAR_3, VAR_0, &VAR_7));
  FUNC_5(&VAR_5,
      FUNC_3(VAR_7)->ds_prev_snap_txg, VAR_4);
  VAR_3 = FUNC_3(VAR_7)->ds_prev_snap_obj;
  FUNC_4(VAR_7, VAR_0);
 }
 FUNC_6(&VAR_5);
}
