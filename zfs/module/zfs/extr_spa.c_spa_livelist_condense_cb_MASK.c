
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zthr_t ;
typedef void* uint64_t ;
struct TYPE_14__ {TYPE_1__* ds; int syncing; TYPE_5__* next; TYPE_5__* first; } ;
struct TYPE_15__ {TYPE_2__ spa_to_condense; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_16__ {int to_keep; void* next_size; void* first_size; TYPE_3__* spa; } ;
typedef TYPE_4__ livelist_condense_arg_t ;
struct TYPE_17__ {int dle_bpobj; } ;
typedef TYPE_5__ dsl_deadlist_entry_t ;
typedef int dmu_tx_t ;
struct TYPE_18__ {int dp_mos_dir; } ;
struct TYPE_13__ {int ds_dbuf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,void**) ;
 int FUNC_12 (TYPE_6__*,int ,TYPE_4__*,int ,int ,int *) ;
 TYPE_4__* FUNC_13 (int,int ) ;
 int FUNC_14 (TYPE_4__*,int) ;
 TYPE_6__* FUNC_15 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;

void
FUNC_18(void *VAR_10, zthr_t *VAR_11)
{
 while (VAR_9 &&
     !(FUNC_16(VAR_11) || FUNC_17(VAR_11)))
  FUNC_4(1);

 spa_t *VAR_12 = VAR_10;
 dsl_deadlist_entry_t *VAR_13 = VAR_12->spa_to_condense.first;
 dsl_deadlist_entry_t *VAR_14 = VAR_12->spa_to_condense.next;
 uint64_t VAR_15, VAR_16;

 livelist_condense_arg_t *VAR_17 =
     FUNC_13(sizeof (livelist_condense_arg_t), VAR_2);
 FUNC_2(&VAR_17->to_keep);
 int VAR_18 = FUNC_11(&VAR_13->dle_bpobj, &VAR_17->to_keep, VAR_11,
     &VAR_15);
 if (VAR_18 == 0)
  VAR_18 = FUNC_11(&VAR_14->dle_bpobj, &VAR_17->to_keep,
      VAR_11, &VAR_16);

 if (VAR_18 == 0) {
  while (VAR_7 &&
      !(FUNC_16(VAR_11) || FUNC_17(VAR_11)))
   FUNC_4(1);

  dmu_tx_t *VAR_19 = FUNC_8(FUNC_15(VAR_12)->dp_mos_dir);
  FUNC_10(VAR_19);
  FUNC_9(VAR_19, 1);
  VAR_18 = FUNC_6(VAR_19, VAR_4 | VAR_3);
  if (VAR_18 == 0) {




   VAR_12->spa_to_condense.syncing = VAR_0;
   VAR_17->spa = VAR_12;
   VAR_17->first_size = VAR_15;
   VAR_17->next_size = VAR_16;
   FUNC_12(FUNC_15(VAR_12),
       VAR_6, VAR_17, 0,
       VAR_5, VAR_19);
   FUNC_7(VAR_19);
   return;
  }
 }






 FUNC_0(VAR_18 != 0);
 FUNC_1(&VAR_17->to_keep);
 FUNC_3(&VAR_17->to_keep);
 FUNC_14(VAR_17, sizeof (livelist_condense_arg_t));
 FUNC_5(VAR_12->spa_to_condense.ds->ds_dbuf, VAR_12);
 VAR_12->spa_to_condense.ds = ((void*)0);
 if (VAR_18 == VAR_1)
  VAR_8++;
}
