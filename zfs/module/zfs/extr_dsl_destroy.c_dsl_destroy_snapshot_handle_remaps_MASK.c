
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {int dp_obsolete_bpobj; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_15__ {int ds_remap_deadlist; int ds_remap_deadlist_lock; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_16__ {int ds_prev_snap_txg; } ;
struct TYPE_13__ {TYPE_2__* dd_pool; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 TYPE_8__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,scalar_t__,int *) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(dsl_dataset_t *VAR_0, dsl_dataset_t *VAR_1,
    dmu_tx_t *VAR_2)
{
 dsl_pool_t *VAR_3 = VAR_0->ds_dir->dd_pool;


 if (FUNC_6(VAR_1)) {
  if (!FUNC_1(&VAR_3->dp_obsolete_bpobj))
   FUNC_9(VAR_3, VAR_2);

  FUNC_8(&VAR_1->ds_remap_deadlist,
      &VAR_3->dp_obsolete_bpobj,
      FUNC_5(VAR_0)->ds_prev_snap_txg, VAR_2);
 }


 if (FUNC_6(VAR_0)) {
  uint64_t VAR_4 =
      FUNC_4(VAR_0);
  FUNC_0(VAR_4 != 0);

  FUNC_10(&VAR_1->ds_remap_deadlist_lock);
  if (!FUNC_6(VAR_1))
   FUNC_2(VAR_1, VAR_2);
  FUNC_11(&VAR_1->ds_remap_deadlist_lock);

  FUNC_7(&VAR_1->ds_remap_deadlist,
      VAR_4, VAR_2);
  FUNC_3(VAR_0, VAR_2);
 }
}
