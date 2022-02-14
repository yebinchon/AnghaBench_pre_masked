
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_17__ {TYPE_6__* ds; int * spa; } ;
typedef TYPE_3__ try_condense_arg_t ;
typedef int spa_t ;
struct TYPE_18__ {int dd_livelist; int dd_pending_frees; int dd_pending_allocs; TYPE_1__* dd_pool; } ;
typedef TYPE_4__ dsl_dir_t ;
struct TYPE_22__ {TYPE_2__* bpo_phys; } ;
struct TYPE_19__ {TYPE_8__ dle_bpobj; } ;
typedef TYPE_5__ dsl_deadlist_entry_t ;
struct TYPE_20__ {TYPE_4__* ds_dir; } ;
typedef TYPE_6__ dsl_dataset_t ;
struct TYPE_21__ {scalar_t__ tx_txg; } ;
typedef TYPE_7__ dmu_tx_t ;
typedef TYPE_8__ bpobj_t ;
struct TYPE_16__ {scalar_t__ bpo_num_blkptrs; scalar_t__ bpo_num_freed; } ;
struct TYPE_15__ {int * dp_spa; } ;


 int FUNC_0 (int *,int ,int *,TYPE_7__*) ;
 int FUNC_1 (int *,scalar_t__,TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 TYPE_5__* FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(dsl_dataset_t *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_dir_t *VAR_6 = VAR_4->ds_dir;
 spa_t *VAR_7 = VAR_4->ds_dir->dd_pool->dp_spa;
 dsl_deadlist_entry_t *VAR_8 = FUNC_3(&VAR_6->dd_livelist);


 if (VAR_8 == ((void*)0)) {

  FUNC_1(&VAR_6->dd_livelist,
      VAR_5->tx_txg - 1, VAR_5);
 } else if (FUNC_4(VAR_7) == 1) {







  bpobj_t VAR_9 = VAR_8->dle_bpobj;
  uint64_t VAR_10 = VAR_9.bpo_phys->bpo_num_blkptrs;
  uint64_t VAR_11 = VAR_9.bpo_phys->bpo_num_freed;
  uint64_t VAR_12 = VAR_10 - VAR_11;
  if (VAR_12 > VAR_3) {
   FUNC_1(&VAR_6->dd_livelist,
       VAR_5->tx_txg - 1, VAR_5);
  }
 }


 FUNC_0(&VAR_6->dd_pending_allocs,
     VAR_0, &VAR_6->dd_livelist, VAR_5);
 FUNC_0(&VAR_6->dd_pending_frees,
     VAR_1, &VAR_6->dd_livelist, VAR_5);


 try_condense_arg_t VAR_13 = {
     .spa = VAR_7,
     .ds = VAR_4
 };
 FUNC_2(&VAR_6->dd_livelist, VAR_2,
     &VAR_13);
}
