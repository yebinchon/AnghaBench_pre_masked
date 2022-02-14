
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct process_old_arg {int pio; int uncomp; int comp; int used; TYPE_12__* ds_prev; int after_branch_point; TYPE_12__* ds; } ;
struct TYPE_20__ {int dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_21__ {int tx_txg; } ;
typedef TYPE_3__ dmu_tx_t ;
typedef int boolean_t ;
struct TYPE_22__ {scalar_t__ blk_birth; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_19__ {TYPE_2__* dd_pool; } ;
struct TYPE_18__ {int ds_deadlist; TYPE_1__* ds_dir; } ;
struct TYPE_17__ {scalar_t__ ds_prev_snap_txg; int ds_unique_bytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 int FUNC_3 (TYPE_4__ const*) ;
 scalar_t__ FUNC_4 (int ,TYPE_4__ const*) ;
 TYPE_11__* FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (int *,TYPE_4__ const*,int ,TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_2__*,int ,TYPE_4__ const*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_0, const blkptr_t *VAR_1, boolean_t VAR_2, dmu_tx_t *VAR_3)
{
 struct process_old_arg *VAR_4 = VAR_0;
 dsl_pool_t *VAR_5 = VAR_4->ds->ds_dir->dd_pool;

 FUNC_0(!FUNC_3(VAR_1));

 if (VAR_1->blk_birth <= FUNC_5(VAR_4->ds)->ds_prev_snap_txg) {
  FUNC_6(&VAR_4->ds->ds_deadlist, VAR_1, VAR_2, VAR_3);
  if (VAR_4->ds_prev && !VAR_4->after_branch_point &&
      VAR_1->blk_birth >
      FUNC_5(VAR_4->ds_prev)->ds_prev_snap_txg) {
   FUNC_5(VAR_4->ds_prev)->ds_unique_bytes +=
       FUNC_4(VAR_5->dp_spa, VAR_1);
  }
 } else {
  VAR_4->used += FUNC_4(VAR_5->dp_spa, VAR_1);
  VAR_4->comp += FUNC_1(VAR_1);
  VAR_4->uncomp += FUNC_2(VAR_1);
  FUNC_7(VAR_4->pio, VAR_5, VAR_3->tx_txg, VAR_1);
 }
 return (0);
}
